#include <proto/exec.h>
#include <proto/dos.h>
#include <proto/amissl.h>
#include <proto/amisslmaster.h>
#include <libraries/amissl.h>
#include <libraries/amisslmaster.h>
#include <amissl/amissl.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>

int main(void)
{
    printf("AmiSSL AutoInit Test\n");
    
    /* Using OpenAmiSSLTags with the autoinit library will handle everything */
    struct Library *AmiSSLBase = NULL;
    LONG err = OpenAmiSSLTags(AMISSL_CURRENT_VERSION,
                  AmiSSL_UsesOpenSSLStructs, TRUE,
                  AmiSSL_GetAmiSSLBase, &AmiSSLBase,
                  TAG_DONE);
    if (err != 0) {
        printf("OpenAmiSSLTags returned %ld\n", err);
        return 1;
    }
    printf("AmiSSL opened: %08lx\n", (IPTR)AmiSSLBase);
    printf("Version: %s\n", OpenSSL_version(OPENSSL_VERSION));

    SSL_CTX *ctx = SSL_CTX_new(TLS_client_method());
    if (ctx) {
        printf("SSL_CTX_new OK\n");
        SSL_CTX_free(ctx);
    }

    CloseAmiSSL();
    printf("Done.\n");
    return 0;
}
