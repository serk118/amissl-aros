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

/* SocketBase is provided by the AROS bsdsocket.library stub system.
 * Do NOT define it here — let the linker resolve it from -lamiga or -larossupport.
 * InitAmiSSLA will set it via the AmiSSL_SocketBase tag. */
