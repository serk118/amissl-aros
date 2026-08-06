#include <proto/exec.h>
#include <proto/dos.h>
#include <proto/amissl.h>
#include <amissl/amissl.h>
#include <libraries/amissl.h>
#include <amissl/tags.h>
#include <openssl/rand.h>
#include <openssl/err.h>
#include <openssl/evp.h>
#include <openssl/ssl.h>
#if defined(__AROS__)
# include <proto/socket.h>
# include <netinet/in.h>
# include <sys/socket.h>
# include <netdb.h>
# include <errno.h>
#endif
#include <string.h>
#include <stdlib.h>
#include <strings.h>

static unsigned int lcg_state = 0xdeadbeef;
static int lcg_bytes(unsigned char *buf, int num)
{
    int i;
    for (i = 0; i < num; i++) {
        lcg_state = lcg_state * 1103515245 + 12345;
        buf[i] = (unsigned char)(lcg_state >> 16);
    }
    return 1;
}
static int lcg_status(void) { return 1; }
static int lcg_seed(const void *buf, int num)
{
    if (num >= (int)sizeof(unsigned int))
        lcg_state ^= *(const unsigned int *)buf;
    return 1;
}
static RAND_METHOD lcg_rand = {
    .seed = lcg_seed, .bytes = lcg_bytes, .cleanup = NULL,
    .add = NULL, .pseudorand = lcg_bytes, .status = lcg_status
};
long __stack = 1024 * 1024;
struct Library *AmiSSLBase, *AmiSSLExtBase, *SocketBase;

#define RECVBUF 32768
static unsigned char recvbuf[RECVBUF];
static size_t recv_used = 0;
static size_t recv_off = 0;

static int fill_more(SSL *ssl)
{
    int r = SSL_read(ssl, recvbuf, RECVBUF);
    if (r <= 0) {
        if (r == 0)
            return 0;
        Printf("SSL_read error=%d\n", SSL_get_error(ssl, r));
        return -1;
    }
    recv_used = (size_t)r;
    recv_off = 0;
    return r;
}

/* returns number of bytes appended, or -1 on error/EOF */
static int read_some(SSL *ssl, unsigned char *out, size_t want)
{
    size_t got = 0;
    while (got < want) {
        if (recv_off >= recv_used) {
            int r = fill_more(ssl);
            if (r <= 0)
                return (r == 0) ? (int)got : -1;
        }
        size_t n = want - got;
        if (n > recv_used - recv_off)
            n = recv_used - recv_off;
        memcpy(out + got, recvbuf + recv_off, n);
        recv_off += n;
        got += n;
    }
    return (int)got;
}

static int read_line(SSL *ssl, unsigned char *line, size_t maxlen)
{
    size_t n = 0;
    while (n < maxlen - 1) {
        if (recv_off >= recv_used) {
            int r = fill_more(ssl);
            if (r <= 0)
                return (r == 0) ? 0 : -1;
        }
        line[n] = recvbuf[recv_off++];
        n++;
        if (line[n - 1] == '\n') {
            if (n >= 2 && line[n - 2] == '\r')
                n -= 2;
            line[n] = 0;
            return (int)n;
        }
    }
    line[n] = 0;
    return (int)n;
}

static long parse_clen(const unsigned char *hdr)
{
    const char *p = (const char *)hdr;
    while (*p) {
        while (*p == '\n') p++;
        if (strncasecmp(p, "Content-Length:", 15) == 0) {
            p += 15;
            while (*p == ' ' || *p == '\t') p++;
            return strtol(p, NULL, 10);
        }
        p = strchr(p, '\n');
        if (!p) break;
        p++;
    }
    return -1;
}

static int chunked(const unsigned char *hdr)
{
    const char *p = (const char *)hdr;
    while (*p) {
        while (*p == '\n') p++;
        if (strncasecmp(p, "Transfer-Encoding:", 18) == 0) {
            p += 18;
            while (*p == ' ' || *p == '\t') p++;
            if (strncasecmp(p, "chunked", 7) == 0)
                return 1;
        }
        p = strchr(p, '\n');
        if (!p) break;
        p++;
    }
    return 0;
}

