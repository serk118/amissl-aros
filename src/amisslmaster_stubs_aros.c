#include <exec/types.h>

#include <internal/amissl.h>
#include "amisslmaster_base.h"

#include <aros/libcall.h>
#include <SDI_lib.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

int LIBSTUB_UNIMPLEMENTED(void)
{
  // nothing
  return 0;
}

LONG LIB_InitAmiSSLMaster(struct LibraryHeader * _base, LONG ___APIVersion, LONG ___UsesOpenSSLStructs);

AROS_LH2(LONG, InitAmiSSLMaster,
    AROS_LDA(LONG, APIVersion, D0),
    AROS_LDA(LONG, UsesOpenSSLStructs, D1),
    struct LibraryHeader *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(InitAmiSSLMaster, APIVersion, UsesOpenSSLStructs);
    AROS_LIBFUNC_EXIT
}

struct LibraryHeader * LIB_OpenAmiSSL();
AROS_LH1(struct LibraryHeader *,OpenAmiSSL,
     AROS_LDA(struct Library *, _base, D0),
    struct LibraryHeader *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OpenAmiSSL,_base);
    AROS_LIBFUNC_EXIT
}

void LIB_CloseAmiSSL();
AROS_LH1(void,CloseAmiSSL,
 AROS_LDA(struct Library *, _base, D0),
    struct LibraryHeader *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(CloseAmiSSL,_base);
    AROS_LIBFUNC_EXIT
}

struct Library * LIB_OpenAmiSSLCipher(struct LibraryHeader * _base, LONG ___Cipher);
AROS_LH1(struct Library *,OpenAmiSSLCipher,
    AROS_LDA(LONG , ___CipherBase, D0),
    struct LibraryHeader *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OpenAmiSSLCipher, ___CipherBase);
    AROS_LIBFUNC_EXIT
}

void LIB_CloseAmiSSLCipher(struct LibraryHeader * _base,struct LibraryHeader * ___CipherBase);
AROS_LH1(void,CloseAmiSSLCipher,
    AROS_LDA(struct LibraryHeader *, ___CipherBase,A0),
    struct LibraryHeader *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(CloseAmiSSLCipher, ___CipherBase);
    AROS_LIBFUNC_EXIT
}


/* Wrapper: CloseAmiSSL needs to be available as a regular function name */
void CloseAmiSSL(void);
void CloseAmiSSL(void) { LIB_CloseAmiSSL(); }

/* AROS runtime init/fini symbol stubs */
void __LIBS__symbol_set_handler_missing(void *handler) { (void)handler; }

LONG LIB_OpenAmiSSLTagList(struct LibraryHeader *_base, LONG APIVersion, struct TagItem *tagList);
AROS_LH2(LONG, OpenAmiSSLTagList,
    AROS_LDA(LONG, APIVersion, D0),
    AROS_LDA(struct TagItem *, tagList, A0),
    struct LibraryHeader *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OpenAmiSSLTagList, APIVersion, tagList);
    AROS_LIBFUNC_EXIT
}

#if 0
void LIB_CloseAmiSSL(struct Library * _base);

void LIBSTUB_0_CloseAmiSSL(void)
{
//  struct Library * _base = (struct Library *)REG_A6;
//  return LIB_CloseAmiSSL(_base);
}


struct Library * LIB_OpenAmiSSLCipher(struct Library * _base, LONG ___Cipher);

struct Library * LIBSTUB_0_OpenAmiSSLCipher(void)
{
//  LONG ___Cipher = (LONG)REG_D0;
//  struct Library * _base = (struct Library *)REG_A6;
//  return LIB_OpenAmiSSLCipher(_base, ___Cipher);
}

void LIB_CloseAmiSSLCipher(struct Library * _base, struct Library * ___CipherBase);
void LIBSTUB_0_CloseAmiSSLCipher(void)
{
//  struct Library * ___CipherBase = (struct Library *)REG_A0;
//  struct Library * _base = (struct Library *)REG_A6;
//  return LIB_CloseAmiSSLCipher(_base, ___CipherBase);
}
#endif


#ifdef __cplusplus
}
#endif /* __cplusplus */
