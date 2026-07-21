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
#include <openssl/ec.h>
#include <openssl/obj_mac.h>
#include <openssl/bn.h>
#include <openssl/hmac.h>
#if defined(__AROS__)
# include <proto/socket.h>
# include <netinet/in.h>
# include <sys/socket.h>
# include <netdb.h>
# include <errno.h>
#endif

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

static int testnum;
#define TEST(name) do { Printf("--- T%d: %s ---\n", ++testnum, name); Flush(Output()); } while(0)
#define RESULT(fmt, ...) do { Printf("  " fmt "\n", ##__VA_ARGS__); Flush(Output()); } while(0)

static void t_rand(void)
{
    unsigned char buf[32];
    RESULT("RAND_bytes=%d", RAND_bytes(buf, 32));
    RESULT("RAND_priv_bytes=%d", RAND_priv_bytes(buf, 32));
}

static void t_evp_keygen(void)
{
    EVP_PKEY_CTX *ctx = EVP_PKEY_CTX_new_id(EVP_PKEY_EC, NULL);
    RESULT("EVP_PKEY_CTX_new_id(EC)=%p", ctx);
    if (ctx) EVP_PKEY_CTX_free(ctx);
}

static void t_ec_keygen(void)
{
    EC_KEY *ec = EC_KEY_new_ex(NULL, NULL);
    RESULT("EC_KEY_new_ex=%p", ec);
    if (ec) {
        EC_KEY_free(ec);
        Printf("  freed\n"); Flush(Output());
    }
}

static void t_digest(void)
{
    const char *names[] = {"sha256", "sha384", "sha1", NULL};
    for (int i = 0; names[i]; i++) {
        EVP_MD *md = (EVP_MD*)EVP_get_digestbyname(names[i]);
        RESULT("EVP_get_digestbyname(%s)=%p", names[i], md);
        if (!md) continue;
        EVP_MD_CTX *ctx = EVP_MD_CTX_new();
        int r = EVP_DigestInit_ex(ctx, md, NULL);
        unsigned char out[32]; unsigned int outl;
        RESULT("  Init=%d", r);
        r = EVP_DigestUpdate(ctx, "test", 4);
        RESULT("  Update=%d", r);
        r = EVP_DigestFinal_ex(ctx, out, &outl);
        RESULT("  Final=%d outl=%u", r, outl);
        EVP_MD_CTX_free(ctx);
    }
}

static void t_cipher(void)
{
    EVP_CIPHER *cipher = (EVP_CIPHER*)EVP_get_cipherbyname("aes-256-gcm");
    RESULT("EVP_get_cipherbyname(AES-256-GCM)=%p", cipher);
    if (!cipher) return;
    EVP_CIPHER_CTX *ctx = EVP_CIPHER_CTX_new();
    unsigned char key[32], iv[12];
    RAND_bytes(key, 32); RAND_bytes(iv, 12);
    int r = EVP_EncryptInit_ex(ctx, cipher, NULL, key, iv);
    RESULT("  EncryptInit=%d", r);
    unsigned char pt[16] = "hello world!!!!!", ct[32];
    int outl, tmpl;
    r = EVP_EncryptUpdate(ctx, ct, &outl, pt, 16);
    RESULT("  Update=%d outl=%d", r, outl);
    r = EVP_EncryptFinal_ex(ctx, ct + outl, &tmpl);
    RESULT("  Final=%d tmpl=%d", r, tmpl);
    EVP_CIPHER_CTX_free(ctx);
}

static void t_hmac(void)
{
    unsigned char key[16], out[32];
    RAND_bytes(key, 16);
    unsigned char *r = HMAC(EVP_sha256(), key, 16, (unsigned char*)"data", 4, out, NULL);
    RESULT("HMAC SHA256: r=%p", r);
}

static void t_ssl_objects(void)
{
    SSL_CTX *ctx = SSL_CTX_new(TLS_client_method());
    RESULT("SSL_CTX_new=%p", ctx);
    if (!ctx) return;
    SSL *ssl = SSL_new(ctx);
    RESULT("SSL_new=%p", ssl);
    if (ssl) SSL_free(ssl);
    SSL_CTX_free(ctx);
}

static void t_bn(void)
{
    BIGNUM *a = BN_new();
    BIGNUM *b = BN_new();
    BN_CTX *ctx = BN_CTX_new();
    RESULT("BN_new a=%p b=%p ctx=%p", a, b, ctx);
    if (a && b && ctx) {
        BN_set_word(a, 42);
        BN_set_word(b, 7);
        BIGNUM *r = BN_new();
        BN_add(r, a, b);
        RESULT("42+7=%s", BN_bn2dec(r));
        BN_mul(r, a, b, ctx);
        RESULT("42*7=%s", BN_bn2dec(r));
        BN_free(r);
    }
    BN_free(a); BN_free(b); BN_CTX_free(ctx);
}

int main(void)
{
    if (!(SocketBase = OpenLibrary("bsdsocket.library", 4))) return 1;
    SetErrnoPtr(&errno, sizeof(errno));
    if (!(AmiSSLBase = OpenLibrary("amissl_v362.library", 0))) return 1;
    AmiSSLExtBase = AmiSSLBase;
    { struct TagItem t[3]; t[0].ti_Tag = AmiSSL_SocketBase;
      t[0].ti_Data = (IPTR)SocketBase;
      t[1].ti_Tag = AmiSSL_ErrNoPtr;
      t[1].ti_Data = (IPTR)&errno;
      t[2].ti_Tag = TAG_END;
      InitAmiSSLA(t); }
    RAND_set_rand_method(&lcg_rand);
    RAND_seed(&lcg_state, sizeof(lcg_state));

    TEST("RAND_bytes / RAND_priv_bytes");          t_rand();
    TEST("EVP_PKEY_CTX_new_id(EC)");               t_evp_keygen();
    TEST("EC_KEY_new_ex");                         t_ec_keygen();
    TEST("EVP_Digest (provider)");                 t_digest();
    TEST("EVP_Cipher AES-256-GCM (provider)");     t_cipher();
    TEST("HMAC SHA256");                           t_hmac();
    TEST("SSL_CTX_new / SSL_new");                 t_ssl_objects();
    TEST("BIGNUM operations");                     t_bn();

    Printf("\n=== All %d tests done ===\n", testnum); Flush(Output());
    return 0;
}