static int parse_status(const unsigned char *hdr, char *ver, int *code, char *reason)
{
    const char *p = (const char *)hdr;
    int i = 0;
    while (p[i] && p[i] != ' ' && p[i] != '\n' && i < 15) i++;
    if (i >= 15 || i == 0) return 0;
    memcpy(ver, p, (size_t)i);
    ver[i] = 0;
    p += i;
    while (*p == ' ') p++;
    *code = 0;
    for (i = 0; i < 3 && p[i] >= '0' && p[i] <= '9'; i++)
        *code = *code * 10 + (p[i] - '0');
    if (i != 3) return 0;
    p += i;
    while (*p == ' ') p++;
    i = 0;
    while (p[i] && p[i] != '\r' && p[i] != '\n' && i < 63) i++;
    memcpy(reason, p, (size_t)i);
    reason[i] = 0;
    return 1;
}

static void parse_url(const char *url, char *host, int *port, char *path, size_t pathsz)
{
    const char *u = url;
    size_t hlen = 0, plen = 0;
    *port = 443;
    if (strncasecmp(u, "https://", 8) == 0)
        u += 8;
    while (u[hlen] && u[hlen] != '/' && hlen < 255) {
        if (u[hlen] == ':') {
            *port = atoi(u + hlen + 1);
            while (u[hlen] && u[hlen] != '/') hlen++;
            break;
        }
        host[hlen] = u[hlen];
        hlen++;
    }
    host[hlen] = 0;
    if (u[hlen] == '/') {
        const char *p = u + hlen;
        plen = strlen(p);
        if (plen > pathsz - 1) plen = pathsz - 1;
        memcpy(path, p, plen);
    }
    if (plen == 0) { path[0] = '/'; plen = 1; }
    path[plen] = 0;
}

static int http_connect(SSL_CTX *ctx, const char *host, int port, int *fd, SSL **ssl)
{
    struct hostent *he = gethostbyname(host);
    if (!he) {
        Printf("DNS fail errno=%d\n", errno);
        return -1;
    }
    *fd = socket(AF_INET, SOCK_STREAM, 0);
    {
        struct sockaddr_in sa;
        sa.sin_family = AF_INET;
        sa.sin_port = htons((unsigned short)port);
        sa.sin_addr = *(struct in_addr *)he->h_addr;
        int cr = connect(*fd, (struct sockaddr *)&sa, sizeof(sa));
        Printf("connect=%d errno=%d\n", cr, errno);
        Flush(Output());
        if (cr != 0) {
            CloseSocket(*fd);
            return -1;
        }
    }
    Printf("Connected\n");
    Flush(Output());
    recv_used = 0;
    recv_off = 0;
    *ssl = SSL_new(ctx);
    SSL_set_fd(*ssl, *fd);
    SSL_set_connect_state(*ssl);
    SSL_set_tlsext_host_name(*ssl, host);
    {
        int r = SSL_connect(*ssl);
        unsigned long e = ERR_peek_error();
        int se = SSL_get_error(*ssl, r);
        Printf("r=%d err=%d peek=0x%08lx\n", r, se, e);
        Flush(Output());
        Printf("LIB=%d R=0x%08x\n", ERR_GET_LIB(e), ERR_GET_REASON(e));
        Flush(Output());
        while ((e = ERR_get_error()) != 0) {
            Printf("ERR=%s\n", ERR_error_string(e, NULL));
            Flush(Output());
        }
        if (r != 1) {
            SSL_free(*ssl);
            *ssl = NULL;
            CloseSocket(*fd);
            return -1;
        }
        Printf("CIPHER=%s\n", SSL_get_cipher_name(*ssl));
        Flush(Output());
    }
    return 0;
}

static int progress_last = 0;
static long progress_last_kb = -1;

static void progress_reset(void)
{
    progress_last = 0;
    progress_last_kb = -1;
}

static void progress_pct(long total, long sofar)
{
    int pct, filled, i;
    if (total <= 0)
        return;
    pct = (int)(sofar * 100 / total);
    if (pct < progress_last + 10)
        return;
    progress_last = (pct / 10) * 10;
    if (progress_last == 0)
        return;
    filled = progress_last / 10;
    Printf("[");
    for (i = 0; i < 10; i++)
        Printf(i < filled ? "=" : ".");
    Printf("%3d%%]\n", progress_last);
    Flush(Output());
}

static void progress_bytes(long sofar)
{
    long kb = sofar / 1024;
    if (kb >= progress_last_kb + 64) {
        progress_last_kb = kb;
        Printf("[DL %ld KB]\n", kb);
        Flush(Output());
    }
}

