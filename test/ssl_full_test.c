#include <proto/exec.h>
#include <proto/dos.h>
#include <proto/amissl.h>
#include <libraries/amissl.h>
#include <amissl/tags.h>
#include <openssl/ssl.h>

struct Library *AmiSSLBase = NULL;

int main(void)
{
    LONG err;
    const SSL_METHOD *meth;
    SSL_CTX *ctx;
    SSL *ssl;
    STACK_OF(SSL_CIPHER) *ciphers;
    int i, n;

    Printf((CONST_STRPTR)"[S0] OpenLibrary...\n");
    AmiSSLBase = OpenLibrary((CONST_STRPTR)"amissl_v362.library", 0);
    if (!AmiSSLBase) { Printf((CONST_STRPTR)"FAIL\n"); return 1; }

    Printf((CONST_STRPTR)"[S1] InitAmiSSLA...\n");
    err = InitAmiSSLA(NULL);
    if (err) { Printf((CONST_STRPTR)"FAIL\n"); return 1; }

    Printf((CONST_STRPTR)"[S2] OPENSSL_init_ssl...\n");
    OPENSSL_init_ssl(OPENSSL_INIT_NO_LOAD_CONFIG, NULL);

    Printf((CONST_STRPTR)"[S3] TLS_client_method...\n");
    meth = TLS_client_method();
    if (!meth) { Printf((CONST_STRPTR)"FAIL\n"); return 1; }

    Printf((CONST_STRPTR)"[S4] SSL_CTX_new...\n");
    ctx = SSL_CTX_new(meth);
    if (!ctx) { Printf((CONST_STRPTR)"FAIL\n"); return 1; }

    {
        STACK_OF(SSL_CIPHER) *ctx_ciphers = SSL_CTX_get_ciphers(ctx);
        int cn = ctx_ciphers ? sk_SSL_CIPHER_num(ctx_ciphers) : -1;
        Printf((CONST_STRPTR)"[S4a] CTX ciphers=%d\n", cn);
    }

    Printf((CONST_STRPTR)"[S5] SSL_new...\n");
    ssl = SSL_new(ctx);
    if (!ssl) { Printf((CONST_STRPTR)"FAIL\n"); return 1; }

    Printf((CONST_STRPTR)"[S6] Setting TLS 1.2...\n");
    SSL_set_min_proto_version(ssl, TLS1_2_VERSION);
    SSL_set_max_proto_version(ssl, TLS1_2_VERSION);
    SSL_set_security_level(ssl, 0);

    Printf((CONST_STRPTR)"[S7] Supported ciphers:\n");
    ciphers = SSL_get1_supported_ciphers(ssl);
    n = ciphers ? sk_SSL_CIPHER_num(ciphers) : 0;
    Printf((CONST_STRPTR)"  count=%d\n", n);
    if (n < 0)
        Printf((CONST_STRPTR)"  (NULL - no cipher list)\n");
    if (n > 0) {
        for (i = 0; i < n && i < 5; i++) {
            const SSL_CIPHER *c = sk_SSL_CIPHER_value(ciphers, i);
            Printf((CONST_STRPTR)"  [%d] %s\n", i, SSL_CIPHER_get_name(c));
        }
    }
    sk_SSL_CIPHER_free(ciphers);

    Printf((CONST_STRPTR)"[ALL] Done\n");
    SSL_free(ssl);
    SSL_CTX_free(ctx);
    CleanupAmiSSLA(NULL);
    CloseLibrary(AmiSSLBase);
    return 0;
}
