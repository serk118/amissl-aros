#include <proto/exec.h>
#include <proto/dos.h>
#include <string.h>

struct Library *SocketBase;

int main(void)
{
    BPTR out = Output();
    char md_str[33];
    int i;

    FWrite(out, "Static OpenSSL Test\n", 20, 1);

    /* Test MD5 */
    {
        unsigned char md[16];
        void *mdctx;
        extern void *EVP_MD_CTX_new(void);
        extern int EVP_DigestInit_ex(void *, const void *, void *);
        extern int EVP_DigestUpdate(void *, const void *, size_t);
        extern int EVP_DigestFinal_ex(void *, unsigned char *, unsigned int *);
        extern const void *EVP_md5(void);
        extern void EVP_MD_CTX_free(void *);
        extern void *OPENSSL_init_crypto(unsigned long, const void *);

        OPENSSL_init_crypto(0, NULL);
        
        mdctx = EVP_MD_CTX_new();
        if (mdctx) {
            EVP_DigestInit_ex(mdctx, EVP_md5(), NULL);
            EVP_DigestUpdate(mdctx, "test", 4);
            EVP_DigestFinal_ex(mdctx, md, NULL);
            EVP_MD_CTX_free(mdctx);
            for (i = 0; i < 16; i++)
                sprintf(md_str + i*2, "%02x", md[i]);
            md_str[32] = '\0';
            FPrintf(out, "MD5('test') = %s\n", md_str);
        } else
            FWrite(out, "EVP_MD_CTX_new failed\n", 22, 1);
    }

    FWrite(out, "Done.\n", 6, 1);
    return 0;
}
