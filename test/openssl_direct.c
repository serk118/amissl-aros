#include <proto/exec.h>
#include <proto/dos.h>
#include <stdio.h>
#include <string.h>
#include <openssl/evp.h>
#include <openssl/crypto.h>
#include <openssl/err.h>
#include <openssl/rand.h>
#include <openssl/bio.h>
#include <openssl/x509.h>
#include <openssl/pem.h>

struct Library *SocketBase;

int main(void)
{
    unsigned char md[16];
    char md_str[33];
    int i;
    BIO *bio;

    printf("Direct OpenSSL Test\n");

    OPENSSL_init_crypto(0, NULL);

    EVP_MD_CTX *mdctx = EVP_MD_CTX_new();
    if (!mdctx) {
        printf("EVP_MD_CTX_new failed\n");
        return 1;
    }
    EVP_DigestInit_ex(mdctx, EVP_md5(), NULL);
    EVP_DigestUpdate(mdctx, "test", 4);
    EVP_DigestFinal_ex(mdctx, md, NULL);
    EVP_MD_CTX_free(mdctx);
    for (i = 0; i < 16; i++)
        sprintf(md_str + i*2, "%02x", md[i]);
    md_str[32] = '\0';
    printf("MD5('test') = %s\n", md_str);

    bio = BIO_new(BIO_s_mem());
    if (bio) {
        BIO_puts(bio, "Hello from static OpenSSL!");
        long len = BIO_ctrl_pending(bio);
        char buf[64];
        BIO_read(bio, buf, len);
        buf[len] = '\0';
        printf("BIO: %s (len=%ld)\n", buf, len);
        BIO_free(bio);
    }

    printf("Done.\n");
    OPENSSL_cleanup();
    return 0;
}
