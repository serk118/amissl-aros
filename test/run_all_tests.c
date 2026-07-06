#include <proto/exec.h>
#include <proto/dos.h>
#include <proto/amissl.h>
#include <proto/amisslmaster.h>
#include <libraries/amissl.h>
#include <libraries/amisslmaster.h>
#include <amissl/tags.h>
#include <openssl/ssl.h>
#include <openssl/crypto.h>
#include <openssl/err.h>
#include <openssl/evp.h>
#include <openssl/bio.h>

static void hex_encode(unsigned char *in, int len, char *out)
{
    static const char hex[] = "0123456789abcdef";
    int i;
    for (i = 0; i < len; i++) {
        out[i*2] = hex[(in[i] >> 4) & 0xf];
        out[i*2+1] = hex[in[i] & 0xf];
    }
    out[len*2] = '\0';
}

static int my_memcmp(const unsigned char *a, const unsigned char *b, int len)
{
    int i;
    for (i = 0; i < len; i++)
        if (a[i] != b[i]) return 1;
    return 0;
}

struct Library *AmiSSLBase = NULL;
struct Library *AmiSSLMasterBase = NULL;

static int test_simple_open(void)
{
    Printf("  [TEST] Simple OpenLibrary...\n");
    if (!AmiSSLBase) { Printf("  FAIL: AmiSSLBase not open\n"); return 1; }
    Printf("  OK: AmiSSLBase=%p\n", AmiSSLBase);
    return 0;
}

static int test_init_amissla(void)
{
    LONG err;
    Printf("  [TEST] InitAmiSSLA(NULL)...\n");
    err = InitAmiSSLA(NULL);
    Printf("  InitAmiSSLA=%ld\n", err);
    if (err) { Printf("  FAIL: InitAmiSSLA returned %ld\n", err); return 1; }
    Printf("  OK\n");
    return 0;
}

static int test_openssl_init(void)
{
    Printf("  [TEST] OPENSSL_init_ssl(NO_LOAD_CONFIG)...\n");
    if (!OPENSSL_init_ssl(OPENSSL_INIT_NO_LOAD_CONFIG, NULL)) {
        Printf("  FAIL: OPENSSL_init_ssl failed\n");
        return 1;
    }
    Printf("  OK\n");
    return 0;
}

static int test_tls_method(void)
{
    const SSL_METHOD *meth;
    Printf("  [TEST] TLS_client_method...\n");
    meth = TLS_client_method();
    if (!meth) { Printf("  FAIL: TLS_client_method returned NULL\n"); return 1; }
    Printf("  OK: method=%p\n", meth);
    return 0;
}

static int test_ssl_ctx(void)
{
    SSL_CTX *ctx;
    Printf("  [TEST] SSL_CTX_new...\n");
    ctx = SSL_CTX_new(TLS_client_method());
    if (!ctx) { Printf("  FAIL: SSL_CTX_new returned NULL\n"); return 1; }
    Printf("  OK: ctx=%p\n", ctx);
    SSL_CTX_free(ctx);
    return 0;
}

static int test_md5(void)
{
    EVP_MD_CTX *mdctx;
    unsigned char md[16];
    char md_str[33];
    Printf("  [TEST] EVP_MD5...\n");
    mdctx = EVP_MD_CTX_new();
    if (!mdctx) { Printf("  FAIL: EVP_MD_CTX_new failed\n"); return 1; }
    EVP_DigestInit_ex(mdctx, EVP_md5(), NULL);
    EVP_DigestUpdate(mdctx, "test", 4);
    EVP_DigestFinal_ex(mdctx, md, NULL);
    EVP_MD_CTX_free(mdctx);
    hex_encode(md, 16, md_str);
    Printf("  OK: MD5('test') = %s\n", md_str);
    return 0;
}

static int test_bio(void)
{
    BIO *bio;
    char buf[64];
    long len;
    Printf("  [TEST] BIO memory...\n");
    bio = BIO_new(BIO_s_mem());
    if (!bio) { Printf("  FAIL: BIO_new failed\n"); return 1; }
    BIO_puts(bio, "Hello AmiSSL!");
    len = BIO_ctrl_pending(bio);
    BIO_read(bio, buf, len);
    buf[len] = '\0';
    Printf("  OK: BIO says '%s' (len=%ld)\n", buf, len);
    BIO_free(bio);
    return 0;
}

static int test_sha256(void)
{
    EVP_MD_CTX *mdctx;
    unsigned char md[32];
    char md_str[65];
    Printf("  [TEST] EVP_SHA256...\n");
    mdctx = EVP_MD_CTX_new();
    if (!mdctx) { Printf("  FAIL: EVP_MD_CTX_new failed\n"); return 1; }
    EVP_DigestInit_ex(mdctx, EVP_sha256(), NULL);
    EVP_DigestUpdate(mdctx, "hello world", 11);
    EVP_DigestFinal_ex(mdctx, md, NULL);
    EVP_MD_CTX_free(mdctx);
    hex_encode(md, 32, md_str);
    Printf("  OK: SHA256('hello world') = %s\n", md_str);
    return 0;
}

