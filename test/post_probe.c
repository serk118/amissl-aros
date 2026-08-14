#include <proto/exec.h>
#include <proto/dos.h>
#include <proto/amissl.h>
#include <amissl/amissl.h>
#include <libraries/amissl.h>
#include <amissl/tags.h>
#include <openssl/ssl.h>
#include <openssl/err.h>
#include <openssl/bio.h>
#ifndef OPENSSL_NO_SOCK
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#endif
#include <string.h>
#include <stdlib.h>

long __stack = 1024 * 1024;
struct Library *AmiSSLBase, *AmiSSLExtBase, *SocketBase;

int main(int argc, char **argv)
{
    const char *host = "api-free.deepl.com";
    const char *path = "/";
    SSL_CTX *ctx = NULL;
    BIO *web = NULL;
    char hostport[300], req[1024], buf[4096];
    const char *body = "text=Hello%20world&target_lang=DE";
    const char *key = "00000000-0000-0000-0000-000000000000:00";
    int i, r, rd, wr, spin, got = 0, spinlog = 0;
    int guard = 200;

    if (argc > 1) host = argv[1];
    if (argc > 2) path = argv[2];
    if (argc > 3) guard = atoi(argv[3]);

    Printf("[P1] host=%s path=%s guard=%d\n", host, path, guard);
    Flush(Output());

    if (!(SocketBase = OpenLibrary("bsdsocket.library", 4))) return 1;
    SetErrnoPtr(&errno, sizeof(errno));
    if (!(AmiSSLBase = OpenLibrary("amissl_v362.library", 0))) { CloseLibrary(SocketBase); return 1; }
    AmiSSLExtBase = NULL;
    { struct TagItem t[4];
      t[0].ti_Tag = AmiSSL_SocketBase; t[0].ti_Data = (IPTR)SocketBase;
      t[1].ti_Tag = AmiSSL_ErrNoPtr;   t[1].ti_Data = (IPTR)&errno;
      t[2].ti_Tag = AmiSSL_GetAmiSSLExtBase; t[2].ti_Data = (IPTR)&AmiSSLExtBase;
      t[3].ti_Tag = TAG_END;
      if (InitAmiSSLA(t) != 0) { Printf("[P2] InitAmiSSLA FAILED\n"); return 1; }
    }

    ctx = SSL_CTX_new(TLS_client_method());
    if (!ctx) { Printf("[P3] ctx NULL\n"); return 1; }
    web = BIO_new_ssl_connect(ctx);
    if (!web) { Printf("[P4] web NULL\n"); return 1; }

    snprintf(hostport, sizeof(hostport), "%s:443", host);
    BIO_ctrl(web, BIO_C_SET_CONNECT, 0, hostport);

    /* bounded DO_STATE_MACHINE loop (handshake) */
    for (i = 0; i < 500; i++) {
        r = BIO_ctrl(web, BIO_C_DO_STATE_MACHINE, 0, NULL);
        if (r == 1 || r == 0) break;
    }
    Printf("[P5] handshake DO_STATE_MACHINE iterations=%d r=%d\n", i, r);
    Flush(Output());
    if (r != 1) { Printf("[P5x] handshake failed\n"); goto drainx; }

    snprintf(req, sizeof(req),
        "POST %s HTTP/1.1\r\nHost: %s\r\n"
        "Content-Type: application/x-www-form-urlencoded\r\n"
        "Content-Length: %d\r\n"
        "Authorization: DeepL-Auth-Key %s\r\n"
        "Connection: close\r\n\r\n%s",
        path, host, (int)strlen(body), key, body);

    wr = BIO_write(web, req, (int)strlen(req));
    Printf("[P6] BIO_write=%d\n", wr);
    Flush(Output());
    if (wr <= 0) { Printf("[P7] write failed\n"); goto drainx; }

    spin = 0;
    while (got < 4096) {
        rd = BIO_read(web, buf + got, (int)sizeof(buf) - 1 - got);
        if (rd > 0) {
            if (spinlog < 25)
                Printf("[P8] BIO_read=%d total=%d\n", rd, got);
            if (spinlog < 25) spinlog++;
            got += rd;
        } else if (rd == 0) {
            Printf("[P9] BIO_read EOF total=%d spins=%d\n", got, spin);
            break;
        } else {
            spin++;
            if (spin <= 16)
                Printf("[P10] BIO_read<0 rd=%d guard-left=%d\n", rd, guard - spin);
            if (spin >= guard) {
                Printf("[P11] SPIN-EXHAUST punit: gave up after %d negative reads, got=%d bytes\n", spin, got);
                break;
            }
        }
        Flush(Output());
    }
    if (got > 0) {
        buf[got] = 0;
        Printf("[P20] BODY(%d):\n%.700s\n[P21]END\n", got, buf);
        Flush(Output());
    }
drainx:
    while (ERR_get_error() != 0) {}
    if (web) BIO_free_all(web);
    if (ctx) SSL_CTX_free(ctx);
    CleanupAmiSSLA(NULL);
    if (AmiSSLBase) CloseLibrary(AmiSSLBase);
    if (SocketBase) CloseLibrary(SocketBase);
    Printf("[P99] done got=%d spin=%d\n", got, spin);
    Flush(Output());
    return 0;
}
