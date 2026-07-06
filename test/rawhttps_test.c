/* Test using AmiSSL library functions only (no static OpenSSL) */
#include <proto/exec.h>
#include <proto/dos.h>
#include <proto/amissl.h>
#include <amissl/amissl.h>
#include <libraries/amissl.h>
#include <openssl/ssl.h>
#include <openssl/bio.h>
#include <openssl/evp.h>

struct Library *AmiSSLBase, *AmiSSLExtBase;

int main(void)
{
    Printf("[T1] Start\n");

    AmiSSLBase = OpenLibrary("amissl_v362.library", 0);
    if (!AmiSSLBase) { Printf("FAIL\n"); return 1; }
    AmiSSLExtBase = AmiSSLBase;
    InitAmiSSLA(NULL);
    OPENSSL_init_ssl(OPENSSL_INIT_NO_LOAD_CONFIG | OPENSSL_INIT_ADD_ALL_DIGESTS | OPENSSL_INIT_ADD_ALL_CIPHERS, NULL);

    SSL_CTX *ctx = SSL_CTX_new(TLS_client_method());
    Printf("[T2] CTX=%p\n", (void*)ctx);
    if (!ctx) return 1;

    SSL *ssl = SSL_new(ctx);
    Printf("[T3] SSL=%p\n", (void*)ssl);
    if (!ssl) { SSL_CTX_free(ctx); return 1; }

    BIO *rbio = BIO_new(BIO_s_mem());
    BIO *wbio = BIO_new(BIO_s_mem());
    Printf("[T4] rbio=%p wbio=%p\n", (void*)rbio, (void*)wbio);

    SSL_set_bio(ssl, rbio, wbio);
    SSL_set_connect_state(ssl);
    Printf("[T5] state set\n");

    EVP_MD_CTX *mdctx = EVP_MD_CTX_new();
    Printf("[T6] mdctx=%p\n", (void*)mdctx);
    if (mdctx) { EVP_MD_CTX_free(mdctx); Printf("[T6a] freed\n"); }

    Printf("[T7] calling SSL_do_handshake...\n");
    int ret = SSL_do_handshake(ssl);
    Printf("[T8] SSL_do_handshake=%d\n", ret);

    SSL_free(ssl);
    SSL_CTX_free(ctx);
    CleanupAmiSSLA(NULL);
    CloseLibrary(AmiSSLBase);
    Printf("[T9] Done\n");
    return 0;
}
