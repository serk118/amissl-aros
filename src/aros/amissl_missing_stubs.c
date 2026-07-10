#include <exec/types.h>
#include <proto/exec.h>
#include <dos/dos.h>
#include <amissl/amissl.h>
#include <stdlib.h>

#define _sfdc_strarg(a) _sfdc_strarg2(a)
#define _sfdc_strarg2(a) #a

extern struct Library *SocketBase;

void * LIB_OSSL_LIB_CTX_new(struct Library * _base);
void   LIB_OSSL_LIB_CTX_free(struct Library * _base, void * ___ctx);
void   LIB_OSSL_LIB_CTX_set0_default(struct Library * _base, void * ___ctx);
void * LIB_OSSL_LIB_CTX_get0_global_default(struct Library * _base);
int    LIB_OSSL_LIB_CTX_load_config(struct Library * _base, void * ___ctx, const char * ___config_file);
void * LIB_ossl_release_default_drbg_ctx(struct Library * _base);
int    LIB_ossl_crypto_thread_native_spawn(struct Library * _base, void * ___t);
int    LIB_ossl_crypto_thread_native_perform_join(struct Library * _base, void * ___t);

AROS_LH0(void *, OSSL_LIB_CTX_new, struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_LIB_CTX_new);
    AROS_LIBFUNC_EXIT
}

AROS_LH1(void, OSSL_LIB_CTX_free, AROS_LDA(void *, ___ctx, D0), struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_LIB_CTX_free, ___ctx);
    AROS_LIBFUNC_EXIT
}

AROS_LH1(void, OSSL_LIB_CTX_set0_default, AROS_LDA(void *, ___ctx, D0), struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_LIB_CTX_set0_default, ___ctx);
    AROS_LIBFUNC_EXIT
}

AROS_LH0(void *, OSSL_LIB_CTX_get0_global_default, struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_LIB_CTX_get0_global_default);
    AROS_LIBFUNC_EXIT
}

AROS_LH2(int, OSSL_LIB_CTX_load_config, AROS_LDA(void *, ___ctx, D0), AROS_LDA(const char *, ___config_file, D1), struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_LIB_CTX_load_config, ___ctx, ___config_file);
    AROS_LIBFUNC_EXIT
}

AROS_LH0(void *, ossl_release_default_drbg_ctx, struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(ossl_release_default_drbg_ctx);
    AROS_LIBFUNC_EXIT
}

AROS_LH1(int, ossl_crypto_thread_native_spawn, AROS_LDA(void *, ___t, D0), struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(ossl_crypto_thread_native_spawn, ___t);
    AROS_LIBFUNC_EXIT
}

AROS_LH1(int, ossl_crypto_thread_native_perform_join, AROS_LDA(void *, ___t, D0), struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(ossl_crypto_thread_native_perform_join, ___t);
    AROS_LIBFUNC_EXIT
}

/* LIB_ implementations: called by the stubs above */
void * LIB_ossl_release_default_drbg_ctx(struct Library * _base)
{
    ossl_release_default_drbg_ctx();
    return NULL;
}

int LIB_ossl_crypto_thread_native_spawn(struct Library * _base, void * ___t)
{
    return 0; /* single-threaded: no-op */
}

int LIB_ossl_crypto_thread_native_perform_join(struct Library * _base, void * ___t)
{
    return 0; /* single-threaded: no-op */
}

/* Override CRYPTO_malloc/CRYPTO_free/CRYPTO_zalloc/CRYPTO_realloc with
 * AllocVec/FreeVec. These override the AUTOINIT dispatch stubs from
 * amissl_stubs_aros.c because this .o is placed first in the link order
 * (GNU ld's --allow-multiple-definition uses the FIRST definition). */
void *(CRYPTO_malloc)(size_t num, const char *file, int line)
{
    (void)file; (void)line;
    return AllocVec(num, MEMF_ANY);
}

void (CRYPTO_free)(void *ptr, const char *file, int line)
{
    (void)file; (void)line;
    FreeVec(ptr);
}

void *(CRYPTO_zalloc)(size_t num, const char *file, int line)
{
    void *p = AllocVec(num, MEMF_ANY);
    if (p != NULL) {
        unsigned char *cp = (unsigned char *)p;
        size_t n;
        for (n = 0; n < num; n++) cp[n] = 0;
    }
    return p;
}

void *(CRYPTO_realloc)(void *addr, size_t num, const char *file, int line)
{
    (void)file; (void)line;
    if (addr == NULL) return AllocVec(num, MEMF_ANY);
    if (num == 0) { FreeVec(addr); return NULL; }
    void *p = AllocVec(num, MEMF_ANY);
    if (p == NULL) return NULL;
    unsigned char *src = (unsigned char *)addr;
    unsigned char *dst = (unsigned char *)p;
    size_t i;
    for (i = 0; i < num; i++) dst[i] = src[i];
    FreeVec(addr);
    return p;
}

/* Strong alias for SocketBase — used by libcmt GETSOCKET() fallback */
struct Library *__amissl_global_SocketBase = NULL;

/* Override socket stubs from amissl_stubs_aros.c (which always return -1).
   Compile without AMISSL_COMPILE so proto/bsdsocket.h works properly.
   The function body calls through the AROS inline macro which dispatches
   through SocketBase. */
#include <proto/bsdsocket.h>
int send(int s, const void *buf, int len, int flags) { if(!SocketBase)return -1;return send(s,buf,len,flags); }
int recv(int s, void *buf, int len, int flags) { if(!SocketBase)return -1;return recv(s,buf,len,flags); }
int connect(int s, const struct sockaddr *addr, int addrlen) { if(!SocketBase)return -1;return connect(s,addr,addrlen); }
int socket(int domain, int type, int protocol) { if(!SocketBase)return -1;return socket(domain,type,protocol); }
int bind(int s, const struct sockaddr *addr, int addrlen) { if(!SocketBase)return -1;return bind(s,addr,addrlen); }
int listen(int s, int backlog) { if(!SocketBase)return -1;return listen(s,backlog); }
int closesocket(int s) { if(!SocketBase)return -1;return closesocket(s); }
int shutdown(int s, int how) { if(!SocketBase)return -1;return shutdown(s,how); }
int setsockopt(int s, int l, int n, const void *v, int o) { if(!SocketBase)return -1;return setsockopt(s,l,n,v,o); }
int getsockopt(int s, int l, int n, void *v, int *o) { if(!SocketBase)return -1;return getsockopt(s,l,n,v,o); }

/* SocketBase is provided by the AROS bsdsocket.library stub system.
 * Do NOT define it here — let the linker resolve it from -lamiga or -larossupport.
 * InitAmiSSLA will set it via the AmiSSL_SocketBase tag. */
