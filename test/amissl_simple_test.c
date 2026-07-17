#include <proto/exec.h>
#include <proto/dos.h>
#include <proto/amissl.h>
#include <libraries/amissl.h>
#include <amissl/tags.h>
#include <openssl/ssl.h>

long __stack = 1024 * 1024;
struct Library *AmiSSLBase = NULL;

int main(void)
{
    LONG err;
    const SSL_METHOD *meth;
    SSL_CTX *ctx;
    struct Library *sb;

    Printf("[M1] Start\n");
    AmiSSLBase = OpenLibrary("amissl_v362.library", 0);
    Printf("[M2] v362=%p\n", AmiSSLBase);
    if(!AmiSSLBase) return 1;

    Printf("[M3] InitAmiSSLA...\n");
    err = InitAmiSSLA(NULL);
    Printf("[M4] InitAmiSSLA=%ld\n", err);
    if(err) return 1;

    Printf("[P1] OPENSSL_init_ssl(NO_LOAD_CONFIG)...\n");
    OPENSSL_init_ssl(OPENSSL_INIT_NO_LOAD_CONFIG, NULL);
    Printf("[P2] init done\n");

    Printf("[M5] TLS_client_method...\n");
    meth = TLS_client_method();
    Printf("[M6] TLS_client_method=%p\n", meth);
    if(!meth) return 1;

    Printf("[M7] SSL_CTX_new...\n");
    ctx = SSL_CTX_new(meth);
    Printf("[M8] SSL_CTX_new=%p\n", ctx);
    if(!ctx) return 1;

    Printf("[M9] SSL OK\n");

    Printf("[N1] Opening bsdsocket.library...\n");
    sb = OpenLibrary("bsdsocket.library", 4);
    Printf("[N2] bsdsocket=%p\n", sb);
    if (!sb) {
        Printf("[N3] FAILED: bsdsocket.library not available\n");
    } else {
        Printf("[N3] bsdsocket OK\n");
        CloseLibrary(sb);
    }
    Printf("[N4] Done\n");

    SSL_CTX_free(ctx);
    CleanupAmiSSLA(NULL);
    CloseLibrary(AmiSSLBase);
    return 0;
}
