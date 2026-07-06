/* HTTPS via Linux syscalls for TCP + AmiSSL memory BIOs for TLS */
#include <proto/exec.h>
#include <proto/dos.h>
#include <dos/dos.h>
#include <proto/amissl.h>
#include <libraries/amissl.h>
#include <amissl/tags.h>
#include <openssl/ssl.h>
#include <openssl/bio.h>
#include <openssl/err.h>

#define SYS_socket 41
#define SYS_connect 42
#define SYS_write 1
#define SYS_read 0
#define SYS_close 3

static long syscall7(long n, long a1, long a2, long a3, long a4, long a5, long a6)
{
    long ret;
    register long r10 asm("r10") = a4;
    register long r8 asm("r8") = a5;
    register long r9 asm("r9") = a6;
    __asm__ __volatile__("syscall"
        : "=a"(ret)
        : "a"(n), "D"(a1), "S"(a2), "d"(a3), "r"(r10), "r"(r8), "r"(r9)
        : "rcx","r11","memory");
    return ret;
}
static long syscall(long n, long a1, long a2, long a3) { return syscall7(n,a1,a2,a3,0,0,0); }

struct Library *AmiSSLBase;

int main(void)
{
    unsigned char ip[4] = {49,13,59,190}; /* aminet.net */
    int fd, n;
    unsigned char buf[16384];
    BIO *rbio, *wbio;
    SSL_CTX *ctx;
    SSL *ssl;
    int ret;

    Printf("[H1] Start\n");
    AmiSSLBase=OpenLibrary("amissl_v362.library",0);
    if (!AmiSSLBase) { Printf("FAIL\n"); return 1; }
    InitAmiSSLA(NULL);
    OPENSSL_init_ssl(OPENSSL_INIT_NO_LOAD_CONFIG,NULL);

    Printf("[H2] IP=%d.%d.%d.%d\n",ip[0],ip[1],ip[2],ip[3]);

    /* TCP connect via Linux syscall */
    Printf("[H3] Connecting...\n");
    unsigned char raddr[16]={2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    raddr[2]=0x01; raddr[3]=0xbb; /* port 443 big-endian */
    raddr[4]=ip[0]; raddr[5]=ip[1]; raddr[6]=ip[2]; raddr[7]=ip[3];
    fd=(int)syscall(SYS_socket,2,1,0);
    if (fd<0) { Printf("SOCKET FAILED\n"); return 1; }
    ret=(int)syscall(SYS_connect,fd,(long)raddr,16);
    if (ret<0) { Printf("CONNECT FAILED errno=%d\n",-ret); return 1; }
    Printf("[H4] Connected fd=%d\n",fd);

    /* Create SSL context */
    ctx=SSL_CTX_new(TLS_client_method());
    if (!ctx) { Printf("CTX FAILED\n"); return 1; }
    Printf("[H5] CTX=%p\n",(void*)ctx);

    /* Create SSL with memory BIOs */
    ssl=SSL_new(ctx);
    if (!ssl) { Printf("SSL FAILED\n"); return 1; }
    Printf("[H6] SSL=%p\n",(void*)ssl);

    rbio=BIO_new(BIO_s_mem());
    wbio=BIO_new(BIO_s_mem());
    SSL_set_bio(ssl,rbio,wbio);
    SSL_set_connect_state(ssl);
    Printf("[H7] Memory BIOs set\n");

    SSL_set_tlsext_host_name(ssl,"aminet.net");
    Printf("[H8] Starting handshake...\n");
    {
        int done = 0, loop = 0;
        while (!done) {
            Printf("[L%d] SSL_do_handshake...\n", loop++);
            ret=SSL_do_handshake(ssl);
            Printf("[L%d] ret=%d\n", loop-1, ret);
            if (ret==1) { Printf("[H9] Handshake done!\n"); done=1; break; }
            int err=SSL_get_error(ssl,ret);
            Printf("[L%d] err=%d\n", loop-1, err);
            if (err==SSL_ERROR_WANT_WRITE) {
                const unsigned char *wdata;
                int wlen=BIO_get_mem_data(wbio,&wdata);
                Printf("[L%d] WANT_WRITE wlen=%d\n", loop-1, wlen);
                if (wlen>0) {
                    n=(int)syscall(SYS_write,fd,(long)wdata,wlen);
                    Printf("[L%d] wrote=%d\n", loop-1, n);
                    if (n<=0) { Printf("WRITE FAILED errno=%d\n",-n); return 1; }
                }
            } else if (err==SSL_ERROR_WANT_READ) {
                Printf("[L%d] WANT_READ reading...\n", loop-1);
                n=(int)syscall(SYS_read,fd,(long)buf,sizeof(buf));
                Printf("[L%d] read=%d\n", loop-1, n);
                if (n<0) { Printf("READ FAILED errno=%d\n",-n); return 1; }
                if (n==0) { Printf("SERVER CLOSED\n"); return 1; }
                BIO_write(rbio,buf,n);
            } else {
                Printf("Handshake error: %d\n",err);
                return 1;
            }
        }
    }

    Printf("[H10] Sending HTTP request...\n");
    {
        const char *req="GET / HTTP/1.0\r\nHost: aminet.net\r\nConnection: close\r\n\r\n";
        int rlen=0; while (req[rlen]) rlen++;
        SSL_write(ssl,req,rlen);
    }

    Printf("[H11] Reading response...\n");
    while ((ret=SSL_read(ssl,buf,sizeof(buf)))>0) {
        buf[ret]='\0';
        Printf("%s",(char*)buf);
    }
    Printf("[H12] Read complete (ret=%d)\n",ret);

    if (BIO_pending(wbio)>0) {
        const unsigned char *wdata;
        (void)BIO_get_mem_data(wbio,&wdata);
        int wlen=BIO_pending(wbio);
        syscall(SYS_write,fd,(long)wdata,wlen);
    }

    syscall(SYS_close,fd,0,0);
    SSL_free(ssl);
    SSL_CTX_free(ctx);
    CleanupAmiSSLA(NULL);
    CloseLibrary(AmiSSLBase);
    Printf("[H13] Done\n");
    return 0;
}
