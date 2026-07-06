#include <proto/exec.h>
#include <proto/dos.h>
#include <proto/amissl.h>
#include <amissl/amissl.h>
#include <libraries/amissl.h>

struct Library *AmiSSLBase, *AmiSSLExtBase, *SocketBase;

int main(void)
{
    Printf("[D1] Start\n");
    
    Printf("[D2] Opening bsdsocket.library...\n");
    SocketBase = OpenLibrary("bsdsocket.library", 4);
    Printf("[D3] SocketBase=%p\n", SocketBase);
    
    Printf("[D4] Opening amissl_v362.library...\n");
    AmiSSLBase = OpenLibrary("amissl_v362.library", 0);
    Printf("[D5] AmiSSLBase=%p\n", AmiSSLBase);
    if (!AmiSSLBase) { Printf("FAILED\n"); return 1; }
    AmiSSLExtBase = AmiSSLBase;
    
    Printf("[D6] InitAmiSSLA...\n");
    if (InitAmiSSLA(NULL) != 0) { Printf("InitAmiSSLA FAILED\n"); return 1; }
    Printf("[D7] InitAmiSSLA OK\n");
    
    Printf("[D8] TLS_client_method...\n");
    const SSL_METHOD *method = TLS_client_method();
    Printf("[D9] method=%p\n", method);
    
    Printf("[D10] SSL_CTX_new...\n");
    SSL_CTX *ctx = SSL_CTX_new(method);
    Printf("[D11] ctx=%p\n", ctx);
    if (!ctx) { Printf("SSL_CTX_new FAILED\n"); return 1; }
    
    Printf("[D12] SSL_new...\n");
    SSL *ssl = SSL_new(ctx);
    Printf("[D13] ssl=%p\n", ssl);
    if (!ssl) { Printf("SSL_new FAILED\n"); return 1; }
    
    Printf("[D14] SSL_free...\n");
    SSL_free(ssl);
    Printf("[D15] SSL_CTX_free...\n");
    SSL_CTX_free(ctx);
    Printf("[D16] CleanupAmiSSLA...\n");
    CleanupAmiSSLA(NULL);
    Printf("[D17] CloseLibrary...\n");
    CloseLibrary(AmiSSLBase);
    Printf("[D18] Done\n");
    return 0;
}
