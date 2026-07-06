/* Automatically generated header (sfdc 1.11)! Do not edit! */

#ifndef _GATEPROTO_AMISSLMASTER_H
#define _GATEPROTO_AMISSLMASTER_H

#include <exec/types.h>

#define _sfdc_strarg(a) _sfdc_strarg2(a)
#define _sfdc_strarg2(a) #a

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#include <SDI_lib.h>

LIBSTUB(UNIMPLEMENTED, int);

AROS_LD2(LONG, InitAmiSSLMaster,
    AROS_LDA(LONG, APIVersion, D0),
    AROS_LDA(LONG, UsesOpenSSLStructs, D1),
    struct LibraryHeader *, __BASE_OR_IFACE_VAR, 0, LIBSTUB
);

AROS_LD1(struct LibraryHeader *,OpenAmiSSL,
    AROS_LDA(struct Library *, _base, D0),
    struct LibraryHeader *, __BASE_OR_IFACE_VAR, 0, LIBSTUB
);


AROS_LD1(void,CloseAmiSSL,
    AROS_LDA(struct Library *, _base, D0),
    struct LibraryHeader *, __BASE_OR_IFACE_VAR, 0, LIBSTUB
);


AROS_LD1(struct LibraryHeader * ,OpenAmiSSLCipher,
    AROS_LDA(LONG , ___CipherBase, D0),
    struct LibraryHeader * , __BASE_OR_IFACE_VAR, 0, LIBSTUB
);


AROS_LD1(void,CloseAmiSSLCipher,
    AROS_LDA(struct LibraryHeader *, ___CipherBase, A0),
    struct LibraryHeader *, __BASE_OR_IFACE_VAR, 0, LIBSTUB
);

AROS_LD2(LONG,OpenAmiSSLTagList,
    AROS_LDA(LONG, APIVersion, D0),
    AROS_LDA(struct TagItem *, tagList, A0),
    struct LibraryHeader *, __BASE_OR_IFACE_VAR, 0, LIBSTUB
);

//LIBSTUB(OpenAmiSSL, struct Library *);
//LIBSTUB(CloseAmiSSL, void);
//LIBSTUB(OpenAmiSSLCipher, struct Library *);
//LIBSTUB(CloseAmiSSLCipher, void);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* _GATEPROTO_AMISSLMASTER_H */