static void do_cleanup(SSL_CTX *ctx, SSL *ssl, int fd)
{
    if (ssl) SSL_free(ssl);
    if (fd >= 0) CloseSocket(fd);
    if (ctx) SSL_CTX_free(ctx);
    CleanupAmiSSLA(NULL);
    if (AmiSSLBase) CloseLibrary(AmiSSLBase);
    if (SocketBase) CloseLibrary(SocketBase);
}

int main(int argc, char **argv)
{
    SSL_CTX *ctx;
    SSL *ssl = NULL;
    int fd = -1;
    const char *url = "https://arosarchives.os4depot.net/share/video/convert/ffmpegvideotool.x86_64-aros-v11.zip";
    const char *outpath = "ffmpegvideotool.x86_64-aros-v11.zip";
    char cururl[1024];
    char host[256], path[512], loc[1024];
    int port;
    int redirect = 0;

    if (argc > 1)
        url = argv[1];
    if (argc > 2)
        outpath = argv[2];
    strncpy(cururl, url, sizeof(cururl) - 1);
    cururl[sizeof(cururl) - 1] = 0;

    if (!(SocketBase = OpenLibrary("bsdsocket.library", 4))) return 1;
    SetErrnoPtr(&errno, sizeof(errno));
    if (!(AmiSSLBase = OpenLibrary("amissl_v362.library", 0))) return 1;
    AmiSSLExtBase = AmiSSLBase;
    { struct TagItem t[3]; t[0].ti_Tag = AmiSSL_SocketBase; t[0].ti_Data = (IPTR)SocketBase;
      t[1].ti_Tag = AmiSSL_ErrNoPtr; t[1].ti_Data = (IPTR)&errno; t[2].ti_Tag = TAG_END;
      InitAmiSSLA(t); }
    OSSL_PROVIDER_load(NULL, "default");
    RAND_set_rand_method(&lcg_rand); RAND_seed(&lcg_state, sizeof(lcg_state));
    EVP_add_digest(EVP_sha256()); EVP_add_digest(EVP_sha384());
    EVP_add_cipher(EVP_aes_256_gcm()); EVP_add_cipher(EVP_aes_128_gcm()); EVP_add_cipher(EVP_chacha20_poly1305());
    ctx = SSL_CTX_new(TLS_client_method());
    SSL_CTX_set_cipher_list(ctx, "ECDHE-ECDSA-AES128-GCM-SHA256:ECDHE-RSA-AES128-GCM-SHA256:AES128-GCM-SHA256");
    SSL_CTX_set_min_proto_version(ctx, TLS1_2_VERSION);
    SSL_CTX_set_max_proto_version(ctx, TLS1_2_VERSION);
    SSL_CTX_set1_groups_list(ctx, "P-256");
    SSL_CTX_set_max_cert_list(ctx, 1024 * 1024);

    Printf("OUT=%s\n", outpath);
    Flush(Output());

    for (redirect = 0; redirect < 10; redirect++) {
        int code = 0;
        BPTR out = NULL;
        long total = 0;
        unsigned char hdrbuf[16384];
        int ho = 0;
        char ver[16], reason[64];
        loc[0] = 0;

        if (redirect > 0)
            Printf("REDIRECT %d -> %s\n", redirect, cururl);
        Printf("URL=%s\n", cururl);
        Flush(Output());

        parse_url(cururl, host, &port, path, sizeof(path));
        Printf("HOST=%s PORT=%d PATH=%s\n", host, port, path);
        Flush(Output());

        if (http_connect(ctx, host, port, &fd, &ssl) != 0)
        { do_cleanup(ctx, ssl, fd); return 1; }

        {
            char req[1024];
            int rl = snprintf(req, sizeof(req),
                "GET %s HTTP/1.1\r\nHost: %s\r\nUser-Agent: AmiSSL/httpget_simple\r\n"
                "Accept: */*\r\nConnection: close\r\n\r\n", path, host);
            int wr = SSL_write(ssl, req, rl);
            Printf("REQSENT=%d\n", wr);
            Flush(Output());
            if (wr <= 0) { do_cleanup(ctx, ssl, fd); return 1; }
        }

        for (;;) {
            unsigned char ln[1024];
            int n = read_line(ssl, ln, sizeof(ln));
            if (n < 0) {
                Printf("Read error during headers\n");
                break;
            }
            if (ho == 0) {
                if (!parse_status(ln, ver, &code, reason)) {
                    Printf("Bad status line: %s\n", ln);
                    break;
                }
                Printf("STATUS=%d %s (%s)\n", code, reason, ver);
                Flush(Output());
                if (ho + n + 2 < (int)sizeof(hdrbuf)) {
                    ho += n;
                    memcpy(hdrbuf, ln, (size_t)n);
                    hdrbuf[ho++] = '\r';
                    hdrbuf[ho++] = '\n';
                }
                continue;
            }
            if (n == 0) /* end of headers */
                break;
            if (ho + n + 2 < (int)sizeof(hdrbuf)) {
                memcpy(hdrbuf + ho, ln, (size_t)n);
                ho += n;
                hdrbuf[ho++] = '\r';
                hdrbuf[ho++] = '\n';
            }
            if (strncasecmp((char *)ln, "Location:", 9) == 0) {
                char *lp = (char *)ln + 9;
                while (*lp == ' ' || *lp == '\t') lp++;
                strncpy(loc, lp, sizeof(loc) - 1);
                loc[sizeof(loc) - 1] = 0;
            }
        }
        hdrbuf[ho] = 0;

        if (code >= 300 && code < 400) {
            SSL_free(ssl); ssl = NULL;
            CloseSocket(fd); fd = -1;
            if (loc[0] == 0) {
                Printf("Redirect %d without Location\n", code);
                do_cleanup(ctx, NULL, -1);
                return 1;
            }
            Printf("LOCATION=%s\n", loc);
            Flush(Output());
            /* make absolute */
            if (strncasecmp(loc, "https://", 8) == 0) {
                strncpy(cururl, loc, sizeof(cururl) - 1);
            } else if (loc[0] == '/') {
                snprintf(cururl, sizeof(cururl), "https://%s%s", host, loc);
            } else {
                snprintf(cururl, sizeof(cururl), "https://%s/%s", host, loc);
            }
            cururl[sizeof(cururl) - 1] = 0;
            continue;
        }
        if (code < 200 || code >= 300 || ho == 0) {
            Printf("HTTP error %d, not downloading\n", code);
            do_cleanup(ctx, ssl, fd);
            return 1;
        }

        out = Open(outpath, MODE_NEWFILE);
        if (!out) {
            Printf("Cannot open %s for write (IoErr=%ld)\n", outpath, IoErr());
            do_cleanup(ctx, NULL, fd);
            return 1;
        }

        if (chunked(hdrbuf)) {
            Printf("TRANSFER=chunked\n");
            Flush(Output());
            progress_reset();
            for (;;) {
                unsigned char szline[64];
                int n = read_line(ssl, szline, sizeof(szline));
                if (n <= 0) break;
                long csz = strtol((const char *)szline, NULL, 16);
                if (csz <= 0) break;
                unsigned char tmp[8192];
                long left = csz;
                while (left > 0) {
                    int r = read_some(ssl, tmp, (size_t)(left > 8192 ? 8192 : left));
                    if (r <= 0) break;
                    Write(out, tmp, (LONG)r);
                    total += r;
                    left -= r;
                    progress_bytes(total);
                }
                read_line(ssl, szline, sizeof(szline));
                if (left != 0) break;
            }
        } else {
            long clen = parse_clen(hdrbuf);
            Printf("CLEN=%ld\n", clen);
            Flush(Output());
            progress_reset();
            unsigned char tmp[8192];
            for (;;) {
                if (clen >= 0 && total >= clen)
                    break;
                int want = 8192;
                if (clen >= 0 && (long)want > clen - total)
                    want = (int)(clen - total);
                int r = read_some(ssl, tmp, (size_t)want);
                if (r <= 0) break;
                Write(out, tmp, (LONG)r);
                total += r;
                progress_pct(clen, total);
            }
        }

        Close(out);
        Printf("DOWNLOADED=%ld bytes to %s\n", total, outpath);
        Printf("DONE\n");
        Flush(Output());

        do_cleanup(ctx, ssl, fd);
        return 0;
    }

    Printf("Too many redirects\n");
    do_cleanup(ctx, NULL, fd);
    return 1;
}
