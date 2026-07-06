#include <proto/exec.h>
#include <proto/dos.h>
#include <stdio.h>
#include <string.h>
#include <openssl/evp.h>
#include <openssl/crypto.h>
#include <openssl/bio.h>
#include <openssl/err.h>

struct Library *SocketBase;
struct Library *AmiSSLBase;

int main(int argc, char *argv[])
{
    printf("OpenSSL Static Test\n");

    OPENSSL_init_crypto(0, NULL);
    printf("OPENSSL_init_crypto OK\n");

    EVP_MD_CTX *mdctx = EVP_MD_CTX_new();
    if (!mdctx) {
        printf("EVP_MD_CTX_new failed\n");
        return 1;
    }
    printf("EVP_MD_CTX_new OK\n");

    EVP_DigestInit_ex(mdctx, EVP_md5(), NULL);
    EVP_DigestUpdate(mdctx, "test", 4);
    unsigned char md[16];
    EVP_DigestFinal_ex(mdctx, md, NULL);
    EVP_MD_CTX_free(mdctx);

    char md_str[33];
    for (int i = 0; i < 16; i++)
        sprintf(md_str + i*2, "%02x", md[i]);
    md_str[32] = '\0';
    printf("MD5('test') = %s\n", md_str);

    BIO *bio = BIO_new(BIO_s_mem());
    if (bio) {
        BIO_puts(bio, "Hello AmiSSL!");
        long len = BIO_ctrl_pending(bio);
        char buf[64];
        BIO_read(bio, buf, len);
        buf[len] = '\0';
        printf("BIO: %s\n", buf);
        BIO_free(bio);
    }
    printf("Done.\n");
    return 0;
}
