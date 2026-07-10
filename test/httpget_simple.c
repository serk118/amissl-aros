#include <proto/exec.h>
#include <proto/dos.h>
#include <proto/amissl.h>
#include <amissl/amissl.h>
#include <libraries/amissl.h>
#include <amissl/tags.h>
#include <utility/tagitem.h>
#if defined(__AROS__)
# include <proto/socket.h>
# include <netinet/in.h>
# include <sys/socket.h>
# include <netdb.h>
# include <errno.h>
#endif

long __stack = 1024 * 1024;
struct Library *AmiSSLBase, *AmiSSLExtBase, *SocketBase;

static void info_cb(const SSL *s, int where, int ret)
{
    (void)ret;
    if (where & SSL_CB_LOOP)
        Printf("  [HS] %s\n", SSL_state_string_long(s));
}

static int manual_tcp_connect(const char *host, int port)
{
    struct hostent *he = gethostbyname(host);
    if (!he) { Printf("gethostbyname FAILED\n"); return -1; }
    int fd = socket(AF_INET, SOCK_STREAM, 0);
    if (fd < 0) { Printf("socket FAILED\n"); return -1; }
    struct sockaddr_in sa;
    sa.sin_family = AF_INET;
    sa.sin_port = htons(port);
    sa.sin_addr = *(struct in_addr*)he->h_addr;
    if (connect(fd, (struct sockaddr *)&sa, sizeof(sa)) < 0) {
        Printf("connect FAILED errno=%d\n", errno); CloseSocket(fd); return -1;
    }
    return fd;
}

int main(int argc, char *argv[])
{
    SSL_CTX *ctx = NULL;
    SSL *ssl = NULL;
    int fd = -1;
    int ret = RETURN_ERROR;

    if (!(SocketBase = OpenLibrary("bsdsocket.library", 4))) {
        Printf("FAIL bsdsocket.library\n"); return 1;
    }
    SetErrnoPtr(&errno, sizeof(errno));

    if (!(AmiSSLBase = OpenLibrary("amissl_v362.library", 0))) {
        Printf("FAIL amissl\n"); goto cleanup;
    }
    AmiSSLExtBase = AmiSSLBase;

    {
        struct TagItem tags[3];
        tags[0].ti_Tag = AmiSSL_SocketBase;
        tags[0].ti_Data = (IPTR)SocketBase;
        tags[1].ti_Tag = AmiSSL_ErrNoPtr;
        tags[1].ti_Data = (IPTR)&errno;
        tags[2].ti_Tag = TAG_END;
        if (InitAmiSSLA(tags) != 0) { Printf("FAIL InitAmiSSLA\n"); goto cleanup; }
    }
    Printf("InitAmiSSLA OK\n");

    if (!(ctx = SSL_CTX_new(TLS_client_method()))) {
        Printf("FAIL SSL_CTX_new\n"); goto cleanup;
    }

    const char *host = "example.com";
    int port = 443;
    fd = manual_tcp_connect(host, port);
    if (fd < 0) { Printf("FAIL connect\n"); goto cleanup; }
    Printf("Connected fd=%d\n", fd);

    /* Test raw send/recv (was broken due to socket stubs) */
    {
        char req[] = "GET / HTTP/1.0\r\nHost: example.com\r\n\r\n";
        int w = send(fd, req, (int)sizeof(req) - 1, 0);
        Printf("raw send=%d errno=%d\n", w, errno);
        if (w > 0) {
            char buf[256];
            int r = recv(fd, buf, 255, 0);
            buf[r > 0 ? r : 0] = '\0';
            Printf("raw recv=%d first=%.50s\n", r, buf);
        }
    }
    /* Reconnect (raw test consumed the connection) */
    CloseSocket(fd);
    fd = manual_tcp_connect("example.com", 443);
    if (fd < 0) { Printf("FAIL reconnect\n"); goto cleanup; }
    Printf("reconnected fd=%d\n", fd);

    SSL_CTX_set_info_callback(ctx, [](const SSL *s, int where, int ret) {
        if (where & SSL_CB_LOOP)
            Printf("  [HS] %s\n", SSL_state_string_long(s));
    });

    if (!(ssl = SSL_new(ctx))) { Printf("FAIL SSL_new\n"); goto cleanup; }
    SSL_set_fd(ssl, fd);
    SSL_set_connect_state(ssl);
    Printf("SSL_connect...\n");

    {
        int r = SSL_connect(ssl);
        Printf("SSL_connect returned %d\n", r);
        if (r <= 0) {
            Printf("SSL_get_error=%d\n", SSL_get_error(ssl, r));
        } else {
            Printf("SSL handshake OK!\n");
        }
    }

    ret = RETURN_OK;
cleanup:
    if (ssl) { SSL_shutdown(ssl); SSL_free(ssl); }
    if (fd >= 0) CloseSocket(fd);
    if (ctx) SSL_CTX_free(ctx);
    if (AmiSSLBase) { CleanupAmiSSLA(NULL); CloseLibrary(AmiSSLBase); }
    if (SocketBase) CloseLibrary(SocketBase);
    Printf("Done ret=%d\n", ret);
    return ret;
}