static int test_aes_encrypt(void)
{
    EVP_CIPHER_CTX *ctx;
    unsigned char key[16] = "0123456789abcdef";
    unsigned char iv[16] = "1234567890abcdef";
    unsigned char plaintext[32] = "AmiSSL AES-128-CBC test data!";
    unsigned char ciphertext[48];
    unsigned char decrypted[48];
    int len, outlen;

    Printf("  [TEST] AES-128-CBC...\n");
    ctx = EVP_CIPHER_CTX_new();
    if (!ctx) { Printf("  FAIL: EVP_CIPHER_CTX_new failed\n"); return 1; }

    EVP_EncryptInit_ex(ctx, EVP_aes_128_cbc(), NULL, key, iv);
    EVP_EncryptUpdate(ctx, ciphertext, &len, plaintext, 32);
    outlen = len;
    EVP_EncryptFinal_ex(ctx, ciphertext + len, &len);
    outlen += len;
    EVP_CIPHER_CTX_free(ctx);
    Printf("  OK: Encrypted %d bytes\n", outlen);

    ctx = EVP_CIPHER_CTX_new();
    EVP_DecryptInit_ex(ctx, EVP_aes_128_cbc(), NULL, key, iv);
    EVP_DecryptUpdate(ctx, decrypted, &len, ciphertext, outlen);
    outlen = len;
    EVP_DecryptFinal_ex(ctx, decrypted + len, &len);
    outlen += len;
    EVP_CIPHER_CTX_free(ctx);
    decrypted[outlen] = '\0';

    if (my_memcmp(plaintext, decrypted, 32) == 0) {
        Printf("  OK: AES encrypt/decrypt roundtrip matched\n");
        return 0;
    }
    Printf("  FAIL: Data mismatch\n");
    return 1;
}

static int test_rand(void)
{
    unsigned char buf[16];
    Printf("  [TEST] RAND_bytes...\n");
    if (RAND_bytes(buf, 16) <= 0) {
        Printf("  FAIL: RAND_bytes failed\n");
        return 1;
    }
    Printf("  OK: 16 random bytes generated\n");
    return 0;
}

static int test_amisslmaster(void)
{
    Printf("  [TEST] amisslmaster.library...\n");
    AmiSSLMasterBase = OpenLibrary("amisslmaster.library", 0);
    if (!AmiSSLMasterBase) {
        Printf("  SKIP: amisslmaster.library not available\n");
        return 0;
    }
    Printf("  OK: AmiSSLMasterBase=%p\n", AmiSSLMasterBase);
    if (InitAmiSSLMaster(AMISSL_V097g, TRUE)) {
        Printf("  OK: InitAmiSSLMaster succeeded\n");
    } else {
        Printf("  FAIL: InitAmiSSLMaster failed\n");
        CloseLibrary(AmiSSLMasterBase);
        return 1;
    }
    CloseLibrary(AmiSSLMasterBase);
    AmiSSLMasterBase = NULL;
    return 0;
}

static int test_full_amissl_flow(void)
{
    LONG err;
    const SSL_METHOD *meth;
    SSL_CTX *ctx;
    SSL *ssl;

    Printf("  [TEST] Full AmiSSL flow (OpenLibrary + Init + SSL)...\n");

    if (!AmiSSLBase) { Printf("  FAIL: AmiSSLBase not open\n"); return 1; }
    Printf("  OpenLibrary OK\n");

    err = InitAmiSSLA(NULL);
    if (err) { Printf("  FAIL: InitAmiSSLA=%ld\n", err); return 1; }
    Printf("  InitAmiSSLA OK\n");

    if (!OPENSSL_init_ssl(OPENSSL_INIT_NO_LOAD_CONFIG, NULL)) {
        Printf("  FAIL: OPENSSL_init_ssl\n"); return 1;
    }
    Printf("  OPENSSL_init_ssl OK\n");

    meth = TLS_client_method();
    if (!meth) { Printf("  FAIL: TLS_client_method\n"); return 1; }
    Printf("  TLS_client_method OK\n");

    ctx = SSL_CTX_new(meth);
    if (!ctx) { Printf("  FAIL: SSL_CTX_new\n"); return 1; }
    Printf("  SSL_CTX_new OK\n");

    ssl = SSL_new(ctx);
    if (!ssl) { Printf("  FAIL: SSL_new\n"); SSL_CTX_free(ctx); return 1; }
    Printf("  SSL_new OK\n");

    SSL_free(ssl);
    SSL_CTX_free(ctx);
    Printf("  Full flow complete\n");
    return 0;
}

int main(void)
{
    int passed = 0, failed = 0, total = 0;
    int rc;

    Printf("\n============================================\n");
    Printf("  AmiSSL v5.27 AROS x86_64 - Full Test Suite\n");
    Printf("============================================\n\n");

    AmiSSLBase = OpenLibrary("amissl_v362.library", 0);
    if (!AmiSSLBase) {
        Printf("FATAL: Cannot open amissl_v362.library\n");
        return 1;
    }

    total++; rc = test_simple_open(); if (rc) failed++; else passed++;
    total++; rc = test_amisslmaster(); if (rc) failed++; else passed++;
    total++; rc = test_init_amissla(); if (rc) failed++; else passed++;
    total++; rc = test_openssl_init(); if (rc) failed++; else passed++;
    total++; rc = test_tls_method(); if (rc) failed++; else passed++;
    total++; rc = test_ssl_ctx(); if (rc) failed++; else passed++;
    total++; rc = test_md5(); if (rc) failed++; else passed++;
    total++; rc = test_sha256(); if (rc) failed++; else passed++;
    total++; rc = test_aes_encrypt(); if (rc) failed++; else passed++;
    total++; rc = test_bio(); if (rc) failed++; else passed++;
    total++; rc = test_rand(); if (rc) failed++; else passed++;
    total++; rc = test_full_amissl_flow(); if (rc) failed++; else passed++;

    CleanupAmiSSLA(NULL);
    CloseLibrary(AmiSSLBase);
    AmiSSLBase = NULL;

    Printf("\n============================================\n");
    Printf("  Results: %d/%d passed, %d failed\n", passed, total, failed);
    Printf("============================================\n");

    if (AmiSSLMasterBase) CloseLibrary(AmiSSLMasterBase);

    return failed;
}
