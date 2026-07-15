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

int main(void)
{
    SSL_CTX *ctx; SSL *ssl; int fd;
    if (!(SocketBase = OpenLibrary("bsdsocket.library",4))) return 1;
    SetErrnoPtr(&errno,sizeof(errno));
    if (!(AmiSSLBase = OpenLibrary("amissl_v362.library",0))) return 1;
    AmiSSLExtBase = AmiSSLBase;
    { struct TagItem t[3]; t[0].ti_Tag=AmiSSL_SocketBase;t[0].ti_Data=(IPTR)SocketBase;
      t[1].ti_Tag=AmiSSL_ErrNoPtr;t[1].ti_Data=(IPTR)&errno;t[2].ti_Tag=TAG_END;
      InitAmiSSLA(t); }
    RAND_set_rand_method(&lcg_rand); RAND_seed(&lcg_state,sizeof(lcg_state));
    EVP_add_digest(EVP_sha256());EVP_add_digest(EVP_sha384());
    EVP_add_cipher(EVP_aes_256_gcm());EVP_add_cipher(EVP_aes_128_gcm());EVP_add_cipher(EVP_chacha20_poly1305());
    ctx=SSL_CTX_new(TLS_client_method());
    { struct hostent *he=gethostbyname("httpbin.org");
      fd=socket(AF_INET,SOCK_STREAM,0);
      struct sockaddr_in sa; sa.sin_family=AF_INET; sa.sin_port=htons(443);
      sa.sin_addr=*(struct in_addr*)he->h_addr;
      int cr = connect(fd,(struct sockaddr*)&sa,sizeof(sa));
      Printf("connect=%d errno=%d\n", cr, errno); Flush(Output()); }
    Printf("Connected\n"); Flush(Output());
    ssl=SSL_new(ctx); SSL_set_fd(ssl,fd); SSL_set_connect_state(ssl);
    { int r=SSL_connect(ssl);
      Printf("r=%d err=%d peek=0x%08lx\n",r,SSL_get_error(ssl,r),ERR_peek_error());
      unsigned long e; while((e=ERR_get_error())!=0) Printf("ERR=%s\n",ERR_error_string(e,NULL)); }
    SSL_free(ssl); SSL_CTX_free(ctx); CloseSocket(fd);
    return 0;
}
