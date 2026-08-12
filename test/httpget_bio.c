#include <proto/exec.h>
#include <proto/dos.h>
#include <proto/amissl.h>
#include <amissl/amissl.h>
#include <libraries/amissl.h>
#include <amissl/tags.h>
#include <openssl/ssl.h>
#include <openssl/err.h>
#include <openssl/bio.h>
#include <openssl/x509.h>
#include <openssl/x509v3.h>
#if defined(__AROS__)
# include <proto/socket.h>
# include <netinet/in.h>
# include <sys/socket.h>
# include <netdb.h>
# include <errno.h>
#endif
#include <string.h>
#include <stdlib.h>

long __stack = 1024 * 1024;
struct Library *AmiSSLBase, *AmiSSLExtBase, *SocketBase;

/* bounded iteration counter shared with the DBG macros below */
static int spin_limit = 500;

static void do_cleanup(SSL_CTX *ctx, BIO *web)
{
    Printf("[CL1] BIO_free_all\n"); Flush(Output());
    if (web) BIO_free_all(web);
    Printf("[CL2] SSL_CTX_free\n"); Flush(Output());
    if (ctx) SSL_CTX_free(ctx);
    Printf("[CL3] CleanupAmiSSLA\n"); Flush(Output());
    CleanupAmiSSLA(NULL);
    Printf("[CL4] CloseLibrary AmiSSL\n"); Flush(Output());
    if (AmiSSLBase) CloseLibrary(AmiSSLBase);
    Printf("[CL5] CloseLibrary SocketBase\n"); Flush(Output());
    if (SocketBase) CloseLibrary(SocketBase);
    Printf("[CL6] done\n"); Flush(Output());
}

static void drain_errors(const char *tag)
{
    unsigned long e;
    int n = 0;
    Printf("%s:", tag);
    Flush(Output());
    while ((e = ERR_get_error()) != 0 && n++ < 16) {
        Printf(" %08lx", e);
        Flush(Output());
    }
    Printf("\n");
    Flush(Output());
}

int main(int argc, char **argv)
{
    const char *host = "api-free.deepl.com";
    const char *path = "/";
    SSL_CTX *ctx = NULL;
    BIO *web = NULL;
    char hostport[300];
    int i;
    int ok = 0;

    if (argc > 1)
        host = argv[1];
    if (argc > 2)
        path = argv[2];
    if (argc > 3)
        spin_limit = atoi(argv[3]);

    Printf("[B1] host=%s path=%s spin_limit=%d\n", host, path, spin_limit);
    Flush(Output());

    if (!(SocketBase = OpenLibrary("bsdsocket.library", 4))) return 1;
    SetErrnoPtr(&errno, sizeof(errno));
    if (!(AmiSSLBase = OpenLibrary("amissl_v362.library", 0))) {
        CloseLibrary(SocketBase);
        return 1;
    }
    AmiSSLExtBase = NULL;
    { struct TagItem t[4];
      t[0].ti_Tag = AmiSSL_SocketBase; t[0].ti_Data = (IPTR)SocketBase;
      t[1].ti_Tag = AmiSSL_ErrNoPtr;   t[1].ti_Data = (IPTR)&errno;
      t[2].ti_Tag = AmiSSL_GetAmiSSLExtBase; t[2].ti_Data = (IPTR)&AmiSSLExtBase;
      t[3].ti_Tag = TAG_END;
      if (InitAmiSSLA(t) != 0) {
          Printf("[B2] InitAmiSSLA FAILED\n");
          return 1;
      }
    }
    Printf("[B3] InitAmiSSLA ok\n");
    Flush(Output());

    ctx = SSL_CTX_new(TLS_client_method());
    if (ctx == NULL) {
        Printf("[B4] SSL_CTX_new NULL\n");
        drain_errors("[B4q]");
        do_cleanup(NULL, NULL);
        return 1;
    }
    Printf("[B5] ctx=%p\n", (void *)ctx);
    Flush(Output());

    /* Exact AmiTranslate path: BIO_new_ssl_connect + BIO_C_DO_STATE_MACHINE */
    web = BIO_new_ssl_connect(ctx);
    if (web == NULL) {
        Printf("[B6] BIO_new_ssl_connect NULL\n");
        drain_errors("[B6q]");
        do_cleanup(ctx, NULL);
        return 1;
    }
    Printf("[B7] web=%p\n", (void *)web);
    Flush(Output());

    snprintf(hostport, sizeof(hostport), "%s:443", host);
    if (BIO_set_conn_hostname(web, hostport) != 1) {
        Printf("[B8] BIO_set_conn_hostname failed\n");
        drain_errors("[B8q]");
        do_cleanup(ctx, web);
        return 1;
    }
    Printf("[B9] hostport=%s\n", hostport);
    Flush(Output());

    /* bounded state-machine loop: single call like FPC, but bounded + printed */
    for (i = 0; i < spin_limit; i++) {
        int r = BIO_ctrl(web, BIO_C_DO_STATE_MACHINE, 0, NULL);
        long retry = BIO_get_retry_flags(web);
        Printf("[B10] iter=%d r=%d retryflags=%08lx\n", i, r, retry);
        Flush(Output());
        if (r == 1)
            break;
        if (r == 0) {
            drain_errors("[B10q]");
            break;
        }
        /* r < 0: WANT_READ/WANT_WRITE/WANT_CONNECT -> FPC does NOT loop;
         * we bound it here only to expose a spin */
    }
    if (i >= spin_limit) {
        Printf("[B11] SPIN SUSPECT: state machine did %d iterations without success\n", i);
        Flush(Output());
    } else if (i > 0) {
        Printf("[B11] connected after %d iterations\n", i);
        Flush(Output());
    }

    {
        SSL *ssl = NULL;
        BIO_get_ssl(web, &ssl);
        Printf("[B12] ssl=%p\n", (void *)ssl);
        Flush(Output());
        if (ssl != NULL) {
            X509 *cert = SSL_get_peer_certificate(ssl);
            Printf("[B13] peer cert=%p\n", (void *)cert);
            Flush(Output());
            if (cert != NULL) {
                char *subj = X509_NAME_oneline(X509_get_subject_name(cert), NULL, 0);
                Printf("[B14] subject=%s\n", subj ? subj : "(null)");
                if (subj) OPENSSL_free(subj);
                X509_free(cert);
                Flush(Output());
            }
        }
    }

    /* send a request, bounded read */
    {
        char req[512];
        int rl = snprintf(req, sizeof(req),
            "GET %s HTTP/1.1\r\nHost: %s\r\nUser-Agent: AmiSSL/httpget_bio\r\n"
            "Accept: */*\r\nConnection: close\r\n\r\n", path, host);
        int wr = BIO_write(web, req, rl);
        Printf("[B15] BIO_write=%d\n", wr);
        Flush(Output());
        if (wr > 0) {
            char buf[4096];
            int rd = BIO_read(web, buf, sizeof(buf) - 1);
            Printf("[B16] BIO_read=%d\n", rd);
            Flush(Output());
            if (rd > 0) {
                buf[rd] = 0;
                Printf("[B17] first bytes: %.100s\n", buf);
                Flush(Output());
                ok = 1;
            }
        }
    }

    drain_errors("[B18q]");
    do_cleanup(ctx, web);
    Printf("[B19] %s\n", ok ? "SUCCESS" : "FAILED");
    Flush(Output());
    return ok ? 0 : 1;
}
