/* Automatically generated header (GenSH_aros)! Do not edit! */

#ifndef _GATEPROTO_AMISSL_H
#define _GATEPROTO_AMISSL_H

#include <exec/types.h>
#include <dos/dos.h>
#include <amissl/amissl.h>

#define _sfdc_strarg(a) _sfdc_strarg2(a)
#define _sfdc_strarg2(a) #a

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#include <SDI_lib.h>

AROS_LD0(LONG,UNIMPLEMENTED,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(LONG,InitAmiSSLA,
    AROS_LDA(struct TagItem *,___tagList, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(long,CleanupAmiSSLA,
    AROS_LDA(struct TagItem *,___tagList, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,InternalInitAmiSSL,
    AROS_LDA(void *,___amisslinit, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(ASN1_TYPE * ,ASN1_TYPE_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,ASN1_TYPE_free,
AROS_LDA(  ASN1_TYPE *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(ASN1_TYPE * ,d2i_ASN1_TYPE,
AROS_LDA(  ASN1_TYPE **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_ASN1_TYPE,
AROS_LDA(  ASN1_TYPE *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,ASN1_ANY_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,ASN1_TYPE_get,
AROS_LDA(  const ASN1_TYPE *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,ASN1_TYPE_set,
AROS_LDA(  ASN1_TYPE *, ___a,A0),
AROS_LDA(  int, ___type,D0),
AROS_LDA(  void *, ___value,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(ASN1_OBJECT * ,ASN1_OBJECT_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,ASN1_OBJECT_free,
AROS_LDA(  ASN1_OBJECT *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_ASN1_OBJECT,
AROS_LDA(  const ASN1_OBJECT *, ___a,A0),
AROS_LDA(  unsigned char **, ___pp,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(ASN1_OBJECT * ,d2i_ASN1_OBJECT,
AROS_LDA(  ASN1_OBJECT **, ___a,A0),
AROS_LDA(  const unsigned char **, ___pp,A1),
AROS_LDA(  long, ___length,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,ASN1_OBJECT_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(ASN1_STRING * ,ASN1_STRING_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,ASN1_STRING_free,
AROS_LDA(  ASN1_STRING *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ASN1_STRING * ,ASN1_STRING_dup,
AROS_LDA(  ASN1_STRING *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ASN1_STRING * ,ASN1_STRING_type_new,
AROS_LDA(  int, ___type,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ASN1_STRING_cmp,
AROS_LDA(  ASN1_STRING *, ___a,A0),
AROS_LDA(  ASN1_STRING *, ___b,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,ASN1_STRING_set,
AROS_LDA(  ASN1_STRING *, ___str,A0),
AROS_LDA(  const void *, ___data,A1),
AROS_LDA(  int, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,ASN1_STRING_length,
AROS_LDA(  const ASN1_STRING *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,ASN1_STRING_length_set,
AROS_LDA(  ASN1_STRING *, ___x,A0),
AROS_LDA(  int, ___n,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,ASN1_STRING_type,
AROS_LDA(  const ASN1_STRING *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(unsigned char * ,ASN1_STRING_data,
AROS_LDA(  ASN1_STRING *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(ASN1_BIT_STRING * ,ASN1_BIT_STRING_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,ASN1_BIT_STRING_free,
AROS_LDA(  ASN1_BIT_STRING *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(ASN1_BIT_STRING * ,d2i_ASN1_BIT_STRING,
AROS_LDA(  ASN1_BIT_STRING **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_ASN1_BIT_STRING,
AROS_LDA(  ASN1_BIT_STRING *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,ASN1_BIT_STRING_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,ASN1_BIT_STRING_set,
AROS_LDA(  ASN1_BIT_STRING *, ___a,A0),
AROS_LDA(  unsigned char *, ___d,A1),
AROS_LDA(  int, ___length,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,ASN1_BIT_STRING_set_bit,
AROS_LDA(  ASN1_BIT_STRING *, ___a,A0),
AROS_LDA(  int, ___n,D0),
AROS_LDA(  int, ___value,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ASN1_BIT_STRING_get_bit,
AROS_LDA(  const ASN1_BIT_STRING *, ___a,A0),
AROS_LDA(  int, ___n,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,ASN1_BIT_STRING_name_print,
AROS_LDA(  BIO *, ___out,A0),
AROS_LDA(  ASN1_BIT_STRING *, ___bs,A1),
AROS_LDA(  BIT_STRING_BITNAME *, ___tbl,A2),
AROS_LDA(  int, ___indent,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ASN1_BIT_STRING_num_asc,
AROS_LDA(  const char *, ___name,A0),
AROS_LDA(  BIT_STRING_BITNAME *, ___tbl,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,ASN1_BIT_STRING_set_asc,
AROS_LDA(  ASN1_BIT_STRING *, ___bs,A0),
AROS_LDA(  const char *, ___name,A1),
AROS_LDA(  int, ___value,D0),
AROS_LDA(  BIT_STRING_BITNAME *, ___tbl,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(ASN1_INTEGER * ,ASN1_INTEGER_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,ASN1_INTEGER_free,
AROS_LDA(  ASN1_INTEGER *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(ASN1_INTEGER * ,d2i_ASN1_INTEGER,
AROS_LDA(  ASN1_INTEGER **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_ASN1_INTEGER,
AROS_LDA(  ASN1_INTEGER *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,ASN1_INTEGER_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(ASN1_INTEGER * ,d2i_ASN1_UINTEGER,
AROS_LDA(  ASN1_INTEGER **, ___a,A0),
AROS_LDA(  const unsigned char **, ___pp,A1),
AROS_LDA(  long, ___length,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ASN1_INTEGER * ,ASN1_INTEGER_dup,
AROS_LDA(  ASN1_INTEGER *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ASN1_INTEGER_cmp,
AROS_LDA(  ASN1_INTEGER *, ___x,A0),
AROS_LDA(  ASN1_INTEGER *, ___y,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(ASN1_ENUMERATED * ,ASN1_ENUMERATED_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,ASN1_ENUMERATED_free,
AROS_LDA(  ASN1_ENUMERATED *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(ASN1_ENUMERATED * ,d2i_ASN1_ENUMERATED,
AROS_LDA(  ASN1_ENUMERATED **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_ASN1_ENUMERATED,
AROS_LDA(  ASN1_ENUMERATED *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,ASN1_ENUMERATED_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,ASN1_UTCTIME_check,
AROS_LDA(  const ASN1_UTCTIME *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(ASN1_UTCTIME * ,ASN1_UTCTIME_set,
AROS_LDA(  ASN1_UTCTIME *, ___s,A0),
AROS_LDA(  time_t, ___t,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ASN1_UTCTIME_set_string,
AROS_LDA(  ASN1_UTCTIME *, ___s,A0),
AROS_LDA(  char *, ___str,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ASN1_UTCTIME_cmp_time_t,
AROS_LDA(  const ASN1_UTCTIME *, ___s,A0),
AROS_LDA(  time_t, ___t,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,ASN1_GENERALIZEDTIME_check,
AROS_LDA(  const ASN1_GENERALIZEDTIME *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(ASN1_GENERALIZEDTIME * ,ASN1_GENERALIZEDTIME_set,
AROS_LDA(  ASN1_GENERALIZEDTIME *, ___s,A0),
AROS_LDA(  time_t, ___t,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ASN1_GENERALIZEDTIME_set_string,
AROS_LDA(  ASN1_GENERALIZEDTIME *, ___s,A0),
AROS_LDA(  const char *, ___str,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(ASN1_OCTET_STRING * ,ASN1_OCTET_STRING_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,ASN1_OCTET_STRING_free,
AROS_LDA(  ASN1_OCTET_STRING *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(ASN1_OCTET_STRING * ,d2i_ASN1_OCTET_STRING,
AROS_LDA(  ASN1_OCTET_STRING **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_ASN1_OCTET_STRING,
AROS_LDA(  ASN1_OCTET_STRING *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,ASN1_OCTET_STRING_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ASN1_OCTET_STRING * ,ASN1_OCTET_STRING_dup,
AROS_LDA(  ASN1_OCTET_STRING *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ASN1_OCTET_STRING_cmp,
AROS_LDA(  ASN1_OCTET_STRING *, ___a,A0),
AROS_LDA(  ASN1_OCTET_STRING *, ___b,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,ASN1_OCTET_STRING_set,
AROS_LDA(  ASN1_OCTET_STRING *, ___str,A0),
AROS_LDA(  unsigned char *, ___data,A1),
AROS_LDA(  int, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(ASN1_VISIBLESTRING * ,ASN1_VISIBLESTRING_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,ASN1_VISIBLESTRING_free,
AROS_LDA(  ASN1_VISIBLESTRING *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(ASN1_VISIBLESTRING * ,d2i_ASN1_VISIBLESTRING,
AROS_LDA(  ASN1_VISIBLESTRING **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_ASN1_VISIBLESTRING,
AROS_LDA(  ASN1_VISIBLESTRING *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,ASN1_VISIBLESTRING_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(ASN1_UNIVERSALSTRING * ,ASN1_UNIVERSALSTRING_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,ASN1_UNIVERSALSTRING_free,
AROS_LDA(  ASN1_UNIVERSALSTRING *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(ASN1_UNIVERSALSTRING * ,d2i_ASN1_UNIVERSALSTRING,
AROS_LDA(  ASN1_UNIVERSALSTRING **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_ASN1_UNIVERSALSTRING,
AROS_LDA(  ASN1_UNIVERSALSTRING *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,ASN1_UNIVERSALSTRING_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(ASN1_UTF8STRING * ,ASN1_UTF8STRING_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,ASN1_UTF8STRING_free,
AROS_LDA(  ASN1_UTF8STRING *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(ASN1_UTF8STRING * ,d2i_ASN1_UTF8STRING,
AROS_LDA(  ASN1_UTF8STRING **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_ASN1_UTF8STRING,
AROS_LDA(  ASN1_UTF8STRING *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,ASN1_UTF8STRING_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(ASN1_NULL * ,ASN1_NULL_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,ASN1_NULL_free,
AROS_LDA(  ASN1_NULL *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(ASN1_NULL * ,d2i_ASN1_NULL,
AROS_LDA(  ASN1_NULL **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_ASN1_NULL,
AROS_LDA(  ASN1_NULL *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,ASN1_NULL_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(ASN1_BMPSTRING * ,ASN1_BMPSTRING_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,ASN1_BMPSTRING_free,
AROS_LDA(  ASN1_BMPSTRING *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(ASN1_BMPSTRING * ,d2i_ASN1_BMPSTRING,
AROS_LDA(  ASN1_BMPSTRING **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_ASN1_BMPSTRING,
AROS_LDA(  ASN1_BMPSTRING *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,ASN1_BMPSTRING_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,UTF8_getc,
AROS_LDA(  const unsigned char *, ___str,A0),
AROS_LDA(  int, ___len,D0),
AROS_LDA(  unsigned long *, ___val,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,UTF8_putc,
AROS_LDA(  unsigned char *, ___str,A0),
AROS_LDA(  int, ___len,D0),
AROS_LDA(  unsigned long, ___value,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(ASN1_STRING * ,ASN1_PRINTABLE_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,ASN1_PRINTABLE_free,
AROS_LDA(  ASN1_STRING *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(ASN1_STRING * ,d2i_ASN1_PRINTABLE,
AROS_LDA(  ASN1_STRING **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_ASN1_PRINTABLE,
AROS_LDA(  ASN1_STRING *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,ASN1_PRINTABLE_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(ASN1_STRING * ,DIRECTORYSTRING_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,DIRECTORYSTRING_free,
AROS_LDA(  ASN1_STRING *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(ASN1_STRING * ,d2i_DIRECTORYSTRING,
AROS_LDA(  ASN1_STRING **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_DIRECTORYSTRING,
AROS_LDA(  ASN1_STRING *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,DIRECTORYSTRING_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(ASN1_STRING * ,DISPLAYTEXT_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,DISPLAYTEXT_free,
AROS_LDA(  ASN1_STRING *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(ASN1_STRING * ,d2i_DISPLAYTEXT,
AROS_LDA(  ASN1_STRING **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_DISPLAYTEXT,
AROS_LDA(  ASN1_STRING *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,DISPLAYTEXT_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(ASN1_PRINTABLESTRING * ,ASN1_PRINTABLESTRING_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,ASN1_PRINTABLESTRING_free,
AROS_LDA(  ASN1_PRINTABLESTRING *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(ASN1_PRINTABLESTRING * ,d2i_ASN1_PRINTABLESTRING,
AROS_LDA(  ASN1_PRINTABLESTRING **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_ASN1_PRINTABLESTRING,
AROS_LDA(  ASN1_PRINTABLESTRING *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,ASN1_PRINTABLESTRING_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(ASN1_T61STRING * ,ASN1_T61STRING_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,ASN1_T61STRING_free,
AROS_LDA(  ASN1_T61STRING *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(ASN1_T61STRING * ,d2i_ASN1_T61STRING,
AROS_LDA(  ASN1_T61STRING **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_ASN1_T61STRING,
AROS_LDA(  ASN1_T61STRING *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,ASN1_T61STRING_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(ASN1_IA5STRING * ,ASN1_IA5STRING_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,ASN1_IA5STRING_free,
AROS_LDA(  ASN1_IA5STRING *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(ASN1_IA5STRING * ,d2i_ASN1_IA5STRING,
AROS_LDA(  ASN1_IA5STRING **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_ASN1_IA5STRING,
AROS_LDA(  ASN1_IA5STRING *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,ASN1_IA5STRING_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(ASN1_GENERALSTRING * ,ASN1_GENERALSTRING_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,ASN1_GENERALSTRING_free,
AROS_LDA(  ASN1_GENERALSTRING *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(ASN1_GENERALSTRING * ,d2i_ASN1_GENERALSTRING,
AROS_LDA(  ASN1_GENERALSTRING **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_ASN1_GENERALSTRING,
AROS_LDA(  ASN1_GENERALSTRING *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,ASN1_GENERALSTRING_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(ASN1_UTCTIME * ,ASN1_UTCTIME_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,ASN1_UTCTIME_free,
AROS_LDA(  ASN1_UTCTIME *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(ASN1_UTCTIME * ,d2i_ASN1_UTCTIME,
AROS_LDA(  ASN1_UTCTIME **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_ASN1_UTCTIME,
AROS_LDA(  ASN1_UTCTIME *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,ASN1_UTCTIME_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(ASN1_GENERALIZEDTIME * ,ASN1_GENERALIZEDTIME_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,ASN1_GENERALIZEDTIME_free,
AROS_LDA(  ASN1_GENERALIZEDTIME *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(ASN1_GENERALIZEDTIME * ,d2i_ASN1_GENERALIZEDTIME,
AROS_LDA(  ASN1_GENERALIZEDTIME **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_ASN1_GENERALIZEDTIME,
AROS_LDA(  ASN1_GENERALIZEDTIME *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,ASN1_GENERALIZEDTIME_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(ASN1_TIME * ,ASN1_TIME_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,ASN1_TIME_free,
AROS_LDA(  ASN1_TIME *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(ASN1_TIME * ,d2i_ASN1_TIME,
AROS_LDA(  ASN1_TIME **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_ASN1_TIME,
AROS_LDA(  ASN1_TIME *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,ASN1_TIME_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(ASN1_TIME * ,ASN1_TIME_set,
AROS_LDA(  ASN1_TIME *, ___s,A0),
AROS_LDA(  time_t, ___t,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,ASN1_TIME_check,
AROS_LDA(  const ASN1_TIME *, ___t,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(ASN1_GENERALIZEDTIME * ,ASN1_TIME_to_generalizedtime,
AROS_LDA(  const ASN1_TIME *, ___t,A0),
AROS_LDA(  ASN1_GENERALIZEDTIME **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2a_ASN1_INTEGER,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  const ASN1_INTEGER *, ___a,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,a2i_ASN1_INTEGER,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  ASN1_INTEGER *, ___bs,A1),
AROS_LDA(  char *, ___buf,A2),
AROS_LDA(  int, ___size,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2a_ASN1_ENUMERATED,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  const ASN1_ENUMERATED *, ___a,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,a2i_ASN1_ENUMERATED,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  ASN1_ENUMERATED *, ___bs,A1),
AROS_LDA(  char *, ___buf,A2),
AROS_LDA(  int, ___size,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2a_ASN1_OBJECT,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  const ASN1_OBJECT *, ___a,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,a2i_ASN1_STRING,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  ASN1_STRING *, ___bs,A1),
AROS_LDA(  char *, ___buf,A2),
AROS_LDA(  int, ___size,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,i2a_ASN1_STRING,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  const ASN1_STRING *, ___a,A1),
AROS_LDA(  int, ___type,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,i2t_ASN1_OBJECT,
AROS_LDA(  char *, ___buf,A0),
AROS_LDA(  int, ___buf_len,D0),
AROS_LDA(  const ASN1_OBJECT *, ___a,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,a2d_ASN1_OBJECT,
AROS_LDA(  unsigned char *, ___out,A0),
AROS_LDA(  int, ___olen,D0),
AROS_LDA(  const char *, ___buf,A1),
AROS_LDA(  int, ___num,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(ASN1_OBJECT * ,ASN1_OBJECT_create,
AROS_LDA(  int, ___nid,D0),
AROS_LDA(  unsigned char *, ___data,A0),
AROS_LDA(  int, ___len,D1),
AROS_LDA(  const char *, ___sn,A1),
AROS_LDA(  const char *, ___ln,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ASN1_INTEGER_set,
AROS_LDA(  ASN1_INTEGER *, ___a,A0),
AROS_LDA(  long, ___v,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(long ,ASN1_INTEGER_get,
AROS_LDA(  const ASN1_INTEGER *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(ASN1_INTEGER * ,BN_to_ASN1_INTEGER,
AROS_LDA(  const BIGNUM *, ___bn,A0),
AROS_LDA(  ASN1_INTEGER *, ___ai,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(BIGNUM * ,ASN1_INTEGER_to_BN,
AROS_LDA(  ASN1_INTEGER *, ___ai,A0),
AROS_LDA(  BIGNUM *, ___bn,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ASN1_ENUMERATED_set,
AROS_LDA(  ASN1_ENUMERATED *, ___a,A0),
AROS_LDA(  long, ___v,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(long ,ASN1_ENUMERATED_get,
AROS_LDA(  const ASN1_ENUMERATED *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(ASN1_ENUMERATED * ,BN_to_ASN1_ENUMERATED,
AROS_LDA(  const BIGNUM *, ___bn,A0),
AROS_LDA(  ASN1_ENUMERATED *, ___ai,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(BIGNUM * ,ASN1_ENUMERATED_to_BN,
AROS_LDA(  const ASN1_ENUMERATED *, ___ai,A0),
AROS_LDA(  BIGNUM *, ___bn,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ASN1_PRINTABLE_type,
AROS_LDA(  const unsigned char *, ___s,A0),
AROS_LDA(  int, ___max,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(unsigned long ,ASN1_tag2bit,
AROS_LDA(  int, ___tag,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,ASN1_get_object,
AROS_LDA(  const unsigned char **, ___pp,A0),
AROS_LDA(  long *, ___plength,A1),
AROS_LDA(  int *, ___ptag,A2),
AROS_LDA(  int *, ___pclass,A3),
AROS_LDA(  long, ___omax,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ASN1_check_infinite_end,
AROS_LDA(  unsigned char **, ___p,A0),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(void ,ASN1_put_object,
AROS_LDA(  unsigned char **, ___pp,A0),
AROS_LDA(  int, ___constructed,D0),
AROS_LDA(  int, ___length,D1),
AROS_LDA(  int, ___tag,D2),
AROS_LDA(  int, ___xclass,D3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,ASN1_object_size,
AROS_LDA(  int, ___constructed,D0),
AROS_LDA(  int, ___length,D1),
AROS_LDA(  int, ___tag,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void * ,ASN1_dup,
AROS_LDA(  i2d_of_void *, ___i2d,A0),
AROS_LDA(  d2i_of_void *, ___d2i,A1),
AROS_LDA(  char *, ___x,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void * ,ASN1_item_dup,
AROS_LDA(  const ASN1_ITEM *, ___it,A0),
AROS_LDA(  void *, ___x,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ASN1_STRING_to_UTF8,
AROS_LDA(  unsigned char **, ___out,A0),
AROS_LDA(  const ASN1_STRING *, ___in,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void * ,ASN1_d2i_bio,
AROS_LDA(  void *, (*___xnew)(void),A0),
AROS_LDA(  d2i_of_void *, ___d2i,A1),
AROS_LDA(  BIO *, ___in,A2),
AROS_LDA(  void **, ___x,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void * ,ASN1_item_d2i_bio,
AROS_LDA(  const ASN1_ITEM *, ___it,A0),
AROS_LDA(  BIO *, ___in,A1),
AROS_LDA(  void *, ___x,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,ASN1_i2d_bio,
AROS_LDA(  i2d_of_void *, ___i2d,A0),
AROS_LDA(  BIO *, ___out,A1),
AROS_LDA(  unsigned char *, ___x,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,ASN1_item_i2d_bio,
AROS_LDA(  const ASN1_ITEM *, ___it,A0),
AROS_LDA(  BIO *, ___out,A1),
AROS_LDA(  void *, ___x,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ASN1_UTCTIME_print,
AROS_LDA(  BIO *, ___fp,A0),
AROS_LDA(  ASN1_UTCTIME *, ___a,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ASN1_GENERALIZEDTIME_print,
AROS_LDA(  BIO *, ___fp,A0),
AROS_LDA(  ASN1_GENERALIZEDTIME *, ___a,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ASN1_TIME_print,
AROS_LDA(  BIO *, ___fp,A0),
AROS_LDA(  const ASN1_TIME *, ___a,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ASN1_STRING_print,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  ASN1_STRING *, ___v,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,ASN1_STRING_print_ex,
AROS_LDA(  BIO *, ___out,A0),
AROS_LDA(  const ASN1_STRING *, ___str,A1),
AROS_LDA(  unsigned long, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,ASN1_parse,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  unsigned char *, ___pp,A1),
AROS_LDA(  long, ___len,D0),
AROS_LDA(  int, ___indent,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,ASN1_parse_dump,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  const unsigned char *, ___pp,A1),
AROS_LDA(  long, ___len,D0),
AROS_LDA(  int, ___indent,D1),
AROS_LDA(  int, ___dump,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char * ,ASN1_tag2str,
AROS_LDA(  int, ___tag,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,ASN1_UNIVERSALSTRING_to_string,
AROS_LDA(  ASN1_UNIVERSALSTRING *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,ASN1_TYPE_set_octetstring,
AROS_LDA(  ASN1_TYPE *, ___a,A0),
AROS_LDA(  unsigned char *, ___data,A1),
AROS_LDA(  int, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,ASN1_TYPE_get_octetstring,
AROS_LDA(  const ASN1_TYPE *, ___a,A0),
AROS_LDA(  unsigned char *, ___data,A1),
AROS_LDA(  int, ___max_len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,ASN1_TYPE_set_int_octetstring,
AROS_LDA(  ASN1_TYPE *, ___a,A0),
AROS_LDA(  long, ___num,D0),
AROS_LDA(  unsigned char *, ___data,A1),
AROS_LDA(  int, ___len,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,ASN1_TYPE_get_int_octetstring,
AROS_LDA(  const ASN1_TYPE *, ___a,A0),
AROS_LDA(  long *, ___num,A1),
AROS_LDA(  unsigned char *, ___data,A2),
AROS_LDA(  int, ___max_len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void * ,ASN1_item_unpack,
AROS_LDA(  const ASN1_STRING *, ___oct,A0),
AROS_LDA(  const ASN1_ITEM *, ___it,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(ASN1_STRING * ,ASN1_item_pack,
AROS_LDA(  void *, ___obj,A0),
AROS_LDA(  const ASN1_ITEM *, ___it,A1),
AROS_LDA(  ASN1_OCTET_STRING **, ___oct,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,ASN1_STRING_set_default_mask,
AROS_LDA(  unsigned long, ___mask,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,ASN1_STRING_set_default_mask_asc,
AROS_LDA(  char *, ___p,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(unsigned long ,ASN1_STRING_get_default_mask,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,ASN1_mbstring_copy,
AROS_LDA(  ASN1_STRING **, ___out,A0),
AROS_LDA(  const unsigned char *, ___in,A1),
AROS_LDA(  int, ___len,D0),
AROS_LDA(  int, ___inform,D1),
AROS_LDA(  unsigned long, ___mask,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(int ,ASN1_mbstring_ncopy,
AROS_LDA(  ASN1_STRING **, ___out,A0),
AROS_LDA(  const unsigned char *, ___in,A1),
AROS_LDA(  int, ___len,D0),
AROS_LDA(  int, ___inform,D1),
AROS_LDA(  unsigned long, ___mask,D2),
AROS_LDA(  long, ___minsize,D3),
AROS_LDA(  long, ___maxsize,D4),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(ASN1_STRING * ,ASN1_STRING_set_by_NID,
AROS_LDA(  ASN1_STRING **, ___out,A0),
AROS_LDA(  const unsigned char *, ___in,A1),
AROS_LDA(  int, ___inlen,D0),
AROS_LDA(  int, ___inform,D1),
AROS_LDA(  int, ___nid,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ASN1_STRING_TABLE * ,ASN1_STRING_TABLE_get,
AROS_LDA(  int, ___nid,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,ASN1_STRING_TABLE_add,
AROS_LDA(  int, ___a,D0),
AROS_LDA(  long, ___b,D1),
AROS_LDA(  long, ___c,D2),
AROS_LDA(  unsigned long, ___d,D3),
AROS_LDA(  unsigned long, ___e,D4),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(void ,ASN1_STRING_TABLE_cleanup,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ASN1_VALUE * ,ASN1_item_new,
AROS_LDA(  const ASN1_ITEM *, ___it,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,ASN1_item_free,
AROS_LDA(  ASN1_VALUE *, ___val,A0),
AROS_LDA(  const ASN1_ITEM *, ___it,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(ASN1_VALUE * ,ASN1_item_d2i,
AROS_LDA(  ASN1_VALUE **, ___val,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
AROS_LDA(  const ASN1_ITEM *, ___it,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,ASN1_item_i2d,
AROS_LDA(  ASN1_VALUE *, ___val,A0),
AROS_LDA(  unsigned char **, ___out,A1),
AROS_LDA(  const ASN1_ITEM *, ___it,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(void ,ASN1_add_oid_module,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(int ,ERR_load_ASN1_strings,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,ASN1_BOOLEAN_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,ASN1_TBOOLEAN_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,ASN1_FBOOLEAN_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,ASN1_SEQUENCE_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,CBIGNUM_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,BIGNUM_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,LONG_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,ZLONG_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ASN1_item_ex_new,
AROS_LDA(  ASN1_VALUE **, ___pval,A0),
AROS_LDA(  const ASN1_ITEM *, ___it,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,ASN1_item_ex_free,
AROS_LDA(  ASN1_VALUE **, ___pval,A0),
AROS_LDA(  const ASN1_ITEM *, ___it,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD8(int ,ASN1_item_ex_d2i,
AROS_LDA(  ASN1_VALUE **, ___pval,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
AROS_LDA(  const ASN1_ITEM *, ___it,A2),
AROS_LDA(  int, ___tag,D1),
AROS_LDA(  int, ___aclass,D2),
AROS_LDA(  char, ___opt,D3),
AROS_LDA(  ASN1_TLC *, ___ctx,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,ASN1_item_ex_i2d,
AROS_LDA(  ASN1_VALUE **, ___pval,A0),
AROS_LDA(  unsigned char **, ___out,A1),
AROS_LDA(  const ASN1_ITEM *, ___it,A2),
AROS_LDA(  int, ___tag,D0),
AROS_LDA(  int, ___aclass,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(size_t ,BIO_ctrl_pending,
AROS_LDA(  BIO *, ___b,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(size_t ,BIO_ctrl_wpending,
AROS_LDA(  BIO *, ___b,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(size_t ,BIO_ctrl_get_write_guarantee,
AROS_LDA(  BIO *, ___b,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(size_t ,BIO_ctrl_get_read_request,
AROS_LDA(  BIO *, ___b,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,BIO_ctrl_reset_read_request,
AROS_LDA(  BIO *, ___b,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,BIO_set_ex_data,
AROS_LDA(  BIO *, ___bio,A0),
AROS_LDA(  int, ___idx,D0),
AROS_LDA(  void *, ___data,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void * ,BIO_get_ex_data,
AROS_LDA(  BIO *, ___bio,A0),
AROS_LDA(  int, ___idx,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(uint64_t ,BIO_number_read,
AROS_LDA(  BIO *, ___bio,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(uint64_t ,BIO_number_written,
AROS_LDA(  BIO *, ___bio,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const BIO_METHOD * ,BIO_s_file,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(BIO * ,BIO_new_file,
AROS_LDA(  const char *, ___filename,A0),
AROS_LDA(  const char *, ___mode,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(BIO * ,BIO_new_fp_amiga,
AROS_LDA(  BPTR, ___stream,A0),
AROS_LDA(  int, ___close_flag,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(BIO * ,BIO_new,
AROS_LDA(  const BIO_METHOD *, ___type,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,BIO_free,
AROS_LDA(  BIO *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,BIO_vfree,
AROS_LDA(  BIO *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,BIO_read,
AROS_LDA(  BIO *, ___b,A0),
AROS_LDA(  void *, ___data,A1),
AROS_LDA(  int, ___dlen,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,BIO_gets,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  char *, ___buf,A1),
AROS_LDA(  int, ___size,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,BIO_write,
AROS_LDA(  BIO *, ___b,A0),
AROS_LDA(  const void *, ___data,A1),
AROS_LDA(  int, ___dlen,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,BIO_puts,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  const char *, ___buf,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,BIO_indent,
AROS_LDA(  BIO *, ___b,A0),
AROS_LDA(  int, ___indent,D0),
AROS_LDA(  int, ___max,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(long ,BIO_ctrl,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  int, ___cmd,D0),
AROS_LDA(  long, ___larg,D1),
AROS_LDA(  void *, ___parg,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(long ,BIO_callback_ctrl,
AROS_LDA(  BIO *, ___b,A0),
AROS_LDA(  int, ___cmd,D0),
AROS_LDA(  BIO_info_cb *, ___fp,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void * ,BIO_ptr_ctrl,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  int, ___cmd,D0),
AROS_LDA(  long, ___larg,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(long ,BIO_int_ctrl,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  int, ___cmd,D0),
AROS_LDA(  long, ___larg,D1),
AROS_LDA(  int, ___iarg,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(BIO * ,BIO_push,
AROS_LDA(  BIO *, ___b,A0),
AROS_LDA(  BIO *, ___append,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(BIO * ,BIO_pop,
AROS_LDA(  BIO *, ___b,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,BIO_free_all,
AROS_LDA(  BIO *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(BIO * ,BIO_find_type,
AROS_LDA(  BIO *, ___b,A0),
AROS_LDA(  int, ___bio_type,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(BIO * ,BIO_next,
AROS_LDA(  BIO *, ___b,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(BIO * ,BIO_get_retry_BIO,
AROS_LDA(  BIO *, ___bio,A0),
AROS_LDA(  int *, ___reason,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,BIO_get_retry_reason,
AROS_LDA(  BIO *, ___bio,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(BIO * ,BIO_dup_chain,
AROS_LDA(  BIO *, ___in,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,BIO_nread0,
AROS_LDA(  BIO *, ___bio,A0),
AROS_LDA(  char **, ___buf,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,BIO_nread,
AROS_LDA(  BIO *, ___bio,A0),
AROS_LDA(  char **, ___buf,A1),
AROS_LDA(  int, ___num,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,BIO_nwrite0,
AROS_LDA(  BIO *, ___bio,A0),
AROS_LDA(  char **, ___buf,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,BIO_nwrite,
AROS_LDA(  BIO *, ___bio,A0),
AROS_LDA(  char **, ___buf,A1),
AROS_LDA(  int, ___num,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(long ,BIO_debug_callback,
AROS_LDA(  BIO *, ___bio,A0),
AROS_LDA(  int, ___cmd,D0),
AROS_LDA(  const char *, ___argp,A1),
AROS_LDA(  int, ___argi,D1),
AROS_LDA(  long, ___argl,D2),
AROS_LDA(  long, ___ret,D3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const BIO_METHOD * ,BIO_s_mem,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(BIO * ,BIO_new_mem_buf,
AROS_LDA(  const void *, ___buf,A0),
AROS_LDA(  int, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const BIO_METHOD * ,BIO_s_socket,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const BIO_METHOD * ,BIO_s_connect,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const BIO_METHOD * ,BIO_s_accept,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const BIO_METHOD * ,BIO_s_fd,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const BIO_METHOD * ,BIO_s_log,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const BIO_METHOD * ,BIO_s_bio,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const BIO_METHOD * ,BIO_s_null,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const BIO_METHOD * ,BIO_f_null,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const BIO_METHOD * ,BIO_f_buffer,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const BIO_METHOD * ,BIO_f_nbio_test,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,BIO_sock_should_retry,
AROS_LDA(  int, ___i,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,BIO_sock_non_fatal_error,
AROS_LDA(  int, ___error,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,BIO_fd_should_retry,
AROS_LDA(  int, ___i,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,BIO_fd_non_fatal_error,
AROS_LDA(  int, ___error,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,BIO_dump,
AROS_LDA(  BIO *, ___b,A0),
AROS_LDA(  const char *, ___bytes,A1),
AROS_LDA(  int, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,BIO_dump_indent,
AROS_LDA(  BIO *, ___b,A0),
AROS_LDA(  const char *, ___bytes,A1),
AROS_LDA(  int, ___len,D0),
AROS_LDA(  int, ___indent,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(struct hostent * ,BIO_gethostbyname,
AROS_LDA(  const char *, ___name,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,BIO_sock_error,
AROS_LDA(  int, ___sock,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,BIO_socket_ioctl,
AROS_LDA(  int, ___fd,D0),
AROS_LDA(  long, ___type,D1),
AROS_LDA(  void *, ___arg,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,BIO_socket_nbio,
AROS_LDA(  int, ___fd,D0),
AROS_LDA(  int, ___mode,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,BIO_get_port,
AROS_LDA(  const char *, ___str,A0),
AROS_LDA(  unsigned short *, ___port_ptr,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,BIO_get_host_ip,
AROS_LDA(  const char *, ___str,A0),
AROS_LDA(  unsigned char *, ___ip,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,BIO_get_accept_socket,
AROS_LDA(  char *, ___host_port,A0),
AROS_LDA(  int, ___mode,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,BIO_accept,
AROS_LDA(  int, ___sock,D0),
AROS_LDA(  char **, ___ip_port,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(int ,BIO_sock_init,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,BIO_set_tcp_ndelay,
AROS_LDA(  int, ___sock,D0),
AROS_LDA(  int, ___turn_on,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(BIO * ,BIO_new_socket,
AROS_LDA(  int, ___sock,D0),
AROS_LDA(  int, ___close_flag,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(BIO * ,BIO_new_fd,
AROS_LDA(  int, ___fd,D0),
AROS_LDA(  int, ___close_flag,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(BIO * ,BIO_new_connect,
AROS_LDA(  const char *, ___host_port,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(BIO * ,BIO_new_accept,
AROS_LDA(  const char *, ___host_port,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,BIO_new_bio_pair,
AROS_LDA(  BIO **, ___bio1,A0),
AROS_LDA(  size_t, ___writebuf1,D0),
AROS_LDA(  BIO **, ___bio2,A1),
AROS_LDA(  size_t, ___writebuf2,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,BIO_copy_next_retry,
AROS_LDA(  BIO *, ___b,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,BIO_vprintf,
AROS_LDA(  BIO *, ___bio,A0),
AROS_LDA(  const char *, ___format,A1),
AROS_LDA(  long *, ___args,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,BIO_vsnprintf,
AROS_LDA(  char *, ___buf,A0),
AROS_LDA(  size_t, ___n,D0),
AROS_LDA(  const char *, ___format,A1),
AROS_LDA(  long *, ___args,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(int ,ERR_load_BIO_strings,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const BIGNUM * ,BN_value_one,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(char * ,BN_options,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(BN_CTX * ,BN_CTX_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,BN_CTX_free,
AROS_LDA(  BN_CTX *, ___c,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,BN_CTX_start,
AROS_LDA(  BN_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(BIGNUM * ,BN_CTX_get,
AROS_LDA(  BN_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,BN_CTX_end,
AROS_LDA(  BN_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,BN_rand,
AROS_LDA(  BIGNUM *, ___rnd,A0),
AROS_LDA(  int, ___bits,D0),
AROS_LDA(  int, ___top,D1),
AROS_LDA(  int, ___bottom,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,BN_pseudo_rand,
AROS_LDA(  BIGNUM *, ___rnd,A0),
AROS_LDA(  int, ___bits,D0),
AROS_LDA(  int, ___top,D1),
AROS_LDA(  int, ___bottom,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,BN_rand_range,
AROS_LDA(  BIGNUM *, ___rnd,A0),
AROS_LDA(  BIGNUM *, ___range,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,BN_pseudo_rand_range,
AROS_LDA(  BIGNUM *, ___rnd,A0),
AROS_LDA(  BIGNUM *, ___range,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,BN_num_bits,
AROS_LDA(  const BIGNUM *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,BN_num_bits_word,
AROS_LDA(  BN_ULONG, ___a,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(BIGNUM * ,BN_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,BN_clear_free,
AROS_LDA(  BIGNUM *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(BIGNUM * ,BN_copy,
AROS_LDA(  BIGNUM *, ___a,A0),
AROS_LDA(  const BIGNUM *, ___b,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,BN_swap,
AROS_LDA(  BIGNUM *, ___a,A0),
AROS_LDA(  BIGNUM *, ___b,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(BIGNUM * ,BN_bin2bn,
AROS_LDA(  const unsigned char *, ___s,A0),
AROS_LDA(  int, ___len,D0),
AROS_LDA(  BIGNUM *, ___ret,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,BN_bn2bin,
AROS_LDA(  const BIGNUM *, ___a,A0),
AROS_LDA(  unsigned char *, ___to,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(BIGNUM * ,BN_mpi2bn,
AROS_LDA(  const unsigned char *, ___s,A0),
AROS_LDA(  int, ___len,D0),
AROS_LDA(  BIGNUM *, ___ret,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,BN_bn2mpi,
AROS_LDA(  const BIGNUM *, ___a,A0),
AROS_LDA(  unsigned char *, ___to,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,BN_sub,
AROS_LDA(  BIGNUM *, ___r,A0),
AROS_LDA(  const BIGNUM *, ___a,A1),
AROS_LDA(  const BIGNUM *, ___b,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,BN_usub,
AROS_LDA(  BIGNUM *, ___r,A0),
AROS_LDA(  const BIGNUM *, ___a,A1),
AROS_LDA(  const BIGNUM *, ___b,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,BN_uadd,
AROS_LDA(  BIGNUM *, ___r,A0),
AROS_LDA(  const BIGNUM *, ___a,A1),
AROS_LDA(  const BIGNUM *, ___b,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,BN_add,
AROS_LDA(  BIGNUM *, ___r,A0),
AROS_LDA(  const BIGNUM *, ___a,A1),
AROS_LDA(  const BIGNUM *, ___b,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,BN_mul,
AROS_LDA(  BIGNUM *, ___r,A0),
AROS_LDA(  const BIGNUM *, ___a,A1),
AROS_LDA(  const BIGNUM *, ___b,A2),
AROS_LDA(  BN_CTX *, ___ctx,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,BN_sqr,
AROS_LDA(  BIGNUM *, ___r,A0),
AROS_LDA(  const BIGNUM *, ___a,A1),
AROS_LDA(  BN_CTX *, ___ctx,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,BN_div,
AROS_LDA(  BIGNUM *, ___dv,A0),
AROS_LDA(  BIGNUM *, ___rem,A1),
AROS_LDA(  const BIGNUM *, ___m,A2),
AROS_LDA(  const BIGNUM *, ___d,A3),
AROS_LDA(  BN_CTX *, ___ctx,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,BN_nnmod,
AROS_LDA(  BIGNUM *, ___r,A0),
AROS_LDA(  const BIGNUM *, ___m,A1),
AROS_LDA(  const BIGNUM *, ___d,A2),
AROS_LDA(  BN_CTX *, ___ctx,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,BN_mod_add,
AROS_LDA(  BIGNUM *, ___r,A0),
AROS_LDA(  const BIGNUM *, ___a,A1),
AROS_LDA(  const BIGNUM *, ___b,A2),
AROS_LDA(  const BIGNUM *, ___m,A3),
AROS_LDA(  BN_CTX *, ___ctx,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,BN_mod_add_quick,
AROS_LDA(  BIGNUM *, ___r,A0),
AROS_LDA(  const BIGNUM *, ___a,A1),
AROS_LDA(  const BIGNUM *, ___b,A2),
AROS_LDA(  const BIGNUM *, ___m,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,BN_mod_sub,
AROS_LDA(  BIGNUM *, ___r,A0),
AROS_LDA(  const BIGNUM *, ___a,A1),
AROS_LDA(  const BIGNUM *, ___b,A2),
AROS_LDA(  const BIGNUM *, ___m,A3),
AROS_LDA(  BN_CTX *, ___ctx,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,BN_mod_sub_quick,
AROS_LDA(  BIGNUM *, ___r,A0),
AROS_LDA(  const BIGNUM *, ___a,A1),
AROS_LDA(  const BIGNUM *, ___b,A2),
AROS_LDA(  const BIGNUM *, ___m,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,BN_mod_mul,
AROS_LDA(  BIGNUM *, ___r,A0),
AROS_LDA(  const BIGNUM *, ___a,A1),
AROS_LDA(  const BIGNUM *, ___b,A2),
AROS_LDA(  const BIGNUM *, ___m,A3),
AROS_LDA(  BN_CTX *, ___ctx,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,BN_mod_sqr,
AROS_LDA(  BIGNUM *, ___r,A0),
AROS_LDA(  const BIGNUM *, ___a,A1),
AROS_LDA(  const BIGNUM *, ___m,A2),
AROS_LDA(  BN_CTX *, ___ctx,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,BN_mod_lshift1,
AROS_LDA(  BIGNUM *, ___r,A0),
AROS_LDA(  const BIGNUM *, ___a,A1),
AROS_LDA(  const BIGNUM *, ___m,A2),
AROS_LDA(  BN_CTX *, ___ctx,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,BN_mod_lshift1_quick,
AROS_LDA(  BIGNUM *, ___r,A0),
AROS_LDA(  const BIGNUM *, ___a,A1),
AROS_LDA(  const BIGNUM *, ___m,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,BN_mod_lshift,
AROS_LDA(  BIGNUM *, ___r,A0),
AROS_LDA(  const BIGNUM *, ___a,A1),
AROS_LDA(  int, ___n,D0),
AROS_LDA(  const BIGNUM *, ___m,A2),
AROS_LDA(  BN_CTX *, ___ctx,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,BN_mod_lshift_quick,
AROS_LDA(  BIGNUM *, ___r,A0),
AROS_LDA(  const BIGNUM *, ___a,A1),
AROS_LDA(  int, ___n,D0),
AROS_LDA(  const BIGNUM *, ___m,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(BN_ULONG ,BN_mod_word,
AROS_LDA(  const BIGNUM *, ___a,A0),
AROS_LDA(  BN_ULONG, ___w,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(BN_ULONG ,BN_div_word,
AROS_LDA(  BIGNUM *, ___a,A0),
AROS_LDA(  BN_ULONG, ___w,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,BN_mul_word,
AROS_LDA(  BIGNUM *, ___a,A0),
AROS_LDA(  BN_ULONG, ___w,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,BN_add_word,
AROS_LDA(  BIGNUM *, ___a,A0),
AROS_LDA(  BN_ULONG, ___w,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,BN_sub_word,
AROS_LDA(  BIGNUM *, ___a,A0),
AROS_LDA(  BN_ULONG, ___w,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,BN_set_word,
AROS_LDA(  BIGNUM *, ___a,A0),
AROS_LDA(  BN_ULONG, ___w,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(BN_ULONG ,BN_get_word,
AROS_LDA(  const BIGNUM *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,BN_cmp,
AROS_LDA(  const BIGNUM *, ___a,A0),
AROS_LDA(  const BIGNUM *, ___b,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,BN_free,
AROS_LDA(  BIGNUM *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,BN_is_bit_set,
AROS_LDA(  const BIGNUM *, ___a,A0),
AROS_LDA(  int, ___n,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,BN_lshift,
AROS_LDA(  BIGNUM *, ___r,A0),
AROS_LDA(  const BIGNUM *, ___a,A1),
AROS_LDA(  int, ___n,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,BN_lshift1,
AROS_LDA(  BIGNUM *, ___r,A0),
AROS_LDA(  const BIGNUM *, ___a,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,BN_exp,
AROS_LDA(  BIGNUM *, ___r,A0),
AROS_LDA(  const BIGNUM *, ___a,A1),
AROS_LDA(  const BIGNUM *, ___p,A2),
AROS_LDA(  BN_CTX *, ___ctx,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,BN_mod_exp,
AROS_LDA(  BIGNUM *, ___r,A0),
AROS_LDA(  const BIGNUM *, ___a,A1),
AROS_LDA(  const BIGNUM *, ___p,A2),
AROS_LDA(  const BIGNUM *, ___m,A3),
AROS_LDA(  BN_CTX *, ___ctx,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int ,BN_mod_exp_mont,
AROS_LDA(  BIGNUM *, ___r,A0),
AROS_LDA(  const BIGNUM *, ___a,A1),
AROS_LDA(  const BIGNUM *, ___p,A2),
AROS_LDA(  const BIGNUM *, ___m,A3),
AROS_LDA(  BN_CTX *, ___ctx,D0),
AROS_LDA(  BN_MONT_CTX *, ___m_ctx,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int ,BN_mod_exp_mont_word,
AROS_LDA(  BIGNUM *, ___r,A0),
AROS_LDA(  BN_ULONG, ___a,D0),
AROS_LDA(  const BIGNUM *, ___p,A1),
AROS_LDA(  const BIGNUM *, ___m,A2),
AROS_LDA(  BN_CTX *, ___ctx,A3),
AROS_LDA(  BN_MONT_CTX *, ___m_ctx,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD8(int ,BN_mod_exp2_mont,
AROS_LDA(  BIGNUM *, ___r,A0),
AROS_LDA(  const BIGNUM *, ___a1,A1),
AROS_LDA(  const BIGNUM *, ___p1,A2),
AROS_LDA(  const BIGNUM *, ___a2,A3),
AROS_LDA(  const BIGNUM *, ___p2,D0),
AROS_LDA(  const BIGNUM *, ___m,D1),
AROS_LDA(  BN_CTX *, ___ctx,D2),
AROS_LDA(  BN_MONT_CTX *, ___m_ctx,D3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,BN_mod_exp_simple,
AROS_LDA(  BIGNUM *, ___r,A0),
AROS_LDA(  const BIGNUM *, ___a,A1),
AROS_LDA(  const BIGNUM *, ___p,A2),
AROS_LDA(  const BIGNUM *, ___m,A3),
AROS_LDA(  BN_CTX *, ___ctx,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,BN_mask_bits,
AROS_LDA(  BIGNUM *, ___a,A0),
AROS_LDA(  int, ___n,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,BN_print,
AROS_LDA(  BIO *, ___fp,A0),
AROS_LDA(  const BIGNUM *, ___a,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,BN_reciprocal,
AROS_LDA(  BIGNUM *, ___r,A0),
AROS_LDA(  const BIGNUM *, ___m,A1),
AROS_LDA(  int, ___len,D0),
AROS_LDA(  BN_CTX *, ___ctx,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,BN_rshift,
AROS_LDA(  BIGNUM *, ___r,A0),
AROS_LDA(  const BIGNUM *, ___a,A1),
AROS_LDA(  int, ___n,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,BN_rshift1,
AROS_LDA(  BIGNUM *, ___r,A0),
AROS_LDA(  const BIGNUM *, ___a,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,BN_clear,
AROS_LDA(  BIGNUM *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(BIGNUM * ,BN_dup,
AROS_LDA(  const BIGNUM *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,BN_ucmp,
AROS_LDA(  const BIGNUM *, ___a,A0),
AROS_LDA(  const BIGNUM *, ___b,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,BN_set_bit,
AROS_LDA(  BIGNUM *, ___a,A0),
AROS_LDA(  int, ___n,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,BN_clear_bit,
AROS_LDA(  BIGNUM *, ___a,A0),
AROS_LDA(  int, ___n,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(char * ,BN_bn2hex,
AROS_LDA(  const BIGNUM *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(char * ,BN_bn2dec,
AROS_LDA(  const BIGNUM *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,BN_hex2bn,
AROS_LDA(  BIGNUM **, ___a,A0),
AROS_LDA(  const char *, ___str,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,BN_dec2bn,
AROS_LDA(  BIGNUM **, ___a,A0),
AROS_LDA(  const char *, ___str,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,BN_gcd,
AROS_LDA(  BIGNUM *, ___r,A0),
AROS_LDA(  const BIGNUM *, ___a,A1),
AROS_LDA(  const BIGNUM *, ___b,A2),
AROS_LDA(  BN_CTX *, ___ctx,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,BN_kronecker,
AROS_LDA(  const BIGNUM *, ___a,A0),
AROS_LDA(  const BIGNUM *, ___b,A1),
AROS_LDA(  BN_CTX *, ___ctx,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(BIGNUM * ,BN_mod_inverse,
AROS_LDA(  BIGNUM *, ___ret,A0),
AROS_LDA(  const BIGNUM *, ___a,A1),
AROS_LDA(  const BIGNUM *, ___n,A2),
AROS_LDA(  BN_CTX *, ___ctx,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(BIGNUM * ,BN_mod_sqrt,
AROS_LDA(  BIGNUM *, ___ret,A0),
AROS_LDA(  const BIGNUM *, ___a,A1),
AROS_LDA(  const BIGNUM *, ___n,A2),
AROS_LDA(  BN_CTX *, ___ctx,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(BIGNUM *,BN_generate_prime,
AROS_LDA(  BIGNUM *, ___ret,A0),
AROS_LDA(  int, ___bits,D0),
AROS_LDA(  int, ___safe,D1),
AROS_LDA(  const BIGNUM *, ___add,A1),
AROS_LDA(  const BIGNUM *, ___rem,A2),
AROS_LDA(APTR, ___callback,A3),
AROS_LDA(  void *, ___cb_arg,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,BN_is_prime,
AROS_LDA(  const BIGNUM *, ___p,A0),
AROS_LDA(  int, ___nchecks,D0),
AROS_LDA(APTR, ___callback,A1),
AROS_LDA(  BN_CTX *, ___ctx,A2),
AROS_LDA(  void *, ___cb_arg,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int ,BN_is_prime_fasttest,
AROS_LDA(  const BIGNUM *, ___p,A0),
AROS_LDA(  int, ___nchecks,D0),
AROS_LDA(APTR, ___callback,A1),
AROS_LDA(  BN_CTX *, ___ctx,A2),
AROS_LDA(  void *, ___cb_arg,A3),
AROS_LDA(  int, ___do_trial_division,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(BN_MONT_CTX * ,BN_MONT_CTX_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,BN_mod_mul_montgomery,
AROS_LDA(  BIGNUM *, ___r,A0),
AROS_LDA(  const BIGNUM *, ___a,A1),
AROS_LDA(  const BIGNUM *, ___b,A2),
AROS_LDA(  BN_MONT_CTX *, ___mont,A3),
AROS_LDA(  BN_CTX *, ___ctx,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,BN_from_montgomery,
AROS_LDA(  BIGNUM *, ___r,A0),
AROS_LDA(  const BIGNUM *, ___a,A1),
AROS_LDA(  BN_MONT_CTX *, ___mont,A2),
AROS_LDA(  BN_CTX *, ___ctx,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,BN_MONT_CTX_free,
AROS_LDA(  BN_MONT_CTX *, ___mont,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,BN_MONT_CTX_set,
AROS_LDA(  BN_MONT_CTX *, ___mont,A0),
AROS_LDA(  const BIGNUM *, ___mod,A1),
AROS_LDA(  BN_CTX *, ___ctx,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(BN_MONT_CTX * ,BN_MONT_CTX_copy,
AROS_LDA(  BN_MONT_CTX *, ___to,A0),
AROS_LDA(  BN_MONT_CTX *, ___from,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(BN_BLINDING * ,BN_BLINDING_new,
AROS_LDA(  BIGNUM *, ___A,A0),
AROS_LDA(  BIGNUM *, ___Ai,A1),
AROS_LDA(  BIGNUM *, ___mod,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,BN_BLINDING_free,
AROS_LDA(  BN_BLINDING *, ___b,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,BN_BLINDING_update,
AROS_LDA(  BN_BLINDING *, ___b,A0),
AROS_LDA(  BN_CTX *, ___ctx,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,BN_BLINDING_convert,
AROS_LDA(  BIGNUM *, ___n,A0),
AROS_LDA(  BN_BLINDING *, ___r,A1),
AROS_LDA(  BN_CTX *, ___ctx,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,BN_BLINDING_invert,
AROS_LDA(  BIGNUM *, ___n,A0),
AROS_LDA(  BN_BLINDING *, ___b,A1),
AROS_LDA(  BN_CTX *, ___ctx,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void ,BN_set_params,
AROS_LDA(  int, ___mul,D0),
AROS_LDA(  int, ___high,D1),
AROS_LDA(  int, ___low,D2),
AROS_LDA(  int, ___mont,D3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,BN_get_params,
AROS_LDA(  int, ___which,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(BN_RECP_CTX * ,BN_RECP_CTX_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,BN_RECP_CTX_free,
AROS_LDA(  BN_RECP_CTX *, ___recp,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,BN_RECP_CTX_set,
AROS_LDA(  BN_RECP_CTX *, ___recp,A0),
AROS_LDA(  const BIGNUM *, ___rdiv,A1),
AROS_LDA(  BN_CTX *, ___ctx,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,BN_mod_mul_reciprocal,
AROS_LDA(  BIGNUM *, ___r,A0),
AROS_LDA(  const BIGNUM *, ___x,A1),
AROS_LDA(  const BIGNUM *, ___y,A2),
AROS_LDA(  BN_RECP_CTX *, ___recp,A3),
AROS_LDA(  BN_CTX *, ___ctx,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,BN_mod_exp_recp,
AROS_LDA(  BIGNUM *, ___r,A0),
AROS_LDA(  const BIGNUM *, ___a,A1),
AROS_LDA(  const BIGNUM *, ___p,A2),
AROS_LDA(  const BIGNUM *, ___m,A3),
AROS_LDA(  BN_CTX *, ___ctx,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,BN_div_recp,
AROS_LDA(  BIGNUM *, ___dv,A0),
AROS_LDA(  BIGNUM *, ___rem,A1),
AROS_LDA(  const BIGNUM *, ___m,A2),
AROS_LDA(  BN_RECP_CTX *, ___recp,A3),
AROS_LDA(  BN_CTX *, ___ctx,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,BN_bntest_rand,
AROS_LDA(  BIGNUM *, ___rnd,A0),
AROS_LDA(  int, ___bits,D0),
AROS_LDA(  int, ___top,D1),
AROS_LDA(  int, ___bottom,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(int ,ERR_load_BN_strings,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(BUF_MEM * ,BUF_MEM_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,BUF_MEM_free,
AROS_LDA(  BUF_MEM *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(size_t ,BUF_MEM_grow,
AROS_LDA(  BUF_MEM *, ___str,A0),
AROS_LDA(  size_t, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(size_t ,BUF_MEM_grow_clean,
AROS_LDA(  BUF_MEM *, ___str,A0),
AROS_LDA(  size_t, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(int ,ERR_load_BUF_strings,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(COMP_CTX * ,COMP_CTX_new,
AROS_LDA(  COMP_METHOD *, ___meth,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,COMP_CTX_free,
AROS_LDA(  COMP_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,COMP_compress_block,
AROS_LDA(  COMP_CTX *, ___ctx,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  int, ___olen,D0),
AROS_LDA(  unsigned char *, ___in,A2),
AROS_LDA(  int, ___ilen,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,COMP_expand_block,
AROS_LDA(  COMP_CTX *, ___ctx,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  int, ___olen,D0),
AROS_LDA(  unsigned char *, ___in,A2),
AROS_LDA(  int, ___ilen,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(COMP_METHOD * ,COMP_zlib,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(int ,ERR_load_COMP_strings,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,CONF_set_default_method,
AROS_LDA(  CONF_METHOD *, ___meth,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,CONF_set_nconf,
AROS_LDA(  CONF *, ___conf,A0),
AROS_LDA(  LHASH_OF(CONF_VALUE) *, ___hash,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(LHASH_OF(CONF_VALUE) * ,CONF_load,
AROS_LDA(  LHASH_OF(CONF_VALUE) *, ___conf,A0),
AROS_LDA(  const char *, ___file,A1),
AROS_LDA(  long *, ___eline,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(LHASH_OF(CONF_VALUE) * ,CONF_load_bio,
AROS_LDA(  LHASH_OF(CONF_VALUE) *, ___conf,A0),
AROS_LDA(  BIO *, ___bp,A1),
AROS_LDA(  long *, ___eline,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(STACK_OF(CONF_VALUE) * ,CONF_get_section,
AROS_LDA(  LHASH_OF(CONF_VALUE) *, ___conf,A0),
AROS_LDA(  const char *, ___section,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(char * ,CONF_get_string,
AROS_LDA(  LHASH_OF(CONF_VALUE) *, ___conf,A0),
AROS_LDA(  const char *, ___group,A1),
AROS_LDA(  const char *, ___name,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(long ,CONF_get_number,
AROS_LDA(  LHASH_OF(CONF_VALUE) *, ___conf,A0),
AROS_LDA(  const char *, ___group,A1),
AROS_LDA(  const char *, ___name,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,CONF_free,
AROS_LDA(  LHASH_OF(CONF_VALUE) *, ___conf,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,CONF_dump_bio,
AROS_LDA(  LHASH_OF(CONF_VALUE) *, ___conf,A0),
AROS_LDA(  BIO *, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,OPENSSL_config,
AROS_LDA(  const char *, ___config_name,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(CONF * ,NCONF_new,
AROS_LDA(  CONF_METHOD *, ___meth,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(CONF_METHOD * ,NCONF_default,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(CONF_METHOD * ,NCONF_WIN32,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,NCONF_free,
AROS_LDA(  CONF *, ___conf,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,NCONF_free_data,
AROS_LDA(  CONF *, ___conf,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,NCONF_load,
AROS_LDA(  CONF *, ___conf,A0),
AROS_LDA(  const char *, ___file,A1),
AROS_LDA(  long *, ___eline,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,NCONF_load_bio,
AROS_LDA(  CONF *, ___conf,A0),
AROS_LDA(  BIO *, ___bp,A1),
AROS_LDA(  long *, ___eline,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(STACK_OF(CONF_VALUE) * ,NCONF_get_section,
AROS_LDA(  const CONF *, ___conf,A0),
AROS_LDA(  const char *, ___section,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(char * ,NCONF_get_string,
AROS_LDA(  const CONF *, ___conf,A0),
AROS_LDA(  const char *, ___group,A1),
AROS_LDA(  const char *, ___name,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,NCONF_get_number_e,
AROS_LDA(  const CONF *, ___conf,A0),
AROS_LDA(  const char *, ___group,A1),
AROS_LDA(  const char *, ___name,A2),
AROS_LDA(  long *, ___result,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,NCONF_dump_bio,
AROS_LDA(  const CONF *, ___conf,A0),
AROS_LDA(  BIO *, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,CONF_modules_load,
AROS_LDA(  const CONF *, ___cnf,A0),
AROS_LDA(  const char *, ___appname,A1),
AROS_LDA(  unsigned long, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,CONF_modules_load_file,
AROS_LDA(  const char *, ___filename,A0),
AROS_LDA(  const char *, ___appname,A1),
AROS_LDA(  unsigned long, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,CONF_modules_unload,
AROS_LDA(  int, ___all,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(void ,CONF_modules_finish,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,CONF_module_add,
AROS_LDA(  const char *, ___name,A0),
AROS_LDA(  conf_init_func *, ___ifunc,A1),
AROS_LDA(  conf_finish_func *, ___ffunc,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char * ,CONF_imodule_get_name,
AROS_LDA(  const CONF_IMODULE *, ___md,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char * ,CONF_imodule_get_value,
AROS_LDA(  const CONF_IMODULE *, ___md,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void * ,CONF_imodule_get_usr_data,
AROS_LDA(  const CONF_IMODULE *, ___md,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,CONF_imodule_set_usr_data,
AROS_LDA(  CONF_IMODULE *, ___md,A0),
AROS_LDA(  void *, ___usr_data,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(CONF_MODULE * ,CONF_imodule_get_module,
AROS_LDA(  const CONF_IMODULE *, ___md,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(unsigned long ,CONF_imodule_get_flags,
AROS_LDA(  const CONF_IMODULE *, ___md,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,CONF_imodule_set_flags,
AROS_LDA(  CONF_IMODULE *, ___md,A0),
AROS_LDA(  unsigned long, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void * ,CONF_module_get_usr_data,
AROS_LDA(  CONF_MODULE *, ___pmod,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,CONF_module_set_usr_data,
AROS_LDA(  CONF_MODULE *, ___pmod,A0),
AROS_LDA(  void *, ___usr_data,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(char * ,CONF_get1_default_config_file,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,CONF_parse_list,
AROS_LDA(  const char *, ___list,A0),
AROS_LDA(  int, ___sep,D0),
AROS_LDA(  int, ___nospc,D1),
AROS_LDA(APTR, ___list_cb,A1),
AROS_LDA(  void *, ___arg,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(void ,OPENSSL_load_builtin_modules,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(int ,ERR_load_CONF_strings,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,CRYPTO_mem_ctrl,
AROS_LDA(  int, ___mode,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(int ,OPENSSL_issetugid,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int ,CRYPTO_get_ex_new_index,
AROS_LDA(  int, ___class_index,D0),
AROS_LDA(  long, ___argl,D1),
AROS_LDA(  void *, ___argp,A0),
AROS_LDA(  CRYPTO_EX_new *, ___new_func,A1),
AROS_LDA(  CRYPTO_EX_dup *, ___dup_func,A2),
AROS_LDA(  CRYPTO_EX_free *, ___free_func,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,CRYPTO_new_ex_data,
AROS_LDA(  int, ___class_index,D0),
AROS_LDA(  void *, ___obj,A0),
AROS_LDA(  CRYPTO_EX_DATA *, ___ad,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,CRYPTO_dup_ex_data,
AROS_LDA(  int, ___class_index,D0),
AROS_LDA(  CRYPTO_EX_DATA *, ___to,A0),
AROS_LDA(  const CRYPTO_EX_DATA *, ___from,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,CRYPTO_free_ex_data,
AROS_LDA(  int, ___class_index,D0),
AROS_LDA(  void *, ___obj,A0),
AROS_LDA(  CRYPTO_EX_DATA *, ___ad,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,CRYPTO_set_ex_data,
AROS_LDA(  CRYPTO_EX_DATA *, ___ad,A0),
AROS_LDA(  int, ___idx,D0),
AROS_LDA(  void *, ___val,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void * ,CRYPTO_get_ex_data,
AROS_LDA(  const CRYPTO_EX_DATA *, ___ad,A0),
AROS_LDA(  int, ___idx,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,CRYPTO_set_mem_functions,
AROS_LDA(APTR,___m,A0),
AROS_LDA(APTR,___r,A1),
AROS_LDA(APTR,___f,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,CRYPTO_get_mem_functions,
AROS_LDA(APTR  ,___m,A0),
AROS_LDA(APTR  ,___r,A1),
AROS_LDA(APTR  ,___f,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void * ,CRYPTO_malloc,
AROS_LDA(  size_t, ___num,D0),
AROS_LDA(  const char *, ___file,A0),
AROS_LDA(  int, ___line,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,CRYPTO_free,
AROS_LDA(  void *, ___str,A0),
AROS_LDA(  const char *, ___file,A1),
AROS_LDA(  int, ___line,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void * ,CRYPTO_realloc,
AROS_LDA(  void *, ___addr,A0),
AROS_LDA(  size_t, ___num,D0),
AROS_LDA(  const char *, ___file,A1),
AROS_LDA(  int, ___line,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,OPENSSL_cleanse,
AROS_LDA(  void *, ___ptr,A0),
AROS_LDA(  size_t, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(int ,ERR_load_CRYPTO_strings,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(void ,ERR_load_DSO_strings,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EC_METHOD * ,EC_GFp_simple_method,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EC_METHOD * ,EC_GFp_mont_method,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(EC_GROUP * ,EC_GROUP_new,
AROS_LDA(  const EC_METHOD *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,EC_GROUP_free,
AROS_LDA(  EC_GROUP *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,EC_GROUP_clear_free,
AROS_LDA(  EC_GROUP *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EC_GROUP_copy,
AROS_LDA(  EC_GROUP *, ___a,A0),
AROS_LDA(  const EC_GROUP *, ___b,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const EC_METHOD * ,EC_GROUP_method_of,
AROS_LDA(  const EC_GROUP *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,EC_GROUP_set_curve_GFp,
AROS_LDA(  EC_GROUP *, ___a1,A0),
AROS_LDA(  const BIGNUM *, ___p,A1),
AROS_LDA(  const BIGNUM *, ___a,A2),
AROS_LDA(  const BIGNUM *, ___b,A3),
AROS_LDA(  BN_CTX *, ___a2,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,EC_GROUP_get_curve_GFp,
AROS_LDA(  const EC_GROUP *, ___a1,A0),
AROS_LDA(  BIGNUM *, ___p,A1),
AROS_LDA(  BIGNUM *, ___a,A2),
AROS_LDA(  BIGNUM *, ___b,A3),
AROS_LDA(  BN_CTX *, ___a2,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(EC_GROUP * ,EC_GROUP_new_curve_GFp,
AROS_LDA(  const BIGNUM *, ___p,A0),
AROS_LDA(  const BIGNUM *, ___a,A1),
AROS_LDA(  const BIGNUM *, ___b,A2),
AROS_LDA(  BN_CTX *, ___a1,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,EC_GROUP_set_generator,
AROS_LDA(  EC_GROUP *, ___a1,A0),
AROS_LDA(  const EC_POINT *, ___generator,A1),
AROS_LDA(  const BIGNUM *, ___order,A2),
AROS_LDA(  const BIGNUM *, ___cofactor,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const EC_POINT * ,EC_GROUP_get0_generator,
AROS_LDA(  const EC_GROUP *, ___a1,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,EC_GROUP_get_order,
AROS_LDA(  const EC_GROUP *, ___a1,A0),
AROS_LDA(  BIGNUM *, ___order,A1),
AROS_LDA(  BN_CTX *, ___a2,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,EC_GROUP_get_cofactor,
AROS_LDA(  const EC_GROUP *, ___a1,A0),
AROS_LDA(  BIGNUM *, ___cofactor,A1),
AROS_LDA(  BN_CTX *, ___a2,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(EC_POINT * ,EC_POINT_new,
AROS_LDA(  const EC_GROUP *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,EC_POINT_free,
AROS_LDA(  EC_POINT *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,EC_POINT_clear_free,
AROS_LDA(  EC_POINT *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EC_POINT_copy,
AROS_LDA(  EC_POINT *, ___a,A0),
AROS_LDA(  const EC_POINT *, ___b,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const EC_METHOD * ,EC_POINT_method_of,
AROS_LDA(  const EC_POINT *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EC_POINT_set_to_infinity,
AROS_LDA(  const EC_GROUP *, ___a,A0),
AROS_LDA(  EC_POINT *, ___b,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int ,EC_POINT_set_Jprojective_coordinates_GFp,
AROS_LDA(  const EC_GROUP *, ___a1,A0),
AROS_LDA(  EC_POINT *, ___a2,A1),
AROS_LDA(  const BIGNUM *, ___x,A2),
AROS_LDA(  const BIGNUM *, ___y,A3),
AROS_LDA(  const BIGNUM *, ___z,D0),
AROS_LDA(  BN_CTX *, ___a3,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int ,EC_POINT_get_Jprojective_coordinates_GFp,
AROS_LDA(  const EC_GROUP *, ___a1,A0),
AROS_LDA(  const EC_POINT *, ___a2,A1),
AROS_LDA(  BIGNUM *, ___x,A2),
AROS_LDA(  BIGNUM *, ___y,A3),
AROS_LDA(  BIGNUM *, ___z,D0),
AROS_LDA(  BN_CTX *, ___a3,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,EC_POINT_set_affine_coordinates_GFp,
AROS_LDA(  const EC_GROUP *, ___a1,A0),
AROS_LDA(  EC_POINT *, ___a2,A1),
AROS_LDA(  const BIGNUM *, ___x,A2),
AROS_LDA(  const BIGNUM *, ___y,A3),
AROS_LDA(  BN_CTX *, ___a3,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,EC_POINT_get_affine_coordinates_GFp,
AROS_LDA(  const EC_GROUP *, ___a1,A0),
AROS_LDA(  const EC_POINT *, ___a2,A1),
AROS_LDA(  BIGNUM *, ___x,A2),
AROS_LDA(  BIGNUM *, ___y,A3),
AROS_LDA(  BN_CTX *, ___a3,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,EC_POINT_set_compressed_coordinates_GFp,
AROS_LDA(  const EC_GROUP *, ___a1,A0),
AROS_LDA(  EC_POINT *, ___a2,A1),
AROS_LDA(  const BIGNUM *, ___x,A2),
AROS_LDA(  int, ___y_bit,D0),
AROS_LDA(  BN_CTX *, ___a3,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(size_t ,EC_POINT_point2oct,
AROS_LDA(  const EC_GROUP *, ___a1,A0),
AROS_LDA(  const EC_POINT *, ___a2,A1),
AROS_LDA(  point_conversion_form_t, ___form,D0),
AROS_LDA(  unsigned char *, ___buf,A2),
AROS_LDA(  size_t, ___len,D1),
AROS_LDA(  BN_CTX *, ___a3,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,EC_POINT_oct2point,
AROS_LDA(  const EC_GROUP *, ___a1,A0),
AROS_LDA(  EC_POINT *, ___a2,A1),
AROS_LDA(  const unsigned char *, ___buf,A2),
AROS_LDA(  size_t, ___len,D0),
AROS_LDA(  BN_CTX *, ___a3,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,EC_POINT_add,
AROS_LDA(  const EC_GROUP *, ___a1,A0),
AROS_LDA(  EC_POINT *, ___r,A1),
AROS_LDA(  const EC_POINT *, ___a,A2),
AROS_LDA(  const EC_POINT *, ___b,A3),
AROS_LDA(  BN_CTX *, ___a2,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,EC_POINT_dbl,
AROS_LDA(  const EC_GROUP *, ___a1,A0),
AROS_LDA(  EC_POINT *, ___r,A1),
AROS_LDA(  const EC_POINT *, ___a,A2),
AROS_LDA(  BN_CTX *, ___a2,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,EC_POINT_invert,
AROS_LDA(  const EC_GROUP *, ___a1,A0),
AROS_LDA(  EC_POINT *, ___a2,A1),
AROS_LDA(  BN_CTX *, ___a3,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EC_POINT_is_at_infinity,
AROS_LDA(  const EC_GROUP *, ___a,A0),
AROS_LDA(  const EC_POINT *, ___b,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,EC_POINT_is_on_curve,
AROS_LDA(  const EC_GROUP *, ___a,A0),
AROS_LDA(  const EC_POINT *, ___b,A1),
AROS_LDA(  BN_CTX *, ___c,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,EC_POINT_cmp,
AROS_LDA(  const EC_GROUP *, ___a1,A0),
AROS_LDA(  const EC_POINT *, ___a,A1),
AROS_LDA(  const EC_POINT *, ___b,A2),
AROS_LDA(  BN_CTX *, ___a2,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,EC_POINT_make_affine,
AROS_LDA(  const EC_GROUP *, ___a,A0),
AROS_LDA(  EC_POINT *, ___b,A1),
AROS_LDA(  BN_CTX *, ___c,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,EC_POINTs_make_affine,
AROS_LDA(  const EC_GROUP *, ___a1,A0),
AROS_LDA(  size_t, ___num,D0),
AROS_LDA(  EC_POINT **, ___a2,A1),
AROS_LDA(  BN_CTX *, ___a3,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(int ,EC_POINTs_mul,
AROS_LDA(  const EC_GROUP *, ___a1,A0),
AROS_LDA(  EC_POINT *, ___r,A1),
AROS_LDA(  const BIGNUM *, ___a2,A2),
AROS_LDA(  size_t, ___num,D0),
AROS_LDA(  const EC_POINT **, ___a3,A3),
AROS_LDA(  const BIGNUM **, ___a4,D1),
AROS_LDA(  BN_CTX *, ___a5,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int ,EC_POINT_mul,
AROS_LDA(  const EC_GROUP *, ___a1,A0),
AROS_LDA(  EC_POINT *, ___r,A1),
AROS_LDA(  const BIGNUM *, ___a2,A2),
AROS_LDA(  const EC_POINT *, ___a3,A3),
AROS_LDA(  const BIGNUM *, ___a4,D0),
AROS_LDA(  BN_CTX *, ___a5,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EC_GROUP_precompute_mult,
AROS_LDA(  EC_GROUP *, ___a,A0),
AROS_LDA(  BN_CTX *, ___b,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(int ,ERR_load_EC_strings,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(void ,ERR_put_error,
AROS_LDA(  int, ___lib,D0),
AROS_LDA(  int, ___func,D1),
AROS_LDA(  int, ___reason,D2),
AROS_LDA(  const char *, ___file,A0),
AROS_LDA(  int, ___line,D3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,ERR_set_error_data,
AROS_LDA(  char *, ___data,A0),
AROS_LDA(  int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(unsigned long ,ERR_get_error,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(unsigned long ,ERR_get_error_line,
AROS_LDA(  const char **, ___file,A0),
AROS_LDA(  int *, ___line,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(unsigned long ,ERR_get_error_line_data,
AROS_LDA(  const char **, ___file,A0),
AROS_LDA(  int *, ___line,A1),
AROS_LDA(  const char **, ___data,A2),
AROS_LDA(  int *, ___flags,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(unsigned long ,ERR_peek_error,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(unsigned long ,ERR_peek_error_line,
AROS_LDA(  const char **, ___file,A0),
AROS_LDA(  int *, ___line,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(unsigned long ,ERR_peek_error_line_data,
AROS_LDA(  const char **, ___file,A0),
AROS_LDA(  int *, ___line,A1),
AROS_LDA(  const char **, ___data,A2),
AROS_LDA(  int *, ___flags,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(unsigned long ,ERR_peek_last_error,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(unsigned long ,ERR_peek_last_error_line,
AROS_LDA(  const char **, ___file,A0),
AROS_LDA(  int *, ___line,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(unsigned long ,ERR_peek_last_error_line_data,
AROS_LDA(  const char **, ___file,A0),
AROS_LDA(  int *, ___line,A1),
AROS_LDA(  const char **, ___data,A2),
AROS_LDA(  int *, ___flags,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(void ,ERR_clear_error,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(char * ,ERR_error_string,
AROS_LDA(  unsigned long, ___e,D0),
AROS_LDA(  char *, ___buf,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,ERR_error_string_n,
AROS_LDA(  unsigned long, ___e,D0),
AROS_LDA(  char *, ___buf,A0),
AROS_LDA(  size_t, ___len,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char * ,ERR_lib_error_string,
AROS_LDA(  unsigned long, ___e,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char * ,ERR_func_error_string,
AROS_LDA(  unsigned long, ___e,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char * ,ERR_reason_error_string,
AROS_LDA(  unsigned long, ___e,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,ERR_print_errors_cb,
AROS_LDA(APTR, ___cb,A0),
AROS_LDA(  void *, ___u,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,ERR_print_errors,
AROS_LDA(  BIO *, ___bp,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,ERR_add_error_vdata,
AROS_LDA(  int, ___num,D0),
AROS_LDA(  long *, ___args,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ERR_load_strings,
AROS_LDA(  int, ___lib,D0),
AROS_LDA(  ERR_STRING_DATA *, ___str,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ERR_unload_strings,
AROS_LDA(  int, ___lib,D0),
AROS_LDA(  ERR_STRING_DATA *, ___str,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(int ,ERR_load_ERR_strings,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(ERR_STATE * ,ERR_get_state,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(int ,ERR_get_next_error_library,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EVP_MD_CTX_copy_ex,
AROS_LDA(  EVP_MD_CTX *, ___out,A0),
AROS_LDA(  const EVP_MD_CTX *, ___in,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,EVP_DigestInit_ex,
AROS_LDA(  EVP_MD_CTX *, ___ctx,A0),
AROS_LDA(  const EVP_MD *, ___type,A1),
AROS_LDA(  ENGINE *, ___impl,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,EVP_DigestUpdate,
AROS_LDA(  EVP_MD_CTX *, ___ctx,A0),
AROS_LDA(  const void *, ___d,A1),
AROS_LDA(  unsigned int, ___cnt,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,EVP_DigestFinal_ex,
AROS_LDA(  EVP_MD_CTX *, ___ctx,A0),
AROS_LDA(  unsigned char *, ___md,A1),
AROS_LDA(  unsigned int *, ___s,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int ,EVP_Digest,
AROS_LDA(  void *, ___data,A0),
AROS_LDA(  unsigned int, ___count,D0),
AROS_LDA(  unsigned char *, ___md,A1),
AROS_LDA(  unsigned int *, ___size,A2),
AROS_LDA(  const EVP_MD *, ___type,A3),
AROS_LDA(  ENGINE *, ___impl,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EVP_MD_CTX_copy,
AROS_LDA(  EVP_MD_CTX *, ___out,A0),
AROS_LDA(  const EVP_MD_CTX *, ___in,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EVP_DigestInit,
AROS_LDA(  EVP_MD_CTX *, ___ctx,A0),
AROS_LDA(  const EVP_MD *, ___type,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,EVP_DigestFinal,
AROS_LDA(  EVP_MD_CTX *, ___ctx,A0),
AROS_LDA(  unsigned char *, ___md,A1),
AROS_LDA(  unsigned int *, ___s,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,EVP_read_pw_string,
AROS_LDA(  char *, ___buf,A0),
AROS_LDA(  int, ___length,D0),
AROS_LDA(  const char *, ___prompt,A1),
AROS_LDA(  int, ___verify,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,EVP_set_pw_prompt,
AROS_LDA(  char *, ___prompt,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(char * ,EVP_get_pw_prompt,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD8(int ,EVP_BytesToKey,
AROS_LDA(  const EVP_CIPHER *, ___type,A0),
AROS_LDA(  const EVP_MD *, ___md,A1),
AROS_LDA(  const unsigned char *, ___salt,A2),
AROS_LDA(  const unsigned char *, ___data,A3),
AROS_LDA(  int, ___datal,D0),
AROS_LDA(  int, ___count,D1),
AROS_LDA(  unsigned char *, ___key,D2),
AROS_LDA(  unsigned char *, ___iv,D3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,EVP_EncryptInit,
AROS_LDA(  EVP_CIPHER_CTX *, ___ctx,A0),
AROS_LDA(  const EVP_CIPHER *, ___cipher,A1),
AROS_LDA(  const unsigned char *, ___key,A2),
AROS_LDA(  const unsigned char *, ___iv,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,EVP_EncryptInit_ex,
AROS_LDA(  EVP_CIPHER_CTX *, ___ctx,A0),
AROS_LDA(  const EVP_CIPHER *, ___cipher,A1),
AROS_LDA(  ENGINE *, ___impl,A2),
AROS_LDA(  const unsigned char *, ___key,A3),
AROS_LDA(  const unsigned char *, ___iv,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,EVP_EncryptUpdate,
AROS_LDA(  EVP_CIPHER_CTX *, ___ctx,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  int *, ___outl,A2),
AROS_LDA(  const unsigned char *, ___in,A3),
AROS_LDA(  int, ___inl,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,EVP_EncryptFinal_ex,
AROS_LDA(  EVP_CIPHER_CTX *, ___ctx,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  int *, ___outl,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,EVP_EncryptFinal,
AROS_LDA(  EVP_CIPHER_CTX *, ___ctx,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  int *, ___outl,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,EVP_DecryptInit,
AROS_LDA(  EVP_CIPHER_CTX *, ___ctx,A0),
AROS_LDA(  const EVP_CIPHER *, ___cipher,A1),
AROS_LDA(  const unsigned char *, ___key,A2),
AROS_LDA(  const unsigned char *, ___iv,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,EVP_DecryptInit_ex,
AROS_LDA(  EVP_CIPHER_CTX *, ___ctx,A0),
AROS_LDA(  const EVP_CIPHER *, ___cipher,A1),
AROS_LDA(  ENGINE *, ___impl,A2),
AROS_LDA(  const unsigned char *, ___key,A3),
AROS_LDA(  const unsigned char *, ___iv,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,EVP_DecryptUpdate,
AROS_LDA(  EVP_CIPHER_CTX *, ___ctx,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  int *, ___outl,A2),
AROS_LDA(  const unsigned char *, ___in,A3),
AROS_LDA(  int, ___inl,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,EVP_DecryptFinal,
AROS_LDA(  EVP_CIPHER_CTX *, ___ctx,A0),
AROS_LDA(  unsigned char *, ___outm,A1),
AROS_LDA(  int *, ___outl,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,EVP_DecryptFinal_ex,
AROS_LDA(  EVP_CIPHER_CTX *, ___ctx,A0),
AROS_LDA(  unsigned char *, ___outm,A1),
AROS_LDA(  int *, ___outl,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,EVP_CipherInit,
AROS_LDA(  EVP_CIPHER_CTX *, ___ctx,A0),
AROS_LDA(  const EVP_CIPHER *, ___cipher,A1),
AROS_LDA(  const unsigned char *, ___key,A2),
AROS_LDA(  const unsigned char *, ___iv,A3),
AROS_LDA(  int, ___enc,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int ,EVP_CipherInit_ex,
AROS_LDA(  EVP_CIPHER_CTX *, ___ctx,A0),
AROS_LDA(  const EVP_CIPHER *, ___cipher,A1),
AROS_LDA(  ENGINE *, ___impl,A2),
AROS_LDA(  const unsigned char *, ___key,A3),
AROS_LDA(  const unsigned char *, ___iv,D0),
AROS_LDA(  int, ___enc,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,EVP_CipherUpdate,
AROS_LDA(  EVP_CIPHER_CTX *, ___ctx,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  int *, ___outl,A2),
AROS_LDA(  const unsigned char *, ___in,A3),
AROS_LDA(  int, ___inl,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,EVP_CipherFinal,
AROS_LDA(  EVP_CIPHER_CTX *, ___ctx,A0),
AROS_LDA(  unsigned char *, ___outm,A1),
AROS_LDA(  int *, ___outl,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,EVP_CipherFinal_ex,
AROS_LDA(  EVP_CIPHER_CTX *, ___ctx,A0),
AROS_LDA(  unsigned char *, ___outm,A1),
AROS_LDA(  int *, ___outl,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,EVP_SignFinal,
AROS_LDA(  EVP_MD_CTX *, ___ctx,A0),
AROS_LDA(  unsigned char *, ___md,A1),
AROS_LDA(  unsigned int *, ___s,A2),
AROS_LDA(  EVP_PKEY *, ___pkey,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,EVP_VerifyFinal,
AROS_LDA(  EVP_MD_CTX *, ___ctx,A0),
AROS_LDA(  unsigned char *, ___sigbuf,A1),
AROS_LDA(  unsigned int, ___siglen,D0),
AROS_LDA(  EVP_PKEY *, ___pkey,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int ,EVP_OpenInit,
AROS_LDA(  EVP_CIPHER_CTX *, ___ctx,A0),
AROS_LDA(  const EVP_CIPHER *, ___type,A1),
AROS_LDA(  unsigned char *, ___ek,A2),
AROS_LDA(  int, ___ekl,D0),
AROS_LDA(  unsigned char *, ___iv,A3),
AROS_LDA(  EVP_PKEY *, ___priv,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,EVP_OpenFinal,
AROS_LDA(  EVP_CIPHER_CTX *, ___ctx,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  int *, ___outl,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(int ,EVP_SealInit,
AROS_LDA(  EVP_CIPHER_CTX *, ___ctx,A0),
AROS_LDA(  const EVP_CIPHER *, ___type,A1),
AROS_LDA(  unsigned char **, ___ek,A2),
AROS_LDA(  int *, ___ekl,A3),
AROS_LDA(  unsigned char *, ___iv,D0),
AROS_LDA(  EVP_PKEY **, ___pubk,D1),
AROS_LDA(  int, ___npubk,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,EVP_SealFinal,
AROS_LDA(  EVP_CIPHER_CTX *, ___ctx,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  int *, ___outl,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,EVP_EncodeInit,
AROS_LDA(  EVP_ENCODE_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,EVP_EncodeUpdate,
AROS_LDA(  EVP_ENCODE_CTX *, ___ctx,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  int *, ___outl,A2),
AROS_LDA(  const unsigned char *, ___in,A3),
AROS_LDA(  int, ___inl,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,EVP_EncodeFinal,
AROS_LDA(  EVP_ENCODE_CTX *, ___ctx,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  int *, ___outl,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,EVP_EncodeBlock,
AROS_LDA(  unsigned char *, ___t,A0),
AROS_LDA(  const unsigned char *, ___f,A1),
AROS_LDA(  int, ___n,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,EVP_DecodeInit,
AROS_LDA(  EVP_ENCODE_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,EVP_DecodeUpdate,
AROS_LDA(  EVP_ENCODE_CTX *, ___ctx,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  int *, ___outl,A2),
AROS_LDA(  unsigned char *, ___in,A3),
AROS_LDA(  int, ___inl,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,EVP_DecodeFinal,
AROS_LDA(  EVP_ENCODE_CTX *, ___ctx,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  int *, ___outl,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,EVP_DecodeBlock,
AROS_LDA(  unsigned char *, ___t,A0),
AROS_LDA(  const unsigned char *, ___f,A1),
AROS_LDA(  int, ___n,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EVP_CIPHER_CTX_set_key_length,
AROS_LDA(  EVP_CIPHER_CTX *, ___x,A0),
AROS_LDA(  int, ___keylen,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EVP_CIPHER_CTX_set_padding,
AROS_LDA(  EVP_CIPHER_CTX *, ___c,A0),
AROS_LDA(  int, ___pad,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,EVP_CIPHER_CTX_ctrl,
AROS_LDA(  EVP_CIPHER_CTX *, ___ctx,A0),
AROS_LDA(  int, ___type,D0),
AROS_LDA(  int, ___arg,D1),
AROS_LDA(  void *, ___ptr,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const BIO_METHOD * ,BIO_f_md,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const BIO_METHOD * ,BIO_f_base64,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const BIO_METHOD * ,BIO_f_cipher,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const BIO_METHOD * ,BIO_f_reliable,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,BIO_set_cipher,
AROS_LDA(  BIO *, ___b,A0),
AROS_LDA(  const EVP_CIPHER *, ___c,A1),
AROS_LDA(  const unsigned char *, ___k,A2),
AROS_LDA(  const unsigned char *, ___i,A3),
AROS_LDA(  int, ___enc,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_MD * ,EVP_md_null,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_MD * ,EVP_md2,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_MD * ,EVP_md4,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_MD * ,EVP_md5,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_MD * ,EVP_sha1,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_MD * ,EVP_mdc2,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_MD * ,EVP_ripemd160,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_enc_null,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_des_ecb,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_des_ede,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_des_ede3,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_des_ede_ecb,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_des_ede3_ecb,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_des_cfb64,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_des_cfb1,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_des_cfb8,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_des_ede_cfb64,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_des_ede3_cfb64,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_des_ede3_cfb1,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_des_ede3_cfb8,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_des_ofb,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_des_ede_ofb,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_des_ede3_ofb,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_des_cbc,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_des_ede_cbc,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_des_ede3_cbc,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_desx_cbc,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_rc4,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_rc4_40,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_idea_ecb,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_idea_cfb64,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_idea_ofb,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_idea_cbc,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_rc2_ecb,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_rc2_cbc,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_rc2_40_cbc,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_rc2_64_cbc,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_rc2_cfb64,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_rc2_ofb,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_bf_ecb,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_bf_cbc,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_bf_cfb64,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_bf_ofb,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_cast5_ecb,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_cast5_cbc,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_cast5_cfb64,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_cast5_ofb,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_rc5_32_12_16_cbc,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_rc5_32_12_16_ecb,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_rc5_32_12_16_cfb64,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_rc5_32_12_16_ofb,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aes_128_ecb,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aes_128_cbc,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aes_128_cfb1,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aes_128_cfb8,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aes_128_cfb128,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aes_128_ofb,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aes_192_ecb,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aes_192_cbc,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aes_192_cfb1,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aes_192_cfb8,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aes_192_cfb128,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aes_192_ofb,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aes_256_ecb,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aes_256_cbc,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aes_256_cfb1,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aes_256_cfb8,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aes_256_cfb128,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aes_256_ofb,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EVP_add_cipher,
AROS_LDA(  const EVP_CIPHER *, ___cipher,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EVP_add_digest,
AROS_LDA(  const EVP_MD *, ___digest,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const EVP_CIPHER * ,EVP_get_cipherbyname,
AROS_LDA(  const char *, ___name,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const EVP_MD * ,EVP_get_digestbyname,
AROS_LDA(  const char *, ___name,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,EVP_PKEY_decrypt,
AROS_LDA(  EVP_PKEY_CTX *, ___ctx,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  size_t *, ___outlen,A2),
AROS_LDA(  const unsigned char *, ___in,A3),
AROS_LDA(  size_t, ___inlen,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,EVP_PKEY_encrypt,
AROS_LDA(  EVP_PKEY_CTX *, ___ctx,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  size_t *, ___outlen,A2),
AROS_LDA(  const unsigned char *, ___in,A3),
AROS_LDA(  size_t, ___inlen,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EVP_PKEY_type,
AROS_LDA(  int, ___type,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EVP_PKEY_bits,
AROS_LDA(  const EVP_PKEY *, ___pkey,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EVP_PKEY_size,
AROS_LDA(  const EVP_PKEY *, ___pkey,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,EVP_PKEY_assign,
AROS_LDA(  EVP_PKEY *, ___pkey,A0),
AROS_LDA(  int, ___type,D0),
AROS_LDA(  char *, ___key,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EVP_PKEY_set1_RSA,
AROS_LDA(  EVP_PKEY *, ___pkey,A0),
AROS_LDA(  struct rsa_st *, ___key,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(struct rsa_st * ,EVP_PKEY_get1_RSA,
AROS_LDA(  EVP_PKEY *, ___pkey,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EVP_PKEY_set1_DSA,
AROS_LDA(  EVP_PKEY *, ___pkey,A0),
AROS_LDA(  struct dsa_st *, ___key,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(struct dsa_st * ,EVP_PKEY_get1_DSA,
AROS_LDA(  EVP_PKEY *, ___pkey,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EVP_PKEY_set1_DH,
AROS_LDA(  EVP_PKEY *, ___pkey,A0),
AROS_LDA(  struct dh_st *, ___key,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(struct dh_st * ,EVP_PKEY_get1_DH,
AROS_LDA(  EVP_PKEY *, ___pkey,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(EVP_PKEY * ,EVP_PKEY_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,EVP_PKEY_free,
AROS_LDA(  EVP_PKEY *, ___pkey,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(EVP_PKEY * ,d2i_PublicKey,
AROS_LDA(  int, ___type,D0),
AROS_LDA(  EVP_PKEY **, ___a,A0),
AROS_LDA(  const unsigned char **, ___pp,A1),
AROS_LDA(  long, ___length,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_PublicKey,
AROS_LDA(  EVP_PKEY *, ___a,A0),
AROS_LDA(  unsigned char **, ___pp,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(EVP_PKEY * ,d2i_PrivateKey,
AROS_LDA(  int, ___type,D0),
AROS_LDA(  EVP_PKEY **, ___a,A0),
AROS_LDA(  const unsigned char **, ___pp,A1),
AROS_LDA(  long, ___length,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(EVP_PKEY * ,d2i_AutoPrivateKey,
AROS_LDA(  EVP_PKEY **, ___a,A0),
AROS_LDA(  const unsigned char **, ___pp,A1),
AROS_LDA(  long, ___length,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_PrivateKey,
AROS_LDA(  EVP_PKEY *, ___a,A0),
AROS_LDA(  unsigned char **, ___pp,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EVP_PKEY_copy_parameters,
AROS_LDA(  EVP_PKEY *, ___to,A0),
AROS_LDA(  EVP_PKEY *, ___from,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EVP_PKEY_missing_parameters,
AROS_LDA(  EVP_PKEY *, ___pkey,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EVP_PKEY_save_parameters,
AROS_LDA(  EVP_PKEY *, ___pkey,A0),
AROS_LDA(  int, ___mode,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EVP_PKEY_cmp_parameters,
AROS_LDA(  EVP_PKEY *, ___a,A0),
AROS_LDA(  EVP_PKEY *, ___b,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EVP_CIPHER_type,
AROS_LDA(  const EVP_CIPHER *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EVP_CIPHER_param_to_asn1,
AROS_LDA(  EVP_CIPHER_CTX *, ___c,A0),
AROS_LDA(  ASN1_TYPE *, ___type,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EVP_CIPHER_asn1_to_param,
AROS_LDA(  EVP_CIPHER_CTX *, ___c,A0),
AROS_LDA(  ASN1_TYPE *, ___type,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EVP_CIPHER_set_asn1_iv,
AROS_LDA(  EVP_CIPHER_CTX *, ___c,A0),
AROS_LDA(  ASN1_TYPE *, ___type,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EVP_CIPHER_get_asn1_iv,
AROS_LDA(  EVP_CIPHER_CTX *, ___c,A0),
AROS_LDA(  ASN1_TYPE *, ___type,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(int ,PKCS5_PBE_keyivgen,
AROS_LDA(  EVP_CIPHER_CTX *, ___ctx,A0),
AROS_LDA(  const char *, ___pass,A1),
AROS_LDA(  int, ___passlen,D0),
AROS_LDA(  ASN1_TYPE *, ___param,A2),
AROS_LDA(  const EVP_CIPHER *, ___cipher,A3),
AROS_LDA(  const EVP_MD *, ___md,D1),
AROS_LDA(  int, ___en_de,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(int ,PKCS5_PBKDF2_HMAC_SHA1,
AROS_LDA(  const char *, ___pass,A0),
AROS_LDA(  int, ___passlen,D0),
AROS_LDA(  unsigned char *, ___salt,A1),
AROS_LDA(  int, ___saltlen,D1),
AROS_LDA(  int, ___iter,D2),
AROS_LDA(  int, ___keylen,D3),
AROS_LDA(  unsigned char *, ___out,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(int ,PKCS5_v2_PBE_keyivgen,
AROS_LDA(  EVP_CIPHER_CTX *, ___ctx,A0),
AROS_LDA(  const char *, ___pass,A1),
AROS_LDA(  int, ___passlen,D0),
AROS_LDA(  ASN1_TYPE *, ___param,A2),
AROS_LDA(  const EVP_CIPHER *, ___cipher,A3),
AROS_LDA(  const EVP_MD *, ___md,D1),
AROS_LDA(  int, ___en_de,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(void ,PKCS5_PBE_add,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int ,EVP_PBE_CipherInit,
AROS_LDA(  ASN1_OBJECT *, ___pbe_obj,A0),
AROS_LDA(  const char *, ___pass,A1),
AROS_LDA(  int, ___passlen,D0),
AROS_LDA(  ASN1_TYPE *, ___param,A2),
AROS_LDA(  EVP_CIPHER_CTX *, ___ctx,A3),
AROS_LDA(  int, ___en_de,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,EVP_PBE_alg_add,
AROS_LDA(  int, ___nid,D0),
AROS_LDA(  const EVP_CIPHER *, ___cipher,A0),
AROS_LDA(  const EVP_MD *, ___md,A1),
AROS_LDA(  EVP_PBE_KEYGEN *, ___keygen,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(void ,EVP_PBE_cleanup,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(int ,ERR_load_EVP_strings,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,HMAC_Init,
AROS_LDA(  HMAC_CTX *, ___ctx,A0),
AROS_LDA(  const void *, ___key,A1),
AROS_LDA(  int, ___len,D0),
AROS_LDA(  const EVP_MD *, ___md,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,HMAC_Init_ex,
AROS_LDA(  HMAC_CTX *, ___ctx,A0),
AROS_LDA(  const void *, ___key,A1),
AROS_LDA(  int, ___len,D0),
AROS_LDA(  const EVP_MD *, ___md,A2),
AROS_LDA(  ENGINE *, ___impl,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,HMAC_Update,
AROS_LDA(  HMAC_CTX *, ___ctx,A0),
AROS_LDA(  const unsigned char *, ___data,A1),
AROS_LDA(  size_t, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,HMAC_Final,
AROS_LDA(  HMAC_CTX *, ___ctx,A0),
AROS_LDA(  unsigned char *, ___md,A1),
AROS_LDA(  unsigned int *, ___len,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(unsigned char * ,HMAC,
AROS_LDA(  const EVP_MD *, ___evp_md,A0),
AROS_LDA(  const void *, ___key,A1),
AROS_LDA(  int, ___key_len,D0),
AROS_LDA(  const unsigned char *, ___d,A2),
AROS_LDA(  int, ___n,D1),
AROS_LDA(  unsigned char *, ___md,A3),
AROS_LDA(  unsigned int *, ___md_len,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(OPENSSL_LHASH * ,OPENSSL_LH_new,
AROS_LDA(  OPENSSL_LH_HASHFUNC, ___h,A0),
AROS_LDA(  OPENSSL_LH_COMPFUNC, ___c,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,OPENSSL_LH_free,
AROS_LDA(  OPENSSL_LHASH *, ___lh,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void * ,OPENSSL_LH_insert,
AROS_LDA(  OPENSSL_LHASH *, ___lh,A0),
AROS_LDA(  void *, ___data,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void * ,OPENSSL_LH_delete,
AROS_LDA(  OPENSSL_LHASH *, ___lh,A0),
AROS_LDA(  const void *, ___data,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void * ,OPENSSL_LH_retrieve,
AROS_LDA(  OPENSSL_LHASH *, ___lh,A0),
AROS_LDA(  const void *, ___data,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,OPENSSL_LH_doall,
AROS_LDA(  OPENSSL_LHASH *, ___lh,A0),
AROS_LDA(  OPENSSL_LH_DOALL_FUNC, ___func,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,OPENSSL_LH_doall_arg,
AROS_LDA(  OPENSSL_LHASH *, ___lh,A0),
AROS_LDA(  OPENSSL_LH_DOALL_FUNCARG, ___func,A1),
AROS_LDA(  void *, ___arg,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(unsigned long ,OPENSSL_LH_strhash,
AROS_LDA(  const char *, ___c,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(unsigned long ,OPENSSL_LH_num_items,
AROS_LDA(  const OPENSSL_LHASH *, ___lh,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,OPENSSL_LH_stats_bio,
AROS_LDA(  const OPENSSL_LHASH *, ___lh,A0),
AROS_LDA(  BIO *, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,OPENSSL_LH_node_stats_bio,
AROS_LDA(  const OPENSSL_LHASH *, ___lh,A0),
AROS_LDA(  BIO *, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,OPENSSL_LH_node_usage_stats_bio,
AROS_LDA(  const OPENSSL_LHASH *, ___lh,A0),
AROS_LDA(  BIO *, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(int ,OBJ_NAME_init,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,OBJ_NAME_new_index,
AROS_LDA(APTR,___hash_func,A0),
AROS_LDA(APTR,___cmp_func,A1),
AROS_LDA(APTR,___free_func,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(const char * ,OBJ_NAME_get,
AROS_LDA(  const char *, ___name,A0),
AROS_LDA(  int, ___type,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,OBJ_NAME_add,
AROS_LDA(  const char *, ___name,A0),
AROS_LDA(  int, ___type,D0),
AROS_LDA(  const char *, ___data,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,OBJ_NAME_remove,
AROS_LDA(  const char *, ___name,A0),
AROS_LDA(  int, ___type,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,OBJ_NAME_cleanup,
AROS_LDA(  int, ___type,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,OBJ_NAME_do_all,
AROS_LDA(  int, ___type,D0),
AROS_LDA(APTR,___fn,A0),
AROS_LDA(  void *, ___arg,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,OBJ_NAME_do_all_sorted,
AROS_LDA(  int, ___type,D0),
AROS_LDA(APTR, ___fn,A0),
AROS_LDA(  void *, ___arg,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ASN1_OBJECT * ,OBJ_dup,
AROS_LDA(  const ASN1_OBJECT *, ___o,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ASN1_OBJECT * ,OBJ_nid2obj,
AROS_LDA(  int, ___n,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char * ,OBJ_nid2ln,
AROS_LDA(  int, ___n,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char * ,OBJ_nid2sn,
AROS_LDA(  int, ___n,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,OBJ_obj2nid,
AROS_LDA(  const ASN1_OBJECT *, ___o,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(ASN1_OBJECT * ,OBJ_txt2obj,
AROS_LDA(  const char *, ___s,A0),
AROS_LDA(  int, ___no_name,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,OBJ_obj2txt,
AROS_LDA(  char *, ___buf,A0),
AROS_LDA(  int, ___buf_len,D0),
AROS_LDA(  const ASN1_OBJECT *, ___a,A1),
AROS_LDA(  int, ___no_name,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,OBJ_txt2nid,
AROS_LDA(  const char *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,OBJ_ln2nid,
AROS_LDA(  const char *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,OBJ_sn2nid,
AROS_LDA(  const char *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,OBJ_cmp,
AROS_LDA(  const ASN1_OBJECT *, ___a,A0),
AROS_LDA(  const ASN1_OBJECT *, ___b,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,OBJ_new_nid,
AROS_LDA(  int, ___num,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,OBJ_add_object,
AROS_LDA(  const ASN1_OBJECT *, ___obj,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,OBJ_create,
AROS_LDA(  const char *, ___oid,A0),
AROS_LDA(  const char *, ___sn,A1),
AROS_LDA(  const char *, ___ln,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,OBJ_create_objects,
AROS_LDA(  BIO *, ___in,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(int ,ERR_load_OBJ_strings,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OCSP_RESPONSE * ,OCSP_sendreq_bio,
AROS_LDA(  BIO *, ___b,A0),
AROS_LDA(  const char *, ___path,A1),
AROS_LDA(  OCSP_REQUEST *, ___req,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OCSP_CERTID * ,OCSP_cert_to_id,
AROS_LDA(  const EVP_MD *, ___dgst,A0),
AROS_LDA(  const X509 *, ___subject,A1),
AROS_LDA(  const X509 *, ___issuer,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(OCSP_CERTID * ,OCSP_cert_id_new,
AROS_LDA(  const EVP_MD *, ___dgst,A0),
AROS_LDA(  const X509_NAME *, ___issuerName,A1),
AROS_LDA(  const ASN1_BIT_STRING *, ___issuerKey,A2),
AROS_LDA(  const ASN1_INTEGER *, ___serialNumber,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(OCSP_ONEREQ * ,OCSP_request_add0_id,
AROS_LDA(  OCSP_REQUEST *, ___req,A0),
AROS_LDA(  OCSP_CERTID *, ___cid,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,OCSP_request_add1_nonce,
AROS_LDA(  OCSP_REQUEST *, ___req,A0),
AROS_LDA(  unsigned char *, ___val,A1),
AROS_LDA(  int, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,OCSP_basic_add1_nonce,
AROS_LDA(  OCSP_BASICRESP *, ___resp,A0),
AROS_LDA(  unsigned char *, ___val,A1),
AROS_LDA(  int, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,OCSP_check_nonce,
AROS_LDA(  OCSP_REQUEST *, ___req,A0),
AROS_LDA(  OCSP_BASICRESP *, ___bs,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,OCSP_copy_nonce,
AROS_LDA(  OCSP_BASICRESP *, ___resp,A0),
AROS_LDA(  OCSP_REQUEST *, ___req,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,OCSP_request_set1_name,
AROS_LDA(  OCSP_REQUEST *, ___req,A0),
AROS_LDA(  X509_NAME *, ___nm,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,OCSP_request_add1_cert,
AROS_LDA(  OCSP_REQUEST *, ___req,A0),
AROS_LDA(  X509 *, ___cert,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int ,OCSP_request_sign,
AROS_LDA(  OCSP_REQUEST *, ___req,A0),
AROS_LDA(  X509 *, ___signer,A1),
AROS_LDA(  EVP_PKEY *, ___key,A2),
AROS_LDA(  const EVP_MD *, ___dgst,A3),
AROS_LDA(  STACK_OF(X509) *, ___certs,D0),
AROS_LDA(  unsigned long, ___flags,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,OCSP_response_status,
AROS_LDA(  OCSP_RESPONSE *, ___resp,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(OCSP_BASICRESP * ,OCSP_response_get1_basic,
AROS_LDA(  OCSP_RESPONSE *, ___resp,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,OCSP_resp_count,
AROS_LDA(  OCSP_BASICRESP *, ___bs,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(OCSP_SINGLERESP * ,OCSP_resp_get0,
AROS_LDA(  OCSP_BASICRESP *, ___bs,A0),
AROS_LDA(  int, ___idx,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,OCSP_resp_find,
AROS_LDA(  OCSP_BASICRESP *, ___bs,A0),
AROS_LDA(  OCSP_CERTID *, ___id,A1),
AROS_LDA(  int, ___last,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,OCSP_single_get0_status,
AROS_LDA(  OCSP_SINGLERESP *, ___single,A0),
AROS_LDA(  int *, ___reason,A1),
AROS_LDA(  ASN1_GENERALIZEDTIME **, ___revtime,A2),
AROS_LDA(  ASN1_GENERALIZEDTIME **, ___thisupd,A3),
AROS_LDA(  ASN1_GENERALIZEDTIME **, ___nextupd,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(int ,OCSP_resp_find_status,
AROS_LDA(  OCSP_BASICRESP *, ___bs,A0),
AROS_LDA(  OCSP_CERTID *, ___id,A1),
AROS_LDA(  int *, ___status,A2),
AROS_LDA(  int *, ___reason,A3),
AROS_LDA(  ASN1_GENERALIZEDTIME **, ___revtime,D0),
AROS_LDA(  ASN1_GENERALIZEDTIME **, ___thisupd,D1),
AROS_LDA(  ASN1_GENERALIZEDTIME **, ___nextupd,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,OCSP_check_validity,
AROS_LDA(  ASN1_GENERALIZEDTIME *, ___thisupd,A0),
AROS_LDA(  ASN1_GENERALIZEDTIME *, ___nextupd,A1),
AROS_LDA(  long, ___sec,D0),
AROS_LDA(  long, ___maxsec,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,OCSP_request_verify,
AROS_LDA(  OCSP_REQUEST *, ___req,A0),
AROS_LDA(  STACK_OF(X509) *, ___certs,A1),
AROS_LDA(  X509_STORE *, ___store,A2),
AROS_LDA(  unsigned long, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,OCSP_parse_url,
AROS_LDA(  const char *, ___url,A0),
AROS_LDA(  char **, ___phost,A1),
AROS_LDA(  char **, ___pport,A2),
AROS_LDA(  char **, ___ppath,A3),
AROS_LDA(  int *, ___pssl,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,OCSP_id_issuer_cmp,
AROS_LDA(  OCSP_CERTID *, ___a,A0),
AROS_LDA(  OCSP_CERTID *, ___b,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,OCSP_id_cmp,
AROS_LDA(  OCSP_CERTID *, ___a,A0),
AROS_LDA(  OCSP_CERTID *, ___b,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,OCSP_request_onereq_count,
AROS_LDA(  OCSP_REQUEST *, ___req,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(OCSP_ONEREQ * ,OCSP_request_onereq_get0,
AROS_LDA(  OCSP_REQUEST *, ___req,A0),
AROS_LDA(  int, ___i,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(OCSP_CERTID * ,OCSP_onereq_get0_id,
AROS_LDA(  OCSP_ONEREQ *, ___one,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,OCSP_id_get0_info,
AROS_LDA(  ASN1_OCTET_STRING **, ___piNameHash,A0),
AROS_LDA(  ASN1_OBJECT **, ___pmd,A1),
AROS_LDA(  ASN1_OCTET_STRING **, ___pikeyHash,A2),
AROS_LDA(  ASN1_INTEGER **, ___pserial,A3),
AROS_LDA(  OCSP_CERTID *, ___cid,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,OCSP_request_is_signed,
AROS_LDA(  OCSP_REQUEST *, ___req,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(OCSP_RESPONSE * ,OCSP_response_create,
AROS_LDA(  int, ___status,D0),
AROS_LDA(  OCSP_BASICRESP *, ___bs,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(OCSP_SINGLERESP * ,OCSP_basic_add1_status,
AROS_LDA(  OCSP_BASICRESP *, ___rsp,A0),
AROS_LDA(  OCSP_CERTID *, ___cid,A1),
AROS_LDA(  int, ___status,D0),
AROS_LDA(  int, ___reason,D1),
AROS_LDA(  ASN1_TIME *, ___revtime,A2),
AROS_LDA(  ASN1_TIME *, ___thisupd,A3),
AROS_LDA(  ASN1_TIME *, ___nextupd,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,OCSP_basic_add1_cert,
AROS_LDA(  OCSP_BASICRESP *, ___resp,A0),
AROS_LDA(  X509 *, ___cert,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int ,OCSP_basic_sign,
AROS_LDA(  OCSP_BASICRESP *, ___brsp,A0),
AROS_LDA(  X509 *, ___signer,A1),
AROS_LDA(  EVP_PKEY *, ___key,A2),
AROS_LDA(  const EVP_MD *, ___dgst,A3),
AROS_LDA(  STACK_OF(X509) *, ___certs,D0),
AROS_LDA(  unsigned long, ___flags,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(X509_EXTENSION * ,OCSP_crlID_new,
AROS_LDA(  const char *, ___url,A0),
AROS_LDA(  long *, ___n,A1),
AROS_LDA(  char *, ___tim,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_EXTENSION * ,OCSP_accept_responses_new,
AROS_LDA(  char **, ___oids,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_EXTENSION * ,OCSP_archive_cutoff_new,
AROS_LDA(  char *, ___tim,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(X509_EXTENSION * ,OCSP_url_svcloc_new,
AROS_LDA(  X509_NAME *, ___issuer,A0),
AROS_LDA(  const char **, ___urls,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,OCSP_REQUEST_get_ext_count,
AROS_LDA(  OCSP_REQUEST *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,OCSP_REQUEST_get_ext_by_NID,
AROS_LDA(  OCSP_REQUEST *, ___x,A0),
AROS_LDA(  int, ___nid,D0),
AROS_LDA(  int, ___lastpos,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,OCSP_REQUEST_get_ext_by_OBJ,
AROS_LDA(  OCSP_REQUEST *, ___x,A0),
AROS_LDA(  const ASN1_OBJECT *, ___obj,A1),
AROS_LDA(  int, ___lastpos,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,OCSP_REQUEST_get_ext_by_critical,
AROS_LDA(  OCSP_REQUEST *, ___x,A0),
AROS_LDA(  int, ___crit,D0),
AROS_LDA(  int, ___lastpos,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(X509_EXTENSION * ,OCSP_REQUEST_get_ext,
AROS_LDA(  OCSP_REQUEST *, ___x,A0),
AROS_LDA(  int, ___loc,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(X509_EXTENSION * ,OCSP_REQUEST_delete_ext,
AROS_LDA(  OCSP_REQUEST *, ___x,A0),
AROS_LDA(  int, ___loc,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void * ,OCSP_REQUEST_get1_ext_d2i,
AROS_LDA(  OCSP_REQUEST *, ___x,A0),
AROS_LDA(  int, ___nid,D0),
AROS_LDA(  int *, ___crit,A1),
AROS_LDA(  int *, ___idx,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,OCSP_REQUEST_add1_ext_i2d,
AROS_LDA(  OCSP_REQUEST *, ___x,A0),
AROS_LDA(  int, ___nid,D0),
AROS_LDA(  void *, ___value,A1),
AROS_LDA(  int, ___crit,D1),
AROS_LDA(  unsigned long, ___flags,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,OCSP_REQUEST_add_ext,
AROS_LDA(  OCSP_REQUEST *, ___x,A0),
AROS_LDA(  X509_EXTENSION *, ___ex,A1),
AROS_LDA(  int, ___loc,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,OCSP_ONEREQ_get_ext_count,
AROS_LDA(  OCSP_ONEREQ *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,OCSP_ONEREQ_get_ext_by_NID,
AROS_LDA(  OCSP_ONEREQ *, ___x,A0),
AROS_LDA(  int, ___nid,D0),
AROS_LDA(  int, ___lastpos,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,OCSP_ONEREQ_get_ext_by_OBJ,
AROS_LDA(  OCSP_ONEREQ *, ___x,A0),
AROS_LDA(  const ASN1_OBJECT *, ___obj,A1),
AROS_LDA(  int, ___lastpos,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,OCSP_ONEREQ_get_ext_by_critical,
AROS_LDA(  OCSP_ONEREQ *, ___x,A0),
AROS_LDA(  int, ___crit,D0),
AROS_LDA(  int, ___lastpos,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(X509_EXTENSION * ,OCSP_ONEREQ_get_ext,
AROS_LDA(  OCSP_ONEREQ *, ___x,A0),
AROS_LDA(  int, ___loc,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(X509_EXTENSION * ,OCSP_ONEREQ_delete_ext,
AROS_LDA(  OCSP_ONEREQ *, ___x,A0),
AROS_LDA(  int, ___loc,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void * ,OCSP_ONEREQ_get1_ext_d2i,
AROS_LDA(  OCSP_ONEREQ *, ___x,A0),
AROS_LDA(  int, ___nid,D0),
AROS_LDA(  int *, ___crit,A1),
AROS_LDA(  int *, ___idx,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,OCSP_ONEREQ_add1_ext_i2d,
AROS_LDA(  OCSP_ONEREQ *, ___x,A0),
AROS_LDA(  int, ___nid,D0),
AROS_LDA(  void *, ___value,A1),
AROS_LDA(  int, ___crit,D1),
AROS_LDA(  unsigned long, ___flags,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,OCSP_ONEREQ_add_ext,
AROS_LDA(  OCSP_ONEREQ *, ___x,A0),
AROS_LDA(  X509_EXTENSION *, ___ex,A1),
AROS_LDA(  int, ___loc,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,OCSP_BASICRESP_get_ext_count,
AROS_LDA(  OCSP_BASICRESP *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,OCSP_BASICRESP_get_ext_by_NID,
AROS_LDA(  OCSP_BASICRESP *, ___x,A0),
AROS_LDA(  int, ___nid,D0),
AROS_LDA(  int, ___lastpos,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,OCSP_BASICRESP_get_ext_by_OBJ,
AROS_LDA(  OCSP_BASICRESP *, ___x,A0),
AROS_LDA(  const ASN1_OBJECT *, ___obj,A1),
AROS_LDA(  int, ___lastpos,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,OCSP_BASICRESP_get_ext_by_critical,
AROS_LDA(  OCSP_BASICRESP *, ___x,A0),
AROS_LDA(  int, ___crit,D0),
AROS_LDA(  int, ___lastpos,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(X509_EXTENSION * ,OCSP_BASICRESP_get_ext,
AROS_LDA(  OCSP_BASICRESP *, ___x,A0),
AROS_LDA(  int, ___loc,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(X509_EXTENSION * ,OCSP_BASICRESP_delete_ext,
AROS_LDA(  OCSP_BASICRESP *, ___x,A0),
AROS_LDA(  int, ___loc,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void * ,OCSP_BASICRESP_get1_ext_d2i,
AROS_LDA(  OCSP_BASICRESP *, ___x,A0),
AROS_LDA(  int, ___nid,D0),
AROS_LDA(  int *, ___crit,A1),
AROS_LDA(  int *, ___idx,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,OCSP_BASICRESP_add1_ext_i2d,
AROS_LDA(  OCSP_BASICRESP *, ___x,A0),
AROS_LDA(  int, ___nid,D0),
AROS_LDA(  void *, ___value,A1),
AROS_LDA(  int, ___crit,D1),
AROS_LDA(  unsigned long, ___flags,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,OCSP_BASICRESP_add_ext,
AROS_LDA(  OCSP_BASICRESP *, ___x,A0),
AROS_LDA(  X509_EXTENSION *, ___ex,A1),
AROS_LDA(  int, ___loc,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,OCSP_SINGLERESP_get_ext_count,
AROS_LDA(  OCSP_SINGLERESP *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,OCSP_SINGLERESP_get_ext_by_NID,
AROS_LDA(  OCSP_SINGLERESP *, ___x,A0),
AROS_LDA(  int, ___nid,D0),
AROS_LDA(  int, ___lastpos,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,OCSP_SINGLERESP_get_ext_by_OBJ,
AROS_LDA(  OCSP_SINGLERESP *, ___x,A0),
AROS_LDA(  const ASN1_OBJECT *, ___obj,A1),
AROS_LDA(  int, ___lastpos,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,OCSP_SINGLERESP_get_ext_by_critical,
AROS_LDA(  OCSP_SINGLERESP *, ___x,A0),
AROS_LDA(  int, ___crit,D0),
AROS_LDA(  int, ___lastpos,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(X509_EXTENSION * ,OCSP_SINGLERESP_get_ext,
AROS_LDA(  OCSP_SINGLERESP *, ___x,A0),
AROS_LDA(  int, ___loc,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(X509_EXTENSION * ,OCSP_SINGLERESP_delete_ext,
AROS_LDA(  OCSP_SINGLERESP *, ___x,A0),
AROS_LDA(  int, ___loc,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void * ,OCSP_SINGLERESP_get1_ext_d2i,
AROS_LDA(  OCSP_SINGLERESP *, ___x,A0),
AROS_LDA(  int, ___nid,D0),
AROS_LDA(  int *, ___crit,A1),
AROS_LDA(  int *, ___idx,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,OCSP_SINGLERESP_add1_ext_i2d,
AROS_LDA(  OCSP_SINGLERESP *, ___x,A0),
AROS_LDA(  int, ___nid,D0),
AROS_LDA(  void *, ___value,A1),
AROS_LDA(  int, ___crit,D1),
AROS_LDA(  unsigned long, ___flags,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,OCSP_SINGLERESP_add_ext,
AROS_LDA(  OCSP_SINGLERESP *, ___x,A0),
AROS_LDA(  X509_EXTENSION *, ___ex,A1),
AROS_LDA(  int, ___loc,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OCSP_SINGLERESP * ,OCSP_SINGLERESP_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,OCSP_SINGLERESP_free,
AROS_LDA(  OCSP_SINGLERESP *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OCSP_SINGLERESP * ,d2i_OCSP_SINGLERESP,
AROS_LDA(  OCSP_SINGLERESP **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_OCSP_SINGLERESP,
AROS_LDA(  OCSP_SINGLERESP *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,OCSP_SINGLERESP_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OCSP_CERTSTATUS * ,OCSP_CERTSTATUS_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,OCSP_CERTSTATUS_free,
AROS_LDA(  OCSP_CERTSTATUS *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OCSP_CERTSTATUS * ,d2i_OCSP_CERTSTATUS,
AROS_LDA(  OCSP_CERTSTATUS **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_OCSP_CERTSTATUS,
AROS_LDA(  OCSP_CERTSTATUS *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,OCSP_CERTSTATUS_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OCSP_REVOKEDINFO * ,OCSP_REVOKEDINFO_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,OCSP_REVOKEDINFO_free,
AROS_LDA(  OCSP_REVOKEDINFO *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OCSP_REVOKEDINFO * ,d2i_OCSP_REVOKEDINFO,
AROS_LDA(  OCSP_REVOKEDINFO **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_OCSP_REVOKEDINFO,
AROS_LDA(  OCSP_REVOKEDINFO *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,OCSP_REVOKEDINFO_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OCSP_BASICRESP * ,OCSP_BASICRESP_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,OCSP_BASICRESP_free,
AROS_LDA(  OCSP_BASICRESP *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OCSP_BASICRESP * ,d2i_OCSP_BASICRESP,
AROS_LDA(  OCSP_BASICRESP **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_OCSP_BASICRESP,
AROS_LDA(  OCSP_BASICRESP *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,OCSP_BASICRESP_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OCSP_RESPDATA * ,OCSP_RESPDATA_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,OCSP_RESPDATA_free,
AROS_LDA(  OCSP_RESPDATA *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OCSP_RESPDATA * ,d2i_OCSP_RESPDATA,
AROS_LDA(  OCSP_RESPDATA **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_OCSP_RESPDATA,
AROS_LDA(  OCSP_RESPDATA *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,OCSP_RESPDATA_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OCSP_RESPID * ,OCSP_RESPID_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,OCSP_RESPID_free,
AROS_LDA(  OCSP_RESPID *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OCSP_RESPID * ,d2i_OCSP_RESPID,
AROS_LDA(  OCSP_RESPID **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_OCSP_RESPID,
AROS_LDA(  OCSP_RESPID *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,OCSP_RESPID_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OCSP_RESPONSE * ,OCSP_RESPONSE_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,OCSP_RESPONSE_free,
AROS_LDA(  OCSP_RESPONSE *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OCSP_RESPONSE * ,d2i_OCSP_RESPONSE,
AROS_LDA(  OCSP_RESPONSE **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_OCSP_RESPONSE,
AROS_LDA(  OCSP_RESPONSE *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,OCSP_RESPONSE_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OCSP_RESPBYTES * ,OCSP_RESPBYTES_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,OCSP_RESPBYTES_free,
AROS_LDA(  OCSP_RESPBYTES *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OCSP_RESPBYTES * ,d2i_OCSP_RESPBYTES,
AROS_LDA(  OCSP_RESPBYTES **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_OCSP_RESPBYTES,
AROS_LDA(  OCSP_RESPBYTES *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,OCSP_RESPBYTES_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OCSP_ONEREQ * ,OCSP_ONEREQ_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,OCSP_ONEREQ_free,
AROS_LDA(  OCSP_ONEREQ *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OCSP_ONEREQ * ,d2i_OCSP_ONEREQ,
AROS_LDA(  OCSP_ONEREQ **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_OCSP_ONEREQ,
AROS_LDA(  OCSP_ONEREQ *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,OCSP_ONEREQ_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OCSP_CERTID * ,OCSP_CERTID_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,OCSP_CERTID_free,
AROS_LDA(  OCSP_CERTID *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OCSP_CERTID * ,d2i_OCSP_CERTID,
AROS_LDA(  OCSP_CERTID **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_OCSP_CERTID,
AROS_LDA(  OCSP_CERTID *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,OCSP_CERTID_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OCSP_REQUEST * ,OCSP_REQUEST_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,OCSP_REQUEST_free,
AROS_LDA(  OCSP_REQUEST *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OCSP_REQUEST * ,d2i_OCSP_REQUEST,
AROS_LDA(  OCSP_REQUEST **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_OCSP_REQUEST,
AROS_LDA(  OCSP_REQUEST *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,OCSP_REQUEST_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OCSP_SIGNATURE * ,OCSP_SIGNATURE_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,OCSP_SIGNATURE_free,
AROS_LDA(  OCSP_SIGNATURE *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OCSP_SIGNATURE * ,d2i_OCSP_SIGNATURE,
AROS_LDA(  OCSP_SIGNATURE **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_OCSP_SIGNATURE,
AROS_LDA(  OCSP_SIGNATURE *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,OCSP_SIGNATURE_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OCSP_REQINFO * ,OCSP_REQINFO_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,OCSP_REQINFO_free,
AROS_LDA(  OCSP_REQINFO *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OCSP_REQINFO * ,d2i_OCSP_REQINFO,
AROS_LDA(  OCSP_REQINFO **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_OCSP_REQINFO,
AROS_LDA(  OCSP_REQINFO *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,OCSP_REQINFO_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OCSP_CRLID * ,OCSP_CRLID_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,OCSP_CRLID_free,
AROS_LDA(  OCSP_CRLID *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OCSP_CRLID * ,d2i_OCSP_CRLID,
AROS_LDA(  OCSP_CRLID **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_OCSP_CRLID,
AROS_LDA(  OCSP_CRLID *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,OCSP_CRLID_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OCSP_SERVICELOC * ,OCSP_SERVICELOC_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,OCSP_SERVICELOC_free,
AROS_LDA(  OCSP_SERVICELOC *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OCSP_SERVICELOC * ,d2i_OCSP_SERVICELOC,
AROS_LDA(  OCSP_SERVICELOC **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_OCSP_SERVICELOC,
AROS_LDA(  OCSP_SERVICELOC *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,OCSP_SERVICELOC_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char * ,OCSP_response_status_str,
AROS_LDA(  long, ___s,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char * ,OCSP_cert_status_str,
AROS_LDA(  long, ___s,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char * ,OCSP_crl_reason_str,
AROS_LDA(  long, ___s,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,OCSP_REQUEST_print,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  OCSP_REQUEST *, ___a,A1),
AROS_LDA(  unsigned long, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,OCSP_RESPONSE_print,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  OCSP_RESPONSE *, ___o,A1),
AROS_LDA(  unsigned long, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,OCSP_basic_verify,
AROS_LDA(  OCSP_BASICRESP *, ___bs,A0),
AROS_LDA(  STACK_OF(X509) *, ___certs,A1),
AROS_LDA(  X509_STORE *, ___st,A2),
AROS_LDA(  unsigned long, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(int ,ERR_load_OCSP_strings,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,PEM_get_EVP_CIPHER_INFO,
AROS_LDA(  char *, ___header,A0),
AROS_LDA(  EVP_CIPHER_INFO *, ___cipher,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,PEM_do_header,
AROS_LDA(  EVP_CIPHER_INFO *, ___cipher,A0),
AROS_LDA(  unsigned char *, ___data,A1),
AROS_LDA(  long *, ___len,A2),
AROS_LDA(  pem_password_cb *, ___callback,A3),
AROS_LDA(  void *, ___u,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,PEM_read_bio,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  char **, ___name,A1),
AROS_LDA(  char **, ___header,A2),
AROS_LDA(  unsigned char **, ___data,A3),
AROS_LDA(  long *, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,PEM_write_bio,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  const char *, ___name,A1),
AROS_LDA(  const char *, ___hdr,A2),
AROS_LDA(  const unsigned char *, ___data,A3),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(int ,PEM_bytes_read_bio,
AROS_LDA(  unsigned char **, ___pdata,A0),
AROS_LDA(  long *, ___plen,A1),
AROS_LDA(  char **, ___pnm,A2),
AROS_LDA(  const char *, ___name,A3),
AROS_LDA(  BIO *, ___bp,D0),
AROS_LDA(  pem_password_cb *, ___cb,D1),
AROS_LDA(  void *, ___u,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(void * ,PEM_ASN1_read_bio,
AROS_LDA(  d2i_of_void *, ___d2i,A0),
AROS_LDA(  const char *, ___name,A1),
AROS_LDA(  BIO *, ___bp,A2),
AROS_LDA(  void **, ___x,A3),
AROS_LDA(  pem_password_cb *, ___cb,D0),
AROS_LDA(  void *, ___u,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD9(int ,PEM_ASN1_write_bio,
AROS_LDA(  i2d_of_void *, ___i2d,A0),
AROS_LDA(  const char *, ___name,A1),
AROS_LDA(  BIO *, ___bp,A2),
AROS_LDA(  char *, ___x,A3),
AROS_LDA(  const EVP_CIPHER *, ___enc,D0),
AROS_LDA(  unsigned char *, ___kstr,D1),
AROS_LDA(  int, ___klen,D2),
AROS_LDA(  pem_password_cb *, ___cb,D3),
AROS_LDA(  void *, ___u,D4),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(STACK_OF(X509_INFO) * ,PEM_X509_INFO_read_bio,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  STACK_OF(X509_INFO) *, ___sk,A1),
AROS_LDA(  pem_password_cb *, ___cb,A2),
AROS_LDA(  void *, ___u,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(int ,PEM_X509_INFO_write_bio,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  X509_INFO *, ___xi,A1),
AROS_LDA(  EVP_CIPHER *, ___enc,A2),
AROS_LDA(  unsigned char *, ___kstr,A3),
AROS_LDA(  int, ___klen,D0),
AROS_LDA(  pem_password_cb *, ___cd,D1),
AROS_LDA(  void *, ___u,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,PEM_SignInit,
AROS_LDA(  EVP_MD_CTX *, ___ctx,A0),
AROS_LDA(  EVP_MD *, ___type,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,PEM_SignUpdate,
AROS_LDA(  EVP_MD_CTX *, ___ctx,A0),
AROS_LDA(  unsigned char *, ___d,A1),
AROS_LDA(  unsigned int, ___cnt,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,PEM_SignFinal,
AROS_LDA(  EVP_MD_CTX *, ___ctx,A0),
AROS_LDA(  unsigned char *, ___sigret,A1),
AROS_LDA(  unsigned int *, ___siglen,A2),
AROS_LDA(  EVP_PKEY *, ___pkey,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,PEM_def_callback,
AROS_LDA(  char *, ___buf,A0),
AROS_LDA(  int, ___num,D0),
AROS_LDA(  int, ___w,D1),
AROS_LDA(  void *, ___key,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,PEM_proc_type,
AROS_LDA(  char *, ___buf,A0),
AROS_LDA(  int, ___type,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void ,PEM_dek_info,
AROS_LDA(  char *, ___buf,A0),
AROS_LDA(  const char *, ___type,A1),
AROS_LDA(  int, ___len,D0),
AROS_LDA(  char *, ___str,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(X509 * ,PEM_read_bio_X509,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  X509 **, ___x,A1),
AROS_LDA(  pem_password_cb *, ___cb,A2),
AROS_LDA(  void *, ___u,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,PEM_write_bio_X509,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  X509 *, ___x,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(X509 * ,PEM_read_bio_X509_AUX,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  X509 **, ___x,A1),
AROS_LDA(  pem_password_cb *, ___cb,A2),
AROS_LDA(  void *, ___u,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,PEM_write_bio_X509_AUX,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  X509 *, ___x,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(X509_REQ * ,PEM_read_bio_X509_REQ,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  X509_REQ **, ___x,A1),
AROS_LDA(  pem_password_cb *, ___cb,A2),
AROS_LDA(  void *, ___u,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,PEM_write_bio_X509_REQ,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  X509_REQ *, ___x,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,PEM_write_bio_X509_REQ_NEW,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  X509_REQ *, ___x,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(X509_CRL * ,PEM_read_bio_X509_CRL,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  X509_CRL **, ___x,A1),
AROS_LDA(  pem_password_cb *, ___cb,A2),
AROS_LDA(  void *, ___u,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,PEM_write_bio_X509_CRL,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  X509_CRL *, ___x,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(PKCS7 * ,PEM_read_bio_PKCS7,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  PKCS7 **, ___x,A1),
AROS_LDA(  pem_password_cb *, ___cb,A2),
AROS_LDA(  void *, ___u,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,PEM_write_bio_PKCS7,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  PKCS7 *, ___x,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(NETSCAPE_CERT_SEQUENCE * ,PEM_read_bio_NETSCAPE_CERT_SEQUENCE,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  NETSCAPE_CERT_SEQUENCE **, ___x,A1),
AROS_LDA(  pem_password_cb *, ___cb,A2),
AROS_LDA(  void *, ___u,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,PEM_write_bio_NETSCAPE_CERT_SEQUENCE,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  NETSCAPE_CERT_SEQUENCE *, ___x,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(X509_SIG * ,PEM_read_bio_PKCS8,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  X509_SIG **, ___x,A1),
AROS_LDA(  pem_password_cb *, ___cb,A2),
AROS_LDA(  void *, ___u,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,PEM_write_bio_PKCS8,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  X509_SIG *, ___x,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(PKCS8_PRIV_KEY_INFO * ,PEM_read_bio_PKCS8_PRIV_KEY_INFO,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  PKCS8_PRIV_KEY_INFO **, ___x,A1),
AROS_LDA(  pem_password_cb *, ___cb,A2),
AROS_LDA(  void *, ___u,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,PEM_write_bio_PKCS8_PRIV_KEY_INFO,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  PKCS8_PRIV_KEY_INFO *, ___x,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(RSA * ,PEM_read_bio_RSAPrivateKey,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  RSA **, ___x,A1),
AROS_LDA(  pem_password_cb *, ___cb,A2),
AROS_LDA(  void *, ___u,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(int ,PEM_write_bio_RSAPrivateKey,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  RSA *, ___x,A1),
AROS_LDA(  const EVP_CIPHER *, ___enc,A2),
AROS_LDA(  unsigned char *, ___kstr,A3),
AROS_LDA(  int, ___klen,D0),
AROS_LDA(  pem_password_cb *, ___cb,D1),
AROS_LDA(  void *, ___u,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(RSA * ,PEM_read_bio_RSAPublicKey,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  RSA **, ___x,A1),
AROS_LDA(  pem_password_cb *, ___cb,A2),
AROS_LDA(  void *, ___u,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,PEM_write_bio_RSAPublicKey,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  RSA *, ___x,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(RSA * ,PEM_read_bio_RSA_PUBKEY,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  RSA **, ___x,A1),
AROS_LDA(  pem_password_cb *, ___cb,A2),
AROS_LDA(  void *, ___u,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,PEM_write_bio_RSA_PUBKEY,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  RSA *, ___x,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(DSA * ,PEM_read_bio_DSAPrivateKey,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  DSA **, ___x,A1),
AROS_LDA(  pem_password_cb *, ___cb,A2),
AROS_LDA(  void *, ___u,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(int ,PEM_write_bio_DSAPrivateKey,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  DSA *, ___x,A1),
AROS_LDA(  const EVP_CIPHER *, ___enc,A2),
AROS_LDA(  unsigned char *, ___kstr,A3),
AROS_LDA(  int, ___klen,D0),
AROS_LDA(  pem_password_cb *, ___cb,D1),
AROS_LDA(  void *, ___u,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(DSA * ,PEM_read_bio_DSA_PUBKEY,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  DSA **, ___x,A1),
AROS_LDA(  pem_password_cb *, ___cb,A2),
AROS_LDA(  void *, ___u,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,PEM_write_bio_DSA_PUBKEY,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  DSA *, ___x,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(DSA * ,PEM_read_bio_DSAparams,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  DSA **, ___x,A1),
AROS_LDA(  pem_password_cb *, ___cb,A2),
AROS_LDA(  void *, ___u,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,PEM_write_bio_DSAparams,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  DSA *, ___x,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(DH * ,PEM_read_bio_DHparams,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  DH **, ___x,A1),
AROS_LDA(  pem_password_cb *, ___cb,A2),
AROS_LDA(  void *, ___u,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,PEM_write_bio_DHparams,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  DH *, ___x,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(EVP_PKEY * ,PEM_read_bio_PrivateKey,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  EVP_PKEY **, ___x,A1),
AROS_LDA(  pem_password_cb *, ___cb,A2),
AROS_LDA(  void *, ___u,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(int ,PEM_write_bio_PrivateKey,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  EVP_PKEY *, ___x,A1),
AROS_LDA(  const EVP_CIPHER *, ___enc,A2),
AROS_LDA(  unsigned char *, ___kstr,A3),
AROS_LDA(  int, ___klen,D0),
AROS_LDA(  pem_password_cb *, ___cb,D1),
AROS_LDA(  void *, ___u,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(EVP_PKEY * ,PEM_read_bio_PUBKEY,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  EVP_PKEY **, ___x,A1),
AROS_LDA(  pem_password_cb *, ___cb,A2),
AROS_LDA(  void *, ___u,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,PEM_write_bio_PUBKEY,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  EVP_PKEY *, ___x,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(int ,PEM_write_bio_PKCS8PrivateKey_nid,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  EVP_PKEY *, ___x,A1),
AROS_LDA(  int, ___nid,D0),
AROS_LDA(  char *, ___kstr,A2),
AROS_LDA(  int, ___klen,D1),
AROS_LDA(  pem_password_cb *, ___cb,A3),
AROS_LDA(  void *, ___u,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(int ,PEM_write_bio_PKCS8PrivateKey,
AROS_LDA(  BIO *, ___a,A0),
AROS_LDA(  EVP_PKEY *, ___b,A1),
AROS_LDA(  const EVP_CIPHER *, ___c,A2),
AROS_LDA(  char *, ___d,A3),
AROS_LDA(  int, ___a1,D0),
AROS_LDA(  pem_password_cb *, ___e,D1),
AROS_LDA(  void *, ___f,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(int ,i2d_PKCS8PrivateKey_bio,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  EVP_PKEY *, ___x,A1),
AROS_LDA(  const EVP_CIPHER *, ___enc,A2),
AROS_LDA(  char *, ___kstr,A3),
AROS_LDA(  int, ___klen,D0),
AROS_LDA(  pem_password_cb *, ___cb,D1),
AROS_LDA(  void *, ___u,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(int ,i2d_PKCS8PrivateKey_nid_bio,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  EVP_PKEY *, ___x,A1),
AROS_LDA(  int, ___nid,D0),
AROS_LDA(  char *, ___kstr,A2),
AROS_LDA(  int, ___klen,D1),
AROS_LDA(  pem_password_cb *, ___cb,A3),
AROS_LDA(  void *, ___u,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(EVP_PKEY * ,d2i_PKCS8PrivateKey_bio,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  EVP_PKEY **, ___x,A1),
AROS_LDA(  pem_password_cb *, ___cb,A2),
AROS_LDA(  void *, ___u,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(int ,ERR_load_PEM_strings,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(PKCS12_SAFEBAG * ,PKCS12_item_pack_safebag,
AROS_LDA(  void *, ___obj,A0),
AROS_LDA(  const ASN1_ITEM *, ___it,A1),
AROS_LDA(  int, ___nid1,D0),
AROS_LDA(  int, ___nid2,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(PKCS8_PRIV_KEY_INFO * ,PKCS8_decrypt,
AROS_LDA(  const X509_SIG *, ___p8,A0),
AROS_LDA(  const char *, ___pass,A1),
AROS_LDA(  int, ___passlen,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(PKCS8_PRIV_KEY_INFO * ,PKCS12_decrypt_skey,
AROS_LDA(  const PKCS12_SAFEBAG *, ___bag,A0),
AROS_LDA(  const char *, ___pass,A1),
AROS_LDA(  int, ___passlen,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD8(X509_SIG * ,PKCS8_encrypt,
AROS_LDA(  int, ___pbe_nid,D0),
AROS_LDA(  const EVP_CIPHER *, ___cipher,A0),
AROS_LDA(  const char *, ___pass,A1),
AROS_LDA(  int, ___passlen,D1),
AROS_LDA(  unsigned char *, ___salt,A2),
AROS_LDA(  int, ___saltlen,D2),
AROS_LDA(  int, ___iter,D3),
AROS_LDA(  PKCS8_PRIV_KEY_INFO *, ___p8,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(PKCS7 * ,PKCS12_pack_p7data,
AROS_LDA(  STACK_OF(PKCS12_SAFEBAG) *, ___sk,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(STACK_OF(PKCS12_SAFEBAG) * ,PKCS12_unpack_p7data,
AROS_LDA(  PKCS7 *, ___p7,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(PKCS7 * ,PKCS12_pack_p7encdata,
AROS_LDA(  int, ___pbe_nid,D0),
AROS_LDA(  const char *, ___pass,A0),
AROS_LDA(  int, ___passlen,D1),
AROS_LDA(  unsigned char *, ___salt,A1),
AROS_LDA(  int, ___saltlen,D2),
AROS_LDA(  int, ___iter,D3),
AROS_LDA(  STACK_OF(PKCS12_SAFEBAG) *, ___bags,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(STACK_OF(PKCS12_SAFEBAG) * ,PKCS12_unpack_p7encdata,
AROS_LDA(  PKCS7 *, ___p7,A0),
AROS_LDA(  const char *, ___pass,A1),
AROS_LDA(  int, ___passlen,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,PKCS12_pack_authsafes,
AROS_LDA(  PKCS12 *, ___p12,A0),
AROS_LDA(  STACK_OF(PKCS7) *, ___safes,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(STACK_OF(PKCS7) * ,PKCS12_unpack_authsafes,
AROS_LDA(  const PKCS12 *, ___p12,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,PKCS12_add_localkeyid,
AROS_LDA(  PKCS12_SAFEBAG *, ___bag,A0),
AROS_LDA(  unsigned char *, ___name,A1),
AROS_LDA(  int, ___namelen,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,PKCS12_add_friendlyname_asc,
AROS_LDA(  PKCS12_SAFEBAG *, ___bag,A0),
AROS_LDA(  const char *, ___name,A1),
AROS_LDA(  int, ___namelen,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,PKCS12_add_CSPName_asc,
AROS_LDA(  PKCS12_SAFEBAG *, ___bag,A0),
AROS_LDA(  const char *, ___name,A1),
AROS_LDA(  int, ___namelen,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,PKCS12_add_friendlyname_uni,
AROS_LDA(  PKCS12_SAFEBAG *, ___bag,A0),
AROS_LDA(  const unsigned char *, ___name,A1),
AROS_LDA(  int, ___namelen,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,PKCS8_add_keyusage,
AROS_LDA(  PKCS8_PRIV_KEY_INFO *, ___p8,A0),
AROS_LDA(  int, ___usage,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(ASN1_TYPE * ,PKCS12_get_attr_gen,
AROS_LDA(  const STACK_OF(X509_ATTRIBUTE) *, ___attrs,A0),
AROS_LDA(  int, ___attr_nid,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(char * ,PKCS12_get_friendlyname,
AROS_LDA(  PKCS12_SAFEBAG *, ___bag,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD8(unsigned char * ,PKCS12_pbe_crypt,
AROS_LDA(  const X509_ALGOR *, ___algor,A0),
AROS_LDA(  const char *, ___pass,A1),
AROS_LDA(  int, ___passlen,D0),
AROS_LDA(  const unsigned char *, ___in,A2),
AROS_LDA(  int, ___inlen,D1),
AROS_LDA(  unsigned char **, ___data,A3),
AROS_LDA(  int *, ___datalen,D2),
AROS_LDA(  int, ___en_de,D3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(void * ,PKCS12_item_decrypt_d2i,
AROS_LDA(  const X509_ALGOR *, ___algor,A0),
AROS_LDA(  const ASN1_ITEM *, ___it,A1),
AROS_LDA(  const char *, ___pass,A2),
AROS_LDA(  int, ___passlen,D0),
AROS_LDA(  const ASN1_OCTET_STRING *, ___oct,A3),
AROS_LDA(  int, ___zbuf,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(ASN1_OCTET_STRING * ,PKCS12_item_i2d_encrypt,
AROS_LDA(  X509_ALGOR *, ___algor,A0),
AROS_LDA(  const ASN1_ITEM *, ___it,A1),
AROS_LDA(  const char *, ___pass,A2),
AROS_LDA(  int, ___passlen,D0),
AROS_LDA(  void *, ___obj,A3),
AROS_LDA(  int, ___zbuf,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(PKCS12 * ,PKCS12_init,
AROS_LDA(  int, ___mode,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD9(int ,PKCS12_key_gen_asc,
AROS_LDA(  const char *, ___pass,A0),
AROS_LDA(  int, ___passlen,D0),
AROS_LDA(  unsigned char *, ___salt,A1),
AROS_LDA(  int, ___saltlen,D1),
AROS_LDA(  int, ___id,D2),
AROS_LDA(  int, ___iter,D3),
AROS_LDA(  int, ___n,D4),
AROS_LDA(  unsigned char *, ___out,A2),
AROS_LDA(  const EVP_MD *, ___md_type,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD9(int ,PKCS12_key_gen_uni,
AROS_LDA(  unsigned char *, ___pass,A0),
AROS_LDA(  int, ___passlen,D0),
AROS_LDA(  unsigned char *, ___salt,A1),
AROS_LDA(  int, ___saltlen,D1),
AROS_LDA(  int, ___id,D2),
AROS_LDA(  int, ___iter,D3),
AROS_LDA(  int, ___n,D4),
AROS_LDA(  unsigned char *, ___out,A2),
AROS_LDA(  const EVP_MD *, ___md_type,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(int ,PKCS12_PBE_keyivgen,
AROS_LDA(  EVP_CIPHER_CTX *, ___ctx,A0),
AROS_LDA(  const char *, ___pass,A1),
AROS_LDA(  int, ___passlen,D0),
AROS_LDA(  ASN1_TYPE *, ___param,A2),
AROS_LDA(  const EVP_CIPHER *, ___cipher,A3),
AROS_LDA(  const EVP_MD *, ___md_type,D1),
AROS_LDA(  int, ___en_de,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,PKCS12_gen_mac,
AROS_LDA(  PKCS12 *, ___p12,A0),
AROS_LDA(  const char *, ___pass,A1),
AROS_LDA(  int, ___passlen,D0),
AROS_LDA(  unsigned char *, ___mac,A2),
AROS_LDA(  unsigned int *, ___maclen,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,PKCS12_verify_mac,
AROS_LDA(  PKCS12 *, ___p12,A0),
AROS_LDA(  const char *, ___pass,A1),
AROS_LDA(  int, ___passlen,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(int ,PKCS12_set_mac,
AROS_LDA(  PKCS12 *, ___p12,A0),
AROS_LDA(  const char *, ___pass,A1),
AROS_LDA(  int, ___passlen,D0),
AROS_LDA(  unsigned char *, ___salt,A2),
AROS_LDA(  int, ___saltlen,D1),
AROS_LDA(  int, ___iter,D2),
AROS_LDA(  const EVP_MD *, ___md_type,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,PKCS12_setup_mac,
AROS_LDA(  PKCS12 *, ___p12,A0),
AROS_LDA(  int, ___iter,D0),
AROS_LDA(  unsigned char *, ___salt,A1),
AROS_LDA(  int, ___saltlen,D1),
AROS_LDA(  const EVP_MD *, ___md_type,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(unsigned char * ,OPENSSL_asc2uni,
AROS_LDA(  const char *, ___asc,A0),
AROS_LDA(  int, ___asclen,D0),
AROS_LDA(  unsigned char **, ___uni,A1),
AROS_LDA(  int *, ___unilen,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(char * ,OPENSSL_uni2asc,
AROS_LDA(  const unsigned char *, ___uni,A0),
AROS_LDA(  int, ___unilen,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(PKCS12 * ,PKCS12_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,PKCS12_free,
AROS_LDA(  PKCS12 *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(PKCS12 * ,d2i_PKCS12,
AROS_LDA(  PKCS12 **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_PKCS12,
AROS_LDA(  PKCS12 *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,PKCS12_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(PKCS12_MAC_DATA * ,PKCS12_MAC_DATA_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,PKCS12_MAC_DATA_free,
AROS_LDA(  PKCS12_MAC_DATA *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(PKCS12_MAC_DATA * ,d2i_PKCS12_MAC_DATA,
AROS_LDA(  PKCS12_MAC_DATA **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_PKCS12_MAC_DATA,
AROS_LDA(  PKCS12_MAC_DATA *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,PKCS12_MAC_DATA_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(PKCS12_SAFEBAG * ,PKCS12_SAFEBAG_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,PKCS12_SAFEBAG_free,
AROS_LDA(  PKCS12_SAFEBAG *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(PKCS12_SAFEBAG * ,d2i_PKCS12_SAFEBAG,
AROS_LDA(  PKCS12_SAFEBAG **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_PKCS12_SAFEBAG,
AROS_LDA(  PKCS12_SAFEBAG *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,PKCS12_SAFEBAG_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(PKCS12_BAGS * ,PKCS12_BAGS_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,PKCS12_BAGS_free,
AROS_LDA(  PKCS12_BAGS *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(PKCS12_BAGS * ,d2i_PKCS12_BAGS,
AROS_LDA(  PKCS12_BAGS **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_PKCS12_BAGS,
AROS_LDA(  PKCS12_BAGS *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,PKCS12_BAGS_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,PKCS12_SAFEBAGS_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,PKCS12_AUTHSAFES_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(void ,PKCS12_PBE_add,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,PKCS12_parse,
AROS_LDA(  PKCS12 *, ___p12,A0),
AROS_LDA(  const char *, ___pass,A1),
AROS_LDA(  EVP_PKEY **, ___pkey,A2),
AROS_LDA(  X509 **, ___cert,A3),
AROS_LDA(  STACK_OF(X509) **, ___ca,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD10(PKCS12 * ,PKCS12_create,
AROS_LDA(  const char *, ___pass,A0),
AROS_LDA(  const char *, ___name,A1),
AROS_LDA(  EVP_PKEY *, ___pkey,A2),
AROS_LDA(  X509 *, ___cert,A3),
AROS_LDA(  STACK_OF(X509) *, ___ca,D0),
AROS_LDA(  int, ___nid_key,D1),
AROS_LDA(  int, ___nid_cert,D2),
AROS_LDA(  int, ___iter,D3),
AROS_LDA(  int, ___mac_iter,D4),
AROS_LDA(  int, ___keytype,D5),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_PKCS12_bio,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  PKCS12 *, ___p12,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(PKCS12 * ,d2i_PKCS12_bio,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  PKCS12 **, ___p12,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,PKCS12_newpass,
AROS_LDA(  PKCS12 *, ___p12,A0),
AROS_LDA(  const char *, ___oldpass,A1),
AROS_LDA(  const char *, ___newpass,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(int ,ERR_load_PKCS12_strings,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,PKCS7_ISSUER_AND_SERIAL_digest,
AROS_LDA(  PKCS7_ISSUER_AND_SERIAL *, ___data,A0),
AROS_LDA(  const EVP_MD *, ___type,A1),
AROS_LDA(  unsigned char *, ___md,A2),
AROS_LDA(  unsigned int *, ___len,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(PKCS7 * ,PKCS7_dup,
AROS_LDA(  PKCS7 *, ___p7,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(PKCS7 * ,d2i_PKCS7_bio,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  PKCS7 **, ___p7,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_PKCS7_bio,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  PKCS7 *, ___p7,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(PKCS7_ISSUER_AND_SERIAL * ,PKCS7_ISSUER_AND_SERIAL_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,PKCS7_ISSUER_AND_SERIAL_free,
AROS_LDA(  PKCS7_ISSUER_AND_SERIAL *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(PKCS7_ISSUER_AND_SERIAL * ,d2i_PKCS7_ISSUER_AND_SERIAL,
AROS_LDA(  PKCS7_ISSUER_AND_SERIAL **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_PKCS7_ISSUER_AND_SERIAL,
AROS_LDA(  PKCS7_ISSUER_AND_SERIAL *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,PKCS7_ISSUER_AND_SERIAL_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(PKCS7_SIGNER_INFO * ,PKCS7_SIGNER_INFO_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,PKCS7_SIGNER_INFO_free,
AROS_LDA(  PKCS7_SIGNER_INFO *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(PKCS7_SIGNER_INFO * ,d2i_PKCS7_SIGNER_INFO,
AROS_LDA(  PKCS7_SIGNER_INFO **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_PKCS7_SIGNER_INFO,
AROS_LDA(  PKCS7_SIGNER_INFO *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,PKCS7_SIGNER_INFO_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(PKCS7_RECIP_INFO * ,PKCS7_RECIP_INFO_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,PKCS7_RECIP_INFO_free,
AROS_LDA(  PKCS7_RECIP_INFO *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(PKCS7_RECIP_INFO * ,d2i_PKCS7_RECIP_INFO,
AROS_LDA(  PKCS7_RECIP_INFO **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_PKCS7_RECIP_INFO,
AROS_LDA(  PKCS7_RECIP_INFO *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,PKCS7_RECIP_INFO_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(PKCS7_SIGNED * ,PKCS7_SIGNED_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,PKCS7_SIGNED_free,
AROS_LDA(  PKCS7_SIGNED *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(PKCS7_SIGNED * ,d2i_PKCS7_SIGNED,
AROS_LDA(  PKCS7_SIGNED **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_PKCS7_SIGNED,
AROS_LDA(  PKCS7_SIGNED *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,PKCS7_SIGNED_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(PKCS7_ENC_CONTENT * ,PKCS7_ENC_CONTENT_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,PKCS7_ENC_CONTENT_free,
AROS_LDA(  PKCS7_ENC_CONTENT *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(PKCS7_ENC_CONTENT * ,d2i_PKCS7_ENC_CONTENT,
AROS_LDA(  PKCS7_ENC_CONTENT **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_PKCS7_ENC_CONTENT,
AROS_LDA(  PKCS7_ENC_CONTENT *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,PKCS7_ENC_CONTENT_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(PKCS7_ENVELOPE * ,PKCS7_ENVELOPE_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,PKCS7_ENVELOPE_free,
AROS_LDA(  PKCS7_ENVELOPE *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(PKCS7_ENVELOPE * ,d2i_PKCS7_ENVELOPE,
AROS_LDA(  PKCS7_ENVELOPE **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_PKCS7_ENVELOPE,
AROS_LDA(  PKCS7_ENVELOPE *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,PKCS7_ENVELOPE_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(PKCS7_SIGN_ENVELOPE * ,PKCS7_SIGN_ENVELOPE_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,PKCS7_SIGN_ENVELOPE_free,
AROS_LDA(  PKCS7_SIGN_ENVELOPE *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(PKCS7_SIGN_ENVELOPE * ,d2i_PKCS7_SIGN_ENVELOPE,
AROS_LDA(  PKCS7_SIGN_ENVELOPE **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_PKCS7_SIGN_ENVELOPE,
AROS_LDA(  PKCS7_SIGN_ENVELOPE *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,PKCS7_SIGN_ENVELOPE_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(PKCS7_DIGEST * ,PKCS7_DIGEST_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,PKCS7_DIGEST_free,
AROS_LDA(  PKCS7_DIGEST *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(PKCS7_DIGEST * ,d2i_PKCS7_DIGEST,
AROS_LDA(  PKCS7_DIGEST **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_PKCS7_DIGEST,
AROS_LDA(  PKCS7_DIGEST *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,PKCS7_DIGEST_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(PKCS7_ENCRYPT * ,PKCS7_ENCRYPT_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,PKCS7_ENCRYPT_free,
AROS_LDA(  PKCS7_ENCRYPT *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(PKCS7_ENCRYPT * ,d2i_PKCS7_ENCRYPT,
AROS_LDA(  PKCS7_ENCRYPT **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_PKCS7_ENCRYPT,
AROS_LDA(  PKCS7_ENCRYPT *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,PKCS7_ENCRYPT_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(PKCS7 * ,PKCS7_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,PKCS7_free,
AROS_LDA(  PKCS7 *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(PKCS7 * ,d2i_PKCS7,
AROS_LDA(  PKCS7 **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_PKCS7,
AROS_LDA(  PKCS7 *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,PKCS7_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,PKCS7_ATTR_SIGN_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,PKCS7_ATTR_VERIFY_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(long ,PKCS7_ctrl,
AROS_LDA(  PKCS7 *, ___p7,A0),
AROS_LDA(  int, ___cmd,D0),
AROS_LDA(  long, ___larg,D1),
AROS_LDA(  char *, ___parg,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,PKCS7_set_type,
AROS_LDA(  PKCS7 *, ___p7,A0),
AROS_LDA(  int, ___type,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,PKCS7_set_content,
AROS_LDA(  PKCS7 *, ___p7,A0),
AROS_LDA(  PKCS7 *, ___p7_data,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,PKCS7_SIGNER_INFO_set,
AROS_LDA(  PKCS7_SIGNER_INFO *, ___p7i,A0),
AROS_LDA(  X509 *, ___x509,A1),
AROS_LDA(  EVP_PKEY *, ___pkey,A2),
AROS_LDA(  const EVP_MD *, ___dgst,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,PKCS7_add_signer,
AROS_LDA(  PKCS7 *, ___p7,A0),
AROS_LDA(  PKCS7_SIGNER_INFO *, ___p7i,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,PKCS7_add_certificate,
AROS_LDA(  PKCS7 *, ___p7,A0),
AROS_LDA(  X509 *, ___x509,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,PKCS7_add_crl,
AROS_LDA(  PKCS7 *, ___p7,A0),
AROS_LDA(  X509_CRL *, ___x509,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,PKCS7_content_new,
AROS_LDA(  PKCS7 *, ___p7,A0),
AROS_LDA(  int, ___nid,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,PKCS7_dataVerify,
AROS_LDA(  X509_STORE *, ___cert_store,A0),
AROS_LDA(  X509_STORE_CTX *, ___ctx,A1),
AROS_LDA(  BIO *, ___bio,A2),
AROS_LDA(  PKCS7 *, ___p7,A3),
AROS_LDA(  PKCS7_SIGNER_INFO *, ___si,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,PKCS7_signatureVerify,
AROS_LDA(  BIO *, ___bio,A0),
AROS_LDA(  PKCS7 *, ___p7,A1),
AROS_LDA(  PKCS7_SIGNER_INFO *, ___si,A2),
AROS_LDA(  X509 *, ___x509,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(BIO * ,PKCS7_dataInit,
AROS_LDA(  PKCS7 *, ___p7,A0),
AROS_LDA(  BIO *, ___bio,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,PKCS7_dataFinal,
AROS_LDA(  PKCS7 *, ___p7,A0),
AROS_LDA(  BIO *, ___bio,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(BIO * ,PKCS7_dataDecode,
AROS_LDA(  PKCS7 *, ___p7,A0),
AROS_LDA(  EVP_PKEY *, ___pkey,A1),
AROS_LDA(  BIO *, ___in_bio,A2),
AROS_LDA(  X509 *, ___pcert,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(PKCS7_SIGNER_INFO * ,PKCS7_add_signature,
AROS_LDA(  PKCS7 *, ___p7,A0),
AROS_LDA(  X509 *, ___x509,A1),
AROS_LDA(  EVP_PKEY *, ___pkey,A2),
AROS_LDA(  const EVP_MD *, ___dgst,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(X509 * ,PKCS7_cert_from_signer_info,
AROS_LDA(  PKCS7 *, ___p7,A0),
AROS_LDA(  PKCS7_SIGNER_INFO *, ___si,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(STACK_OF(PKCS7_SIGNER_INFO) * ,PKCS7_get_signer_info,
AROS_LDA(  PKCS7 *, ___p7,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(PKCS7_RECIP_INFO * ,PKCS7_add_recipient,
AROS_LDA(  PKCS7 *, ___p7,A0),
AROS_LDA(  X509 *, ___x509,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,PKCS7_add_recipient_info,
AROS_LDA(  PKCS7 *, ___p7,A0),
AROS_LDA(  PKCS7_RECIP_INFO *, ___ri,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,PKCS7_RECIP_INFO_set,
AROS_LDA(  PKCS7_RECIP_INFO *, ___p7i,A0),
AROS_LDA(  X509 *, ___x509,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,PKCS7_set_cipher,
AROS_LDA(  PKCS7 *, ___p7,A0),
AROS_LDA(  const EVP_CIPHER *, ___cipher,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(PKCS7_ISSUER_AND_SERIAL * ,PKCS7_get_issuer_and_serial,
AROS_LDA(  PKCS7 *, ___p7,A0),
AROS_LDA(  int, ___idx,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ASN1_OCTET_STRING * ,PKCS7_digest_from_attributes,
AROS_LDA(  STACK_OF(X509_ATTRIBUTE) *, ___sk,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,PKCS7_add_signed_attribute,
AROS_LDA(  PKCS7_SIGNER_INFO *, ___p7si,A0),
AROS_LDA(  int, ___nid,D0),
AROS_LDA(  int, ___type,D1),
AROS_LDA(  void *, ___data,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,PKCS7_add_attribute,
AROS_LDA(  PKCS7_SIGNER_INFO *, ___p7si,A0),
AROS_LDA(  int, ___nid,D0),
AROS_LDA(  int, ___atrtype,D1),
AROS_LDA(  void *, ___value,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(ASN1_TYPE * ,PKCS7_get_attribute,
AROS_LDA(  PKCS7_SIGNER_INFO *, ___si,A0),
AROS_LDA(  int, ___nid,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(ASN1_TYPE * ,PKCS7_get_signed_attribute,
AROS_LDA(  PKCS7_SIGNER_INFO *, ___si,A0),
AROS_LDA(  int, ___nid,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,PKCS7_set_signed_attributes,
AROS_LDA(  PKCS7_SIGNER_INFO *, ___p7si,A0),
AROS_LDA(  STACK_OF(X509_ATTRIBUTE) *, ___sk,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,PKCS7_set_attributes,
AROS_LDA(  PKCS7_SIGNER_INFO *, ___p7si,A0),
AROS_LDA(  STACK_OF(X509_ATTRIBUTE) *, ___sk,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(PKCS7 * ,PKCS7_sign,
AROS_LDA(  X509 *, ___signcert,A0),
AROS_LDA(  EVP_PKEY *, ___pkey,A1),
AROS_LDA(  STACK_OF(X509) *, ___certs,A2),
AROS_LDA(  BIO *, ___data,A3),
AROS_LDA(  int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int ,PKCS7_verify,
AROS_LDA(  PKCS7 *, ___p7,A0),
AROS_LDA(  STACK_OF(X509) *, ___certs,A1),
AROS_LDA(  X509_STORE *, ___store,A2),
AROS_LDA(  BIO *, ___indata,A3),
AROS_LDA(  BIO *, ___out,D0),
AROS_LDA(  int, ___flags,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(STACK_OF(X509) * ,PKCS7_get0_signers,
AROS_LDA(  PKCS7 *, ___p7,A0),
AROS_LDA(  STACK_OF(X509) *, ___certs,A1),
AROS_LDA(  int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(PKCS7 * ,PKCS7_encrypt,
AROS_LDA(  STACK_OF(X509) *, ___certs,A0),
AROS_LDA(  BIO *, ___in,A1),
AROS_LDA(  const EVP_CIPHER *, ___cipher,A2),
AROS_LDA(  int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,PKCS7_decrypt,
AROS_LDA(  PKCS7 *, ___p7,A0),
AROS_LDA(  EVP_PKEY *, ___pkey,A1),
AROS_LDA(  X509 *, ___cert,A2),
AROS_LDA(  BIO *, ___data,A3),
AROS_LDA(  int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,PKCS7_add_attrib_smimecap,
AROS_LDA(  PKCS7_SIGNER_INFO *, ___si,A0),
AROS_LDA(  STACK_OF(X509_ALGOR) *, ___cap,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(STACK_OF(X509_ALGOR) * ,PKCS7_get_smimecap,
AROS_LDA(  PKCS7_SIGNER_INFO *, ___si,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,PKCS7_simple_smimecap,
AROS_LDA(  STACK_OF(X509_ALGOR) *, ___sk,A0),
AROS_LDA(  int, ___nid,D0),
AROS_LDA(  int, ___arg,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,SMIME_write_PKCS7,
AROS_LDA(  BIO *, ___bio,A0),
AROS_LDA(  PKCS7 *, ___p7,A1),
AROS_LDA(  BIO *, ___data,A2),
AROS_LDA(  int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(PKCS7 * ,SMIME_read_PKCS7,
AROS_LDA(  BIO *, ___bio,A0),
AROS_LDA(  BIO **, ___bcont,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,SMIME_crlf_copy,
AROS_LDA(  BIO *, ___in,A0),
AROS_LDA(  BIO *, ___out,A1),
AROS_LDA(  int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SMIME_text,
AROS_LDA(  BIO *, ___in,A0),
AROS_LDA(  BIO *, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(int ,ERR_load_PKCS7_strings,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,RAND_set_rand_method,
AROS_LDA(  const RAND_METHOD *, ___meth,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const RAND_METHOD * ,RAND_get_rand_method,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,RAND_bytes,
AROS_LDA(  unsigned char *, ___buf,A0),
AROS_LDA(  int, ___num,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,RAND_pseudo_bytes,
AROS_LDA(  unsigned char *, ___buf,A0),
AROS_LDA(  int, ___num,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,RAND_seed,
AROS_LDA(  const void *, ___buf,A0),
AROS_LDA(  int, ___num,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,RAND_add,
AROS_LDA(  const void *, ___buf,A0),
AROS_LDA(  int, ___num,D0),
AROS_LDA(  double, ___randomness,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,RAND_load_file,
AROS_LDA(  const char *, ___file,A0),
AROS_LDA(  long, ___max_bytes,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,RAND_write_file,
AROS_LDA(  const char *, ___file,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(const char * ,RAND_file_name,
AROS_LDA(  char *, ___file,A0),
AROS_LDA(  size_t, ___num,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(int ,RAND_status,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(int ,RAND_poll,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(int ,ERR_load_RAND_strings,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_CTX_set_msg_callback,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(APTR, ___cb,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_set_msg_callback,
AROS_LDA(  SSL *, ___ssl,A0),
AROS_LDA(APTR, ___cb,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(LHASH_OF(SSL_SESSION) * ,SSL_CTX_sessions,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(size_t ,SSL_get_finished,
AROS_LDA(  const SSL *, ___s,A0),
AROS_LDA(  void *, ___buf,A1),
AROS_LDA(  size_t, ___count,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(size_t ,SSL_get_peer_finished,
AROS_LDA(  const SSL *, ___s,A0),
AROS_LDA(  void *, ___buf,A1),
AROS_LDA(  size_t, ___count,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const BIO_METHOD * ,BIO_f_ssl,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(BIO * ,BIO_new_ssl,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  int, ___client,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(BIO * ,BIO_new_ssl_connect,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(BIO * ,BIO_new_buffer_ssl_connect,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,BIO_ssl_copy_session_id,
AROS_LDA(  BIO *, ___to,A0),
AROS_LDA(  BIO *, ___from,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,BIO_ssl_shutdown,
AROS_LDA(  BIO *, ___ssl_bio,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_CTX_set_cipher_list,
AROS_LDA(  SSL_CTX *, ___a,A0),
AROS_LDA(  const char *, ___str,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(SSL_CTX * ,SSL_CTX_new,
AROS_LDA(  const SSL_METHOD *, ___meth,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,SSL_CTX_free,
AROS_LDA(  SSL_CTX *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(long ,SSL_CTX_set_timeout,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  long, ___t,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(long ,SSL_CTX_get_timeout,
AROS_LDA(  const SSL_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_STORE * ,SSL_CTX_get_cert_store,
AROS_LDA(  const SSL_CTX *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_CTX_set_cert_store,
AROS_LDA(  SSL_CTX *, ___a,A0),
AROS_LDA(  X509_STORE *, ___b,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_want,
AROS_LDA(  const SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_clear,
AROS_LDA(  SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_CTX_flush_sessions,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  long, ___tm,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const SSL_CIPHER * ,SSL_get_current_cipher,
AROS_LDA(  const SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_CIPHER_get_bits,
AROS_LDA(  const SSL_CIPHER *, ___c,A0),
AROS_LDA(  int *, ___alg_bits,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char * ,SSL_CIPHER_get_version,
AROS_LDA(  const SSL_CIPHER *, ___c,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char * ,SSL_CIPHER_get_name,
AROS_LDA(  const SSL_CIPHER *, ___c,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char * ,SSL_CIPHER_get_mac,
AROS_LDA(  const SSL_CIPHER *, ___cipher,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char * ,SSL_CIPHER_get_encryption,
AROS_LDA(  const SSL_CIPHER *, ___cipher,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char * ,SSL_CIPHER_get_authentication,
AROS_LDA(  const SSL_CIPHER *, ___cipher,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char * ,SSL_CIPHER_get_key_exchange,
AROS_LDA(  const SSL_CIPHER *, ___cipher,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_get_fd,
AROS_LDA(  const SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_get_rfd,
AROS_LDA(  const SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_get_wfd,
AROS_LDA(  const SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(const char * ,SSL_get_cipher_list,
AROS_LDA(  const SSL *, ___s,A0),
AROS_LDA(  int, ___n,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(char * ,SSL_get_shared_ciphers,
AROS_LDA(  const SSL *, ___s,A0),
AROS_LDA(  char *, ___buf,A1),
AROS_LDA(  int, ___size,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_get_read_ahead,
AROS_LDA(  const SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_pending,
AROS_LDA(  const SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_set_fd,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  int, ___fd,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_set_rfd,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  int, ___fd,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_set_wfd,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  int, ___fd,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,SSL_set_bio,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  BIO *, ___rbio,A1),
AROS_LDA(  BIO *, ___wbio,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(BIO * ,SSL_get_rbio,
AROS_LDA(  const SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(BIO * ,SSL_get_wbio,
AROS_LDA(  const SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_set_cipher_list,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  const char *, ___str,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_set_read_ahead,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  int, ___yes,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_get_verify_mode,
AROS_LDA(  const SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_get_verify_depth,
AROS_LDA(  const SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR ,SSL_get_verify_callback,
AROS_LDA(  const SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,SSL_set_verify,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  int, ___mode,D0),
AROS_LDA(APTR,___callback,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_set_verify_depth,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  int, ___depth,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_use_RSAPrivateKey,
AROS_LDA(  SSL *, ___ssl,A0),
AROS_LDA(  RSA *, ___rsa,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,SSL_use_RSAPrivateKey_ASN1,
AROS_LDA(  SSL *, ___ssl,A0),
AROS_LDA(  const unsigned char *, ___d,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_use_PrivateKey,
AROS_LDA(  SSL *, ___ssl,A0),
AROS_LDA(  EVP_PKEY *, ___pkey,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,SSL_use_PrivateKey_ASN1,
AROS_LDA(  int, ___pk,D0),
AROS_LDA(  SSL *, ___ssl,A0),
AROS_LDA(  unsigned char *, ___d,A1),
AROS_LDA(  long, ___len,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_use_certificate,
AROS_LDA(  SSL *, ___ssl,A0),
AROS_LDA(  X509 *, ___x,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,SSL_use_certificate_ASN1,
AROS_LDA(  SSL *, ___ssl,A0),
AROS_LDA(  unsigned char *, ___d,A1),
AROS_LDA(  int, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,SSL_use_RSAPrivateKey_file,
AROS_LDA(  SSL *, ___ssl,A0),
AROS_LDA(  const char *, ___file,A1),
AROS_LDA(  int, ___type,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,SSL_use_PrivateKey_file,
AROS_LDA(  SSL *, ___ssl,A0),
AROS_LDA(  const char *, ___file,A1),
AROS_LDA(  int, ___type,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,SSL_use_certificate_file,
AROS_LDA(  SSL *, ___ssl,A0),
AROS_LDA(  const char *, ___file,A1),
AROS_LDA(  int, ___type,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,SSL_CTX_use_RSAPrivateKey_file,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  const char *, ___file,A1),
AROS_LDA(  int, ___type,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,SSL_CTX_use_PrivateKey_file,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  const char *, ___file,A1),
AROS_LDA(  int, ___type,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,SSL_CTX_use_certificate_file,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  const char *, ___file,A1),
AROS_LDA(  int, ___type,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_CTX_use_certificate_chain_file,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  const char *, ___file,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(STACK_OF(X509_NAME) * ,SSL_load_client_CA_file,
AROS_LDA(  const char *, ___file,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_add_file_cert_subjects_to_stack,
AROS_LDA(  STACK_OF(X509_NAME) *, ___stackCAs,A0),
AROS_LDA(  const char *, ___file,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_add_dir_cert_subjects_to_stack,
AROS_LDA(  STACK_OF(X509_NAME) *, ___stackCAs,A0),
AROS_LDA(  const char *, ___dir,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char * ,SSL_state_string,
AROS_LDA(  const SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char * ,SSL_rstate_string,
AROS_LDA(  const SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char * ,SSL_state_string_long,
AROS_LDA(  const SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char * ,SSL_rstate_string_long,
AROS_LDA(  const SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(long ,SSL_SESSION_get_time,
AROS_LDA(  const SSL_SESSION *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(long ,SSL_SESSION_set_time,
AROS_LDA(  SSL_SESSION *, ___s,A0),
AROS_LDA(  long, ___t,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(long ,SSL_SESSION_get_timeout,
AROS_LDA(  const SSL_SESSION *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(long ,SSL_SESSION_set_timeout,
AROS_LDA(  SSL_SESSION *, ___s,A0),
AROS_LDA(  long, ___t,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_copy_session_id,
AROS_LDA(  SSL *, ___to,A0),
AROS_LDA(  const SSL *, ___from,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(SSL_SESSION * ,SSL_SESSION_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_SESSION_print,
AROS_LDA(  BIO *, ___fp,A0),
AROS_LDA(  const SSL_SESSION *, ___ses,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,SSL_SESSION_free,
AROS_LDA(  SSL_SESSION *, ___ses,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_SSL_SESSION,
AROS_LDA(  SSL_SESSION *, ___in,A0),
AROS_LDA(  unsigned char **, ___pp,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_set_session,
AROS_LDA(  SSL *, ___to,A0),
AROS_LDA(  SSL_SESSION *, ___session,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_CTX_add_session,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  SSL_SESSION *, ___session,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_CTX_remove_session,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  SSL_SESSION *, ___session,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_CTX_set_generate_session_id,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  GEN_SESSION_CB, ___cb,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_set_generate_session_id,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  GEN_SESSION_CB, ___cb,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,SSL_has_matching_session_id,
AROS_LDA(  const SSL *, ___s,A0),
AROS_LDA(  const unsigned char *, ___id,A1),
AROS_LDA(  unsigned int, ___id_len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(SSL_SESSION * ,d2i_SSL_SESSION,
AROS_LDA(  SSL_SESSION **, ___a,A0),
AROS_LDA(  const unsigned char **, ___pp,A1),
AROS_LDA(  long, ___length,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509 * ,SSL_get_peer_certificate,
AROS_LDA(  const SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(STACK_OF(X509) * ,SSL_get_peer_cert_chain,
AROS_LDA(  const SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_CTX_get_verify_mode,
AROS_LDA(  const SSL_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_CTX_get_verify_depth,
AROS_LDA(  const SSL_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR ,SSL_CTX_get_verify_callback,
AROS_LDA(  const SSL_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,SSL_CTX_set_verify,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  int, ___mode,D0),
AROS_LDA(APTR , ___callback,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_CTX_set_verify_depth,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  int, ___depth,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,SSL_CTX_set_cert_verify_callback,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(APTR ,___cb,A1),
AROS_LDA(  void *, ___arg,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_CTX_use_RSAPrivateKey,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  RSA *, ___rsa,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,SSL_CTX_use_RSAPrivateKey_ASN1,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  unsigned char *, ___d,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_CTX_use_PrivateKey,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  EVP_PKEY *, ___pkey,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,SSL_CTX_use_PrivateKey_ASN1,
AROS_LDA(  int, ___pk,D0),
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  unsigned char *, ___d,A1),
AROS_LDA(  long, ___len,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_CTX_use_certificate,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  X509 *, ___x,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,SSL_CTX_use_certificate_ASN1,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  int, ___len,D0),
AROS_LDA(  unsigned char *, ___d,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_CTX_set_default_passwd_cb,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  pem_password_cb *, ___cb,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_CTX_set_default_passwd_cb_userdata,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  void *, ___u,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_CTX_check_private_key,
AROS_LDA(  const SSL_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_check_private_key,
AROS_LDA(  const SSL *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,SSL_CTX_set_session_id_context,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  const unsigned char *, ___sid_ctx,A1),
AROS_LDA(  unsigned int, ___sid_ctx_len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(SSL * ,SSL_new,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,SSL_set_session_id_context,
AROS_LDA(  SSL *, ___ssl,A0),
AROS_LDA(  const unsigned char *, ___sid_ctx,A1),
AROS_LDA(  unsigned int, ___sid_ctx_len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_CTX_set_purpose,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  int, ___purpose,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_set_purpose,
AROS_LDA(  SSL *, ___ssl,A0),
AROS_LDA(  int, ___purpose,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_CTX_set_trust,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  int, ___trust,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_set_trust,
AROS_LDA(  SSL *, ___ssl,A0),
AROS_LDA(  int, ___trust,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,SSL_free,
AROS_LDA(  SSL *, ___ssl,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_accept,
AROS_LDA(  SSL *, ___ssl,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_connect,
AROS_LDA(  SSL *, ___ssl,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,SSL_read,
AROS_LDA(  SSL *, ___ssl,A0),
AROS_LDA(  void *, ___buf,A1),
AROS_LDA(  int, ___num,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,SSL_peek,
AROS_LDA(  SSL *, ___ssl,A0),
AROS_LDA(  void *, ___buf,A1),
AROS_LDA(  int, ___num,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,SSL_write,
AROS_LDA(  SSL *, ___ssl,A0),
AROS_LDA(  const void *, ___buf,A1),
AROS_LDA(  int, ___num,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(long ,SSL_ctrl,
AROS_LDA(  SSL *, ___ssl,A0),
AROS_LDA(  int, ___cmd,D0),
AROS_LDA(  long, ___larg,D1),
AROS_LDA(  void *, ___parg,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(long ,SSL_callback_ctrl,
AROS_LDA(  SSL *, ___a,A0),
AROS_LDA(  int, ___a1,D0),
AROS_LDA(  APTR, ___b,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(long ,SSL_CTX_ctrl,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  int, ___cmd,D0),
AROS_LDA(  long, ___larg,D1),
AROS_LDA(  void *, ___parg,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(long ,SSL_CTX_callback_ctrl,
AROS_LDA(  SSL_CTX *, ___a1,A0),
AROS_LDA(  int, ___a2,D0),
AROS_LDA(  APTR, ___a3,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_get_error,
AROS_LDA(  const SSL *, ___s,A0),
AROS_LDA(  int, ___ret_code,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char * ,SSL_get_version,
AROS_LDA(  const SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_CTX_set_ssl_version,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  const SSL_METHOD *, ___meth,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const SSL_METHOD * ,TLSv1_method,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const SSL_METHOD * ,TLSv1_server_method,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const SSL_METHOD * ,TLSv1_client_method,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(STACK_OF(SSL_CIPHER) * ,SSL_get_ciphers,
AROS_LDA(  const SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_do_handshake,
AROS_LDA(  SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_renegotiate,
AROS_LDA(  SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_renegotiate_pending,
AROS_LDA(  const SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_shutdown,
AROS_LDA(  SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const SSL_METHOD * ,SSL_get_ssl_method,
AROS_LDA(  const SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_set_ssl_method,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  SSL_METHOD *, ___method,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char * ,SSL_alert_type_string_long,
AROS_LDA(  int, ___value,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char * ,SSL_alert_type_string,
AROS_LDA(  int, ___value,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char * ,SSL_alert_desc_string_long,
AROS_LDA(  int, ___value,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char * ,SSL_alert_desc_string,
AROS_LDA(  int, ___value,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_set_client_CA_list,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  STACK_OF(X509_NAME) *, ___name_list,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_CTX_set_client_CA_list,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  STACK_OF(X509_NAME) *, ___name_list,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(STACK_OF(X509_NAME) * ,SSL_get_client_CA_list,
AROS_LDA(  const SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(STACK_OF(X509_NAME) * ,SSL_CTX_get_client_CA_list,
AROS_LDA(  const SSL_CTX *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_add_client_CA,
AROS_LDA(  SSL *, ___ssl,A0),
AROS_LDA(  X509 *, ___x,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_CTX_add_client_CA,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  X509 *, ___x,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,SSL_set_connect_state,
AROS_LDA(  SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,SSL_set_accept_state,
AROS_LDA(  SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(long ,SSL_get_default_timeout,
AROS_LDA(  const SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(char * ,SSL_CIPHER_description,
AROS_LDA(  const SSL_CIPHER *, ___a1,A0),
AROS_LDA(  char *, ___buf,A1),
AROS_LDA(  int, ___size,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(STACK_OF(X509_NAME) * ,SSL_dup_CA_list,
AROS_LDA(  const STACK_OF(X509_NAME) *, ___sk,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(SSL * ,SSL_dup,
AROS_LDA(  SSL *, ___ssl,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509 * ,SSL_get_certificate,
AROS_LDA(  const SSL *, ___ssl,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(struct evp_pkey_st * ,SSL_get_privatekey,
AROS_LDA(  const SSL *, ___ssl,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_CTX_set_quiet_shutdown,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  int, ___mode,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_CTX_get_quiet_shutdown,
AROS_LDA(  const SSL_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_set_quiet_shutdown,
AROS_LDA(  SSL *, ___ssl,A0),
AROS_LDA(  int, ___mode,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_get_quiet_shutdown,
AROS_LDA(  const SSL *, ___ssl,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_set_shutdown,
AROS_LDA(  SSL *, ___ssl,A0),
AROS_LDA(  int, ___mode,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_get_shutdown,
AROS_LDA(  const SSL *, ___ssl,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_version,
AROS_LDA(  const SSL *, ___ssl,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_CTX_set_default_verify_paths,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,SSL_CTX_load_verify_locations,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  const char *, ___CAfile,A1),
AROS_LDA(  const char *, ___CApath,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(SSL_SESSION * ,SSL_get_session,
AROS_LDA(  const SSL *, ___ssl,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(SSL_SESSION * ,SSL_get1_session,
AROS_LDA(  SSL *, ___ssl,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(SSL_CTX * ,SSL_get_SSL_CTX,
AROS_LDA(  const SSL *, ___ssl,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_set_info_callback,
AROS_LDA(  SSL *, ___ssl,A0),
AROS_LDA(APTR ,___cb,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR ,SSL_get_info_callback,
AROS_LDA(  const SSL *, ___ssl,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_set_verify_result,
AROS_LDA(  SSL *, ___ssl,A0),
AROS_LDA(  long, ___v,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(long ,SSL_get_verify_result,
AROS_LDA(  const SSL *, ___ssl,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,SSL_set_ex_data,
AROS_LDA(  SSL *, ___ssl,A0),
AROS_LDA(  int, ___idx,D0),
AROS_LDA(  void *, ___data,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void * ,SSL_get_ex_data,
AROS_LDA(  const SSL *, ___ssl,A0),
AROS_LDA(  int, ___idx,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,SSL_SESSION_set_ex_data,
AROS_LDA(  SSL_SESSION *, ___ss,A0),
AROS_LDA(  int, ___idx,D0),
AROS_LDA(  void *, ___data,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void * ,SSL_SESSION_get_ex_data,
AROS_LDA(  const SSL_SESSION *, ___ss,A0),
AROS_LDA(  int, ___idx,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,SSL_CTX_set_ex_data,
AROS_LDA(  SSL_CTX *, ___ssl,A0),
AROS_LDA(  int, ___idx,D0),
AROS_LDA(  void *, ___data,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void * ,SSL_CTX_get_ex_data,
AROS_LDA(  const SSL_CTX *, ___ssl,A0),
AROS_LDA(  int, ___idx,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(int ,SSL_get_ex_data_X509_STORE_CTX_idx,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_CTX_set_tmp_dh_callback,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(APTR ,___dh,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_set_tmp_dh_callback,
AROS_LDA(  SSL *, ___ssl,A0),
AROS_LDA( APTR ,___dh,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_COMP_add_compression_method,
AROS_LDA(  int, ___id,D0),
AROS_LDA(  COMP_METHOD *, ___cm,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(int ,ERR_load_SSL_strings,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,OPENSSL_sk_num,
AROS_LDA(  const OPENSSL_STACK *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void * ,OPENSSL_sk_value,
AROS_LDA(  const OPENSSL_STACK *, ___a,A0),
AROS_LDA(  int, ___b,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void * ,OPENSSL_sk_set,
AROS_LDA(  OPENSSL_STACK *, ___a,A0),
AROS_LDA(  int, ___b,D0),
AROS_LDA(  const void *, ___c,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(OPENSSL_STACK * ,OPENSSL_sk_new,
AROS_LDA(APTR  ,___cmp,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OPENSSL_STACK * ,OPENSSL_sk_new_null,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,OPENSSL_sk_free,
AROS_LDA(  OPENSSL_STACK *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,OPENSSL_sk_pop_free,
AROS_LDA(OPENSSL_STACK *, ___st,A0),
AROS_LDA(APTR ,___func,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,OPENSSL_sk_insert,
AROS_LDA(  OPENSSL_STACK *, ___sk,A0),
AROS_LDA(  const void *, ___data,A1),
AROS_LDA(  int, ___where,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void * ,OPENSSL_sk_delete,
AROS_LDA(  OPENSSL_STACK *, ___st,A0),
AROS_LDA(  int, ___loc,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void * ,OPENSSL_sk_delete_ptr,
AROS_LDA(  OPENSSL_STACK *, ___st,A0),
AROS_LDA(  const void *, ___p,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,OPENSSL_sk_find,
AROS_LDA(  OPENSSL_STACK *, ___st,A0),
AROS_LDA(  const void *, ___data,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,OPENSSL_sk_push,
AROS_LDA(  OPENSSL_STACK *, ___st,A0),
AROS_LDA(  const void *, ___data,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,OPENSSL_sk_unshift,
AROS_LDA(  OPENSSL_STACK *, ___st,A0),
AROS_LDA(  const void *, ___data,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void * ,OPENSSL_sk_shift,
AROS_LDA(  OPENSSL_STACK *, ___st,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void * ,OPENSSL_sk_pop,
AROS_LDA(  OPENSSL_STACK *, ___st,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,OPENSSL_sk_zero,
AROS_LDA(  OPENSSL_STACK *, ___st,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(APTR  ,OPENSSL_sk_set_cmp_func,
AROS_LDA(  OPENSSL_STACK *, ___sk,A0),
AROS_LDA(APTR ,___c,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(OPENSSL_STACK * ,OPENSSL_sk_dup,
AROS_LDA(  const OPENSSL_STACK *, ___st,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,OPENSSL_sk_sort,
AROS_LDA(  OPENSSL_STACK *, ___st,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,OPENSSL_sk_is_sorted,
AROS_LDA(  const OPENSSL_STACK *, ___st,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(TXT_DB * ,TXT_DB_read,
AROS_LDA(  BIO *, ___in,A0),
AROS_LDA(  int, ___num,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(long ,TXT_DB_write,
AROS_LDA(  BIO *, ___out,A0),
AROS_LDA(  TXT_DB *, ___db,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,TXT_DB_create_index,
AROS_LDA(  TXT_DB *, ___db,A0),
AROS_LDA(  int, ___field,D0),
AROS_LDA(  APTR,___qual,A1),
AROS_LDA(  OPENSSL_LH_HASHFUNC, ___hash,D1),
AROS_LDA(  OPENSSL_LH_COMPFUNC, ___cmp,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,TXT_DB_free,
AROS_LDA(  TXT_DB *, ___db,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(char ** ,TXT_DB_get_by_index,
AROS_LDA(  TXT_DB *, ___db,A0),
AROS_LDA(  int, ___idx,D0),
AROS_LDA(  char **, ___value,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,TXT_DB_insert,
AROS_LDA(  TXT_DB *, ___db,A0),
AROS_LDA(  char **, ___value,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(UI * ,UI_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(UI * ,UI_new_method,
AROS_LDA(  const UI_METHOD *, ___method,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,UI_free,
AROS_LDA(  UI *, ___ui,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int ,UI_add_input_string,
AROS_LDA(  UI *, ___ui,A0),
AROS_LDA(  const char *, ___prompt,A1),
AROS_LDA(  int, ___flags,D0),
AROS_LDA(  char *, ___result_buf,A2),
AROS_LDA(  int, ___minsize,D1),
AROS_LDA(  int, ___maxsize,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int ,UI_dup_input_string,
AROS_LDA(  UI *, ___ui,A0),
AROS_LDA(  const char *, ___prompt,A1),
AROS_LDA(  int, ___flags,D0),
AROS_LDA(  char *, ___result_buf,A2),
AROS_LDA(  int, ___minsize,D1),
AROS_LDA(  int, ___maxsize,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(int ,UI_add_verify_string,
AROS_LDA(  UI *, ___ui,A0),
AROS_LDA(  const char *, ___prompt,A1),
AROS_LDA(  int, ___flags,D0),
AROS_LDA(  char *, ___result_buf,A2),
AROS_LDA(  int, ___minsize,D1),
AROS_LDA(  int, ___maxsize,D2),
AROS_LDA(  const char *, ___test_buf,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(int ,UI_dup_verify_string,
AROS_LDA(  UI *, ___ui,A0),
AROS_LDA(  const char *, ___prompt,A1),
AROS_LDA(  int, ___flags,D0),
AROS_LDA(  char *, ___result_buf,A2),
AROS_LDA(  int, ___minsize,D1),
AROS_LDA(  int, ___maxsize,D2),
AROS_LDA(  const char *, ___test_buf,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(int ,UI_add_input_boolean,
AROS_LDA(  UI *, ___ui,A0),
AROS_LDA(  const char *, ___prompt,A1),
AROS_LDA(  const char *, ___action_desc,A2),
AROS_LDA(  const char *, ___ok_chars,A3),
AROS_LDA(  const char *, ___cancel_chars,D0),
AROS_LDA(  int, ___flags,D1),
AROS_LDA(  char *, ___result_buf,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(int ,UI_dup_input_boolean,
AROS_LDA(  UI *, ___ui,A0),
AROS_LDA(  const char *, ___prompt,A1),
AROS_LDA(  const char *, ___action_desc,A2),
AROS_LDA(  const char *, ___ok_chars,A3),
AROS_LDA(  const char *, ___cancel_chars,D0),
AROS_LDA(  int, ___flags,D1),
AROS_LDA(  char *, ___result_buf,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,UI_add_info_string,
AROS_LDA(  UI *, ___ui,A0),
AROS_LDA(  const char *, ___text,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,UI_dup_info_string,
AROS_LDA(  UI *, ___ui,A0),
AROS_LDA(  const char *, ___text,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,UI_add_error_string,
AROS_LDA(  UI *, ___ui,A0),
AROS_LDA(  const char *, ___text,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,UI_dup_error_string,
AROS_LDA(  UI *, ___ui,A0),
AROS_LDA(  const char *, ___text,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(char * ,UI_construct_prompt,
AROS_LDA(  UI *, ___ui_method,A0),
AROS_LDA(  const char *, ___object_desc,A1),
AROS_LDA(  const char *, ___object_name,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void * ,UI_add_user_data,
AROS_LDA(  UI *, ___ui,A0),
AROS_LDA(  void *, ___user_data,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void * ,UI_get0_user_data,
AROS_LDA(  UI *, ___ui,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(const char * ,UI_get0_result,
AROS_LDA(  UI *, ___ui,A0),
AROS_LDA(  int, ___i,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,UI_process,
AROS_LDA(  UI *, ___ui,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,UI_ctrl,
AROS_LDA(  UI *, ___ui,A0),
AROS_LDA(  int, ___cmd,D0),
AROS_LDA(  long, ___i,D1),
AROS_LDA(  void *, ___p,A1),
AROS_LDA(  APTR, ___f,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,UI_set_ex_data,
AROS_LDA(  UI *, ___r,A0),
AROS_LDA(  int, ___idx,D0),
AROS_LDA(  void *, ___arg,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void * ,UI_get_ex_data,
AROS_LDA(  UI *, ___r,A0),
AROS_LDA(  int, ___idx,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,UI_set_default_method,
AROS_LDA(  const UI_METHOD *, ___meth,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const UI_METHOD * ,UI_get_default_method,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const UI_METHOD * ,UI_get_method,
AROS_LDA(  UI *, ___ui,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(const UI_METHOD * ,UI_set_method,
AROS_LDA(  UI *, ___ui,A0),
AROS_LDA(  const UI_METHOD *, ___meth,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(UI_METHOD * ,UI_OpenSSL,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(UI_METHOD * ,UI_create_method,
AROS_LDA(  const char *, ___name,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,UI_destroy_method,
AROS_LDA(  UI_METHOD *, ___ui_method,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,UI_method_set_opener,
AROS_LDA(  UI_METHOD *, ___method,A0),
AROS_LDA(APTR ,___opener,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,UI_method_set_writer,
AROS_LDA(  UI_METHOD *, ___method,A0),
AROS_LDA(APTR,___writer,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,UI_method_set_flusher,
AROS_LDA(  UI_METHOD *, ___method,A0),
AROS_LDA(  APTR,___flusher,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,UI_method_set_reader,
AROS_LDA(  UI_METHOD *, ___method,A0),
AROS_LDA(  APTR,___reader,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,UI_method_set_closer,
 AROS_LDA(UI_METHOD *,___method,A0),
 AROS_LDA(APTR,___closer,A1),
 struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR ,UI_method_get_opener,
AROS_LDA(  const UI_METHOD *, ___method,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR ,UI_method_get_writer,
AROS_LDA(  const UI_METHOD *, ___method,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR ,UI_method_get_flusher,
AROS_LDA(  const UI_METHOD *, ___method,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR ,UI_method_get_reader,
AROS_LDA(  const UI_METHOD *, ___method,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR ,UI_method_get_closer,
AROS_LDA(  const UI_METHOD *, ___method,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(enum UI_string_types ,UI_get_string_type,
AROS_LDA(  UI_STRING *, ___uis,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,UI_get_input_flags,
AROS_LDA(  UI_STRING *, ___uis,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char * ,UI_get0_output_string,
AROS_LDA(  UI_STRING *, ___uis,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char * ,UI_get0_action_string,
AROS_LDA(  UI_STRING *, ___uis,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char * ,UI_get0_result_string,
AROS_LDA(  UI_STRING *, ___uis,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char * ,UI_get0_test_string,
AROS_LDA(  UI_STRING *, ___uis,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,UI_get_result_minsize,
AROS_LDA(  UI_STRING *, ___uis,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,UI_get_result_maxsize,
AROS_LDA(  UI_STRING *, ___uis,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,UI_set_result,
AROS_LDA(  UI *, ___ui,A0),
AROS_LDA(  UI_STRING *, ___uis,A1),
AROS_LDA(  const char *, ___result,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,UI_UTIL_read_pw_string,
AROS_LDA(  char *, ___buf,A0),
AROS_LDA(  int, ___length,D0),
AROS_LDA(  const char *, ___prompt,A1),
AROS_LDA(  int, ___verify,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,UI_UTIL_read_pw,
AROS_LDA(  char *, ___buf,A0),
AROS_LDA(  char *, ___buff,A1),
AROS_LDA(  int, ___size,D0),
AROS_LDA(  const char *, ___prompt,A2),
AROS_LDA(  int, ___verify,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(int ,ERR_load_UI_strings,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char * ,X509_verify_cert_error_string,
AROS_LDA(  long, ___n,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_verify,
AROS_LDA(  X509 *, ___a,A0),
AROS_LDA(  EVP_PKEY *, ___r,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_REQ_verify,
AROS_LDA(  X509_REQ *, ___a,A0),
AROS_LDA(  EVP_PKEY *, ___r,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_CRL_verify,
AROS_LDA(  X509_CRL *, ___a,A0),
AROS_LDA(  EVP_PKEY *, ___r,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,NETSCAPE_SPKI_verify,
AROS_LDA(  NETSCAPE_SPKI *, ___a,A0),
AROS_LDA(  EVP_PKEY *, ___r,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(NETSCAPE_SPKI * ,NETSCAPE_SPKI_b64_decode,
AROS_LDA(  const char *, ___str,A0),
AROS_LDA(  int, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(char * ,NETSCAPE_SPKI_b64_encode,
AROS_LDA(  NETSCAPE_SPKI *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(EVP_PKEY * ,NETSCAPE_SPKI_get_pubkey,
AROS_LDA(  NETSCAPE_SPKI *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,NETSCAPE_SPKI_set_pubkey,
AROS_LDA(  NETSCAPE_SPKI *, ___x,A0),
AROS_LDA(  EVP_PKEY *, ___pkey,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,NETSCAPE_SPKI_print,
AROS_LDA(  BIO *, ___out,A0),
AROS_LDA(  NETSCAPE_SPKI *, ___spki,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509_signature_print,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  const X509_ALGOR *, ___alg,A1),
AROS_LDA(  const ASN1_STRING *, ___sig,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509_sign,
AROS_LDA(  X509 *, ___x,A0),
AROS_LDA(  EVP_PKEY *, ___pkey,A1),
AROS_LDA(  const EVP_MD *, ___md,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509_REQ_sign,
AROS_LDA(  X509_REQ *, ___x,A0),
AROS_LDA(  EVP_PKEY *, ___pkey,A1),
AROS_LDA(  const EVP_MD *, ___md,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509_CRL_sign,
AROS_LDA(  X509_CRL *, ___x,A0),
AROS_LDA(  EVP_PKEY *, ___pkey,A1),
AROS_LDA(  const EVP_MD *, ___md,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,NETSCAPE_SPKI_sign,
AROS_LDA(  NETSCAPE_SPKI *, ___x,A0),
AROS_LDA(  EVP_PKEY *, ___pkey,A1),
AROS_LDA(  const EVP_MD *, ___md,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,X509_pubkey_digest,
AROS_LDA(  const X509 *, ___data,A0),
AROS_LDA(  const EVP_MD *, ___type,A1),
AROS_LDA(  unsigned char *, ___md,A2),
AROS_LDA(  unsigned int *, ___len,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,X509_digest,
AROS_LDA(  const X509 *, ___data,A0),
AROS_LDA(  const EVP_MD *, ___type,A1),
AROS_LDA(  unsigned char *, ___md,A2),
AROS_LDA(  unsigned int *, ___len,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,X509_CRL_digest,
AROS_LDA(  const X509_CRL *, ___data,A0),
AROS_LDA(  const EVP_MD *, ___type,A1),
AROS_LDA(  unsigned char *, ___md,A2),
AROS_LDA(  unsigned int *, ___len,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,X509_REQ_digest,
AROS_LDA(  const X509_REQ *, ___data,A0),
AROS_LDA(  const EVP_MD *, ___type,A1),
AROS_LDA(  unsigned char *, ___md,A2),
AROS_LDA(  unsigned int *, ___len,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,X509_NAME_digest,
AROS_LDA(  const X509_NAME *, ___data,A0),
AROS_LDA(  const EVP_MD *, ___type,A1),
AROS_LDA(  unsigned char *, ___md,A2),
AROS_LDA(  unsigned int *, ___len,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(X509 * ,d2i_X509_bio,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  X509 **, ___x509,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_X509_bio,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  X509 *, ___x509,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(X509_CRL * ,d2i_X509_CRL_bio,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  X509_CRL **, ___crl,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_X509_CRL_bio,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  X509_CRL *, ___crl,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(X509_REQ * ,d2i_X509_REQ_bio,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  X509_REQ **, ___req,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_X509_REQ_bio,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  X509_REQ *, ___req,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(RSA * ,d2i_RSAPrivateKey_bio,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  RSA **, ___rsa,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_RSAPrivateKey_bio,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  RSA *, ___rsa,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(RSA * ,d2i_RSAPublicKey_bio,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  RSA **, ___rsa,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_RSAPublicKey_bio,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  RSA *, ___rsa,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(RSA * ,d2i_RSA_PUBKEY_bio,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  RSA **, ___rsa,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_RSA_PUBKEY_bio,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  RSA *, ___rsa,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(DSA * ,d2i_DSA_PUBKEY_bio,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  DSA **, ___dsa,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_DSA_PUBKEY_bio,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  DSA *, ___dsa,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(DSA * ,d2i_DSAPrivateKey_bio,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  DSA **, ___dsa,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_DSAPrivateKey_bio,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  DSA *, ___dsa,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(X509_SIG * ,d2i_PKCS8_bio,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  X509_SIG **, ___p8,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_PKCS8_bio,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  X509_SIG *, ___p8,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(PKCS8_PRIV_KEY_INFO * ,d2i_PKCS8_PRIV_KEY_INFO_bio,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  PKCS8_PRIV_KEY_INFO **, ___p8inf,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_PKCS8_PRIV_KEY_INFO_bio,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  PKCS8_PRIV_KEY_INFO *, ___p8inf,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_PKCS8PrivateKeyInfo_bio,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  EVP_PKEY *, ___key,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_PrivateKey_bio,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  EVP_PKEY *, ___pkey,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(EVP_PKEY * ,d2i_PrivateKey_bio,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  EVP_PKEY **, ___a,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_PUBKEY_bio,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  EVP_PKEY *, ___pkey,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(EVP_PKEY * ,d2i_PUBKEY_bio,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  EVP_PKEY **, ___a,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509 * ,X509_dup,
AROS_LDA(  X509 *, ___x509,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_ATTRIBUTE * ,X509_ATTRIBUTE_dup,
AROS_LDA(  X509_ATTRIBUTE *, ___xa,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_EXTENSION * ,X509_EXTENSION_dup,
AROS_LDA(  X509_EXTENSION *, ___ex,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_CRL * ,X509_CRL_dup,
AROS_LDA(  X509_CRL *, ___crl,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_REQ * ,X509_REQ_dup,
AROS_LDA(  X509_REQ *, ___req,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_ALGOR * ,X509_ALGOR_dup,
AROS_LDA(  X509_ALGOR *, ___xn,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_NAME * ,X509_NAME_dup,
AROS_LDA(  X509_NAME *, ___xn,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_NAME_ENTRY * ,X509_NAME_ENTRY_dup,
AROS_LDA(  X509_NAME_ENTRY *, ___ne,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_cmp_time,
AROS_LDA(  const ASN1_TIME *, ___s,A0),
AROS_LDA(  time_t *, ___t,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,X509_cmp_current_time,
AROS_LDA(  ASN1_TIME *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(ASN1_TIME * ,X509_time_adj,
AROS_LDA(  ASN1_TIME *, ___s,A0),
AROS_LDA(  long, ___adj,D0),
AROS_LDA(  time_t *, ___t,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(ASN1_TIME * ,X509_gmtime_adj,
AROS_LDA(  ASN1_TIME *, ___s,A0),
AROS_LDA(  long, ___adj,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const char * ,X509_get_default_cert_area,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const char * ,X509_get_default_cert_dir,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const char * ,X509_get_default_cert_file,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const char * ,X509_get_default_cert_dir_env,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const char * ,X509_get_default_cert_file_env,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const char * ,X509_get_default_private_dir,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(X509_REQ * ,X509_to_X509_REQ,
AROS_LDA(  X509 *, ___x,A0),
AROS_LDA(  EVP_PKEY *, ___pkey,A1),
AROS_LDA(  const EVP_MD *, ___md,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(X509 * ,X509_REQ_to_X509,
AROS_LDA(  X509_REQ *, ___r,A0),
AROS_LDA(  int, ___days,D0),
AROS_LDA(  EVP_PKEY *, ___pkey,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(X509_ALGOR * ,X509_ALGOR_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,X509_ALGOR_free,
AROS_LDA(  X509_ALGOR *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(X509_ALGOR * ,d2i_X509_ALGOR,
AROS_LDA(  X509_ALGOR **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_X509_ALGOR,
AROS_LDA(  X509_ALGOR *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,X509_ALGOR_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(X509_VAL * ,X509_VAL_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,X509_VAL_free,
AROS_LDA(  X509_VAL *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(X509_VAL * ,d2i_X509_VAL,
AROS_LDA(  X509_VAL **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_X509_VAL,
AROS_LDA(  X509_VAL *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,X509_VAL_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(X509_PUBKEY * ,X509_PUBKEY_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,X509_PUBKEY_free,
AROS_LDA(  X509_PUBKEY *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(X509_PUBKEY * ,d2i_X509_PUBKEY,
AROS_LDA(  X509_PUBKEY **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_X509_PUBKEY,
AROS_LDA(  X509_PUBKEY *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,X509_PUBKEY_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_PUBKEY_set,
AROS_LDA(  X509_PUBKEY **, ___x,A0),
AROS_LDA(  EVP_PKEY *, ___pkey,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(EVP_PKEY * ,X509_PUBKEY_get,
AROS_LDA(  X509_PUBKEY *, ___key,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_get_pubkey_parameters,
AROS_LDA(  EVP_PKEY *, ___pkey,A0),
AROS_LDA(  STACK_OF(X509) *, ___chain,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_PUBKEY,
AROS_LDA(  EVP_PKEY *, ___a,A0),
AROS_LDA(  unsigned char **, ___pp,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(EVP_PKEY * ,d2i_PUBKEY,
AROS_LDA(  EVP_PKEY **, ___a,A0),
AROS_LDA(  const unsigned char **, ___pp,A1),
AROS_LDA(  long, ___length,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_RSA_PUBKEY,
AROS_LDA(  RSA *, ___a,A0),
AROS_LDA(  unsigned char **, ___pp,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(RSA * ,d2i_RSA_PUBKEY,
AROS_LDA(  RSA **, ___a,A0),
AROS_LDA(  const unsigned char **, ___pp,A1),
AROS_LDA(  long, ___length,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_DSA_PUBKEY,
AROS_LDA(  DSA *, ___a,A0),
AROS_LDA(  unsigned char **, ___pp,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(DSA * ,d2i_DSA_PUBKEY,
AROS_LDA(  DSA **, ___a,A0),
AROS_LDA(  const unsigned char **, ___pp,A1),
AROS_LDA(  long, ___length,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(X509_SIG * ,X509_SIG_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,X509_SIG_free,
AROS_LDA(  X509_SIG *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(X509_SIG * ,d2i_X509_SIG,
AROS_LDA(  X509_SIG **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_X509_SIG,
AROS_LDA(  X509_SIG *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,X509_SIG_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(X509_REQ_INFO * ,X509_REQ_INFO_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,X509_REQ_INFO_free,
AROS_LDA(  X509_REQ_INFO *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(X509_REQ_INFO * ,d2i_X509_REQ_INFO,
AROS_LDA(  X509_REQ_INFO **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_X509_REQ_INFO,
AROS_LDA(  X509_REQ_INFO *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,X509_REQ_INFO_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(X509_REQ * ,X509_REQ_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,X509_REQ_free,
AROS_LDA(  X509_REQ *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(X509_REQ * ,d2i_X509_REQ,
AROS_LDA(  X509_REQ **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_X509_REQ,
AROS_LDA(  X509_REQ *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,X509_REQ_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(X509_ATTRIBUTE * ,X509_ATTRIBUTE_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,X509_ATTRIBUTE_free,
AROS_LDA(  X509_ATTRIBUTE *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(X509_ATTRIBUTE * ,d2i_X509_ATTRIBUTE,
AROS_LDA(  X509_ATTRIBUTE **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_X509_ATTRIBUTE,
AROS_LDA(  X509_ATTRIBUTE *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,X509_ATTRIBUTE_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(X509_ATTRIBUTE * ,X509_ATTRIBUTE_create,
AROS_LDA(  int, ___nid,D0),
AROS_LDA(  int, ___atrtype,D1),
AROS_LDA(  void *, ___value,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(X509_EXTENSION * ,X509_EXTENSION_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,X509_EXTENSION_free,
AROS_LDA(  X509_EXTENSION *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(X509_EXTENSION * ,d2i_X509_EXTENSION,
AROS_LDA(  X509_EXTENSION **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_X509_EXTENSION,
AROS_LDA(  X509_EXTENSION *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,X509_EXTENSION_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(X509_NAME_ENTRY * ,X509_NAME_ENTRY_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,X509_NAME_ENTRY_free,
AROS_LDA(  X509_NAME_ENTRY *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(X509_NAME_ENTRY * ,d2i_X509_NAME_ENTRY,
AROS_LDA(  X509_NAME_ENTRY **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_X509_NAME_ENTRY,
AROS_LDA(  X509_NAME_ENTRY *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,X509_NAME_ENTRY_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(X509_NAME * ,X509_NAME_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,X509_NAME_free,
AROS_LDA(  X509_NAME *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(X509_NAME * ,d2i_X509_NAME,
AROS_LDA(  X509_NAME **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_X509_NAME,
AROS_LDA(  X509_NAME *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,X509_NAME_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_NAME_set,
AROS_LDA(  X509_NAME **, ___xn,A0),
AROS_LDA(  X509_NAME *, ___name,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(X509_CINF * ,X509_CINF_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,X509_CINF_free,
AROS_LDA(  X509_CINF *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(X509_CINF * ,d2i_X509_CINF,
AROS_LDA(  X509_CINF **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_X509_CINF,
AROS_LDA(  X509_CINF *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,X509_CINF_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(X509 * ,X509_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,X509_free,
AROS_LDA(  X509 *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(X509 * ,d2i_X509,
AROS_LDA(  X509 **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_X509,
AROS_LDA(  X509 *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,X509_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(X509_CERT_AUX * ,X509_CERT_AUX_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,X509_CERT_AUX_free,
AROS_LDA(  X509_CERT_AUX *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(X509_CERT_AUX * ,d2i_X509_CERT_AUX,
AROS_LDA(  X509_CERT_AUX **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_X509_CERT_AUX,
AROS_LDA(  X509_CERT_AUX *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,X509_CERT_AUX_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509_set_ex_data,
AROS_LDA(  X509 *, ___r,A0),
AROS_LDA(  int, ___idx,D0),
AROS_LDA(  void *, ___arg,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void * ,X509_get_ex_data,
AROS_LDA(  X509 *, ___r,A0),
AROS_LDA(  int, ___idx,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_X509_AUX,
AROS_LDA(  X509 *, ___a,A0),
AROS_LDA(  unsigned char **, ___pp,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(X509 * ,d2i_X509_AUX,
AROS_LDA(  X509 **, ___a,A0),
AROS_LDA(  const unsigned char **, ___pp,A1),
AROS_LDA(  long, ___length,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509_alias_set1,
AROS_LDA(  X509 *, ___x,A0),
AROS_LDA(  const unsigned char *, ___name,A1),
AROS_LDA(  int, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509_keyid_set1,
AROS_LDA(  X509 *, ___x,A0),
AROS_LDA(  const unsigned char *, ___id,A1),
AROS_LDA(  int, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(unsigned char * ,X509_alias_get0,
AROS_LDA(  X509 *, ___x,A0),
AROS_LDA(  int *, ___len,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR  ,X509_TRUST_set_default,
AROS_LDA(APTR ,___trust,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_TRUST_set,
AROS_LDA(  int *, ___t,A0),
AROS_LDA(  int, ___trust,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_add1_trust_object,
AROS_LDA(  X509 *, ___x,A0),
AROS_LDA(  const ASN1_OBJECT *, ___obj,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_add1_reject_object,
AROS_LDA(  X509 *, ___x,A0),
AROS_LDA(  const ASN1_OBJECT *, ___obj,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,X509_trust_clear,
AROS_LDA(  X509 *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,X509_reject_clear,
AROS_LDA(  X509 *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(X509_REVOKED * ,X509_REVOKED_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,X509_REVOKED_free,
AROS_LDA(  X509_REVOKED *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(X509_REVOKED * ,d2i_X509_REVOKED,
AROS_LDA(  X509_REVOKED **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_X509_REVOKED,
AROS_LDA(  X509_REVOKED *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,X509_REVOKED_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(X509_CRL_INFO * ,X509_CRL_INFO_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,X509_CRL_INFO_free,
AROS_LDA(  X509_CRL_INFO *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(X509_CRL_INFO * ,d2i_X509_CRL_INFO,
AROS_LDA(  X509_CRL_INFO **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_X509_CRL_INFO,
AROS_LDA(  X509_CRL_INFO *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,X509_CRL_INFO_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(X509_CRL * ,X509_CRL_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,X509_CRL_free,
AROS_LDA(  X509_CRL *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(X509_CRL * ,d2i_X509_CRL,
AROS_LDA(  X509_CRL **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_X509_CRL,
AROS_LDA(  X509_CRL *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,X509_CRL_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_CRL_add0_revoked,
AROS_LDA(  X509_CRL *, ___crl,A0),
AROS_LDA(  X509_REVOKED *, ___rev,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(X509_PKEY * ,X509_PKEY_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,X509_PKEY_free,
AROS_LDA(  X509_PKEY *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(NETSCAPE_SPKI * ,NETSCAPE_SPKI_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,NETSCAPE_SPKI_free,
AROS_LDA(  NETSCAPE_SPKI *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(NETSCAPE_SPKI * ,d2i_NETSCAPE_SPKI,
AROS_LDA(  NETSCAPE_SPKI **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_NETSCAPE_SPKI,
AROS_LDA(  NETSCAPE_SPKI *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,NETSCAPE_SPKI_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(NETSCAPE_SPKAC * ,NETSCAPE_SPKAC_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,NETSCAPE_SPKAC_free,
AROS_LDA(  NETSCAPE_SPKAC *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(NETSCAPE_SPKAC * ,d2i_NETSCAPE_SPKAC,
AROS_LDA(  NETSCAPE_SPKAC **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_NETSCAPE_SPKAC,
AROS_LDA(  NETSCAPE_SPKAC *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,NETSCAPE_SPKAC_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(NETSCAPE_CERT_SEQUENCE * ,NETSCAPE_CERT_SEQUENCE_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,NETSCAPE_CERT_SEQUENCE_free,
AROS_LDA(  NETSCAPE_CERT_SEQUENCE *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(NETSCAPE_CERT_SEQUENCE * ,d2i_NETSCAPE_CERT_SEQUENCE,
AROS_LDA(  NETSCAPE_CERT_SEQUENCE **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_NETSCAPE_CERT_SEQUENCE,
AROS_LDA(  NETSCAPE_CERT_SEQUENCE *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,NETSCAPE_CERT_SEQUENCE_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(X509_INFO * ,X509_INFO_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,X509_INFO_free,
AROS_LDA(  X509_INFO *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(char * ,X509_NAME_oneline,
AROS_LDA(  const X509_NAME *, ___a,A0),
AROS_LDA(  char *, ___buf,A1),
AROS_LDA(  int, ___size,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,ASN1_verify,
AROS_LDA(  int, (*___i2d)(),A0),
AROS_LDA(  X509_ALGOR *, ___algor1,A1),
AROS_LDA(  ASN1_BIT_STRING *, ___signature,A2),
AROS_LDA(  char *, ___data,A3),
AROS_LDA(  EVP_PKEY *, ___pkey,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,ASN1_digest,
AROS_LDA(  int, (*___i2d)(),A0),
AROS_LDA(  const EVP_MD *, ___type,A1),
AROS_LDA(  char *, ___data,A2),
AROS_LDA(  unsigned char *, ___md,A3),
AROS_LDA(  unsigned int *, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(int ,ASN1_sign,
AROS_LDA(  int, (*___i2d)(),A0),
AROS_LDA(  X509_ALGOR *, ___algor1,A1),
AROS_LDA(  X509_ALGOR *, ___algor2,A2),
AROS_LDA(  ASN1_BIT_STRING *, ___signature,A3),
AROS_LDA(  char *, ___data,D0),
AROS_LDA(  EVP_PKEY *, ___pkey,D1),
AROS_LDA(  const EVP_MD *, ___type,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,ASN1_item_digest,
AROS_LDA(  const ASN1_ITEM *, ___it,A0),
AROS_LDA(  const EVP_MD *, ___type,A1),
AROS_LDA(  void *, ___data,A2),
AROS_LDA(  unsigned char *, ___md,A3),
AROS_LDA(  unsigned int *, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,ASN1_item_verify,
AROS_LDA(  const ASN1_ITEM *, ___it,A0),
AROS_LDA(  X509_ALGOR *, ___algor1,A1),
AROS_LDA(  ASN1_BIT_STRING *, ___signature,A2),
AROS_LDA(  void *, ___data,A3),
AROS_LDA(  EVP_PKEY *, ___pkey,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(int ,ASN1_item_sign,
AROS_LDA(  const ASN1_ITEM *, ___it,A0),
AROS_LDA(  X509_ALGOR *, ___algor1,A1),
AROS_LDA(  X509_ALGOR *, ___algor2,A2),
AROS_LDA(  ASN1_BIT_STRING *, ___signature,A3),
AROS_LDA(  void *, ___data,D0),
AROS_LDA(  EVP_PKEY *, ___pkey,D1),
AROS_LDA(  const EVP_MD *, ___type,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_set_version,
AROS_LDA(  X509 *, ___x,A0),
AROS_LDA(  long, ___version,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_set_serialNumber,
AROS_LDA(  X509 *, ___x,A0),
AROS_LDA(  ASN1_INTEGER *, ___serial,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ASN1_INTEGER * ,X509_get_serialNumber,
AROS_LDA(  X509 *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_set_issuer_name,
AROS_LDA(  X509 *, ___x,A0),
AROS_LDA(  X509_NAME *, ___name,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_NAME * ,X509_get_issuer_name,
AROS_LDA(  const X509 *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_set_subject_name,
AROS_LDA(  X509 *, ___x,A0),
AROS_LDA(  X509_NAME *, ___name,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_NAME * ,X509_get_subject_name,
AROS_LDA(  const X509 *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_set1_notBefore,
AROS_LDA(  X509 *, ___x,A0),
AROS_LDA(  const ASN1_TIME *, ___tm,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_set1_notAfter,
AROS_LDA(  X509 *, ___x,A0),
AROS_LDA(  const ASN1_TIME *, ___tm,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_set_pubkey,
AROS_LDA(  X509 *, ___x,A0),
AROS_LDA(  EVP_PKEY *, ___pkey,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(EVP_PKEY * ,X509_get_pubkey,
AROS_LDA(  X509 *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ASN1_BIT_STRING * ,X509_get0_pubkey_bitstr,
AROS_LDA(  const X509 *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_certificate_type,
AROS_LDA(  const X509 *, ___x,A0),
AROS_LDA(  const EVP_PKEY *, ___pubkey,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_REQ_set_version,
AROS_LDA(  X509_REQ *, ___x,A0),
AROS_LDA(  long, ___version,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_REQ_set_subject_name,
AROS_LDA(  X509_REQ *, ___req,A0),
AROS_LDA(  X509_NAME *, ___name,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_REQ_set_pubkey,
AROS_LDA(  X509_REQ *, ___x,A0),
AROS_LDA(  EVP_PKEY *, ___pkey,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(EVP_PKEY * ,X509_REQ_get_pubkey,
AROS_LDA(  X509_REQ *, ___req,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,X509_REQ_extension_nid,
AROS_LDA(  int, ___nid,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(int * ,X509_REQ_get_extension_nids,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,X509_REQ_set_extension_nids,
AROS_LDA(  int *, ___nids,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(STACK_OF(X509_EXTENSION) * ,X509_REQ_get_extensions,
AROS_LDA(  X509_REQ *, ___req,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509_REQ_add_extensions_nid,
AROS_LDA(  X509_REQ *, ___req,A0),
AROS_LDA(  STACK_OF(X509_EXTENSION) *, ___exts,A1),
AROS_LDA(  int, ___nid,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_REQ_add_extensions,
AROS_LDA(  X509_REQ *, ___req,A0),
AROS_LDA(  STACK_OF(X509_EXTENSION) *, ___exts,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,X509_REQ_get_attr_count,
AROS_LDA(  const X509_REQ *, ___req,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509_REQ_get_attr_by_NID,
AROS_LDA(  const X509_REQ *, ___req,A0),
AROS_LDA(  int, ___nid,D0),
AROS_LDA(  int, ___lastpos,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509_REQ_get_attr_by_OBJ,
AROS_LDA(  const X509_REQ *, ___req,A0),
AROS_LDA(  const ASN1_OBJECT *, ___obj,A1),
AROS_LDA(  int, ___lastpos,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(X509_ATTRIBUTE * ,X509_REQ_get_attr,
AROS_LDA(  const X509_REQ *, ___req,A0),
AROS_LDA(  int, ___loc,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(X509_ATTRIBUTE * ,X509_REQ_delete_attr,
AROS_LDA(  X509_REQ *, ___req,A0),
AROS_LDA(  int, ___loc,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_REQ_add1_attr,
AROS_LDA(  X509_REQ *, ___req,A0),
AROS_LDA(  X509_ATTRIBUTE *, ___attr,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,X509_REQ_add1_attr_by_OBJ,
AROS_LDA(  X509_REQ *, ___req,A0),
AROS_LDA(  const ASN1_OBJECT *, ___obj,A1),
AROS_LDA(  int, ___type,D0),
AROS_LDA(  const unsigned char *, ___bytes,A2),
AROS_LDA(  int, ___len,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,X509_REQ_add1_attr_by_NID,
AROS_LDA(  X509_REQ *, ___req,A0),
AROS_LDA(  int, ___nid,D0),
AROS_LDA(  int, ___type,D1),
AROS_LDA(  const unsigned char *, ___bytes,A1),
AROS_LDA(  int, ___len,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,X509_REQ_add1_attr_by_txt,
AROS_LDA(  X509_REQ *, ___req,A0),
AROS_LDA(  const char *, ___attrname,A1),
AROS_LDA(  int, ___type,D0),
AROS_LDA(  const unsigned char *, ___bytes,A2),
AROS_LDA(  int, ___len,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_CRL_set_version,
AROS_LDA(  X509_CRL *, ___x,A0),
AROS_LDA(  long, ___version,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_CRL_set_issuer_name,
AROS_LDA(  X509_CRL *, ___x,A0),
AROS_LDA(  X509_NAME *, ___name,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_CRL_set1_lastUpdate,
AROS_LDA(  X509_CRL *, ___x,A0),
AROS_LDA(  const ASN1_TIME *, ___tm,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_CRL_set1_nextUpdate,
AROS_LDA(  X509_CRL *, ___x,A0),
AROS_LDA(  const ASN1_TIME *, ___tm,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,X509_CRL_sort,
AROS_LDA(  X509_CRL *, ___crl,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_REVOKED_set_serialNumber,
AROS_LDA(  X509_REVOKED *, ___x,A0),
AROS_LDA(  ASN1_INTEGER *, ___serial,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_REVOKED_set_revocationDate,
AROS_LDA(  X509_REVOKED *, ___r,A0),
AROS_LDA(  ASN1_TIME *, ___tm,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_check_private_key,
AROS_LDA(  const X509 *, ___x509,A0),
AROS_LDA(  const EVP_PKEY *, ___pkey,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_issuer_and_serial_cmp,
AROS_LDA(  const X509 *, ___a,A0),
AROS_LDA(  const X509 *, ___b,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(unsigned long ,X509_issuer_and_serial_hash,
AROS_LDA(  X509 *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_issuer_name_cmp,
AROS_LDA(  const X509 *, ___a,A0),
AROS_LDA(  const X509 *, ___b,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(unsigned long ,X509_issuer_name_hash,
AROS_LDA(  X509 *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_subject_name_cmp,
AROS_LDA(  const X509 *, ___a,A0),
AROS_LDA(  const X509 *, ___b,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(unsigned long ,X509_subject_name_hash,
AROS_LDA(  X509 *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_cmp,
AROS_LDA(  const X509 *, ___a,A0),
AROS_LDA(  const X509 *, ___b,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_NAME_cmp,
AROS_LDA(  const X509_NAME *, ___a,A0),
AROS_LDA(  const X509_NAME *, ___b,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(unsigned long ,X509_NAME_hash,
AROS_LDA(  X509_NAME *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_CRL_cmp,
AROS_LDA(  const X509_CRL *, ___a,A0),
AROS_LDA(  const X509_CRL *, ___b,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509_NAME_print,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  const X509_NAME *, ___name,A1),
AROS_LDA(  int, ___obase,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,X509_NAME_print_ex,
AROS_LDA(  BIO *, ___out,A0),
AROS_LDA(  const X509_NAME *, ___nm,A1),
AROS_LDA(  int, ___indent,D0),
AROS_LDA(  unsigned long, ___flags,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,X509_print_ex,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  X509 *, ___x,A1),
AROS_LDA(  unsigned long, ___nmflag,D0),
AROS_LDA(  unsigned long, ___cflag,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_print,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  X509 *, ___x,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_ocspid_print,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  X509 *, ___x,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_CRL_print,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  X509_CRL *, ___x,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,X509_REQ_print_ex,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  X509_REQ *, ___x,A1),
AROS_LDA(  unsigned long, ___nmflag,D0),
AROS_LDA(  unsigned long, ___cflag,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_REQ_print,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  X509_REQ *, ___req,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,X509_NAME_entry_count,
AROS_LDA(  const X509_NAME *, ___name,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,X509_NAME_get_text_by_NID,
AROS_LDA(  X509_NAME *, ___name,A0),
AROS_LDA(  int, ___nid,D0),
AROS_LDA(  char *, ___buf,A1),
AROS_LDA(  int, ___len,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,X509_NAME_get_text_by_OBJ,
AROS_LDA(  X509_NAME *, ___name,A0),
AROS_LDA(  const ASN1_OBJECT *, ___obj,A1),
AROS_LDA(  char *, ___buf,A2),
AROS_LDA(  int, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509_NAME_get_index_by_NID,
AROS_LDA(  X509_NAME *, ___name,A0),
AROS_LDA(  int, ___nid,D0),
AROS_LDA(  int, ___lastpos,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509_NAME_get_index_by_OBJ,
AROS_LDA(  X509_NAME *, ___name,A0),
AROS_LDA(  const ASN1_OBJECT *, ___obj,A1),
AROS_LDA(  int, ___lastpos,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(X509_NAME_ENTRY * ,X509_NAME_get_entry,
AROS_LDA(  const X509_NAME *, ___name,A0),
AROS_LDA(  int, ___loc,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(X509_NAME_ENTRY * ,X509_NAME_delete_entry,
AROS_LDA(  X509_NAME *, ___name,A0),
AROS_LDA(  int, ___loc,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,X509_NAME_add_entry,
AROS_LDA(  X509_NAME *, ___name,A0),
AROS_LDA(  const X509_NAME_ENTRY *, ___ne,A1),
AROS_LDA(  int, ___loc,D0),
AROS_LDA(  int, ___set,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(int ,X509_NAME_add_entry_by_OBJ,
AROS_LDA(  X509_NAME *, ___name,A0),
AROS_LDA(  const ASN1_OBJECT *, ___obj,A1),
AROS_LDA(  int, ___type,D0),
AROS_LDA(  const unsigned char *, ___bytes,A2),
AROS_LDA(  int, ___len,D1),
AROS_LDA(  int, ___loc,D2),
AROS_LDA(  int, ___set,D3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(int ,X509_NAME_add_entry_by_NID,
AROS_LDA(  X509_NAME *, ___name,A0),
AROS_LDA(  int, ___nid,D0),
AROS_LDA(  int, ___type,D1),
AROS_LDA(  const unsigned char *, ___bytes,A1),
AROS_LDA(  int, ___len,D2),
AROS_LDA(  int, ___loc,D3),
AROS_LDA(  int, ___set,D4),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(X509_NAME_ENTRY * ,X509_NAME_ENTRY_create_by_txt,
AROS_LDA(  X509_NAME_ENTRY **, ___ne,A0),
AROS_LDA(  const char *, ___field,A1),
AROS_LDA(  int, ___type,D0),
AROS_LDA(  const unsigned char *, ___bytes,A2),
AROS_LDA(  int, ___len,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(X509_NAME_ENTRY * ,X509_NAME_ENTRY_create_by_NID,
AROS_LDA(  X509_NAME_ENTRY **, ___ne,A0),
AROS_LDA(  int, ___nid,D0),
AROS_LDA(  int, ___type,D1),
AROS_LDA(  const unsigned char *, ___bytes,A1),
AROS_LDA(  int, ___len,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(int ,X509_NAME_add_entry_by_txt,
AROS_LDA(  X509_NAME *, ___name,A0),
AROS_LDA(  const char *, ___field,A1),
AROS_LDA(  int, ___type,D0),
AROS_LDA(  const unsigned char *, ___bytes,A2),
AROS_LDA(  int, ___len,D1),
AROS_LDA(  int, ___loc,D2),
AROS_LDA(  int, ___set,D3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(X509_NAME_ENTRY * ,X509_NAME_ENTRY_create_by_OBJ,
AROS_LDA(  X509_NAME_ENTRY **, ___ne,A0),
AROS_LDA(  const ASN1_OBJECT *, ___obj,A1),
AROS_LDA(  int, ___type,D0),
AROS_LDA(  const unsigned char *, ___bytes,A2),
AROS_LDA(  int, ___len,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_NAME_ENTRY_set_object,
AROS_LDA(  X509_NAME_ENTRY *, ___ne,A0),
AROS_LDA(  const ASN1_OBJECT *, ___obj,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,X509_NAME_ENTRY_set_data,
AROS_LDA(  X509_NAME_ENTRY *, ___ne,A0),
AROS_LDA(  int, ___type,D0),
AROS_LDA(  const unsigned char *, ___bytes,A1),
AROS_LDA(  int, ___len,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ASN1_OBJECT * ,X509_NAME_ENTRY_get_object,
AROS_LDA(  const X509_NAME_ENTRY *, ___ne,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ASN1_STRING * ,X509_NAME_ENTRY_get_data,
AROS_LDA(  const X509_NAME_ENTRY *, ___ne,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,X509v3_get_ext_count,
AROS_LDA(  const STACK_OF(X509_EXTENSION) *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509v3_get_ext_by_NID,
AROS_LDA(  const STACK_OF(X509_EXTENSION) *, ___x,A0),
AROS_LDA(  int, ___nid,D0),
AROS_LDA(  int, ___lastpos,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509v3_get_ext_by_OBJ,
AROS_LDA(  const STACK_OF(X509_EXTENSION) *, ___x,A0),
AROS_LDA(  const ASN1_OBJECT *, ___obj,A1),
AROS_LDA(  int, ___lastpos,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509v3_get_ext_by_critical,
AROS_LDA(  const STACK_OF(X509_EXTENSION) *, ___x,A0),
AROS_LDA(  int, ___crit,D0),
AROS_LDA(  int, ___lastpos,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(X509_EXTENSION * ,X509v3_get_ext,
AROS_LDA(  const STACK_OF(X509_EXTENSION) *, ___x,A0),
AROS_LDA(  int, ___loc,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(X509_EXTENSION * ,X509v3_delete_ext,
AROS_LDA(  STACK_OF(X509_EXTENSION) *, ___x,A0),
AROS_LDA(  int, ___loc,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(STACK_OF(X509_EXTENSION) * ,X509v3_add_ext,
AROS_LDA(  STACK_OF(X509_EXTENSION) **, ___x,A0),
AROS_LDA(  X509_EXTENSION *, ___ex,A1),
AROS_LDA(  int, ___loc,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,X509_get_ext_count,
AROS_LDA(  const X509 *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509_get_ext_by_NID,
AROS_LDA(  const X509 *, ___x,A0),
AROS_LDA(  int, ___nid,D0),
AROS_LDA(  int, ___lastpos,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509_get_ext_by_OBJ,
AROS_LDA(  const X509 *, ___x,A0),
AROS_LDA(  const ASN1_OBJECT *, ___obj,A1),
AROS_LDA(  int, ___lastpos,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509_get_ext_by_critical,
AROS_LDA(  const X509 *, ___x,A0),
AROS_LDA(  int, ___crit,D0),
AROS_LDA(  int, ___lastpos,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(X509_EXTENSION * ,X509_get_ext,
AROS_LDA(  const X509 *, ___x,A0),
AROS_LDA(  int, ___loc,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(X509_EXTENSION * ,X509_delete_ext,
AROS_LDA(  X509 *, ___x,A0),
AROS_LDA(  int, ___loc,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509_add_ext,
AROS_LDA(  X509 *, ___x,A0),
AROS_LDA(  X509_EXTENSION *, ___ex,A1),
AROS_LDA(  int, ___loc,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void * ,X509_get_ext_d2i,
AROS_LDA(  const X509 *, ___x,A0),
AROS_LDA(  int, ___nid,D0),
AROS_LDA(  int *, ___crit,A1),
AROS_LDA(  int *, ___idx,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,X509_add1_ext_i2d,
AROS_LDA(  X509 *, ___x,A0),
AROS_LDA(  int, ___nid,D0),
AROS_LDA(  void *, ___value,A1),
AROS_LDA(  int, ___crit,D1),
AROS_LDA(  unsigned long, ___flags,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,X509_CRL_get_ext_count,
AROS_LDA(  const X509_CRL *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509_CRL_get_ext_by_NID,
AROS_LDA(  const X509_CRL *, ___x,A0),
AROS_LDA(  int, ___nid,D0),
AROS_LDA(  int, ___lastpos,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509_CRL_get_ext_by_OBJ,
AROS_LDA(  const X509_CRL *, ___x,A0),
AROS_LDA(  const ASN1_OBJECT *, ___obj,A1),
AROS_LDA(  int, ___lastpos,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509_CRL_get_ext_by_critical,
AROS_LDA(  const X509_CRL *, ___x,A0),
AROS_LDA(  int, ___crit,D0),
AROS_LDA(  int, ___lastpos,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(X509_EXTENSION * ,X509_CRL_get_ext,
AROS_LDA(  const X509_CRL *, ___x,A0),
AROS_LDA(  int, ___loc,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(X509_EXTENSION * ,X509_CRL_delete_ext,
AROS_LDA(  X509_CRL *, ___x,A0),
AROS_LDA(  int, ___loc,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509_CRL_add_ext,
AROS_LDA(  X509_CRL *, ___x,A0),
AROS_LDA(  X509_EXTENSION *, ___ex,A1),
AROS_LDA(  int, ___loc,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void * ,X509_CRL_get_ext_d2i,
AROS_LDA(  const X509_CRL *, ___x,A0),
AROS_LDA(  int, ___nid,D0),
AROS_LDA(  int *, ___crit,A1),
AROS_LDA(  int *, ___idx,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,X509_CRL_add1_ext_i2d,
AROS_LDA(  X509_CRL *, ___x,A0),
AROS_LDA(  int, ___nid,D0),
AROS_LDA(  void *, ___value,A1),
AROS_LDA(  int, ___crit,D1),
AROS_LDA(  unsigned long, ___flags,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,X509_REVOKED_get_ext_count,
AROS_LDA(  const X509_REVOKED *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509_REVOKED_get_ext_by_NID,
AROS_LDA(  const X509_REVOKED *, ___x,A0),
AROS_LDA(  int, ___nid,D0),
AROS_LDA(  int, ___lastpos,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509_REVOKED_get_ext_by_OBJ,
AROS_LDA(  const X509_REVOKED *, ___x,A0),
AROS_LDA(  const ASN1_OBJECT *, ___obj,A1),
AROS_LDA(  int, ___lastpos,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509_REVOKED_get_ext_by_critical,
AROS_LDA(  const X509_REVOKED *, ___x,A0),
AROS_LDA(  int, ___crit,D0),
AROS_LDA(  int, ___lastpos,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(X509_EXTENSION * ,X509_REVOKED_get_ext,
AROS_LDA(  const X509_REVOKED *, ___x,A0),
AROS_LDA(  int, ___loc,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(X509_EXTENSION * ,X509_REVOKED_delete_ext,
AROS_LDA(  X509_REVOKED *, ___x,A0),
AROS_LDA(  int, ___loc,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509_REVOKED_add_ext,
AROS_LDA(  X509_REVOKED *, ___x,A0),
AROS_LDA(  X509_EXTENSION *, ___ex,A1),
AROS_LDA(  int, ___loc,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void * ,X509_REVOKED_get_ext_d2i,
AROS_LDA(  const X509_REVOKED *, ___x,A0),
AROS_LDA(  int, ___nid,D0),
AROS_LDA(  int *, ___crit,A1),
AROS_LDA(  int *, ___idx,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,X509_REVOKED_add1_ext_i2d,
AROS_LDA(  X509_REVOKED *, ___x,A0),
AROS_LDA(  int, ___nid,D0),
AROS_LDA(  void *, ___value,A1),
AROS_LDA(  int, ___crit,D1),
AROS_LDA(  unsigned long, ___flags,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(X509_EXTENSION * ,X509_EXTENSION_create_by_NID,
AROS_LDA(  X509_EXTENSION **, ___ex,A0),
AROS_LDA(  int, ___nid,D0),
AROS_LDA(  int, ___crit,D1),
AROS_LDA(  ASN1_OCTET_STRING *, ___data,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(X509_EXTENSION * ,X509_EXTENSION_create_by_OBJ,
AROS_LDA(  X509_EXTENSION **, ___ex,A0),
AROS_LDA(  const ASN1_OBJECT *, ___obj,A1),
AROS_LDA(  int, ___crit,D0),
AROS_LDA(  ASN1_OCTET_STRING *, ___data,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_EXTENSION_set_object,
AROS_LDA(  X509_EXTENSION *, ___ex,A0),
AROS_LDA(  const ASN1_OBJECT *, ___obj,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_EXTENSION_set_critical,
AROS_LDA(  X509_EXTENSION *, ___ex,A0),
AROS_LDA(  int, ___crit,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_EXTENSION_set_data,
AROS_LDA(  X509_EXTENSION *, ___ex,A0),
AROS_LDA(  ASN1_OCTET_STRING *, ___data,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ASN1_OBJECT * ,X509_EXTENSION_get_object,
AROS_LDA(  X509_EXTENSION *, ___ex,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ASN1_OCTET_STRING * ,X509_EXTENSION_get_data,
AROS_LDA(  X509_EXTENSION *, ___ne,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,X509_EXTENSION_get_critical,
AROS_LDA(  const X509_EXTENSION *, ___ex,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,X509at_get_attr_count,
AROS_LDA(  const STACK_OF(X509_ATTRIBUTE) *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509at_get_attr_by_NID,
AROS_LDA(  const STACK_OF(X509_ATTRIBUTE) *, ___x,A0),
AROS_LDA(  int, ___nid,D0),
AROS_LDA(  int, ___lastpos,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509at_get_attr_by_OBJ,
AROS_LDA(  const STACK_OF(X509_ATTRIBUTE) *, ___sk,A0),
AROS_LDA(  const ASN1_OBJECT *, ___obj,A1),
AROS_LDA(  int, ___lastpos,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(X509_ATTRIBUTE * ,X509at_get_attr,
AROS_LDA(  const STACK_OF(X509_ATTRIBUTE) *, ___x,A0),
AROS_LDA(  int, ___loc,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(X509_ATTRIBUTE * ,X509at_delete_attr,
AROS_LDA(  STACK_OF(X509_ATTRIBUTE) *, ___x,A0),
AROS_LDA(  int, ___loc,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(STACK_OF(X509_ATTRIBUTE) * ,X509at_add1_attr,
AROS_LDA(  STACK_OF(X509_ATTRIBUTE) **, ___x,A0),
AROS_LDA(  X509_ATTRIBUTE *, ___attr,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(STACK_OF(X509_ATTRIBUTE) * ,X509at_add1_attr_by_OBJ,
AROS_LDA(  STACK_OF(X509_ATTRIBUTE) **, ___x,A0),
AROS_LDA(  const ASN1_OBJECT *, ___obj,A1),
AROS_LDA(  int, ___type,D0),
AROS_LDA(  const unsigned char *, ___bytes,A2),
AROS_LDA(  int, ___len,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(STACK_OF(X509_ATTRIBUTE) * ,X509at_add1_attr_by_NID,
AROS_LDA(  STACK_OF(X509_ATTRIBUTE) **, ___x,A0),
AROS_LDA(  int, ___nid,D0),
AROS_LDA(  int, ___type,D1),
AROS_LDA(  const unsigned char *, ___bytes,A1),
AROS_LDA(  int, ___len,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(STACK_OF(X509_ATTRIBUTE) * ,X509at_add1_attr_by_txt,
AROS_LDA(  STACK_OF(X509_ATTRIBUTE) **, ___x,A0),
AROS_LDA(  const char *, ___attrname,A1),
AROS_LDA(  int, ___type,D0),
AROS_LDA(  const unsigned char *, ___bytes,A2),
AROS_LDA(  int, ___len,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(X509_ATTRIBUTE * ,X509_ATTRIBUTE_create_by_NID,
AROS_LDA(  X509_ATTRIBUTE **, ___attr,A0),
AROS_LDA(  int, ___nid,D0),
AROS_LDA(  int, ___atrtype,D1),
AROS_LDA(  const void *, ___data,A1),
AROS_LDA(  int, ___len,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(X509_ATTRIBUTE * ,X509_ATTRIBUTE_create_by_OBJ,
AROS_LDA(  X509_ATTRIBUTE **, ___attr,A0),
AROS_LDA(  const ASN1_OBJECT *, ___obj,A1),
AROS_LDA(  int, ___atrtype,D0),
AROS_LDA(  const void *, ___data,A2),
AROS_LDA(  int, ___len,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(X509_ATTRIBUTE * ,X509_ATTRIBUTE_create_by_txt,
AROS_LDA(  X509_ATTRIBUTE **, ___attr,A0),
AROS_LDA(  const char *, ___atrname,A1),
AROS_LDA(  int, ___type,D0),
AROS_LDA(  const unsigned char *, ___bytes,A2),
AROS_LDA(  int, ___len,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_ATTRIBUTE_set1_object,
AROS_LDA(  X509_ATTRIBUTE *, ___attr,A0),
AROS_LDA(  const ASN1_OBJECT *, ___obj,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,X509_ATTRIBUTE_set1_data,
AROS_LDA(  X509_ATTRIBUTE *, ___attr,A0),
AROS_LDA(  int, ___attrtype,D0),
AROS_LDA(  const void *, ___data,A1),
AROS_LDA(  int, ___len,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void * ,X509_ATTRIBUTE_get0_data,
AROS_LDA(  X509_ATTRIBUTE *, ___attr,A0),
AROS_LDA(  int, ___idx,D0),
AROS_LDA(  int, ___atrtype,D1),
AROS_LDA(  void *, ___data,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,X509_ATTRIBUTE_count,
AROS_LDA(  const X509_ATTRIBUTE *, ___attr,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ASN1_OBJECT * ,X509_ATTRIBUTE_get0_object,
AROS_LDA(  X509_ATTRIBUTE *, ___attr,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(ASN1_TYPE * ,X509_ATTRIBUTE_get0_type,
AROS_LDA(  X509_ATTRIBUTE *, ___attr,A0),
AROS_LDA(  int, ___idx,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,X509_verify_cert,
AROS_LDA(  X509_STORE_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(X509 * ,X509_find_by_issuer_and_serial,
AROS_LDA(  STACK_OF(X509) *, ___sk,A0),
AROS_LDA(  X509_NAME *, ___name,A1),
AROS_LDA(  ASN1_INTEGER *, ___serial,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(X509 * ,X509_find_by_subject,
AROS_LDA(  STACK_OF(X509) *, ___sk,A0),
AROS_LDA(  X509_NAME *, ___name,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(PBEPARAM * ,PBEPARAM_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,PBEPARAM_free,
AROS_LDA(  PBEPARAM *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(PBEPARAM * ,d2i_PBEPARAM,
AROS_LDA(  PBEPARAM **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_PBEPARAM,
AROS_LDA(  PBEPARAM *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,PBEPARAM_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(PBE2PARAM * ,PBE2PARAM_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,PBE2PARAM_free,
AROS_LDA(  PBE2PARAM *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(PBE2PARAM * ,d2i_PBE2PARAM,
AROS_LDA(  PBE2PARAM **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_PBE2PARAM,
AROS_LDA(  PBE2PARAM *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,PBE2PARAM_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(PBKDF2PARAM * ,PBKDF2PARAM_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,PBKDF2PARAM_free,
AROS_LDA(  PBKDF2PARAM *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(PBKDF2PARAM * ,d2i_PBKDF2PARAM,
AROS_LDA(  PBKDF2PARAM **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_PBKDF2PARAM,
AROS_LDA(  PBKDF2PARAM *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,PBKDF2PARAM_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(X509_ALGOR * ,PKCS5_pbe_set,
AROS_LDA(  int, ___alg,D0),
AROS_LDA(  int, ___iter,D1),
AROS_LDA(  unsigned char *, ___salt,A0),
AROS_LDA(  int, ___saltlen,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(X509_ALGOR * ,PKCS5_pbe2_set,
AROS_LDA(  const EVP_CIPHER *, ___cipher,A0),
AROS_LDA(  int, ___iter,D0),
AROS_LDA(  unsigned char *, ___salt,A1),
AROS_LDA(  int, ___saltlen,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(PKCS8_PRIV_KEY_INFO * ,PKCS8_PRIV_KEY_INFO_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,PKCS8_PRIV_KEY_INFO_free,
AROS_LDA(  PKCS8_PRIV_KEY_INFO *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(PKCS8_PRIV_KEY_INFO * ,d2i_PKCS8_PRIV_KEY_INFO,
AROS_LDA(  PKCS8_PRIV_KEY_INFO **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_PKCS8_PRIV_KEY_INFO,
AROS_LDA(  PKCS8_PRIV_KEY_INFO *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,PKCS8_PRIV_KEY_INFO_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(EVP_PKEY * ,EVP_PKCS82PKEY,
AROS_LDA(  const PKCS8_PRIV_KEY_INFO *, ___p8,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(PKCS8_PRIV_KEY_INFO * ,EVP_PKEY2PKCS8,
AROS_LDA(  EVP_PKEY *, ___pkey,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509_check_trust,
AROS_LDA(  X509 *, ___x,A0),
AROS_LDA(  int, ___id,D0),
AROS_LDA(  int, ___flags,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(int ,X509_TRUST_get_count,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_TRUST * ,X509_TRUST_get0,
AROS_LDA(  int, ___idx,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,X509_TRUST_get_by_id,
AROS_LDA(  int, ___id,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int ,X509_TRUST_add,
AROS_LDA(  int, ___id,D0),
AROS_LDA(  int, ___flags,D1),
AROS_LDA(  APTR  ,___ck,A0),
AROS_LDA(  const char *, ___name,A1),
AROS_LDA(  int, ___arg1,D2),
AROS_LDA(  void *, ___arg2,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(void ,X509_TRUST_cleanup,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,X509_TRUST_get_flags,
AROS_LDA(  const X509_TRUST *, ___xp,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(char * ,X509_TRUST_get0_name,
AROS_LDA(  const X509_TRUST *, ___xp,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,X509_TRUST_get_trust,
AROS_LDA(  const X509_TRUST *, ___xp,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(int ,ERR_load_X509_strings,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509_OBJECT_idx_by_subject,
AROS_LDA(  STACK_OF(X509_OBJECT) *, ___h,A0),
AROS_LDA(  X509_LOOKUP_TYPE, ___type,D0),
AROS_LDA(  X509_NAME *, ___name,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(X509_OBJECT * ,X509_OBJECT_retrieve_by_subject,
AROS_LDA(  STACK_OF(X509_OBJECT) *, ___h,A0),
AROS_LDA(  X509_LOOKUP_TYPE, ___type,D0),
AROS_LDA(  X509_NAME *, ___name,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(X509_OBJECT * ,X509_OBJECT_retrieve_match,
AROS_LDA(  STACK_OF(X509_OBJECT) *, ___h,A0),
AROS_LDA(  X509_OBJECT *, ___x,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,X509_OBJECT_up_ref_count,
AROS_LDA(  X509_OBJECT *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(X509_STORE * ,X509_STORE_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,X509_STORE_free,
AROS_LDA(  X509_STORE *, ___v,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_STORE_set_flags,
AROS_LDA(  X509_STORE *, ___ctx,A0),
AROS_LDA(  unsigned long, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_STORE_set_purpose,
AROS_LDA(  X509_STORE *, ___ctx,A0),
AROS_LDA(  int, ___purpose,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_STORE_set_trust,
AROS_LDA(  X509_STORE *, ___ctx,A0),
AROS_LDA(  int, ___trust,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(X509_STORE_CTX * ,X509_STORE_CTX_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509_STORE_CTX_get1_issuer,
AROS_LDA(  X509 **, ___issuer,A0),
AROS_LDA(  X509_STORE_CTX *, ___ctx,A1),
AROS_LDA(  X509 *, ___x,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,X509_STORE_CTX_free,
AROS_LDA(  X509_STORE_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,X509_STORE_CTX_init,
AROS_LDA(  X509_STORE_CTX *, ___ctx,A0),
AROS_LDA(  X509_STORE *, ___store,A1),
AROS_LDA(  X509 *, ___x509,A2),
AROS_LDA(  STACK_OF(X509) *, ___chain,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,X509_STORE_CTX_set0_trusted_stack,
AROS_LDA(  X509_STORE_CTX *, ___ctx,A0),
AROS_LDA(  STACK_OF(X509) *, ___sk,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,X509_STORE_CTX_cleanup,
AROS_LDA(  X509_STORE_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(X509_LOOKUP * ,X509_STORE_add_lookup,
AROS_LDA(  X509_STORE *, ___v,A0),
AROS_LDA(  X509_LOOKUP_METHOD *, ___m,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(X509_LOOKUP_METHOD * ,X509_LOOKUP_hash_dir,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(X509_LOOKUP_METHOD * ,X509_LOOKUP_file,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_STORE_add_cert,
AROS_LDA(  X509_STORE *, ___ctx,A0),
AROS_LDA(  X509 *, ___x,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_STORE_add_crl,
AROS_LDA(  X509_STORE *, ___ctx,A0),
AROS_LDA(  X509_CRL *, ___x,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,X509_STORE_CTX_get_by_subject,
AROS_LDA(  X509_STORE_CTX *, ___vs,A0),
AROS_LDA(  X509_LOOKUP_TYPE, ___type,D0),
AROS_LDA(  X509_NAME *, ___name,A1),
AROS_LDA(  X509_OBJECT *, ___ret,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,X509_LOOKUP_ctrl,
AROS_LDA(  X509_LOOKUP *, ___ctx,A0),
AROS_LDA(  int, ___cmd,D0),
AROS_LDA(  const char *, ___argc,A1),
AROS_LDA(  long, ___argl,D1),
AROS_LDA(  char **, ___ret,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509_load_cert_file,
AROS_LDA(  X509_LOOKUP *, ___ctx,A0),
AROS_LDA(  const char *, ___file,A1),
AROS_LDA(  int, ___type,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509_load_crl_file,
AROS_LDA(  X509_LOOKUP *, ___ctx,A0),
AROS_LDA(  const char *, ___file,A1),
AROS_LDA(  int, ___type,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509_load_cert_crl_file,
AROS_LDA(  X509_LOOKUP *, ___ctx,A0),
AROS_LDA(  const char *, ___file,A1),
AROS_LDA(  int, ___type,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_LOOKUP * ,X509_LOOKUP_new,
AROS_LDA(  X509_LOOKUP_METHOD *, ___method,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,X509_LOOKUP_free,
AROS_LDA(  X509_LOOKUP *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,X509_LOOKUP_init,
AROS_LDA(  X509_LOOKUP *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,X509_LOOKUP_by_subject,
AROS_LDA(  X509_LOOKUP *, ___ctx,A0),
AROS_LDA(  X509_LOOKUP_TYPE, ___type,D0),
AROS_LDA(  X509_NAME *, ___name,A1),
AROS_LDA(  X509_OBJECT *, ___ret,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,X509_LOOKUP_by_issuer_serial,
AROS_LDA(  X509_LOOKUP *, ___ctx,A0),
AROS_LDA(  X509_LOOKUP_TYPE, ___type,D0),
AROS_LDA(  X509_NAME *, ___name,A1),
AROS_LDA(  ASN1_INTEGER *, ___serial,A2),
AROS_LDA(  X509_OBJECT *, ___ret,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,X509_LOOKUP_by_fingerprint,
AROS_LDA(  X509_LOOKUP *, ___ctx,A0),
AROS_LDA(  X509_LOOKUP_TYPE, ___type,D0),
AROS_LDA(  const unsigned char *, ___bytes,A1),
AROS_LDA(  int, ___len,D1),
AROS_LDA(  X509_OBJECT *, ___ret,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,X509_LOOKUP_by_alias,
AROS_LDA(  X509_LOOKUP *, ___ctx,A0),
AROS_LDA(  X509_LOOKUP_TYPE, ___type,D0),
AROS_LDA(  const char *, ___str,A1),
AROS_LDA(  int, ___len,D1),
AROS_LDA(  X509_OBJECT *, ___ret,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,X509_LOOKUP_shutdown,
AROS_LDA(  X509_LOOKUP *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509_STORE_load_locations,
AROS_LDA(  X509_STORE *, ___ctx,A0),
AROS_LDA(  const char *, ___file,A1),
AROS_LDA(  const char *, ___dir,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,X509_STORE_set_default_paths,
AROS_LDA(  X509_STORE *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509_STORE_CTX_set_ex_data,
AROS_LDA(  X509_STORE_CTX *, ___ctx,A0),
AROS_LDA(  int, ___idx,D0),
AROS_LDA(  void *, ___data,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void * ,X509_STORE_CTX_get_ex_data,
AROS_LDA(  X509_STORE_CTX *, ___ctx,A0),
AROS_LDA(  int, ___idx,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,X509_STORE_CTX_get_error,
AROS_LDA(  X509_STORE_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,X509_STORE_CTX_set_error,
AROS_LDA(  X509_STORE_CTX *, ___ctx,A0),
AROS_LDA(  int, ___s,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,X509_STORE_CTX_get_error_depth,
AROS_LDA(  X509_STORE_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509 * ,X509_STORE_CTX_get_current_cert,
AROS_LDA(  X509_STORE_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(STACK_OF(X509) * ,X509_STORE_CTX_get0_chain,
AROS_LDA(  X509_STORE_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(STACK_OF(X509) * ,X509_STORE_CTX_get1_chain,
AROS_LDA(  X509_STORE_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,X509_STORE_CTX_set_cert,
AROS_LDA(  X509_STORE_CTX *, ___c,A0),
AROS_LDA(  X509 *, ___x,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_STORE_CTX_set_purpose,
AROS_LDA(  X509_STORE_CTX *, ___ctx,A0),
AROS_LDA(  int, ___purpose,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_STORE_CTX_set_trust,
AROS_LDA(  X509_STORE_CTX *, ___ctx,A0),
AROS_LDA(  int, ___trust,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,X509_STORE_CTX_purpose_inherit,
AROS_LDA(  X509_STORE_CTX *, ___ctx,A0),
AROS_LDA(  int, ___def_purpose,D0),
AROS_LDA(  int, ___purpose,D1),
AROS_LDA(  int, ___trust,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,X509_STORE_CTX_set_flags,
AROS_LDA(  X509_STORE_CTX *, ___ctx,A0),
AROS_LDA(  long, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,X509_STORE_CTX_set_time,
AROS_LDA(  X509_STORE_CTX *, ___ctx,A0),
AROS_LDA(  long, ___flags,D0),
AROS_LDA(  time_t, ___t,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,X509_STORE_CTX_set_verify_cb,
AROS_LDA(  X509_STORE_CTX *, ___ctx,A0),
AROS_LDA(  APTR,___verify_cb,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(BASIC_CONSTRAINTS * ,BASIC_CONSTRAINTS_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,BASIC_CONSTRAINTS_free,
AROS_LDA(  BASIC_CONSTRAINTS *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(BASIC_CONSTRAINTS * ,d2i_BASIC_CONSTRAINTS,
AROS_LDA(  BASIC_CONSTRAINTS **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_BASIC_CONSTRAINTS,
AROS_LDA(  BASIC_CONSTRAINTS *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,BASIC_CONSTRAINTS_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(SXNET * ,SXNET_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,SXNET_free,
AROS_LDA(  SXNET *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(SXNET * ,d2i_SXNET,
AROS_LDA(  SXNET **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_SXNET,
AROS_LDA(  SXNET *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,SXNET_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(SXNETID * ,SXNETID_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,SXNETID_free,
AROS_LDA(  SXNETID *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(SXNETID * ,d2i_SXNETID,
AROS_LDA(  SXNETID **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_SXNETID,
AROS_LDA(  SXNETID *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,SXNETID_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,SXNET_add_id_asc,
AROS_LDA(  SXNET **, ___psx,A0),
AROS_LDA(  const char *, ___zone,A1),
AROS_LDA(  const char *, ___user,A2),
AROS_LDA(  int, ___userlen,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,SXNET_add_id_ulong,
AROS_LDA(  SXNET **, ___psx,A0),
AROS_LDA(  unsigned long, ___lzone,D0),
AROS_LDA(  const char *, ___user,A1),
AROS_LDA(  int, ___userlen,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,SXNET_add_id_INTEGER,
AROS_LDA(  SXNET **, ___psx,A0),
AROS_LDA(  ASN1_INTEGER *, ___izone,A1),
AROS_LDA(  const char *, ___user,A2),
AROS_LDA(  int, ___userlen,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(ASN1_OCTET_STRING * ,SXNET_get_id_asc,
AROS_LDA(  SXNET *, ___sx,A0),
AROS_LDA(  const char *, ___zone,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(ASN1_OCTET_STRING * ,SXNET_get_id_ulong,
AROS_LDA(  SXNET *, ___sx,A0),
AROS_LDA(  unsigned long, ___lzone,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(ASN1_OCTET_STRING * ,SXNET_get_id_INTEGER,
AROS_LDA(  SXNET *, ___sx,A0),
AROS_LDA(  ASN1_INTEGER *, ___zone,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(AUTHORITY_KEYID * ,AUTHORITY_KEYID_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,AUTHORITY_KEYID_free,
AROS_LDA(  AUTHORITY_KEYID *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(AUTHORITY_KEYID * ,d2i_AUTHORITY_KEYID,
AROS_LDA(  AUTHORITY_KEYID **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_AUTHORITY_KEYID,
AROS_LDA(  AUTHORITY_KEYID *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,AUTHORITY_KEYID_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(PKEY_USAGE_PERIOD * ,PKEY_USAGE_PERIOD_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,PKEY_USAGE_PERIOD_free,
AROS_LDA(  PKEY_USAGE_PERIOD *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(PKEY_USAGE_PERIOD * ,d2i_PKEY_USAGE_PERIOD,
AROS_LDA(  PKEY_USAGE_PERIOD **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_PKEY_USAGE_PERIOD,
AROS_LDA(  PKEY_USAGE_PERIOD *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,PKEY_USAGE_PERIOD_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(GENERAL_NAME * ,GENERAL_NAME_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,GENERAL_NAME_free,
AROS_LDA(  GENERAL_NAME *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(GENERAL_NAME * ,d2i_GENERAL_NAME,
AROS_LDA(  GENERAL_NAME **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_GENERAL_NAME,
AROS_LDA(  GENERAL_NAME *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,GENERAL_NAME_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(STACK_OF(CONF_VALUE) * ,i2v_GENERAL_NAME,
AROS_LDA(  X509V3_EXT_METHOD *, ___method,A0),
AROS_LDA(  GENERAL_NAME *, ___gen,A1),
AROS_LDA(  STACK_OF(CONF_VALUE) *, ___ret,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,GENERAL_NAME_print,
AROS_LDA(  BIO *, ___out,A0),
AROS_LDA(  GENERAL_NAME *, ___gen,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(GENERAL_NAMES * ,GENERAL_NAMES_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,GENERAL_NAMES_free,
AROS_LDA(  GENERAL_NAMES *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(GENERAL_NAMES * ,d2i_GENERAL_NAMES,
AROS_LDA(  GENERAL_NAMES **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_GENERAL_NAMES,
AROS_LDA(  GENERAL_NAMES *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,GENERAL_NAMES_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(STACK_OF(CONF_VALUE) * ,i2v_GENERAL_NAMES,
AROS_LDA(  X509V3_EXT_METHOD *, ___method,A0),
AROS_LDA(  GENERAL_NAMES *, ___gen,A1),
AROS_LDA(  STACK_OF(CONF_VALUE) *, ___extlist,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(GENERAL_NAMES * ,v2i_GENERAL_NAMES,
AROS_LDA(  X509V3_EXT_METHOD *, ___method,A0),
AROS_LDA(  X509V3_CTX *, ___ctx,A1),
AROS_LDA(  STACK_OF(CONF_VALUE) *, ___nval,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OTHERNAME * ,OTHERNAME_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,OTHERNAME_free,
AROS_LDA(  OTHERNAME *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OTHERNAME * ,d2i_OTHERNAME,
AROS_LDA(  OTHERNAME **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_OTHERNAME,
AROS_LDA(  OTHERNAME *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,OTHERNAME_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(EDIPARTYNAME * ,EDIPARTYNAME_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,EDIPARTYNAME_free,
AROS_LDA(  EDIPARTYNAME *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(EDIPARTYNAME * ,d2i_EDIPARTYNAME,
AROS_LDA(  EDIPARTYNAME **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_EDIPARTYNAME,
AROS_LDA(  EDIPARTYNAME *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,EDIPARTYNAME_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(char * ,i2s_ASN1_OCTET_STRING,
AROS_LDA(  X509V3_EXT_METHOD *, ___method,A0),
AROS_LDA(  const ASN1_OCTET_STRING *, ___ia5,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(ASN1_OCTET_STRING * ,s2i_ASN1_OCTET_STRING,
AROS_LDA(  X509V3_EXT_METHOD *, ___method,A0),
AROS_LDA(  X509V3_CTX *, ___ctx,A1),
AROS_LDA(  const char *, ___str,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(EXTENDED_KEY_USAGE * ,EXTENDED_KEY_USAGE_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,EXTENDED_KEY_USAGE_free,
AROS_LDA(  EXTENDED_KEY_USAGE *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(EXTENDED_KEY_USAGE * ,d2i_EXTENDED_KEY_USAGE,
AROS_LDA(  EXTENDED_KEY_USAGE **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_EXTENDED_KEY_USAGE,
AROS_LDA(  EXTENDED_KEY_USAGE *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,EXTENDED_KEY_USAGE_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2a_ACCESS_DESCRIPTION,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  const ACCESS_DESCRIPTION *, ___a,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(CERTIFICATEPOLICIES * ,CERTIFICATEPOLICIES_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,CERTIFICATEPOLICIES_free,
AROS_LDA(  CERTIFICATEPOLICIES *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(CERTIFICATEPOLICIES * ,d2i_CERTIFICATEPOLICIES,
AROS_LDA(  CERTIFICATEPOLICIES **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_CERTIFICATEPOLICIES,
AROS_LDA(  CERTIFICATEPOLICIES *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,CERTIFICATEPOLICIES_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(POLICYINFO * ,POLICYINFO_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,POLICYINFO_free,
AROS_LDA(  POLICYINFO *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(POLICYINFO * ,d2i_POLICYINFO,
AROS_LDA(  POLICYINFO **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_POLICYINFO,
AROS_LDA(  POLICYINFO *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,POLICYINFO_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(POLICYQUALINFO * ,POLICYQUALINFO_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,POLICYQUALINFO_free,
AROS_LDA(  POLICYQUALINFO *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(POLICYQUALINFO * ,d2i_POLICYQUALINFO,
AROS_LDA(  POLICYQUALINFO **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_POLICYQUALINFO,
AROS_LDA(  POLICYQUALINFO *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,POLICYQUALINFO_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(USERNOTICE * ,USERNOTICE_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,USERNOTICE_free,
AROS_LDA(  USERNOTICE *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(USERNOTICE * ,d2i_USERNOTICE,
AROS_LDA(  USERNOTICE **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_USERNOTICE,
AROS_LDA(  USERNOTICE *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,USERNOTICE_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(NOTICEREF * ,NOTICEREF_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,NOTICEREF_free,
AROS_LDA(  NOTICEREF *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(NOTICEREF * ,d2i_NOTICEREF,
AROS_LDA(  NOTICEREF **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_NOTICEREF,
AROS_LDA(  NOTICEREF *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,NOTICEREF_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(CRL_DIST_POINTS * ,CRL_DIST_POINTS_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,CRL_DIST_POINTS_free,
AROS_LDA(  CRL_DIST_POINTS *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(CRL_DIST_POINTS * ,d2i_CRL_DIST_POINTS,
AROS_LDA(  CRL_DIST_POINTS **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_CRL_DIST_POINTS,
AROS_LDA(  CRL_DIST_POINTS *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,CRL_DIST_POINTS_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(DIST_POINT * ,DIST_POINT_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,DIST_POINT_free,
AROS_LDA(  DIST_POINT *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(DIST_POINT * ,d2i_DIST_POINT,
AROS_LDA(  DIST_POINT **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_DIST_POINT,
AROS_LDA(  DIST_POINT *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,DIST_POINT_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(DIST_POINT_NAME * ,DIST_POINT_NAME_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,DIST_POINT_NAME_free,
AROS_LDA(  DIST_POINT_NAME *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(DIST_POINT_NAME * ,d2i_DIST_POINT_NAME,
AROS_LDA(  DIST_POINT_NAME **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_DIST_POINT_NAME,
AROS_LDA(  DIST_POINT_NAME *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,DIST_POINT_NAME_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(ACCESS_DESCRIPTION * ,ACCESS_DESCRIPTION_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,ACCESS_DESCRIPTION_free,
AROS_LDA(  ACCESS_DESCRIPTION *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(ACCESS_DESCRIPTION * ,d2i_ACCESS_DESCRIPTION,
AROS_LDA(  ACCESS_DESCRIPTION **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_ACCESS_DESCRIPTION,
AROS_LDA(  ACCESS_DESCRIPTION *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,ACCESS_DESCRIPTION_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(AUTHORITY_INFO_ACCESS * ,AUTHORITY_INFO_ACCESS_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,AUTHORITY_INFO_ACCESS_free,
AROS_LDA(  AUTHORITY_INFO_ACCESS *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(AUTHORITY_INFO_ACCESS * ,d2i_AUTHORITY_INFO_ACCESS,
AROS_LDA(  AUTHORITY_INFO_ACCESS **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_AUTHORITY_INFO_ACCESS,
AROS_LDA(  AUTHORITY_INFO_ACCESS *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,AUTHORITY_INFO_ACCESS_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(GENERAL_NAME * ,v2i_GENERAL_NAME,
AROS_LDA(  X509V3_EXT_METHOD *, ___method,A0),
AROS_LDA(  X509V3_CTX *, ___ctx,A1),
AROS_LDA(  CONF_VALUE *, ___cnf,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,X509V3_conf_free,
AROS_LDA(  CONF_VALUE *, ___val,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(X509_EXTENSION * ,X509V3_EXT_nconf_nid,
AROS_LDA(  CONF *, ___conf,A0),
AROS_LDA(  X509V3_CTX *, ___ctx,A1),
AROS_LDA(  int, ___ext_nid,D0),
AROS_LDA(  char *, ___value,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(X509_EXTENSION * ,X509V3_EXT_nconf,
AROS_LDA(  CONF *, ___conf,A0),
AROS_LDA(  X509V3_CTX *, ___ctx,A1),
AROS_LDA(  const char *, ___name,A2),
AROS_LDA(  const char *, ___value,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,X509V3_EXT_add_nconf_sk,
AROS_LDA(  CONF *, ___conf,A0),
AROS_LDA(  X509V3_CTX *, ___ctx,A1),
AROS_LDA(  const char *, ___section,A2),
AROS_LDA(  STACK_OF(X509_EXTENSION) **, ___sk,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,X509V3_EXT_add_nconf,
AROS_LDA(  CONF *, ___conf,A0),
AROS_LDA(  X509V3_CTX *, ___ctx,A1),
AROS_LDA(  const char *, ___section,A2),
AROS_LDA(  X509 *, ___cert,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,X509V3_EXT_REQ_add_nconf,
AROS_LDA(  CONF *, ___conf,A0),
AROS_LDA(  X509V3_CTX *, ___ctx,A1),
AROS_LDA(  const char *, ___section,A2),
AROS_LDA(  X509_REQ *, ___req,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,X509V3_EXT_CRL_add_nconf,
AROS_LDA(  CONF *, ___conf,A0),
AROS_LDA(  X509V3_CTX *, ___ctx,A1),
AROS_LDA(  const char *, ___section,A2),
AROS_LDA(  X509_CRL *, ___crl,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(X509_EXTENSION * ,X509V3_EXT_conf_nid,
AROS_LDA(  LHASH_OF(CONF_VALUE) *, ___conf,A0),
AROS_LDA(  X509V3_CTX *, ___ctx,A1),
AROS_LDA(  int, ___ext_nid,D0),
AROS_LDA(  const char *, ___value,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(X509_EXTENSION * ,X509V3_EXT_conf,
AROS_LDA(  LHASH_OF(CONF_VALUE) *, ___conf,A0),
AROS_LDA(  X509V3_CTX *, ___ctx,A1),
AROS_LDA(  const char *, ___name,A2),
AROS_LDA(  const char *, ___value,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,X509V3_EXT_add_conf,
AROS_LDA(  LHASH_OF(CONF_VALUE) *, ___conf,A0),
AROS_LDA(  X509V3_CTX *, ___ctx,A1),
AROS_LDA(  const char *, ___section,A2),
AROS_LDA(  X509 *, ___cert,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,X509V3_EXT_REQ_add_conf,
AROS_LDA(  LHASH_OF(CONF_VALUE) *, ___conf,A0),
AROS_LDA(  X509V3_CTX *, ___ctx,A1),
AROS_LDA(  const char *, ___section,A2),
AROS_LDA(  X509_REQ *, ___req,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,X509V3_EXT_CRL_add_conf,
AROS_LDA(  LHASH_OF(CONF_VALUE) *, ___conf,A0),
AROS_LDA(  X509V3_CTX *, ___ctx,A1),
AROS_LDA(  const char *, ___section,A2),
AROS_LDA(  X509_CRL *, ___crl,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509V3_add_value_bool_nf,
AROS_LDA(  const char *, ___name,A0),
AROS_LDA(  int, ___asn1_bool,D0),
AROS_LDA(  STACK_OF(CONF_VALUE) **, ___extlist,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509V3_get_value_bool,
AROS_LDA(  const CONF_VALUE *, ___value,A0),
AROS_LDA(  int *, ___asn1_bool,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509V3_get_value_int,
AROS_LDA(  const CONF_VALUE *, ___value,A0),
AROS_LDA(  ASN1_INTEGER **, ___aint,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,X509V3_set_nconf,
AROS_LDA(  X509V3_CTX *, ___ctx,A0),
AROS_LDA(  CONF *, ___conf,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,X509V3_set_conf_lhash,
AROS_LDA(  X509V3_CTX *, ___ctx,A0),
AROS_LDA(  LHASH_OF(CONF_VALUE) *, ___lhash,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(char * ,X509V3_get_string,
AROS_LDA(  X509V3_CTX *, ___ctx,A0),
AROS_LDA(  const char *, ___name,A1),
AROS_LDA(  const char *, ___section,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(STACK_OF(CONF_VALUE) * ,X509V3_get_section,
AROS_LDA(  X509V3_CTX *, ___ctx,A0),
AROS_LDA(  const char *, ___section,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,X509V3_string_free,
AROS_LDA(  X509V3_CTX *, ___ctx,A0),
AROS_LDA(  char *, ___str,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,X509V3_section_free,
AROS_LDA(  X509V3_CTX *, ___ctx,A0),
AROS_LDA(  STACK_OF(CONF_VALUE) *, ___section,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(void ,X509V3_set_ctx,
AROS_LDA(  X509V3_CTX *, ___ctx,A0),
AROS_LDA(  X509 *, ___issuer,A1),
AROS_LDA(  X509 *, ___subject,A2),
AROS_LDA(  X509_REQ *, ___req,A3),
AROS_LDA(  X509_CRL *, ___crl,D0),
AROS_LDA(  int, ___flags,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509V3_add_value,
AROS_LDA(  const char *, ___name,A0),
AROS_LDA(  const char *, ___value,A1),
AROS_LDA(  STACK_OF(CONF_VALUE) **, ___extlist,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509V3_add_value_uchar,
AROS_LDA(  const char *, ___name,A0),
AROS_LDA(  const unsigned char *, ___value,A1),
AROS_LDA(  STACK_OF(CONF_VALUE) **, ___extlist,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509V3_add_value_bool,
AROS_LDA(  const char *, ___name,A0),
AROS_LDA(  int, ___asn1_bool,D0),
AROS_LDA(  STACK_OF(CONF_VALUE) **, ___extlist,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509V3_add_value_int,
AROS_LDA(  const char *, ___name,A0),
AROS_LDA(  const ASN1_INTEGER *, ___aint,A1),
AROS_LDA(  STACK_OF(CONF_VALUE) **, ___extlist,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(char * ,i2s_ASN1_INTEGER,
AROS_LDA(  X509V3_EXT_METHOD *, ___meth,A0),
AROS_LDA(  const ASN1_INTEGER *, ___aint,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(ASN1_INTEGER * ,s2i_ASN1_INTEGER,
AROS_LDA(  X509V3_EXT_METHOD *, ___meth,A0),
AROS_LDA(  const char *, ___value,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(char * ,i2s_ASN1_ENUMERATED,
AROS_LDA(  X509V3_EXT_METHOD *, ___meth,A0),
AROS_LDA(  const ASN1_ENUMERATED *, ___aint,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(char * ,i2s_ASN1_ENUMERATED_TABLE,
AROS_LDA(  X509V3_EXT_METHOD *, ___meth,A0),
AROS_LDA(  const ASN1_ENUMERATED *, ___aint,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,X509V3_EXT_add,
AROS_LDA(  X509V3_EXT_METHOD *, ___ext,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,X509V3_EXT_add_list,
AROS_LDA(  X509V3_EXT_METHOD *, ___extlist,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509V3_EXT_add_alias,
AROS_LDA(  int, ___nid_to,D0),
AROS_LDA(  int, ___nid_from,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(void ,X509V3_EXT_cleanup,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const X509V3_EXT_METHOD * ,X509V3_EXT_get,
AROS_LDA(  X509_EXTENSION *, ___ext,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const X509V3_EXT_METHOD * ,X509V3_EXT_get_nid,
AROS_LDA(  int, ___nid,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(int ,X509V3_add_standard_extensions,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(STACK_OF(CONF_VALUE) * ,X509V3_parse_list,
AROS_LDA(  const char *, ___line,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void * ,X509V3_EXT_d2i,
AROS_LDA(  X509_EXTENSION *, ___ext,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void * ,X509V3_get_d2i,
AROS_LDA(  const STACK_OF(X509_EXTENSION) *, ___x,A0),
AROS_LDA(  int, ___nid,D0),
AROS_LDA(  int *, ___crit,A1),
AROS_LDA(  int *, ___idx,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(X509_EXTENSION * ,X509V3_EXT_i2d,
AROS_LDA(  int, ___ext_nid,D0),
AROS_LDA(  int, ___crit,D1),
AROS_LDA(  void *, ___ext_struc,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,X509V3_add1_i2d,
AROS_LDA(  STACK_OF(X509_EXTENSION) **, ___x,A0),
AROS_LDA(  int, ___nid,D0),
AROS_LDA(  void *, ___value,A1),
AROS_LDA(  int, ___crit,D1),
AROS_LDA(  unsigned long, ___flags,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(char * ,OPENSSL_buf2hexstr,
AROS_LDA(  const unsigned char *, ___buffer,A0),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(unsigned char * ,OPENSSL_hexstr2buf,
AROS_LDA(  const char *, ___str,A0),
AROS_LDA(  long *, ___len,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void ,X509V3_EXT_val_prn,
AROS_LDA(  BIO *, ___out,A0),
AROS_LDA(  STACK_OF(CONF_VALUE) *, ___val,A1),
AROS_LDA(  int, ___indent,D0),
AROS_LDA(  int, ___ml,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,X509V3_EXT_print,
AROS_LDA(  BIO *, ___out,A0),
AROS_LDA(  X509_EXTENSION *, ___ext,A1),
AROS_LDA(  unsigned long, ___flag,D0),
AROS_LDA(  int, ___indent,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,X509V3_extensions_print,
AROS_LDA(  BIO *, ___out,A0),
AROS_LDA(  const char *, ___title,A1),
AROS_LDA(  const STACK_OF(X509_EXTENSION) *, ___exts,A2),
AROS_LDA(  unsigned long, ___flag,D0),
AROS_LDA(  int, ___indent,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509_check_purpose,
AROS_LDA(  X509 *, ___x,A0),
AROS_LDA(  int, ___id,D0),
AROS_LDA(  int, ___ca,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,X509_supported_extension,
AROS_LDA(  X509_EXTENSION *, ___ex,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_PURPOSE_set,
AROS_LDA(  int *, ___p,A0),
AROS_LDA(  int, ___purpose,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_check_issued,
AROS_LDA(  X509 *, ___issuer,A0),
AROS_LDA(  X509 *, ___subject,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(int ,X509_PURPOSE_get_count,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_PURPOSE * ,X509_PURPOSE_get0,
AROS_LDA(  int, ___idx,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,X509_PURPOSE_get_by_sname,
AROS_LDA(  const char *, ___sname,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,X509_PURPOSE_get_by_id,
AROS_LDA(  int, ___id,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(int ,X509_PURPOSE_add,
AROS_LDA(  int, ___id,D0),
AROS_LDA(  int, ___trust,D1),
AROS_LDA(  int, ___flags,D2),
AROS_LDA(  APTR,___ck,A0),
AROS_LDA(  const char *, ___name,A1),
AROS_LDA(  const char *, ___sname,A2),
AROS_LDA(  void *, ___arg,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(char * ,X509_PURPOSE_get0_name,
AROS_LDA(  const X509_PURPOSE *, ___xp,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(char * ,X509_PURPOSE_get0_sname,
AROS_LDA(  const X509_PURPOSE *, ___xp,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,X509_PURPOSE_get_trust,
AROS_LDA(  const X509_PURPOSE *, ___xp,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(void ,X509_PURPOSE_cleanup,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,X509_PURPOSE_get_id,
AROS_LDA(  const X509_PURPOSE *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(STACK_OF(OPENSSL_STRING) * ,X509_get1_email,
AROS_LDA(  X509 *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(STACK_OF(OPENSSL_STRING) * ,X509_REQ_get1_email,
AROS_LDA(  X509_REQ *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,X509_email_free,
AROS_LDA(  STACK_OF(OPENSSL_STRING) *, ___sk,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(int ,ERR_load_X509V3_strings,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const char * ,AES_options,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,AES_set_encrypt_key,
AROS_LDA(  const unsigned char *, ___userKey,A0),
AROS_LDA(  const int, ___bits,D0),
AROS_LDA(  AES_KEY *, ___key,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,AES_set_decrypt_key,
AROS_LDA(  const unsigned char *, ___userKey,A0),
AROS_LDA(  const int, ___bits,D0),
AROS_LDA(  AES_KEY *, ___key,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,AES_encrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  const AES_KEY *, ___key,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,AES_decrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  const AES_KEY *, ___key,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void ,AES_ecb_encrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  const AES_KEY *, ___key,A2),
AROS_LDA(  const int, ___enc,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(void ,AES_cbc_encrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  const unsigned long, ___length,D0),
AROS_LDA(  const AES_KEY *, ___key,A2),
AROS_LDA(  unsigned char *, ___ivec,A3),
AROS_LDA(  const int, ___enc,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(void ,AES_cfb128_encrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  const unsigned long, ___length,D0),
AROS_LDA(  const AES_KEY *, ___key,A2),
AROS_LDA(  unsigned char *, ___ivec,A3),
AROS_LDA(  int *, ___num,D1),
AROS_LDA(  const int, ___enc,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(void ,AES_cfb1_encrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  const unsigned long, ___length,D0),
AROS_LDA(  const AES_KEY *, ___key,A2),
AROS_LDA(  unsigned char *, ___ivec,A3),
AROS_LDA(  int *, ___num,D1),
AROS_LDA(  const int, ___enc,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(void ,AES_cfb8_encrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  const unsigned long, ___length,D0),
AROS_LDA(  const AES_KEY *, ___key,A2),
AROS_LDA(  unsigned char *, ___ivec,A3),
AROS_LDA(  int *, ___num,D1),
AROS_LDA(  const int, ___enc,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(void ,AES_ofb128_encrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  const unsigned long, ___length,D0),
AROS_LDA(  const AES_KEY *, ___key,A2),
AROS_LDA(  unsigned char *, ___ivec,A3),
AROS_LDA(  int *, ___num,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,BF_set_key,
AROS_LDA(  BF_KEY *, ___key,A0),
AROS_LDA(  int, ___len,D0),
AROS_LDA(  const unsigned char *, ___data,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,BF_encrypt,
AROS_LDA(  BF_LONG *, ___data,A0),
AROS_LDA(  const BF_KEY *, ___key,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,BF_decrypt,
AROS_LDA(  BF_LONG *, ___data,A0),
AROS_LDA(  const BF_KEY *, ___key,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void ,BF_ecb_encrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  const BF_KEY *, ___key,A2),
AROS_LDA(  int, ___enc,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(void ,BF_cbc_encrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  long, ___length,D0),
AROS_LDA(  const BF_KEY *, ___schedule,A2),
AROS_LDA(  unsigned char *, ___ivec,A3),
AROS_LDA(  int, ___enc,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(void ,BF_cfb64_encrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  long, ___length,D0),
AROS_LDA(  const BF_KEY *, ___schedule,A2),
AROS_LDA(  unsigned char *, ___ivec,A3),
AROS_LDA(  int *, ___num,D1),
AROS_LDA(  int, ___enc,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(void ,BF_ofb64_encrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  long, ___length,D0),
AROS_LDA(  const BF_KEY *, ___schedule,A2),
AROS_LDA(  unsigned char *, ___ivec,A3),
AROS_LDA(  int *, ___num,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const char * ,BF_options,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,CAST_set_key,
AROS_LDA(  CAST_KEY *, ___key,A0),
AROS_LDA(  int, ___len,D0),
AROS_LDA(  const unsigned char *, ___data,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void ,CAST_ecb_encrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  CAST_KEY *, ___key,A2),
AROS_LDA(  int, ___enc,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,CAST_encrypt,
AROS_LDA(  CAST_LONG *, ___data,A0),
AROS_LDA(  CAST_KEY *, ___key,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,CAST_decrypt,
AROS_LDA(  CAST_LONG *, ___data,A0),
AROS_LDA(  CAST_KEY *, ___key,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(void ,CAST_cbc_encrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  long, ___length,D0),
AROS_LDA(  CAST_KEY *, ___ks,A2),
AROS_LDA(  unsigned char *, ___iv,A3),
AROS_LDA(  int, ___enc,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(void ,CAST_cfb64_encrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  long, ___length,D0),
AROS_LDA(  CAST_KEY *, ___schedule,A2),
AROS_LDA(  unsigned char *, ___ivec,A3),
AROS_LDA(  int *, ___num,D1),
AROS_LDA(  int, ___enc,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(void ,CAST_ofb64_encrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  long, ___length,D0),
AROS_LDA(  CAST_KEY *, ___schedule,A2),
AROS_LDA(  unsigned char *, ___ivec,A3),
AROS_LDA(  int *, ___num,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(int * ,_shadow_DES_check_key,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const char * ,DES_options,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(void ,DES_ecb3_encrypt,
AROS_LDA(  const_DES_cblock *, ___input,A0),
AROS_LDA(  DES_cblock *, ___output,A1),
AROS_LDA(  DES_key_schedule *, ___ks1,A2),
AROS_LDA(  DES_key_schedule *, ___ks2,A3),
AROS_LDA(  DES_key_schedule *, ___ks3,D0),
AROS_LDA(  int, ___enc,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(DES_LONG ,DES_cbc_cksum,
AROS_LDA(  const unsigned char *, ___input,A0),
AROS_LDA(  DES_cblock *, ___output,A1),
AROS_LDA(  long, ___length,D0),
AROS_LDA(  DES_key_schedule *, ___schedule,A2),
AROS_LDA(  const_DES_cblock *, ___ivec,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(void ,DES_cbc_encrypt,
AROS_LDA(  const unsigned char *, ___input,A0),
AROS_LDA(  unsigned char *, ___output,A1),
AROS_LDA(  long, ___length,D0),
AROS_LDA(  DES_key_schedule *, ___schedule,A2),
AROS_LDA(  DES_cblock *, ___ivec,A3),
AROS_LDA(  int, ___enc,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(void ,DES_ncbc_encrypt,
AROS_LDA(  const unsigned char *, ___input,A0),
AROS_LDA(  unsigned char *, ___output,A1),
AROS_LDA(  long, ___length,D0),
AROS_LDA(  DES_key_schedule *, ___schedule,A2),
AROS_LDA(  DES_cblock *, ___ivec,A3),
AROS_LDA(  int, ___enc,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD8(void ,DES_xcbc_encrypt,
AROS_LDA(  const unsigned char *, ___input,A0),
AROS_LDA(  unsigned char *, ___output,A1),
AROS_LDA(  long, ___length,D0),
AROS_LDA(  DES_key_schedule *, ___schedule,A2),
AROS_LDA(  DES_cblock *, ___ivec,A3),
AROS_LDA(  const_DES_cblock *, ___inw,D1),
AROS_LDA(  const_DES_cblock *, ___outw,D2),
AROS_LDA(  int, ___enc,D3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(void ,DES_cfb_encrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  int, ___numbits,D0),
AROS_LDA(  long, ___length,D1),
AROS_LDA(  DES_key_schedule *, ___schedule,A2),
AROS_LDA(  DES_cblock *, ___ivec,A3),
AROS_LDA(  int, ___enc,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void ,DES_ecb_encrypt,
AROS_LDA(  const_DES_cblock *, ___input,A0),
AROS_LDA(  DES_cblock *, ___output,A1),
AROS_LDA(  DES_key_schedule *, ___ks,A2),
AROS_LDA(  int, ___enc,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,DES_encrypt1,
AROS_LDA(  DES_LONG *, ___data,A0),
AROS_LDA(  DES_key_schedule *, ___ks,A1),
AROS_LDA(  int, ___enc,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,DES_encrypt2,
AROS_LDA(  DES_LONG *, ___data,A0),
AROS_LDA(  DES_key_schedule *, ___ks,A1),
AROS_LDA(  int, ___enc,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void ,DES_encrypt3,
AROS_LDA(  DES_LONG *, ___data,A0),
AROS_LDA(  DES_key_schedule *, ___ks1,A1),
AROS_LDA(  DES_key_schedule *, ___ks2,A2),
AROS_LDA(  DES_key_schedule *, ___ks3,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void ,DES_decrypt3,
AROS_LDA(  DES_LONG *, ___data,A0),
AROS_LDA(  DES_key_schedule *, ___ks1,A1),
AROS_LDA(  DES_key_schedule *, ___ks2,A2),
AROS_LDA(  DES_key_schedule *, ___ks3,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD8(void ,DES_ede3_cbc_encrypt,
AROS_LDA(  const unsigned char *, ___input,A0),
AROS_LDA(  unsigned char *, ___output,A1),
AROS_LDA(  long, ___length,D0),
AROS_LDA(  DES_key_schedule *, ___ks1,A2),
AROS_LDA(  DES_key_schedule *, ___ks2,A3),
AROS_LDA(  DES_key_schedule *, ___ks3,D1),
AROS_LDA(  DES_cblock *, ___ivec,D2),
AROS_LDA(  int, ___enc,D3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD9(void ,DES_ede3_cfb64_encrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  long, ___length,D0),
AROS_LDA(  DES_key_schedule *, ___ks1,A2),
AROS_LDA(  DES_key_schedule *, ___ks2,A3),
AROS_LDA(  DES_key_schedule *, ___ks3,D1),
AROS_LDA(  DES_cblock *, ___ivec,D2),
AROS_LDA(  int *, ___num,D3),
AROS_LDA(  int, ___enc,D4),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD9(void ,DES_ede3_cfb_encrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  int, ___numbits,D0),
AROS_LDA(  long, ___length,D1),
AROS_LDA(  DES_key_schedule *, ___ks1,A2),
AROS_LDA(  DES_key_schedule *, ___ks2,A3),
AROS_LDA(  DES_key_schedule *, ___ks3,D2),
AROS_LDA(  DES_cblock *, ___ivec,D3),
AROS_LDA(  int, ___enc,D4),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD8(void ,DES_ede3_ofb64_encrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  long, ___length,D0),
AROS_LDA(  DES_key_schedule *, ___ks1,A2),
AROS_LDA(  DES_key_schedule *, ___ks2,A3),
AROS_LDA(  DES_key_schedule *, ___ks3,D1),
AROS_LDA(  DES_cblock *, ___ivec,D2),
AROS_LDA(  int *, ___num,D3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(char * ,DES_fcrypt,
AROS_LDA(  const char *, ___buf,A0),
AROS_LDA(  const char *, ___salt,A1),
AROS_LDA(  char *, ___ret,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(char * ,DES_crypt,
AROS_LDA(  const char *, ___buf,A0),
AROS_LDA(  const char *, ___salt,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(void ,DES_ofb_encrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  int, ___numbits,D0),
AROS_LDA(  long, ___length,D1),
AROS_LDA(  DES_key_schedule *, ___schedule,A2),
AROS_LDA(  DES_cblock *, ___ivec,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(void ,DES_pcbc_encrypt,
AROS_LDA(  const unsigned char *, ___input,A0),
AROS_LDA(  unsigned char *, ___output,A1),
AROS_LDA(  long, ___length,D0),
AROS_LDA(  DES_key_schedule *, ___schedule,A2),
AROS_LDA(  DES_cblock *, ___ivec,A3),
AROS_LDA(  int, ___enc,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(DES_LONG ,DES_quad_cksum,
AROS_LDA(  const unsigned char *, ___input,A0),
AROS_LDA(  DES_cblock *, ___output,A1),
AROS_LDA(  long, ___length,D0),
AROS_LDA(  int, ___out_count,D1),
AROS_LDA(  DES_cblock *, ___seed,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,DES_random_key,
AROS_LDA(  DES_cblock *, ___ret,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,DES_set_odd_parity,
AROS_LDA(  DES_cblock *, ___key,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,DES_check_key_parity,
AROS_LDA(  const_DES_cblock *, ___key,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,DES_is_weak_key,
AROS_LDA(  const_DES_cblock *, ___key,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,DES_set_key,
AROS_LDA(  const_DES_cblock *, ___key,A0),
AROS_LDA(  DES_key_schedule *, ___schedule,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,DES_key_sched,
AROS_LDA(  const_DES_cblock *, ___key,A0),
AROS_LDA(  DES_key_schedule *, ___schedule,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,DES_set_key_checked,
AROS_LDA(  const_DES_cblock *, ___key,A0),
AROS_LDA(  DES_key_schedule *, ___schedule,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,DES_set_key_unchecked,
AROS_LDA(  const_DES_cblock *, ___key,A0),
AROS_LDA(  DES_key_schedule *, ___schedule,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,DES_string_to_key,
AROS_LDA(  const char *, ___str,A0),
AROS_LDA(  DES_cblock *, ___key,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,DES_string_to_2keys,
AROS_LDA(  const char *, ___str,A0),
AROS_LDA(  DES_cblock *, ___key1,A1),
AROS_LDA(  DES_cblock *, ___key2,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(void ,DES_cfb64_encrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  long, ___length,D0),
AROS_LDA(  DES_key_schedule *, ___schedule,A2),
AROS_LDA(  DES_cblock *, ___ivec,A3),
AROS_LDA(  int *, ___num,D1),
AROS_LDA(  int, ___enc,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(void ,DES_ofb64_encrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  long, ___length,D0),
AROS_LDA(  DES_key_schedule *, ___schedule,A2),
AROS_LDA(  DES_cblock *, ___ivec,A3),
AROS_LDA(  int *, ___num,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const DH_METHOD * ,DH_OpenSSL,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,DH_set_default_method,
AROS_LDA(  const DH_METHOD *, ___meth,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const DH_METHOD * ,DH_get_default_method,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,DH_set_method,
AROS_LDA(  DH *, ___dh,A0),
AROS_LDA(  const DH_METHOD *, ___meth,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(DH * ,DH_new_method,
AROS_LDA(  ENGINE *, ___engine,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(DH * ,DH_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,DH_free,
AROS_LDA(  DH *, ___dh,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,DH_up_ref,
AROS_LDA(  DH *, ___dh,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,DH_size,
AROS_LDA(  const DH *, ___dh,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,DH_set_ex_data,
AROS_LDA(  DH *, ___d,A0),
AROS_LDA(  int, ___idx,D0),
AROS_LDA(  void *, ___arg,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void * ,DH_get_ex_data,
AROS_LDA(  DH *, ___d,A0),
AROS_LDA(  int, ___idx,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(DH * ,DH_generate_parameters,
AROS_LDA(  int, ___prime_len,D0),
AROS_LDA(  int, ___generator,D1),
AROS_LDA(  APTR,___callback,A0),
AROS_LDA(  void *, ___cb_arg,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,DH_check,
AROS_LDA(  const DH *, ___dh,A0),
AROS_LDA(  int *, ___codes,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,DH_generate_key,
AROS_LDA(  DH *, ___dh,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,DH_compute_key,
AROS_LDA(  unsigned char *, ___key,A0),
AROS_LDA(  const BIGNUM *, ___pub_key,A1),
AROS_LDA(  DH *, ___dh,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(DH * ,d2i_DHparams,
AROS_LDA(  DH **, ___a,A0),
AROS_LDA(  const unsigned char **, ___pp,A1),
AROS_LDA(  long, ___length,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_DHparams,
AROS_LDA(  const DH *, ___a,A0),
AROS_LDA(  unsigned char **, ___pp,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,DHparams_print,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  const DH *, ___x,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(int ,ERR_load_DH_strings,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(DSA_SIG * ,DSA_SIG_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,DSA_SIG_free,
AROS_LDA(  DSA_SIG *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_DSA_SIG,
AROS_LDA(  const DSA_SIG *, ___a,A0),
AROS_LDA(  unsigned char **, ___pp,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(DSA_SIG * ,d2i_DSA_SIG,
AROS_LDA(  DSA_SIG **, ___v,A0),
AROS_LDA(  const unsigned char **, ___pp,A1),
AROS_LDA(  long, ___length,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(DSA_SIG * ,DSA_do_sign,
AROS_LDA(  const unsigned char *, ___dgst,A0),
AROS_LDA(  int, ___dlen,D0),
AROS_LDA(  DSA *, ___dsa,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,DSA_do_verify,
AROS_LDA(  const unsigned char *, ___dgst,A0),
AROS_LDA(  int, ___dgst_len,D0),
AROS_LDA(  DSA_SIG *, ___sig,A1),
AROS_LDA(  DSA *, ___dsa,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const DSA_METHOD * ,DSA_OpenSSL,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,DSA_set_default_method,
AROS_LDA(  const DSA_METHOD *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const DSA_METHOD * ,DSA_get_default_method,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,DSA_set_method,
AROS_LDA(  DSA *, ___dsa,A0),
AROS_LDA(  const DSA_METHOD *, ___a,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(DSA * ,DSA_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(DSA * ,DSA_new_method,
AROS_LDA(  ENGINE *, ___engine,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,DSA_free,
AROS_LDA(  DSA *, ___r,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,DSA_up_ref,
AROS_LDA(  DSA *, ___r,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,DSA_size,
AROS_LDA(  const DSA *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,DSA_sign_setup,
AROS_LDA(  DSA *, ___dsa,A0),
AROS_LDA(  BN_CTX *, ___ctx_in,A1),
AROS_LDA(  BIGNUM **, ___kinvp,A2),
AROS_LDA(  BIGNUM **, ___rp,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int ,DSA_sign,
AROS_LDA(  int, ___type,D0),
AROS_LDA(  const unsigned char *, ___dgst,A0),
AROS_LDA(  int, ___dlen,D1),
AROS_LDA(  unsigned char *, ___sig,A1),
AROS_LDA(  unsigned int *, ___siglen,A2),
AROS_LDA(  DSA *, ___dsa,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int ,DSA_verify,
AROS_LDA(  int, ___type,D0),
AROS_LDA(  const unsigned char *, ___dgst,A0),
AROS_LDA(  int, ___dgst_len,D1),
AROS_LDA(  const unsigned char *, ___sigbuf,A1),
AROS_LDA(  int, ___siglen,D2),
AROS_LDA(  DSA *, ___dsa,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,DSA_set_ex_data,
AROS_LDA(  DSA *, ___d,A0),
AROS_LDA(  int, ___idx,D0),
AROS_LDA(  void *, ___arg,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void * ,DSA_get_ex_data,
AROS_LDA(  DSA *, ___d,A0),
AROS_LDA(  int, ___idx,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(DSA * ,d2i_DSAPublicKey,
AROS_LDA(  DSA **, ___a,A0),
AROS_LDA(  const unsigned char **, ___pp,A1),
AROS_LDA(  long, ___length,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(DSA * ,d2i_DSAPrivateKey,
AROS_LDA(  DSA **, ___a,A0),
AROS_LDA(  const unsigned char **, ___pp,A1),
AROS_LDA(  long, ___length,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(DSA * ,d2i_DSAparams,
AROS_LDA(  DSA **, ___a,A0),
AROS_LDA(  const unsigned char **, ___pp,A1),
AROS_LDA(  long, ___length,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(DSA * ,DSA_generate_parameters,
AROS_LDA(  int, ___bits,D0),
AROS_LDA(  unsigned char *, ___seed,A0),
AROS_LDA(  int, ___seed_len,D1),
AROS_LDA(  int *, ___counter_ret,A1),
AROS_LDA(  unsigned long *, ___h_ret,A2),
AROS_LDA(  APTR,___callback,A3),
AROS_LDA(  void *, ___cb_arg,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,DSA_generate_key,
AROS_LDA(  DSA *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_DSAPublicKey,
AROS_LDA(  const DSA *, ___a,A0),
AROS_LDA(  unsigned char **, ___pp,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_DSAPrivateKey,
AROS_LDA(  const DSA *, ___a,A0),
AROS_LDA(  unsigned char **, ___pp,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_DSAparams,
AROS_LDA(  const DSA *, ___a,A0),
AROS_LDA(  unsigned char **, ___pp,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,DSAparams_print,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  const DSA *, ___x,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,DSA_print,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  const DSA *, ___x,A1),
AROS_LDA(  int, ___off,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(DH * ,DSA_dup_DH,
AROS_LDA(  const DSA *, ___r,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(int ,ERR_load_DSA_strings,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const char * ,IDEA_options,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,IDEA_ecb_encrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  IDEA_KEY_SCHEDULE *, ___ks,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,IDEA_set_encrypt_key,
AROS_LDA(  const unsigned char *, ___key,A0),
AROS_LDA(  IDEA_KEY_SCHEDULE *, ___ks,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,IDEA_set_decrypt_key,
AROS_LDA(  IDEA_KEY_SCHEDULE *, ___ek,A0),
AROS_LDA(  IDEA_KEY_SCHEDULE *, ___dk,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(void ,IDEA_cbc_encrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  long, ___length,D0),
AROS_LDA(  IDEA_KEY_SCHEDULE *, ___ks,A2),
AROS_LDA(  unsigned char *, ___iv,A3),
AROS_LDA(  int, ___enc,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(void ,IDEA_cfb64_encrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  long, ___length,D0),
AROS_LDA(  IDEA_KEY_SCHEDULE *, ___ks,A2),
AROS_LDA(  unsigned char *, ___iv,A3),
AROS_LDA(  int *, ___num,D1),
AROS_LDA(  int, ___enc,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(void ,IDEA_ofb64_encrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  long, ___length,D0),
AROS_LDA(  IDEA_KEY_SCHEDULE *, ___ks,A2),
AROS_LDA(  unsigned char *, ___iv,A3),
AROS_LDA(  int *, ___num,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,IDEA_encrypt,
AROS_LDA(  unsigned long *, ___in,A0),
AROS_LDA(  IDEA_KEY_SCHEDULE *, ___ks,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const char * ,MD2_options,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,MD2_Init,
AROS_LDA(  MD2_CTX *, ___c,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,MD2_Update,
AROS_LDA(  MD2_CTX *, ___c,A0),
AROS_LDA(  const unsigned char *, ___data,A1),
AROS_LDA(  unsigned long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,MD2_Final,
AROS_LDA(  unsigned char *, ___md,A0),
AROS_LDA(  MD2_CTX *, ___c,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(unsigned char * ,MD2,
AROS_LDA(  const unsigned char *, ___d,A0),
AROS_LDA(  unsigned long, ___n,D0),
AROS_LDA(  unsigned char *, ___md,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,MD4_Init,
AROS_LDA(  MD4_CTX *, ___c,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,MD4_Update,
AROS_LDA(  MD4_CTX *, ___c,A0),
AROS_LDA(  const void *, ___data,A1),
AROS_LDA(  unsigned long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,MD4_Final,
AROS_LDA(  unsigned char *, ___md,A0),
AROS_LDA(  MD4_CTX *, ___c,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(unsigned char * ,MD4,
AROS_LDA(  const unsigned char *, ___d,A0),
AROS_LDA(  unsigned long, ___n,D0),
AROS_LDA(  unsigned char *, ___md,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,MD4_Transform,
AROS_LDA(  MD4_CTX *, ___c,A0),
AROS_LDA(  const unsigned char *, ___b,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,MD5_Init,
AROS_LDA(  MD5_CTX *, ___c,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,MD5_Update,
AROS_LDA(  MD5_CTX *, ___c,A0),
AROS_LDA(  const void *, ___data,A1),
AROS_LDA(  unsigned long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,MD5_Final,
AROS_LDA(  unsigned char *, ___md,A0),
AROS_LDA(  MD5_CTX *, ___c,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(unsigned char * ,MD5,
AROS_LDA(  const unsigned char *, ___d,A0),
AROS_LDA(  unsigned long, ___n,D0),
AROS_LDA(  unsigned char *, ___md,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,MD5_Transform,
AROS_LDA(  MD5_CTX *, ___c,A0),
AROS_LDA(  const unsigned char *, ___b,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,MDC2_Init,
AROS_LDA(  MDC2_CTX *, ___c,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,MDC2_Update,
AROS_LDA(  MDC2_CTX *, ___c,A0),
AROS_LDA(  const unsigned char *, ___data,A1),
AROS_LDA(  unsigned long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,MDC2_Final,
AROS_LDA(  unsigned char *, ___md,A0),
AROS_LDA(  MDC2_CTX *, ___c,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(unsigned char * ,MDC2,
AROS_LDA(  const unsigned char *, ___d,A0),
AROS_LDA(  unsigned long, ___n,D0),
AROS_LDA(  unsigned char *, ___md,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void ,RC2_set_key,
AROS_LDA(  RC2_KEY *, ___key,A0),
AROS_LDA(  int, ___len,D0),
AROS_LDA(  const unsigned char *, ___data,A1),
AROS_LDA(  int, ___bits,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void ,RC2_ecb_encrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  RC2_KEY *, ___key,A2),
AROS_LDA(  int, ___enc,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,RC2_encrypt,
AROS_LDA(  unsigned long *, ___data,A0),
AROS_LDA(  RC2_KEY *, ___key,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,RC2_decrypt,
AROS_LDA(  unsigned long *, ___data,A0),
AROS_LDA(  RC2_KEY *, ___key,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(void ,RC2_cbc_encrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  long, ___length,D0),
AROS_LDA(  RC2_KEY *, ___ks,A2),
AROS_LDA(  unsigned char *, ___iv,A3),
AROS_LDA(  int, ___enc,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(void ,RC2_cfb64_encrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  long, ___length,D0),
AROS_LDA(  RC2_KEY *, ___schedule,A2),
AROS_LDA(  unsigned char *, ___ivec,A3),
AROS_LDA(  int *, ___num,D1),
AROS_LDA(  int, ___enc,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(void ,RC2_ofb64_encrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  long, ___length,D0),
AROS_LDA(  RC2_KEY *, ___schedule,A2),
AROS_LDA(  unsigned char *, ___ivec,A3),
AROS_LDA(  int *, ___num,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const char * ,RC4_options,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,RC4_set_key,
AROS_LDA(  RC4_KEY *, ___key,A0),
AROS_LDA(  int, ___len,D0),
AROS_LDA(  const unsigned char *, ___data,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void ,RC4,
AROS_LDA(  RC4_KEY *, ___key,A0),
AROS_LDA(  unsigned long, ___len,D0),
AROS_LDA(  const unsigned char *, ___indata,A1),
AROS_LDA(  unsigned char *, ___outdata,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void ,RC5_32_set_key,
AROS_LDA(  RC5_32_KEY *, ___key,A0),
AROS_LDA(  int, ___len,D0),
AROS_LDA(  const unsigned char *, ___data,A1),
AROS_LDA(  int, ___rounds,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void ,RC5_32_ecb_encrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  RC5_32_KEY *, ___key,A2),
AROS_LDA(  int, ___enc,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,RC5_32_encrypt,
AROS_LDA(  unsigned long *, ___data,A0),
AROS_LDA(  RC5_32_KEY *, ___key,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,RC5_32_decrypt,
AROS_LDA(  unsigned long *, ___data,A0),
AROS_LDA(  RC5_32_KEY *, ___key,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(void ,RC5_32_cbc_encrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  long, ___length,D0),
AROS_LDA(  RC5_32_KEY *, ___ks,A2),
AROS_LDA(  unsigned char *, ___iv,A3),
AROS_LDA(  int, ___enc,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(void ,RC5_32_cfb64_encrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  long, ___length,D0),
AROS_LDA(  RC5_32_KEY *, ___schedule,A2),
AROS_LDA(  unsigned char *, ___ivec,A3),
AROS_LDA(  int *, ___num,D1),
AROS_LDA(  int, ___enc,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(void ,RC5_32_ofb64_encrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  long, ___length,D0),
AROS_LDA(  RC5_32_KEY *, ___schedule,A2),
AROS_LDA(  unsigned char *, ___ivec,A3),
AROS_LDA(  int *, ___num,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,RIPEMD160_Init,
AROS_LDA(  RIPEMD160_CTX *, ___c,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,RIPEMD160_Update,
AROS_LDA(  RIPEMD160_CTX *, ___c,A0),
AROS_LDA(  const void *, ___data,A1),
AROS_LDA(  unsigned long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,RIPEMD160_Final,
AROS_LDA(  unsigned char *, ___md,A0),
AROS_LDA(  RIPEMD160_CTX *, ___c,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(unsigned char * ,RIPEMD160,
AROS_LDA(  const unsigned char *, ___d,A0),
AROS_LDA(  unsigned long, ___n,D0),
AROS_LDA(  unsigned char *, ___md,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,RIPEMD160_Transform,
AROS_LDA(  RIPEMD160_CTX *, ___c,A0),
AROS_LDA(  const unsigned char *, ___b,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(RSA * ,RSA_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(RSA * ,RSA_new_method,
AROS_LDA(  ENGINE *, ___engine,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,RSA_size,
AROS_LDA(  const RSA *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(RSA * ,RSA_generate_key,
AROS_LDA(  int, ___bits,D0),
AROS_LDA(  unsigned long, ___e,D1),
AROS_LDA(  APTR,___callback,A0),
AROS_LDA(  void *, ___cb_arg,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,RSA_check_key,
AROS_LDA(  const RSA *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,RSA_public_encrypt,
AROS_LDA(  int, ___flen,D0),
AROS_LDA(  const unsigned char *, ___from,A0),
AROS_LDA(  unsigned char *, ___to,A1),
AROS_LDA(  RSA *, ___rsa,A2),
AROS_LDA(  int, ___padding,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,RSA_private_encrypt,
AROS_LDA(  int, ___flen,D0),
AROS_LDA(  const unsigned char *, ___from,A0),
AROS_LDA(  unsigned char *, ___to,A1),
AROS_LDA(  RSA *, ___rsa,A2),
AROS_LDA(  int, ___padding,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,RSA_public_decrypt,
AROS_LDA(  int, ___flen,D0),
AROS_LDA(  const unsigned char *, ___from,A0),
AROS_LDA(  unsigned char *, ___to,A1),
AROS_LDA(  RSA *, ___rsa,A2),
AROS_LDA(  int, ___padding,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,RSA_private_decrypt,
AROS_LDA(  int, ___flen,D0),
AROS_LDA(  const unsigned char *, ___from,A0),
AROS_LDA(  unsigned char *, ___to,A1),
AROS_LDA(  RSA *, ___rsa,A2),
AROS_LDA(  int, ___padding,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,RSA_free,
AROS_LDA(  RSA *, ___r,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,RSA_up_ref,
AROS_LDA(  RSA *, ___r,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,RSA_flags,
AROS_LDA(  const RSA *, ___r,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,RSA_set_default_method,
AROS_LDA(  const RSA_METHOD *, ___meth,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const RSA_METHOD * ,RSA_get_default_method,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const RSA_METHOD * ,RSA_get_method,
AROS_LDA(  const RSA *, ___rsa,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,RSA_set_method,
AROS_LDA(  RSA *, ___rsa,A0),
AROS_LDA(  const RSA_METHOD *, ___meth,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const RSA_METHOD * ,RSA_null_method,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(RSA * ,d2i_RSAPublicKey,
AROS_LDA(  RSA **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_RSAPublicKey,
AROS_LDA(  const RSA *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,RSAPublicKey_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(RSA * ,d2i_RSAPrivateKey,
AROS_LDA(  RSA **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_RSAPrivateKey,
AROS_LDA(  const RSA *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,RSAPrivateKey_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,RSA_print,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  const RSA *, ___r,A1),
AROS_LDA(  int, ___offset,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int ,RSA_sign,
AROS_LDA(  int, ___type,D0),
AROS_LDA(  const unsigned char *, ___m,A0),
AROS_LDA(  unsigned int, ___m_length,D1),
AROS_LDA(  unsigned char *, ___sigret,A1),
AROS_LDA(  unsigned int *, ___siglen,A2),
AROS_LDA(  RSA *, ___rsa,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int ,RSA_verify,
AROS_LDA(  int, ___type,D0),
AROS_LDA(  const unsigned char *, ___m,A0),
AROS_LDA(  unsigned int, ___m_length,D1),
AROS_LDA(  unsigned char *, ___sigbuf,A1),
AROS_LDA(  unsigned int, ___siglen,D2),
AROS_LDA(  RSA *, ___rsa,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int ,RSA_sign_ASN1_OCTET_STRING,
AROS_LDA(  int, ___type,D0),
AROS_LDA(  const unsigned char *, ___m,A0),
AROS_LDA(  unsigned int, ___m_length,D1),
AROS_LDA(  unsigned char *, ___sigret,A1),
AROS_LDA(  unsigned int *, ___siglen,A2),
AROS_LDA(  RSA *, ___rsa,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int ,RSA_verify_ASN1_OCTET_STRING,
AROS_LDA(  int, ___type,D0),
AROS_LDA(  const unsigned char *, ___m,A0),
AROS_LDA(  unsigned int, ___m_length,D1),
AROS_LDA(  unsigned char *, ___sigbuf,A1),
AROS_LDA(  unsigned int, ___siglen,D2),
AROS_LDA(  RSA *, ___rsa,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,RSA_blinding_on,
AROS_LDA(  RSA *, ___rsa,A0),
AROS_LDA(  BN_CTX *, ___ctx,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,RSA_blinding_off,
AROS_LDA(  RSA *, ___rsa,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,RSA_padding_add_PKCS1_type_1,
AROS_LDA(  unsigned char *, ___to,A0),
AROS_LDA(  int, ___tlen,D0),
AROS_LDA(  const unsigned char *, ___f,A1),
AROS_LDA(  int, ___fl,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,RSA_padding_check_PKCS1_type_1,
AROS_LDA(  unsigned char *, ___to,A0),
AROS_LDA(  int, ___tlen,D0),
AROS_LDA(  const unsigned char *, ___f,A1),
AROS_LDA(  int, ___fl,D1),
AROS_LDA(  int, ___rsa_len,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,RSA_padding_add_PKCS1_type_2,
AROS_LDA(  unsigned char *, ___to,A0),
AROS_LDA(  int, ___tlen,D0),
AROS_LDA(  const unsigned char *, ___f,A1),
AROS_LDA(  int, ___fl,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,RSA_padding_check_PKCS1_type_2,
AROS_LDA(  unsigned char *, ___to,A0),
AROS_LDA(  int, ___tlen,D0),
AROS_LDA(  const unsigned char *, ___f,A1),
AROS_LDA(  int, ___fl,D1),
AROS_LDA(  int, ___rsa_len,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int ,RSA_padding_add_PKCS1_OAEP,
AROS_LDA(  unsigned char *, ___to,A0),
AROS_LDA(  int, ___tlen,D0),
AROS_LDA(  const unsigned char *, ___f,A1),
AROS_LDA(  int, ___fl,D1),
AROS_LDA(  const unsigned char *, ___p,A2),
AROS_LDA(  int, ___pl,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(int ,RSA_padding_check_PKCS1_OAEP,
AROS_LDA(  unsigned char *, ___to,A0),
AROS_LDA(  int, ___tlen,D0),
AROS_LDA(  const unsigned char *, ___f,A1),
AROS_LDA(  int, ___fl,D1),
AROS_LDA(  int, ___rsa_len,D2),
AROS_LDA(  const unsigned char *, ___p,A2),
AROS_LDA(  int, ___pl,D3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,RSA_padding_add_SSLv23,
AROS_LDA(  unsigned char *, ___to,A0),
AROS_LDA(  int, ___tlen,D0),
AROS_LDA(  const unsigned char *, ___f,A1),
AROS_LDA(  int, ___fl,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,RSA_padding_check_SSLv23,
AROS_LDA(  unsigned char *, ___to,A0),
AROS_LDA(  int, ___tlen,D0),
AROS_LDA(  const unsigned char *, ___f,A1),
AROS_LDA(  int, ___fl,D1),
AROS_LDA(  int, ___rsa_len,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,RSA_padding_add_none,
AROS_LDA(  unsigned char *, ___to,A0),
AROS_LDA(  int, ___tlen,D0),
AROS_LDA(  const unsigned char *, ___f,A1),
AROS_LDA(  int, ___fl,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,RSA_padding_check_none,
AROS_LDA(  unsigned char *, ___to,A0),
AROS_LDA(  int, ___tlen,D0),
AROS_LDA(  const unsigned char *, ___f,A1),
AROS_LDA(  int, ___fl,D1),
AROS_LDA(  int, ___rsa_len,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,RSA_set_ex_data,
AROS_LDA(  RSA *, ___r,A0),
AROS_LDA(  int, ___idx,D0),
AROS_LDA(  void *, ___arg,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void * ,RSA_get_ex_data,
AROS_LDA(  const RSA *, ___r,A0),
AROS_LDA(  int, ___idx,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(RSA * ,RSAPublicKey_dup,
AROS_LDA(  RSA *, ___rsa,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(RSA * ,RSAPrivateKey_dup,
AROS_LDA(  RSA *, ___rsa,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(int ,ERR_load_RSA_strings,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SHA1_Init,
AROS_LDA(  SHA_CTX *, ___c,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,SHA1_Update,
AROS_LDA(  SHA_CTX *, ___c,A0),
AROS_LDA(  const void *, ___data,A1),
AROS_LDA(  unsigned long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SHA1_Final,
AROS_LDA(  unsigned char *, ___md,A0),
AROS_LDA(  SHA_CTX *, ___c,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(unsigned char * ,SHA1,
AROS_LDA(  const unsigned char *, ___d,A0),
AROS_LDA(  unsigned long, ___n,D0),
AROS_LDA(  unsigned char *, ___md,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SHA1_Transform,
AROS_LDA(  SHA_CTX *, ___c,A0),
AROS_LDA(  const unsigned char *, ___data,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,HMAC_CTX_set_flags,
AROS_LDA(  HMAC_CTX *, ___ctx,A0),
AROS_LDA(  unsigned long, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,X509_check_ca,
AROS_LDA(  X509 *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(PROXY_POLICY * ,PROXY_POLICY_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,PROXY_POLICY_free,
AROS_LDA(  PROXY_POLICY *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(PROXY_POLICY * ,d2i_PROXY_POLICY,
AROS_LDA(  PROXY_POLICY **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_PROXY_POLICY,
AROS_LDA(  PROXY_POLICY *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,PROXY_POLICY_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(PROXY_CERT_INFO_EXTENSION * ,PROXY_CERT_INFO_EXTENSION_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,PROXY_CERT_INFO_EXTENSION_free,
AROS_LDA(  PROXY_CERT_INFO_EXTENSION *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(PROXY_CERT_INFO_EXTENSION * ,d2i_PROXY_CERT_INFO_EXTENSION,
AROS_LDA(  PROXY_CERT_INFO_EXTENSION **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_PROXY_CERT_INFO_EXTENSION,
AROS_LDA(  PROXY_CERT_INFO_EXTENSION *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,PROXY_CERT_INFO_EXTENSION_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(int ,FIPS_mode,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int ,BN_mod_exp_mont_consttime,
AROS_LDA(  BIGNUM *, ___rr,A0),
AROS_LDA(  const BIGNUM *, ___a,A1),
AROS_LDA(  const BIGNUM *, ___p,A2),
AROS_LDA(  const BIGNUM *, ___m,A3),
AROS_LDA(  BN_CTX *, ___ctx,D0),
AROS_LDA(  BN_MONT_CTX *, ___in_mont,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(BN_MONT_CTX * ,BN_MONT_CTX_set_locked,
AROS_LDA(  BN_MONT_CTX **, ___pmont,A0),
AROS_LDA(  CRYPTO_RWLOCK *, ___lock,A1),
AROS_LDA(  const BIGNUM *, ___mod,A2),
AROS_LDA(  BN_CTX *, ___ctx,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,PKCS1_MGF1,
AROS_LDA(  unsigned char *, ___mask,A0),
AROS_LDA(  long, ___len,D0),
AROS_LDA(  const unsigned char *, ___seed,A1),
AROS_LDA(  long, ___seedlen,D1),
AROS_LDA(  const EVP_MD *, ___dgst,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,RSA_padding_add_X931,
AROS_LDA(  unsigned char *, ___to,A0),
AROS_LDA(  int, ___tlen,D0),
AROS_LDA(  const unsigned char *, ___from,A1),
AROS_LDA(  int, ___flen,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,RSA_padding_check_X931,
AROS_LDA(  unsigned char *, ___to,A0),
AROS_LDA(  int, ___tlen,D0),
AROS_LDA(  const unsigned char *, ___from,A1),
AROS_LDA(  int, ___flen,D1),
AROS_LDA(  int, ___num,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,RSA_X931_hash_id,
AROS_LDA(  int, ___nid,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,RSA_verify_PKCS1_PSS,
AROS_LDA(  RSA *, ___rsa,A0),
AROS_LDA(  const unsigned char *, ___mHash,A1),
AROS_LDA(  const EVP_MD *, ___Hash,A2),
AROS_LDA(  const unsigned char *, ___EM,A3),
AROS_LDA(  int, ___sLen,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,RSA_padding_add_PKCS1_PSS,
AROS_LDA(  RSA *, ___rsa,A0),
AROS_LDA(  unsigned char *, ___EM,A1),
AROS_LDA(  const unsigned char *, ___mHash,A2),
AROS_LDA(  const EVP_MD *, ___Hash,A3),
AROS_LDA(  int, ___sLen,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_MD * ,EVP_sha224,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_MD * ,EVP_sha256,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_MD * ,EVP_sha384,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_MD * ,EVP_sha512,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,BN_GF2m_add,
AROS_LDA(  BIGNUM *, ___r,A0),
AROS_LDA(  const BIGNUM *, ___a,A1),
AROS_LDA(  const BIGNUM *, ___b,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,BN_GF2m_arr2poly,
AROS_LDA(  const int *, ___p,A0),
AROS_LDA(  BIGNUM *, ___a,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,BN_GF2m_mod,
AROS_LDA(  BIGNUM *, ___r,A0),
AROS_LDA(  const BIGNUM *, ___a,A1),
AROS_LDA(  const BIGNUM *, ___p,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,BN_GF2m_mod_mul,
AROS_LDA(  BIGNUM *, ___r,A0),
AROS_LDA(  const BIGNUM *, ___a,A1),
AROS_LDA(  const BIGNUM *, ___b,A2),
AROS_LDA(  const BIGNUM *, ___p,A3),
AROS_LDA(  BN_CTX *, ___ctx,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,BN_GF2m_mod_sqr,
AROS_LDA(  BIGNUM *, ___r,A0),
AROS_LDA(  const BIGNUM *, ___a,A1),
AROS_LDA(  const BIGNUM *, ___p,A2),
AROS_LDA(  BN_CTX *, ___ctx,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,BN_GF2m_mod_inv,
AROS_LDA(  BIGNUM *, ___r,A0),
AROS_LDA(  const BIGNUM *, ___b,A1),
AROS_LDA(  const BIGNUM *, ___p,A2),
AROS_LDA(  BN_CTX *, ___ctx,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,BN_GF2m_mod_div,
AROS_LDA(  BIGNUM *, ___r,A0),
AROS_LDA(  const BIGNUM *, ___a,A1),
AROS_LDA(  const BIGNUM *, ___b,A2),
AROS_LDA(  const BIGNUM *, ___p,A3),
AROS_LDA(  BN_CTX *, ___ctx,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,BN_GF2m_mod_exp,
AROS_LDA(  BIGNUM *, ___r,A0),
AROS_LDA(  const BIGNUM *, ___a,A1),
AROS_LDA(  const BIGNUM *, ___b,A2),
AROS_LDA(  const BIGNUM *, ___p,A3),
AROS_LDA(  BN_CTX *, ___ctx,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,BN_GF2m_mod_sqrt,
AROS_LDA(  BIGNUM *, ___r,A0),
AROS_LDA(  const BIGNUM *, ___a,A1),
AROS_LDA(  const BIGNUM *, ___p,A2),
AROS_LDA(  BN_CTX *, ___ctx,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,BN_GF2m_mod_solve_quad,
AROS_LDA(  BIGNUM *, ___r,A0),
AROS_LDA(  const BIGNUM *, ___a,A1),
AROS_LDA(  const BIGNUM *, ___p,A2),
AROS_LDA(  BN_CTX *, ___ctx,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int ,BN_generate_prime_ex,
AROS_LDA(  BIGNUM *, ___ret,A0),
AROS_LDA(  int, ___bits,D0),
AROS_LDA(  int, ___safe,D1),
AROS_LDA(  const BIGNUM *, ___add,A1),
AROS_LDA(  const BIGNUM *, ___rem,A2),
AROS_LDA(  BN_GENCB *, ___cb,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,BN_is_prime_ex,
AROS_LDA(  const BIGNUM *, ___p,A0),
AROS_LDA(  int, ___nchecks,D0),
AROS_LDA(  BN_CTX *, ___ctx,A1),
AROS_LDA(  BN_GENCB *, ___cb,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,BN_set_negative,
AROS_LDA(  BIGNUM *, ___b,A0),
AROS_LDA(  int, ___n,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EC_GROUP_get_degree,
AROS_LDA(  const EC_GROUP *, ___group,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EC_METHOD * ,EC_GF2m_simple_method,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,EC_GROUP_set_curve_GF2m,
AROS_LDA(  EC_GROUP *, ___group,A0),
AROS_LDA(  const BIGNUM *, ___p,A1),
AROS_LDA(  const BIGNUM *, ___a,A2),
AROS_LDA(  const BIGNUM *, ___b,A3),
AROS_LDA(  BN_CTX *, ___ctx,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,EC_GROUP_get_curve_GF2m,
AROS_LDA(  const EC_GROUP *, ___group,A0),
AROS_LDA(  BIGNUM *, ___p,A1),
AROS_LDA(  BIGNUM *, ___a,A2),
AROS_LDA(  BIGNUM *, ___b,A3),
AROS_LDA(  BN_CTX *, ___ctx,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,EC_POINT_set_affine_coordinates_GF2m,
AROS_LDA(  const EC_GROUP *, ___group,A0),
AROS_LDA(  EC_POINT *, ___point,A1),
AROS_LDA(  const BIGNUM *, ___x,A2),
AROS_LDA(  const BIGNUM *, ___y,A3),
AROS_LDA(  BN_CTX *, ___ctx,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,EC_POINT_get_affine_coordinates_GF2m,
AROS_LDA(  const EC_GROUP *, ___group,A0),
AROS_LDA(  const EC_POINT *, ___point,A1),
AROS_LDA(  BIGNUM *, ___x,A2),
AROS_LDA(  BIGNUM *, ___y,A3),
AROS_LDA(  BN_CTX *, ___ctx,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(size_t ,EC_get_builtin_curves,
AROS_LDA(  EC_builtin_curve *, ___r,A0),
AROS_LDA(  size_t, ___nitems,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(EC_GROUP * ,EC_GROUP_new_by_curve_name,
AROS_LDA(  int, ___nid,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EC_GROUP_check,
AROS_LDA(  const EC_GROUP *, ___group,A0),
AROS_LDA(  BN_CTX *, ___ctx,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(int ,DSA_generate_parameters_ex,
AROS_LDA(  DSA *, ___dsa,A0),
AROS_LDA(  int, ___bits,D0),
AROS_LDA(  unsigned char *, ___seed,A1),
AROS_LDA(  int, ___seed_len,D1),
AROS_LDA(  int *, ___counter_ret,A2),
AROS_LDA(  unsigned long *, ___h_ret,A3),
AROS_LDA(  BN_GENCB *, ___cb,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(EC_KEY * ,EC_KEY_new_by_curve_name,
AROS_LDA(  int, ___nid,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EC_KEY_generate_key,
AROS_LDA(  EC_KEY *, ___key,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,EC_KEY_free,
AROS_LDA(  EC_KEY *, ___key,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,ECDSA_SIG_free,
AROS_LDA(  ECDSA_SIG *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(ECDSA_SIG * ,ECDSA_do_sign,
AROS_LDA(  const unsigned char *, ___dgst,A0),
AROS_LDA(  int, ___dlen,D0),
AROS_LDA(  EC_KEY *, ___eckey,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,ECDSA_do_verify,
AROS_LDA(  const unsigned char *, ___dgst,A0),
AROS_LDA(  int, ___dgst_len,D0),
AROS_LDA(  const ECDSA_SIG *, ___sig,A1),
AROS_LDA(  EC_KEY *, ___eckey,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(EC_KEY * ,EC_KEY_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EC_KEY_set_group,
AROS_LDA(  EC_KEY *, ___eckey,A0),
AROS_LDA(  const EC_GROUP *, ___group,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const EC_GROUP * ,EC_KEY_get0_group,
AROS_LDA(  const EC_KEY *, ___key,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EC_KEY_check_key,
AROS_LDA(  const EC_KEY *, ___eckey,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,ECDSA_size,
AROS_LDA(  const EC_KEY *, ___eckey,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int ,ECDSA_sign,
AROS_LDA(  int, ___type,D0),
AROS_LDA(  const unsigned char *, ___dgst,A0),
AROS_LDA(  int, ___dgstlen,D1),
AROS_LDA(  unsigned char *, ___sig,A1),
AROS_LDA(  unsigned int *, ___siglen,A2),
AROS_LDA(  EC_KEY *, ___eckey,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int ,ECDSA_verify,
AROS_LDA(  int, ___type,D0),
AROS_LDA(  const unsigned char *, ___dgst,A0),
AROS_LDA(  int, ___dgstlen,D1),
AROS_LDA(  const unsigned char *, ___sig,A1),
AROS_LDA(  int, ___siglen,D2),
AROS_LDA(  EC_KEY *, ___eckey,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(ECDSA_SIG * ,d2i_ECDSA_SIG,
AROS_LDA(  ECDSA_SIG **, ___v,A0),
AROS_LDA(  const unsigned char **, ___pp,A1),
AROS_LDA(  long, ___len,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_ECDSA_SIG,
AROS_LDA(  const ECDSA_SIG *, ___a,A0),
AROS_LDA(  unsigned char **, ___pp,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,DH_generate_parameters_ex,
AROS_LDA(  DH *, ___ret,A0),
AROS_LDA(  int, ___prime_len,D0),
AROS_LDA(  int, ___generator,D1),
AROS_LDA(  BN_GENCB *, ___cb,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EC_METHOD_get_field_type,
AROS_LDA(  const EC_METHOD *, ___meth,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const EC_POINT * ,EC_KEY_get0_public_key,
AROS_LDA(  const EC_KEY *, ___eckey,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,ECDH_compute_key,
AROS_LDA(  void *, ___out,A0),
AROS_LDA(  size_t, ___outlen,D0),
AROS_LDA(  const EC_POINT *, ___pub_key,A1),
AROS_LDA(  const EC_KEY *, ___eckey,A2),
AROS_LDA(  APTR,___KDF,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const BIGNUM * ,EC_KEY_get0_private_key,
AROS_LDA(  const EC_KEY *, ___eckey,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(ENGINE * ,ENGINE_get_first,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char * ,ENGINE_get_id,
AROS_LDA(  const ENGINE *, ___e,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char * ,ENGINE_get_name,
AROS_LDA(  const ENGINE *, ___e,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ENGINE * ,ENGINE_get_next,
AROS_LDA(  ENGINE *, ___e,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,ENGINE_free,
AROS_LDA(  ENGINE *, ___e,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(ENGINE * ,ENGINE_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ENGINE_set_id,
AROS_LDA(  ENGINE *, ___e,A0),
AROS_LDA(  const char *, ___id,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ENGINE_set_name,
AROS_LDA(  ENGINE *, ___e,A0),
AROS_LDA(  const char *, ___name,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,ENGINE_add,
AROS_LDA(  ENGINE *, ___e,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,ENGINE_remove,
AROS_LDA(  ENGINE *, ___e,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(void ,ENGINE_load_builtin_engines,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(void ,ENGINE_register_all_ciphers,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EVP_CIPHER_nid,
AROS_LDA(  const EVP_CIPHER *, ___cipher,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EVP_MD_type,
AROS_LDA(  const EVP_MD *, ___md,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(void ,ENGINE_register_all_digests,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,BIO_test_flags,
AROS_LDA(  const BIO *, ___b,A0),
AROS_LDA(  int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(STACK_OF(SSL_COMP) * ,SSL_COMP_get_compression_methods,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,RSA_generate_key_ex,
AROS_LDA(  RSA *, ___rsa,A0),
AROS_LDA(  int, ___bits,D0),
AROS_LDA(  BIGNUM *, ___e,A1),
AROS_LDA(  BN_GENCB *, ___cb,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,X509_VERIFY_PARAM_free,
AROS_LDA(  X509_VERIFY_PARAM *, ___param,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_STORE_set1_param,
AROS_LDA(  X509_STORE *, ___ctx,A0),
AROS_LDA(  X509_VERIFY_PARAM *, ___pm,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(ASN1_TYPE * ,ASN1_generate_nconf,
AROS_LDA(  const char *, ___str,A0),
AROS_LDA(  CONF *, ___nconf,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(EC_GROUP * ,PEM_read_bio_ECPKParameters,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  EC_GROUP **, ___x,A1),
AROS_LDA(  pem_password_cb *, ___cb,A2),
AROS_LDA(  void *, ___u,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(EC_KEY * ,EC_KEY_dup,
AROS_LDA(  const EC_KEY *, ___ec_key,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,BIO_set_callback,
AROS_LDA(  BIO *, ___b,A0),
AROS_LDA(  BIO_callback_fn, ___callback,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,BIO_set_callback_arg,
AROS_LDA(  BIO *, ___b,A0),
AROS_LDA(  char *, ___arg,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,EVP_MD_CTX_set_flags,
AROS_LDA(  EVP_MD_CTX *, ___ctx,A0),
AROS_LDA(  int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,BIO_set_flags,
AROS_LDA(  BIO *, ___b,A0),
AROS_LDA(  int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,EVP_CIPHER_CTX_set_flags,
AROS_LDA(  EVP_CIPHER_CTX *, ___ctx,A0),
AROS_LDA(  int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EVP_CIPHER_iv_length,
AROS_LDA(  const EVP_CIPHER *, ___cipher,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_REQ_check_private_key,
AROS_LDA(  X509_REQ *, ___x509,A0),
AROS_LDA(  EVP_PKEY *, ___pkey,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(EC_KEY * ,PEM_read_bio_EC_PUBKEY,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  EC_KEY **, ___x,A1),
AROS_LDA(  pem_password_cb *, ___cb,A2),
AROS_LDA(  void *, ___u,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(EC_KEY * ,PEM_read_bio_ECPrivateKey,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  EC_KEY **, ___x,A1),
AROS_LDA(  pem_password_cb *, ___cb,A2),
AROS_LDA(  void *, ___u,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,PEM_write_bio_EC_PUBKEY,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  EC_KEY *, ___x,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(EC_KEY * ,d2i_EC_PUBKEY_bio,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  EC_KEY **, ___eckey,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,EC_KEY_set_asn1_flag,
AROS_LDA(  EC_KEY *, ___key,A0),
AROS_LDA(  int, ___flag,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,EC_KEY_set_conv_form,
AROS_LDA(  EC_KEY *, ___key,A0),
AROS_LDA(  point_conversion_form_t, ___cform,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,EC_KEY_print,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  const EC_KEY *, ___x,A1),
AROS_LDA(  int, ___off,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(EC_KEY * ,d2i_ECPrivateKey_bio,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  EC_KEY **, ___eckey,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_EC_PUBKEY_bio,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  EC_KEY *, ___eckey,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(int ,PEM_write_bio_ECPrivateKey,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  EC_KEY *, ___x,A1),
AROS_LDA(  const EVP_CIPHER *, ___enc,A2),
AROS_LDA(  unsigned char *, ___kstr,A3),
AROS_LDA(  int, ___klen,D0),
AROS_LDA(  pem_password_cb *, ___cb,D1),
AROS_LDA(  void *, ___u,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,PEM_write_bio_ECPKParameters,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  const EC_GROUP *, ___x,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_ECPrivateKey_bio,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  EC_KEY *, ___eckey,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_ECPKParameters,
AROS_LDA(  const EC_GROUP *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,EC_GROUP_set_asn1_flag,
AROS_LDA(  EC_GROUP *, ___group,A0),
AROS_LDA(  int, ___flag,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,EC_GROUP_set_point_conversion_form,
AROS_LDA(  EC_GROUP *, ___group,A0),
AROS_LDA(  point_conversion_form_t, ___form,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(point_conversion_form_t ,EC_GROUP_get_point_conversion_form,
AROS_LDA(  const EC_GROUP *, ___group,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,ECPKParameters_print,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  const EC_GROUP *, ___x,A1),
AROS_LDA(  int, ___off,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(size_t ,EC_GROUP_set_seed,
AROS_LDA(  EC_GROUP *, ___group,A0),
AROS_LDA(  const unsigned char *, ___p,A1),
AROS_LDA(  size_t, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(EC_GROUP * ,d2i_ECPKParameters,
AROS_LDA(  EC_GROUP **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(BIGNUM * ,EC_POINT_point2bn,
AROS_LDA(  const EC_GROUP *, ___group,A0),
AROS_LDA(  const EC_POINT *, ___point,A1),
AROS_LDA(  point_conversion_form_t, ___form,D0),
AROS_LDA(  BIGNUM *, ___ret,A2),
AROS_LDA(  BN_CTX *, ___ctx,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(STACK_OF(OPENSSL_STRING) * ,X509_get1_ocsp,
AROS_LDA(  X509 *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(const char * ,SSL_get_servername,
AROS_LDA(  const SSL *, ___s,A0),
AROS_LDA(  const int, ___type,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(SSL_CTX * ,SSL_set_SSL_CTX,
AROS_LDA(  SSL *, ___ssl,A0),
AROS_LDA(  SSL_CTX *, ___ctx,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_CTX_set_cookie_generate_cb,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  APTR,___app_gen_cookie_cb,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_CTX_set_cookie_verify_cb,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  APTR,___app_verify_cookie_cb,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_CTX_set_info_callback,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  APTR,___cb,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(BIO * ,BIO_new_dgram,
AROS_LDA(  int, ___fd,D0),
AROS_LDA(  int, ___close_flag,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_get_servername_type,
AROS_LDA(  const SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const COMP_METHOD * ,SSL_get_current_compression,
AROS_LDA(  const SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const COMP_METHOD * ,SSL_get_current_expansion,
AROS_LDA(  const SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char * ,SSL_COMP_get_name,
AROS_LDA(  const COMP_METHOD *, ___comp,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ENGINE * ,ENGINE_by_id,
AROS_LDA(  const char *, ___id,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_CTX_set_client_cert_engine,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  ENGINE *, ___e,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(unsigned char * ,SHA256,
AROS_LDA(  const unsigned char *, ___d,A0),
AROS_LDA(  size_t, ___n,D0),
AROS_LDA(  unsigned char *, ___md,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(unsigned char * ,SHA512,
AROS_LDA(  const unsigned char *, ___d,A0),
AROS_LDA(  size_t, ___n,D0),
AROS_LDA(  unsigned char *, ___md,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(void ,AES_ige_encrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  const unsigned long, ___length,D0),
AROS_LDA(  const AES_KEY *, ___key,A2),
AROS_LDA(  unsigned char *, ___ivec,A3),
AROS_LDA(  const int, ___enc,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EC_KEY_precompute_mult,
AROS_LDA(  EC_KEY *, ___key,A0),
AROS_LDA(  BN_CTX *, ___ctx,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(EVP_PKEY * ,ENGINE_load_private_key,
AROS_LDA(  ENGINE *, ___e,A0),
AROS_LDA(  const char *, ___key_id,A1),
AROS_LDA(  UI_METHOD *, ___ui_method,A2),
AROS_LDA(  void *, ___callback_data,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(EVP_PKEY * ,ENGINE_load_public_key,
AROS_LDA(  ENGINE *, ___e,A0),
AROS_LDA(  const char *, ___key_id,A1),
AROS_LDA(  UI_METHOD *, ___ui_method,A2),
AROS_LDA(  void *, ___callback_data,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int ,ENGINE_ctrl_cmd,
AROS_LDA(  ENGINE *, ___e,A0),
AROS_LDA(  const char *, ___cmd_name,A1),
AROS_LDA(  long, ___i,A2),
AROS_LDA(  void *, ___p,A3),
AROS_LDA(  APTR, ___f,D0),
AROS_LDA(  int, ___cmd_optional,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ENGINE_set_default,
AROS_LDA(  ENGINE *, ___e,A0),
AROS_LDA(  unsigned int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,ENGINE_ctrl,
AROS_LDA(  ENGINE *, ___e,A0),
AROS_LDA(  int, ___cmd,D0),
AROS_LDA(  long, ___i,D1),
AROS_LDA(  void *, ___p,A1),
AROS_LDA(  APTR, ___f,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(int ,ENGINE_register_all_complete,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,ENGINE_ctrl_cmd_string,
AROS_LDA(  ENGINE *, ___e,A0),
AROS_LDA(  const char *, ___cmd_name,A1),
AROS_LDA(  const char *, ___arg,A2),
AROS_LDA(  int, ___cmd_optional,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_VERIFY_PARAM_add0_policy,
AROS_LDA(  X509_VERIFY_PARAM *, ___param,A0),
AROS_LDA(  ASN1_OBJECT *, ___policy,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_VERIFY_PARAM_set_purpose,
AROS_LDA(  X509_VERIFY_PARAM *, ___param,A0),
AROS_LDA(  int, ___purpose,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_VERIFY_PARAM_set_flags,
AROS_LDA(  X509_VERIFY_PARAM *, ___param,A0),
AROS_LDA(  unsigned long, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(X509_VERIFY_PARAM * ,X509_VERIFY_PARAM_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,X509_POLICY_NODE_print,
AROS_LDA(  BIO *, ___out,A0),
AROS_LDA(  X509_POLICY_NODE *, ___node,A1),
AROS_LDA(  int, ___indent,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_POLICY_TREE * ,X509_STORE_CTX_get0_policy_tree,
AROS_LDA(  X509_STORE_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,X509_STORE_CTX_get_explicit_policy,
AROS_LDA(  X509_STORE_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(STACK_OF(X509_POLICY_NODE) * ,X509_policy_tree_get0_policies,
AROS_LDA(  const X509_POLICY_TREE *, ___tree,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(STACK_OF(X509_POLICY_NODE) * ,X509_policy_tree_get0_user_policies,
AROS_LDA(  const X509_POLICY_TREE *, ___tree,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(char * ,BIO_get_callback_arg,
AROS_LDA(  const BIO *, ___b,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,EVP_PKEY_add1_attr_by_NID,
AROS_LDA(  EVP_PKEY *, ___key,A0),
AROS_LDA(  int, ___nid,D0),
AROS_LDA(  int, ___type,D1),
AROS_LDA(  const unsigned char *, ___bytes,A1),
AROS_LDA(  int, ___len,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const RSA_METHOD * ,ENGINE_get_RSA,
AROS_LDA(  const ENGINE *, ___e,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const DSA_METHOD * ,ENGINE_get_DSA,
AROS_LDA(  const ENGINE *, ___e,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const DH_METHOD * ,ENGINE_get_DH,
AROS_LDA(  const ENGINE *, ___e,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const RAND_METHOD * ,ENGINE_get_RAND,
AROS_LDA(  const ENGINE *, ___e,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ENGINE_CIPHERS_PTR ,ENGINE_get_ciphers,
AROS_LDA(  const ENGINE *, ___e,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ENGINE_DIGESTS_PTR ,ENGINE_get_digests,
AROS_LDA(  const ENGINE *, ___e,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,ENGINE_init,
AROS_LDA(  ENGINE *, ___e,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,ENGINE_finish,
AROS_LDA(  ENGINE *, ___e,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(OCSP_REQ_CTX * ,OCSP_sendreq_new,
AROS_LDA(  BIO *, ___io,A0),
AROS_LDA(  const char *, ___path,A1),
AROS_LDA(  OCSP_REQUEST *, ___req,A2),
AROS_LDA(  int, ___maxline,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,OCSP_sendreq_nbio,
AROS_LDA(  OCSP_RESPONSE **, ___presp,A0),
AROS_LDA(  OCSP_REQ_CTX *, ___rctx,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,OCSP_REQ_CTX_free,
AROS_LDA(  OCSP_REQ_CTX *, ___rctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_CTX_use_psk_identity_hint,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  const char *, ___identity_hint,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_CTX_set_psk_client_callback,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  SSL_psk_client_cb_func, ___cb,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char * ,SSL_get_psk_identity_hint,
AROS_LDA(  const SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_set_psk_server_callback,
AROS_LDA(  SSL *, ___ssl,A0),
AROS_LDA(  SSL_psk_server_cb_func, ___cb,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_use_psk_identity_hint,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  const char *, ___identity_hint,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_set_psk_client_callback,
AROS_LDA(  SSL *, ___ssl,A0),
AROS_LDA(  SSL_psk_client_cb_func, ___cb,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_CTX_set_psk_server_callback,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  SSL_psk_server_cb_func, ___cb,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char * ,SSL_get_psk_identity,
AROS_LDA(  const SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,SSL_set_session_ticket_ext,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  void *, ___ext_data,A1),
AROS_LDA(  int, ___ext_len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,SSL_set_session_secret_cb,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  APTR,___tls_session_secret_cb,A1),
AROS_LDA(  void *, ___arg,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,SSL_set_session_ticket_ext_cb,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  tls_session_ticket_ext_cb_fn, ___cb,A1),
AROS_LDA(  void *, ___arg,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_set1_param,
AROS_LDA(  SSL *, ___ssl,A0),
AROS_LDA(  X509_VERIFY_PARAM *, ___vpm,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_CTX_set1_param,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  X509_VERIFY_PARAM *, ___vpm,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_renegotiate_abbreviated,
AROS_LDA(  SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_CTX_set_srp_client_pwd_callback,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  APTR,___cb,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(BIGNUM * ,SSL_get_srp_g,
AROS_LDA(  SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_CTX_set_srp_username_callback,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  APTR,___cb ,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(char * ,SSL_get_srp_userinfo,
AROS_LDA(  SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int ,SSL_set_srp_server_param,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  const BIGNUM *, ___N,A1),
AROS_LDA(  const BIGNUM *, ___g,A2),
AROS_LDA(  BIGNUM *, ___sa,A3),
AROS_LDA(  BIGNUM *, ___v,D0),
AROS_LDA(  char *, ___info,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,SSL_set_srp_server_param_pw,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  const char *, ___user,A1),
AROS_LDA(  const char *, ___pass,A2),
AROS_LDA(  const char *, ___grp,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(BIGNUM * ,SSL_get_srp_N,
AROS_LDA(  SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(char * ,SSL_get_srp_username,
AROS_LDA(  SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_CTX_set_srp_password,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  char *, ___password,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_CTX_set_srp_strength,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  int, ___strength,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_CTX_set_srp_verify_param_callback,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  APTR,___cb,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_CTX_set_srp_cb_arg,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  void *, ___arg,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_CTX_set_srp_username,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  char *, ___name,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_CTX_SRP_CTX_init,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SRP_Calc_A_param,
AROS_LDA(  SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_CTX_SRP_CTX_free,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_srp_server_param_with_username,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  int *, ___ad,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_SRP_CTX_free,
AROS_LDA(  SSL *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_set_debug,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  int, ___debug,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509 * ,SSL_SESSION_get0_peer,
AROS_LDA(  SSL_SESSION *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,SSL_SESSION_set1_id_context,
AROS_LDA(  SSL_SESSION *, ___s,A0),
AROS_LDA(  const unsigned char *, ___sid_ctx,A1),
AROS_LDA(  unsigned int, ___sid_ctx_len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(uint32_t ,SSL_CIPHER_get_id,
AROS_LDA(  const SSL_CIPHER *, ___c,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD8(int ,SSL_export_keying_material,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  size_t, ___olen,D0),
AROS_LDA(  const char *, ___label,A2),
AROS_LDA(  size_t, ___llen,D1),
AROS_LDA(  const unsigned char *, ___context,A3),
AROS_LDA(  size_t, ___contextlen,D2),
AROS_LDA(  int, ___use_context,D3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_set_tlsext_use_srtp,
AROS_LDA(  SSL *, ___ssl,A0),
AROS_LDA(  const char *, ___profiles,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,SSL_CTX_set_next_protos_advertised_cb,
AROS_LDA(  SSL_CTX *, ___s,A0),
AROS_LDA(  SSL_CTX_npn_advertised_cb_func, ___cb,A1),
AROS_LDA(  void *, ___arg,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,SSL_get0_next_proto_negotiated,
AROS_LDA(  const SSL *, ___s,A0),
AROS_LDA(  const unsigned char **, ___data,A1),
AROS_LDA(  unsigned *, ___len,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(SRTP_PROTECTION_PROFILE * ,SSL_get_selected_srtp_profile,
AROS_LDA(  SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_CTX_set_tlsext_use_srtp,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  const char *, ___profiles,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int ,SSL_select_next_proto,
AROS_LDA(  unsigned char **, ___out,A0),
AROS_LDA(  unsigned char *, ___outlen,A1),
AROS_LDA(  const unsigned char *, ___in,A2),
AROS_LDA(  unsigned int, ___inlen,D0),
AROS_LDA(  const unsigned char *, ___client,A3),
AROS_LDA(  unsigned int, ___client_len,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(STACK_OF(SRTP_PROTECTION_PROFILE) * ,SSL_get_srtp_profiles,
AROS_LDA(  SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,SSL_CTX_set_next_proto_select_cb,
AROS_LDA(  SSL_CTX *, ___s,A0),
AROS_LDA(  SSL_CTX_npn_select_cb_func, ___cb,A1),
AROS_LDA(  void *, ___arg,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(unsigned int ,SSL_SESSION_get_compress_id,
AROS_LDA(  const SSL_SESSION *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_SRP_CTX_init,
AROS_LDA(  SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(int ,ERR_load_ENGINE_strings,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ENGINE_set_DSA,
AROS_LDA(  ENGINE *, ___e,A0),
AROS_LDA(  const DSA_METHOD *, ___dsa_meth,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ENGINE_GEN_INT_FUNC_PTR ,ENGINE_get_finish_function,
AROS_LDA(  const ENGINE *, ___e,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(ENGINE * ,ENGINE_get_default_RSA,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ENGINE_set_DH,
AROS_LDA(  ENGINE *, ___e,A0),
AROS_LDA(  const DH_METHOD *, ___dh_meth,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ENGINE_GEN_INT_FUNC_PTR ,ENGINE_get_init_function,
AROS_LDA(  const ENGINE *, ___e,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ENGINE_set_init_function,
AROS_LDA(  ENGINE *, ___e,A0),
AROS_LDA(  ENGINE_GEN_INT_FUNC_PTR, ___init_f,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,ENGINE_set_default_DSA,
AROS_LDA(  ENGINE *, ___e,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(ENGINE * ,ENGINE_get_last,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ENGINE * ,ENGINE_get_prev,
AROS_LDA(  ENGINE *, ___e,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(ENGINE * ,ENGINE_get_default_DH,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ENGINE_set_finish_function,
AROS_LDA(  ENGINE *, ___e,A0),
AROS_LDA(  ENGINE_GEN_INT_FUNC_PTR, ___finish_f,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ENGINE_set_RSA,
AROS_LDA(  ENGINE *, ___e,A0),
AROS_LDA(  const RSA_METHOD *, ___rsa_meth,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,ENGINE_set_default_RAND,
AROS_LDA(  ENGINE *, ___e,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(ENGINE * ,ENGINE_get_default_DSA,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,ENGINE_set_default_RSA,
AROS_LDA(  ENGINE *, ___e,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(ENGINE * ,ENGINE_get_default_RAND,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ENGINE_set_RAND,
AROS_LDA(  ENGINE *, ___e,A0),
AROS_LDA(  const RAND_METHOD *, ___rand_meth,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,ENGINE_set_default_DH,
AROS_LDA(  ENGINE *, ___e,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ENGINE_CTRL_FUNC_PTR ,ENGINE_get_ctrl_function,
AROS_LDA(  const ENGINE *, ___e,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ENGINE_set_ctrl_function,
AROS_LDA(  ENGINE *, ___e,A0),
AROS_LDA(  ENGINE_CTRL_FUNC_PTR, ___ctrl_f,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,ENGINE_unregister_ciphers,
AROS_LDA(  ENGINE *, ___e,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,ENGINE_unregister_RSA,
AROS_LDA(  ENGINE *, ___e,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(void ,ENGINE_register_all_RAND,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ENGINE * ,ENGINE_get_digest_engine,
AROS_LDA(  int, ___nid,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,ENGINE_register_DH,
AROS_LDA(  ENGINE *, ___e,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,ENGINE_register_RAND,
AROS_LDA(  ENGINE *, ___e,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,ENGINE_register_ciphers,
AROS_LDA(  ENGINE *, ___e,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const ENGINE_CMD_DEFN * ,ENGINE_get_cmd_defns,
AROS_LDA(  const ENGINE *, ___e,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ENGINE_set_load_privkey_function,
AROS_LDA(  ENGINE *, ___e,A0),
AROS_LDA(  ENGINE_LOAD_KEY_PTR, ___loadpriv_f,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,ENGINE_set_default_digests,
AROS_LDA(  ENGINE *, ___e,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,ENGINE_register_RSA,
AROS_LDA(  ENGINE *, ___e,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,ENGINE_unregister_DSA,
AROS_LDA(  ENGINE *, ___e,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ENGINE_set_ciphers,
AROS_LDA(  ENGINE *, ___e,A0),
AROS_LDA(  ENGINE_CIPHERS_PTR, ___f,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,RAND_set_rand_engine,
AROS_LDA(  ENGINE *, ___engine,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(const EVP_MD * ,ENGINE_get_digest,
AROS_LDA(  ENGINE *, ___e,A0),
AROS_LDA(  int, ___nid,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(const EVP_CIPHER * ,ENGINE_get_cipher,
AROS_LDA(  ENGINE *, ___e,A0),
AROS_LDA(  int, ___nid,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ENGINE_cmd_is_executable,
AROS_LDA(  ENGINE *, ___e,A0),
AROS_LDA(  int, ___cmd,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,ENGINE_register_DSA,
AROS_LDA(  ENGINE *, ___e,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ENGINE_set_load_pubkey_function,
AROS_LDA(  ENGINE *, ___e,A0),
AROS_LDA(  ENGINE_LOAD_KEY_PTR, ___loadpub_f,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ENGINE_LOAD_KEY_PTR ,ENGINE_get_load_pubkey_function,
AROS_LDA(  const ENGINE *, ___e,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(void ,ENGINE_register_all_RSA,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,ENGINE_unregister_digests,
AROS_LDA(  ENGINE *, ___e,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void * ,ENGINE_get_ex_data,
AROS_LDA(  const ENGINE *, ___e,A0),
AROS_LDA(  int, ___idx,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ENGINE_set_cmd_defns,
AROS_LDA(  ENGINE *, ___e,A0),
AROS_LDA(  const ENGINE_CMD_DEFN *, ___defns,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,ENGINE_register_digests,
AROS_LDA(  ENGINE *, ___e,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(void ,ENGINE_register_all_DH,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,ENGINE_get_flags,
AROS_LDA(  const ENGINE *, ___e,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,ENGINE_unregister_DH,
AROS_LDA(  ENGINE *, ___e,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(void ,ENGINE_register_all_DSA,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ENGINE_set_digests,
AROS_LDA(  ENGINE *, ___e,A0),
AROS_LDA(  ENGINE_DIGESTS_PTR, ___f,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,ENGINE_register_complete,
AROS_LDA(  ENGINE *, ___e,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,ENGINE_set_ex_data,
AROS_LDA(  ENGINE *, ___e,A0),
AROS_LDA(  int, ___idx,D0),
AROS_LDA(  void *, ___arg,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ENGINE_set_destroy_function,
AROS_LDA(  ENGINE *, ___e,A0),
AROS_LDA(  ENGINE_GEN_INT_FUNC_PTR, ___destroy_f,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ENGINE * ,ENGINE_get_cipher_engine,
AROS_LDA(  int, ___nid,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,ENGINE_set_default_ciphers,
AROS_LDA(  ENGINE *, ___e,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,ENGINE_unregister_RAND,
AROS_LDA(  ENGINE *, ___e,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,ENGINE_set_table_flags,
AROS_LDA(  unsigned int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ENGINE_GEN_INT_FUNC_PTR ,ENGINE_get_destroy_function,
AROS_LDA(  const ENGINE *, ___e,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(unsigned int ,ENGINE_get_table_flags,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ENGINE_set_flags,
AROS_LDA(  ENGINE *, ___e,A0),
AROS_LDA(  int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ENGINE_LOAD_KEY_PTR ,ENGINE_get_load_privkey_function,
AROS_LDA(  const ENGINE *, ___e,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ENGINE_set_default_string,
AROS_LDA(  ENGINE *, ___e,A0),
AROS_LDA(  const char *, ___def_list,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(void ,ENGINE_add_conf_module,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,ENGINE_up_ref,
AROS_LDA(  ENGINE *, ___e,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EC_GROUP_get_trinomial_basis,
AROS_LDA(  const EC_GROUP *, ___eg,A0),
AROS_LDA(  unsigned int *, ___k,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,SHA512_Update,
AROS_LDA(  SHA512_CTX *, ___c,A0),
AROS_LDA(  const void *, ___data,A1),
AROS_LDA(  size_t, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_ECPrivateKey,
AROS_LDA(  EC_KEY *, ___key,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,BN_GF2m_mod_exp_arr,
AROS_LDA(  BIGNUM *, ___r,A0),
AROS_LDA(  const BIGNUM *, ___a,A1),
AROS_LDA(  const BIGNUM *, ___b,A2),
AROS_LDA(  const int *, ___p,A3),
AROS_LDA(  BN_CTX *, ___ctx,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,BN_GF2m_mod_mul_arr,
AROS_LDA(  BIGNUM *, ___r,A0),
AROS_LDA(  const BIGNUM *, ___a,A1),
AROS_LDA(  const BIGNUM *, ___b,A2),
AROS_LDA(  const int *, ___p,A3),
AROS_LDA(  BN_CTX *, ___ctx,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(EC_KEY * ,o2i_ECPublicKey,
AROS_LDA(  EC_KEY **, ___key,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(EC_KEY * ,EC_KEY_copy,
AROS_LDA(  EC_KEY *, ___dst,A0),
AROS_LDA(  const EC_KEY *, ___src,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EC_GROUP_check_discriminant,
AROS_LDA(  const EC_GROUP *, ___group,A0),
AROS_LDA(  BN_CTX *, ___ctx,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2o_ECPublicKey,
AROS_LDA(  const EC_KEY *, ___key,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(EC_GROUP * ,EC_GROUP_new_curve_GF2m,
AROS_LDA(  const BIGNUM *, ___p,A0),
AROS_LDA(  const BIGNUM *, ___a,A1),
AROS_LDA(  const BIGNUM *, ___b,A2),
AROS_LDA(  BN_CTX *, ___ctx,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(struct ec_key_st * ,EVP_PKEY_get1_EC_KEY,
AROS_LDA(  EVP_PKEY *, ___pkey,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(point_conversion_form_t ,EC_KEY_get_conv_form,
AROS_LDA(  const EC_KEY *, ___key,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(void * ,ENGINE_get_static_state,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(ECDSA_SIG * ,ECDSA_SIG_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(EC_POINT * ,EC_POINT_bn2point,
AROS_LDA(  const EC_GROUP *, ___g,A0),
AROS_LDA(  const BIGNUM *, ___b,A1),
AROS_LDA(  EC_POINT *, ___p,A2),
AROS_LDA(  BN_CTX *, ___ctx,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD8(int ,ECDSA_sign_ex,
AROS_LDA(  int, ___type,D0),
AROS_LDA(  const unsigned char *, ___dgst,A0),
AROS_LDA(  int, ___dgstlen,D1),
AROS_LDA(  unsigned char *, ___sig,A1),
AROS_LDA(  unsigned int *, ___siglen,A2),
AROS_LDA(  const BIGNUM *, ___kinv,A3),
AROS_LDA(  const BIGNUM *, ___rp,D2),
AROS_LDA(  EC_KEY *, ___eckey,D3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,EC_GROUP_get_pentanomial_basis,
AROS_LDA(  const EC_GROUP *, ___ecgroup,A0),
AROS_LDA(  unsigned int *, ___k1,A1),
AROS_LDA(  unsigned int *, ___k2,A2),
AROS_LDA(  unsigned int *, ___k3,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,ECDSA_sign_setup,
AROS_LDA(  EC_KEY *, ___eckey,A0),
AROS_LDA(  BN_CTX *, ___ctx,A1),
AROS_LDA(  BIGNUM **, ___kinv,A2),
AROS_LDA(  BIGNUM **, ___rp,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,BN_GF2m_mod_solve_quad_arr,
AROS_LDA(  BIGNUM *, ___r,A0),
AROS_LDA(  const BIGNUM *, ___a,A1),
AROS_LDA(  const int *, ___p,A2),
AROS_LDA(  BN_CTX *, ___ctx,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EC_KEY_up_ref,
AROS_LDA(  EC_KEY *, ___key,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(EC_KEY * ,d2i_EC_PUBKEY,
AROS_LDA(  EC_KEY **, ___a,A0),
AROS_LDA(  const unsigned char **, ___pp,A1),
AROS_LDA(  long, ___length,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EC_GROUP_have_precompute_mult,
AROS_LDA(  const EC_GROUP *, ___group,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,BN_GF2m_mod_arr,
AROS_LDA(  BIGNUM *, ___r,A0),
AROS_LDA(  const BIGNUM *, ___a,A1),
AROS_LDA(  const int *, ___p,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(EC_POINT * ,EC_POINT_dup,
AROS_LDA(  const EC_POINT *, ___src,A0),
AROS_LDA(  const EC_GROUP *, ___group,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EVP_PKEY_set1_EC_KEY,
AROS_LDA(  EVP_PKEY *, ___pkey,A0),
AROS_LDA(  struct ec_key_st *, ___key,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,BN_GF2m_mod_sqrt_arr,
AROS_LDA(  BIGNUM *, ___r,A0),
AROS_LDA(  const BIGNUM *, ___a,A1),
AROS_LDA(  const int *, ___p,A2),
AROS_LDA(  BN_CTX *, ___ctx,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EC_KEY_set_private_key,
AROS_LDA(  EC_KEY *, ___key,A0),
AROS_LDA(  const BIGNUM *, ___prv,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,BN_GF2m_poly2arr,
AROS_LDA(  const BIGNUM *, ___a,A0),
AROS_LDA(  int *, ___p,A1),
AROS_LDA(  int, ___max,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_ECParameters,
AROS_LDA(  EC_KEY *, ___key,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SHA256_Init,
AROS_LDA(  SHA256_CTX *, ___c,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(unsigned char * ,SHA224,
AROS_LDA(  const unsigned char *, ___d,A0),
AROS_LDA(  size_t, ___n,D0),
AROS_LDA(  unsigned char *, ___md,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(size_t ,EC_GROUP_get_seed_len,
AROS_LDA(  const EC_GROUP *, ___ecgroup,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_EC_PUBKEY,
AROS_LDA(  EC_KEY *, ___a,A0),
AROS_LDA(  unsigned char **, ___pp,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EC_METHOD * ,EC_GFp_nist_method,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,EC_GROUP_set_curve_name,
AROS_LDA(  EC_GROUP *, ___group,A0),
AROS_LDA(  int, ___nid,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,BN_GF2m_mod_sqr_arr,
AROS_LDA(  BIGNUM *, ___r,A0),
AROS_LDA(  const BIGNUM *, ___a,A1),
AROS_LDA(  const int *, ___p,A2),
AROS_LDA(  BN_CTX *, ___ctx,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const BIO_METHOD * ,BIO_s_datagram,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,SHA384_Update,
AROS_LDA(  SHA512_CTX *, ___c,A0),
AROS_LDA(  const void *, ___data,A1),
AROS_LDA(  size_t, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SHA224_Final,
AROS_LDA(  unsigned char *, ___md,A0),
AROS_LDA(  SHA256_CTX *, ___c,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,SHA224_Update,
AROS_LDA(  SHA256_CTX *, ___c,A0),
AROS_LDA(  const void *, ___data,A1),
AROS_LDA(  size_t, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(EC_KEY * ,d2i_ECPrivateKey,
AROS_LDA(  EC_KEY **, ___key,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SHA512_Final,
AROS_LDA(  unsigned char *, ___md,A0),
AROS_LDA(  SHA512_CTX *, ___c,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EC_GROUP_get_asn1_flag,
AROS_LDA(  const EC_GROUP *, ___group,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(unsigned char * ,EC_GROUP_get0_seed,
AROS_LDA(  const EC_GROUP *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,BN_GF2m_mod_div_arr,
AROS_LDA(  BIGNUM *, ___r,A0),
AROS_LDA(  const BIGNUM *, ___a,A1),
AROS_LDA(  const BIGNUM *, ___b,A2),
AROS_LDA(  const int *, ___p,A3),
AROS_LDA(  BN_CTX *, ___ctx,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(unsigned ,EC_KEY_get_enc_flags,
AROS_LDA(  const EC_KEY *, ___key,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,EC_POINT_set_compressed_coordinates_GF2m,
AROS_LDA(  const EC_GROUP *, ___group,A0),
AROS_LDA(  EC_POINT *, ___p,A1),
AROS_LDA(  const BIGNUM *, ___x,A2),
AROS_LDA(  int, ___y_bit,D0),
AROS_LDA(  BN_CTX *, ___ctx,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,EC_GROUP_cmp,
AROS_LDA(  const EC_GROUP *, ___a,A0),
AROS_LDA(  const EC_GROUP *, ___b,A1),
AROS_LDA(  BN_CTX *, ___ctx,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SHA224_Init,
AROS_LDA(  SHA256_CTX *, ___c,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SHA512_Init,
AROS_LDA(  SHA512_CTX *, ___c,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EC_GROUP_get_basis_type,
AROS_LDA(  const EC_GROUP *, ___group,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(EC_GROUP * ,EC_GROUP_dup,
AROS_LDA(  const EC_GROUP *, ___src,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SHA256_Transform,
AROS_LDA(  SHA256_CTX *, ___c,A0),
AROS_LDA(  const unsigned char *, ___data,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,EC_KEY_set_enc_flags,
AROS_LDA(  EC_KEY *, ___eckey,A0),
AROS_LDA(  unsigned int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(char * ,EC_POINT_point2hex,
AROS_LDA(  const EC_GROUP *, ___group,A0),
AROS_LDA(  const EC_POINT *, ___point,A1),
AROS_LDA(  point_conversion_form_t, ___form,D0),
AROS_LDA(  BN_CTX *, ___ctx,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(ECDSA_SIG * ,ECDSA_do_sign_ex,
AROS_LDA(  const unsigned char *, ___dgst,A0),
AROS_LDA(  int, ___dgstlen,D0),
AROS_LDA(  const BIGNUM *, ___kinv,A1),
AROS_LDA(  const BIGNUM *, ___rp,A2),
AROS_LDA(  EC_KEY *, ___eckey,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SHA512_Transform,
AROS_LDA(  SHA512_CTX *, ___c,A0),
AROS_LDA(  const unsigned char *, ___data,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EC_KEY_set_public_key,
AROS_LDA(  EC_KEY *, ___key,A0),
AROS_LDA(  const EC_POINT *, ___pub,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EC_GROUP_get_curve_name,
AROS_LDA(  const EC_GROUP *, ___group,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SHA256_Final,
AROS_LDA(  unsigned char *, ___md,A0),
AROS_LDA(  SHA256_CTX *, ___c,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(EC_KEY * ,d2i_ECParameters,
AROS_LDA(  EC_KEY **, ___key,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SHA384_Init,
AROS_LDA(  SHA512_CTX *, ___c,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SHA384_Final,
AROS_LDA(  unsigned char *, ___md,A0),
AROS_LDA(  SHA512_CTX *, ___c,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(unsigned char * ,SHA384,
AROS_LDA(  const unsigned char *, ___d,A0),
AROS_LDA(  size_t, ___n,D0),
AROS_LDA(  unsigned char *, ___md,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(EC_POINT * ,EC_POINT_hex2point,
AROS_LDA(  const EC_GROUP *, ___group,A0),
AROS_LDA(  const char *, ___c,A1),
AROS_LDA(  EC_POINT *, ___p,A2),
AROS_LDA(  BN_CTX *, ___ctx,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,SHA256_Update,
AROS_LDA(  SHA256_CTX *, ___c,A0),
AROS_LDA(  const void *, ___data,A1),
AROS_LDA(  size_t, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,BN_GF2m_mod_inv_arr,
AROS_LDA(  BIGNUM *, ___r,A0),
AROS_LDA(  const BIGNUM *, ___b,A1),
AROS_LDA(  const int *, ___p,A2),
AROS_LDA(  BN_CTX *, ___ctx,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,DH_check_pub_key,
AROS_LDA(  const DH *, ___dh,A0),
AROS_LDA(  const BIGNUM *, ___pub_key,A1),
AROS_LDA(  int *, ___codes,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(void ,Camellia_cbc_encrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  size_t, ___length,D0),
AROS_LDA(  const CAMELLIA_KEY *, ___key,A2),
AROS_LDA(  unsigned char *, ___ivec,A3),
AROS_LDA(  const int, ___enc,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(void ,Camellia_cfb128_encrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  size_t, ___length,D0),
AROS_LDA(  const CAMELLIA_KEY *, ___key,A2),
AROS_LDA(  unsigned char *, ___ivec,A3),
AROS_LDA(  int *, ___num,D1),
AROS_LDA(  const int, ___enc,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(void ,Camellia_cfb1_encrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  size_t, ___length,D0),
AROS_LDA(  const CAMELLIA_KEY *, ___key,A2),
AROS_LDA(  unsigned char *, ___ivec,A3),
AROS_LDA(  int *, ___num,D1),
AROS_LDA(  const int, ___enc,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(void ,Camellia_cfb8_encrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  size_t, ___length,D0),
AROS_LDA(  const CAMELLIA_KEY *, ___key,A2),
AROS_LDA(  unsigned char *, ___ivec,A3),
AROS_LDA(  int *, ___num,D1),
AROS_LDA(  const int, ___enc,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(void ,Camellia_ctr128_encrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  size_t, ___length,D0),
AROS_LDA(  const CAMELLIA_KEY *, ___key,A2),
AROS_LDA(  unsigned char *, ___ivec,A3),
AROS_LDA(  unsigned char *, ___ecount_buf,D1),
AROS_LDA(  unsigned int *, ___num,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,Camellia_decrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  const CAMELLIA_KEY *, ___key,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void ,Camellia_ecb_encrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  const CAMELLIA_KEY *, ___key,A2),
AROS_LDA(  const int, ___enc,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,Camellia_encrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  const CAMELLIA_KEY *, ___key,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(void ,Camellia_ofb128_encrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  size_t, ___length,D0),
AROS_LDA(  const CAMELLIA_KEY *, ___key,A2),
AROS_LDA(  unsigned char *, ___ivec,A3),
AROS_LDA(  int *, ___num,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,Camellia_set_key,
AROS_LDA(  const unsigned char *, ___userKey,A0),
AROS_LDA(  const int, ___bits,D0),
AROS_LDA(  CAMELLIA_KEY *, ___key,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_camellia_128_cbc,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_camellia_128_cfb128,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_camellia_128_cfb1,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_camellia_128_cfb8,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_camellia_128_ecb,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_camellia_128_ofb,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_camellia_192_cbc,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_camellia_192_cfb128,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_camellia_192_cfb1,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_camellia_192_cfb8,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_camellia_192_ecb,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_camellia_192_ofb,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_camellia_256_cbc,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_camellia_256_cfb128,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_camellia_256_cfb1,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_camellia_256_cfb8,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_camellia_256_ecb,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_camellia_256_ofb,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(void ,AES_bi_ige_encrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  size_t, ___length,D0),
AROS_LDA(  const AES_KEY *, ___key,A2),
AROS_LDA(  const AES_KEY *, ___key2,A3),
AROS_LDA(  const unsigned char *, ___ivec,D1),
AROS_LDA(  const int, ___enc,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,SEED_decrypt,
AROS_LDA(  const unsigned char *, ___s,A0),
AROS_LDA(  unsigned char *, ___d,A1),
AROS_LDA(  const SEED_KEY_SCHEDULE *, ___ks,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,SEED_encrypt,
AROS_LDA(  const unsigned char *, ___s,A0),
AROS_LDA(  unsigned char *, ___d,A1),
AROS_LDA(  const SEED_KEY_SCHEDULE *, ___ks,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(void ,SEED_cbc_encrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  size_t, ___len,D0),
AROS_LDA(  const SEED_KEY_SCHEDULE *, ___ks,A2),
AROS_LDA(  unsigned char *, ___ivec,A3),
AROS_LDA(  int, ___enc,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_seed_ofb,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(void ,SEED_cfb128_encrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  size_t, ___len,D0),
AROS_LDA(  const SEED_KEY_SCHEDULE *, ___ks,A2),
AROS_LDA(  unsigned char *, ___ivec,A3),
AROS_LDA(  int *, ___num,D1),
AROS_LDA(  int, ___enc,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(void ,SEED_ofb128_encrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  size_t, ___len,D0),
AROS_LDA(  const SEED_KEY_SCHEDULE *, ___ks,A2),
AROS_LDA(  unsigned char *, ___ivec,A3),
AROS_LDA(  int *, ___num,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_seed_cbc,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void ,SEED_ecb_encrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  const SEED_KEY_SCHEDULE *, ___ks,A2),
AROS_LDA(  int, ___enc,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_seed_ecb,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SEED_set_key,
AROS_LDA(  const unsigned char *, ___rawkey,A0),
AROS_LDA(  SEED_KEY_SCHEDULE *, ___ks,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_seed_cfb128,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,AES_unwrap_key,
AROS_LDA(  AES_KEY *, ___key,A0),
AROS_LDA(  const unsigned char *, ___iv,A1),
AROS_LDA(  unsigned char *, ___out,A2),
AROS_LDA(  const unsigned char *, ___in,A3),
AROS_LDA(  unsigned int, ___inlen,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,AES_wrap_key,
AROS_LDA(  AES_KEY *, ___key,A0),
AROS_LDA(  const unsigned char *, ___iv,A1),
AROS_LDA(  unsigned char *, ___out,A2),
AROS_LDA(  const unsigned char *, ___in,A3),
AROS_LDA(  unsigned int, ___inlen,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,CMS_ReceiptRequest_free,
AROS_LDA(  CMS_ReceiptRequest *, ___rr,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(CMS_CertificateChoices * ,CMS_add0_CertificateChoices,
AROS_LDA(  CMS_ContentInfo *, ___cms,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,CMS_unsigned_add1_attr_by_OBJ,
AROS_LDA(  CMS_SignerInfo *, ___si,A0),
AROS_LDA(  const ASN1_OBJECT *, ___obj,A1),
AROS_LDA(  int, ___type,D0),
AROS_LDA(  const void *, ___bytes,A2),
AROS_LDA(  int, ___len,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(int ,ERR_load_CMS_strings,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(CMS_ContentInfo * ,CMS_sign_receipt,
AROS_LDA(  CMS_SignerInfo *, ___si,A0),
AROS_LDA(  X509 *, ___signcert,A1),
AROS_LDA(  EVP_PKEY *, ___pkey,A2),
AROS_LDA(  STACK_OF(X509) *, ___certs,A3),
AROS_LDA(  unsigned int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_CMS_ContentInfo,
AROS_LDA(  CMS_ContentInfo *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(X509_ATTRIBUTE * ,CMS_signed_delete_attr,
AROS_LDA(  CMS_SignerInfo *, ___si,A0),
AROS_LDA(  int, ___loc,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(CMS_ContentInfo * ,d2i_CMS_bio,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  CMS_ContentInfo **, ___cms,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,CMS_unsigned_get_attr_by_NID,
AROS_LDA(  const CMS_SignerInfo *, ___si,A0),
AROS_LDA(  int, ___nid,D0),
AROS_LDA(  int, ___lastpos,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int ,CMS_verify,
AROS_LDA(  CMS_ContentInfo *, ___cms,A0),
AROS_LDA(  STACK_OF(X509) *, ___certs,A1),
AROS_LDA(  X509_STORE *, ___store,A2),
AROS_LDA(  BIO *, ___dcont,A3),
AROS_LDA(  BIO *, ___out,D0),
AROS_LDA(  unsigned int, ___flags,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(CMS_ContentInfo * ,SMIME_read_CMS,
AROS_LDA(  BIO *, ___bio,A0),
AROS_LDA(  BIO **, ___biocont,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,CMS_decrypt_set1_key,
AROS_LDA(  CMS_ContentInfo *, ___cms,A0),
AROS_LDA(  unsigned char *, ___key,A1),
AROS_LDA(  size_t, ___keylen,D0),
AROS_LDA(  const unsigned char *, ___id,A2),
AROS_LDA(  size_t, ___idlen,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(void ,CMS_SignerInfo_get0_algs,
AROS_LDA(  CMS_SignerInfo *, ___si,A0),
AROS_LDA(  EVP_PKEY **, ___pk,A1),
AROS_LDA(  X509 **, ___signer,A2),
AROS_LDA(  X509_ALGOR **, ___pdig,A3),
AROS_LDA(  X509_ALGOR **, ___psig,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,CMS_add1_cert,
AROS_LDA(  CMS_ContentInfo *, ___cms,A0),
AROS_LDA(  X509 *, ___cert,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,CMS_set_detached,
AROS_LDA(  CMS_ContentInfo *, ___cms,A0),
AROS_LDA(  int, ___detached,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(CMS_ContentInfo * ,CMS_encrypt,
AROS_LDA(  STACK_OF(X509) *, ___certs,A0),
AROS_LDA(  BIO *, ___in,A1),
AROS_LDA(  const EVP_CIPHER *, ___cipher,A2),
AROS_LDA(  unsigned int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(CMS_ContentInfo * ,CMS_EnvelopedData_create,
AROS_LDA(  const EVP_CIPHER *, ___cipher,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,CMS_uncompress,
AROS_LDA(  CMS_ContentInfo *, ___cms,A0),
AROS_LDA(  BIO *, ___dcont,A1),
AROS_LDA(  BIO *, ___out,A2),
AROS_LDA(  unsigned int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,CMS_add0_crl,
AROS_LDA(  CMS_ContentInfo *, ___cms,A0),
AROS_LDA(  X509_CRL *, ___crl,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,CMS_SignerInfo_verify_content,
AROS_LDA(  CMS_SignerInfo *, ___si,A0),
AROS_LDA(  BIO *, ___chain,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void * ,CMS_unsigned_get0_data_by_OBJ,
AROS_LDA(  CMS_SignerInfo *, ___si,A0),
AROS_LDA(  ASN1_OBJECT *, ___oid,A1),
AROS_LDA(  int, ___lastpos,D0),
AROS_LDA(  int, ___type,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,PEM_write_bio_CMS,
AROS_LDA(  BIO *, ___out,A0),
AROS_LDA(  CMS_ContentInfo *, ___cms,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(X509_ATTRIBUTE * ,CMS_unsigned_get_attr,
AROS_LDA(  const CMS_SignerInfo *, ___si,A0),
AROS_LDA(  int, ___loc,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,CMS_RecipientInfo_ktri_cert_cmp,
AROS_LDA(  CMS_RecipientInfo *, ___ri,A0),
AROS_LDA(  X509 *, ___cert,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,CMS_RecipientInfo_ktri_get0_algs,
AROS_LDA(  CMS_RecipientInfo *, ___ri,A0),
AROS_LDA(  EVP_PKEY **, ___pk,A1),
AROS_LDA(  X509 **, ___recip,A2),
AROS_LDA(  X509_ALGOR **, ___palg,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,CMS_ContentInfo_free,
AROS_LDA(  CMS_ContentInfo *, ___cms,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,CMS_final,
AROS_LDA(  CMS_ContentInfo *, ___cms,A0),
AROS_LDA(  BIO *, ___data,A1),
AROS_LDA(  BIO *, ___dcont,A2),
AROS_LDA(  unsigned int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,CMS_add_simple_smimecap,
AROS_LDA(  STACK_OF(X509_ALGOR) **, ___algs,A0),
AROS_LDA(  int, ___algnid,D0),
AROS_LDA(  int, ___keysize,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,CMS_SignerInfo_verify,
AROS_LDA(  CMS_SignerInfo *, ___si,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,CMS_data,
AROS_LDA(  CMS_ContentInfo *, ___cms,A0),
AROS_LDA(  BIO *, ___out,A1),
AROS_LDA(  unsigned int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(CMS_ReceiptRequest * ,d2i_CMS_ReceiptRequest,
AROS_LDA(  CMS_ReceiptRequest **, ___a,A0),
AROS_LDA(  unsigned char const **, ___in,A1),
AROS_LDA(  long, ___len,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(CMS_ContentInfo * ,CMS_compress,
AROS_LDA(  BIO *, ___in,A0),
AROS_LDA(  int, ___comp_nid,D0),
AROS_LDA(  unsigned int, ___flags,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(CMS_ContentInfo * ,CMS_digest_create,
AROS_LDA(  BIO *, ___in,A0),
AROS_LDA(  const EVP_MD *, ___md,A1),
AROS_LDA(  unsigned int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,CMS_SignerInfo_cert_cmp,
AROS_LDA(  CMS_SignerInfo *, ___si,A0),
AROS_LDA(  X509 *, ___cert,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,CMS_SignerInfo_sign,
AROS_LDA(  CMS_SignerInfo *, ___si,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(CMS_ContentInfo * ,CMS_data_create,
AROS_LDA(  BIO *, ___in,A0),
AROS_LDA(  unsigned int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_CMS_bio,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  CMS_ContentInfo *, ___cms,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,CMS_EncryptedData_set1_key,
AROS_LDA(  CMS_ContentInfo *, ___cms,A0),
AROS_LDA(  const EVP_CIPHER *, ___ciph,A1),
AROS_LDA(  const unsigned char *, ___key,A2),
AROS_LDA(  size_t, ___keylen,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int ,CMS_decrypt,
AROS_LDA(  CMS_ContentInfo *, ___cms,A0),
AROS_LDA(  EVP_PKEY *, ___pkey,A1),
AROS_LDA(  X509 *, ___cert,A2),
AROS_LDA(  BIO *, ___dcont,A3),
AROS_LDA(  BIO *, ___out,D0),
AROS_LDA(  unsigned int, ___flags,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(X509_ATTRIBUTE * ,CMS_unsigned_delete_attr,
AROS_LDA(  CMS_SignerInfo *, ___si,A0),
AROS_LDA(  int, ___loc,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,CMS_unsigned_get_attr_count,
AROS_LDA(  const CMS_SignerInfo *, ___si,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,CMS_add_smimecap,
AROS_LDA(  CMS_SignerInfo *, ___si,A0),
AROS_LDA(  STACK_OF(X509_ALGOR) *, ___algs,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,CMS_signed_get_attr_by_OBJ,
AROS_LDA(  const CMS_SignerInfo *, ___si,A0),
AROS_LDA(  const ASN1_OBJECT *, ___obj,A1),
AROS_LDA(  int, ___lastpos,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(CMS_ContentInfo * ,d2i_CMS_ContentInfo,
AROS_LDA(  CMS_ContentInfo **, ___a,A0),
AROS_LDA(  unsigned char const **, ___in,A1),
AROS_LDA(  long, ___len,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,CMS_add_standard_smimecap,
AROS_LDA(  STACK_OF(X509_ALGOR) **, ___smcap,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(CMS_ContentInfo * ,CMS_ContentInfo_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,CMS_RecipientInfo_type,
AROS_LDA(  CMS_RecipientInfo *, ___ri,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const ASN1_OBJECT * ,CMS_get0_type,
AROS_LDA(  const CMS_ContentInfo *, ___cms,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,CMS_is_detached,
AROS_LDA(  CMS_ContentInfo *, ___cms,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(CMS_ContentInfo * ,CMS_sign,
AROS_LDA(  X509 *, ___signcert,A0),
AROS_LDA(  EVP_PKEY *, ___pkey,A1),
AROS_LDA(  STACK_OF(X509) *, ___certs,A2),
AROS_LDA(  BIO *, ___data,A3),
AROS_LDA(  unsigned int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,CMS_signed_add1_attr,
AROS_LDA(  CMS_SignerInfo *, ___si,A0),
AROS_LDA(  X509_ATTRIBUTE *, ___attr,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,CMS_unsigned_get_attr_by_OBJ,
AROS_LDA(  const CMS_SignerInfo *, ___si,A0),
AROS_LDA(  const ASN1_OBJECT *, ___obj,A1),
AROS_LDA(  int, ___lastpos,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,SMIME_write_CMS,
AROS_LDA(  BIO *, ___bio,A0),
AROS_LDA(  CMS_ContentInfo *, ___cms,A1),
AROS_LDA(  BIO *, ___data,A2),
AROS_LDA(  int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int ,CMS_EncryptedData_decrypt,
AROS_LDA(  CMS_ContentInfo *, ___cms,A0),
AROS_LDA(  const unsigned char *, ___key,A1),
AROS_LDA(  size_t, ___keylen,D0),
AROS_LDA(  BIO *, ___dcont,A2),
AROS_LDA(  BIO *, ___out,A3),
AROS_LDA(  unsigned int, ___flags,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(STACK_OF(CMS_RecipientInfo) * ,CMS_get0_RecipientInfos,
AROS_LDA(  CMS_ContentInfo *, ___cms,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(CMS_RevocationInfoChoice * ,CMS_add0_RevocationInfoChoice,
AROS_LDA(  CMS_ContentInfo *, ___cms,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,CMS_decrypt_set1_pkey,
AROS_LDA(  CMS_ContentInfo *, ___cms,A0),
AROS_LDA(  EVP_PKEY *, ___pk,A1),
AROS_LDA(  X509 *, ___cert,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,CMS_SignerInfo_set1_signer_cert,
AROS_LDA(  CMS_SignerInfo *, ___si,A0),
AROS_LDA(  X509 *, ___signer,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(STACK_OF(X509) * ,CMS_get0_signers,
AROS_LDA(  CMS_ContentInfo *, ___cms,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(void ,CMS_ReceiptRequest_get0_values,
AROS_LDA(  CMS_ReceiptRequest *, ___rr,A0),
AROS_LDA(  ASN1_STRING **, ___pcid,A1),
AROS_LDA(  int *, ___pallorfirst,A2),
AROS_LDA(  STACK_OF(GENERAL_NAMES) **, ___plist,A3),
AROS_LDA(  STACK_OF(GENERAL_NAMES) **, ___prto,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void * ,CMS_signed_get0_data_by_OBJ,
AROS_LDA(  CMS_SignerInfo *, ___si,A0),
AROS_LDA(  const ASN1_OBJECT *, ___oid,A1),
AROS_LDA(  int, ___lastpos,D0),
AROS_LDA(  int, ___type,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(STACK_OF(CMS_SignerInfo) * ,CMS_get0_SignerInfos,
AROS_LDA(  CMS_ContentInfo *, ___cms,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,CMS_add0_cert,
AROS_LDA(  CMS_ContentInfo *, ___cms,A0),
AROS_LDA(  X509 *, ___cert,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(CMS_ContentInfo * ,CMS_EncryptedData_encrypt,
AROS_LDA(  BIO *, ___in,A0),
AROS_LDA(  const EVP_CIPHER *, ___cipher,A1),
AROS_LDA(  const unsigned char *, ___key,A2),
AROS_LDA(  size_t, ___keylen,D0),
AROS_LDA(  unsigned int, ___flags,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,CMS_digest_verify,
AROS_LDA(  CMS_ContentInfo *, ___cms,A0),
AROS_LDA(  BIO *, ___dcont,A1),
AROS_LDA(  BIO *, ___out,A2),
AROS_LDA(  unsigned int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,CMS_set1_signers_certs,
AROS_LDA(  CMS_ContentInfo *, ___cms,A0),
AROS_LDA(  STACK_OF(X509) *, ___certs,A1),
AROS_LDA(  unsigned int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(X509_ATTRIBUTE * ,CMS_signed_get_attr,
AROS_LDA(  const CMS_SignerInfo *, ___si,A0),
AROS_LDA(  int, ___loc,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,CMS_RecipientInfo_set0_key,
AROS_LDA(  CMS_RecipientInfo *, ___ri,A0),
AROS_LDA(  unsigned char *, ___key,A1),
AROS_LDA(  size_t, ___keylen,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,CMS_SignedData_init,
AROS_LDA(  CMS_ContentInfo *, ___cms,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int ,CMS_RecipientInfo_kekri_get0_id,
AROS_LDA(  CMS_RecipientInfo *, ___ri,A0),
AROS_LDA(  X509_ALGOR **, ___palg,A1),
AROS_LDA(  ASN1_OCTET_STRING **, ___pid,A2),
AROS_LDA(  ASN1_GENERALIZEDTIME **, ___pdate,A3),
AROS_LDA(  ASN1_OBJECT **, ___potherid,D0),
AROS_LDA(  ASN1_TYPE **, ___pothertype,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,CMS_verify_receipt,
AROS_LDA(  CMS_ContentInfo *, ___rcms,A0),
AROS_LDA(  CMS_ContentInfo *, ___ocms,A1),
AROS_LDA(  STACK_OF(X509) *, ___certs,A2),
AROS_LDA(  X509_STORE *, ___store,A3),
AROS_LDA(  unsigned int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(CMS_ContentInfo * ,PEM_read_bio_CMS,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  CMS_ContentInfo **, ___x,A1),
AROS_LDA(  pem_password_cb *, ___cb,A2),
AROS_LDA(  void *, ___u,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(STACK_OF(X509_CRL) * ,CMS_get1_crls,
AROS_LDA(  CMS_ContentInfo *, ___cms,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD9(CMS_RecipientInfo * ,CMS_add0_recipient_key,
AROS_LDA(  CMS_ContentInfo *, ___cms,A0),
AROS_LDA(  int, ___nid,D0),
AROS_LDA(  unsigned char *, ___key,A1),
AROS_LDA(  size_t, ___keylen,D1),
AROS_LDA(  unsigned char *, ___id,A2),
AROS_LDA(  size_t, ___idlen,D2),
AROS_LDA(  ASN1_GENERALIZEDTIME *, ___date,A3),
AROS_LDA(  ASN1_OBJECT *, ___otherTypeId,D3),
AROS_LDA(  ASN1_TYPE *, ___otherType,D4),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(CMS_ReceiptRequest * ,CMS_ReceiptRequest_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ASN1_OCTET_STRING ** ,CMS_get0_content,
AROS_LDA(  CMS_ContentInfo *, ___cms,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,CMS_get1_ReceiptRequest,
AROS_LDA(  CMS_SignerInfo *, ___si,A0),
AROS_LDA(  CMS_ReceiptRequest **, ___prr,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,CMS_signed_add1_attr_by_OBJ,
AROS_LDA(  CMS_SignerInfo *, ___si,A0),
AROS_LDA(  const ASN1_OBJECT *, ___obj,A1),
AROS_LDA(  int, ___type,D0),
AROS_LDA(  const void *, ___bytes,A2),
AROS_LDA(  int, ___len,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,CMS_RecipientInfo_kekri_id_cmp,
AROS_LDA(  CMS_RecipientInfo *, ___ri,A0),
AROS_LDA(  const unsigned char *, ___id,A1),
AROS_LDA(  size_t, ___idlen,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,CMS_add1_ReceiptRequest,
AROS_LDA(  CMS_SignerInfo *, ___si,A0),
AROS_LDA(  CMS_ReceiptRequest *, ___rr,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,CMS_SignerInfo_get0_signer_id,
AROS_LDA(  CMS_SignerInfo *, ___si,A0),
AROS_LDA(  ASN1_OCTET_STRING **, ___keyid,A1),
AROS_LDA(  X509_NAME **, ___issuer,A2),
AROS_LDA(  ASN1_INTEGER **, ___sno,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,CMS_unsigned_add1_attr_by_NID,
AROS_LDA(  CMS_SignerInfo *, ___si,A0),
AROS_LDA(  int, ___nid,D0),
AROS_LDA(  int, ___type,D1),
AROS_LDA(  const void *, ___bytes,A1),
AROS_LDA(  int, ___len,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,CMS_unsigned_add1_attr,
AROS_LDA(  CMS_SignerInfo *, ___si,A0),
AROS_LDA(  X509_ATTRIBUTE *, ___attr,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,CMS_signed_get_attr_by_NID,
AROS_LDA(  const CMS_SignerInfo *, ___si,A0),
AROS_LDA(  int, ___nid,D0),
AROS_LDA(  int, ___lastpos,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(STACK_OF(X509) * ,CMS_get1_certs,
AROS_LDA(  CMS_ContentInfo *, ___cms,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,CMS_signed_add1_attr_by_NID,
AROS_LDA(  CMS_SignerInfo *, ___si,A0),
AROS_LDA(  int, ___nid,D0),
AROS_LDA(  int, ___type,D1),
AROS_LDA(  const void *, ___bytes,A1),
AROS_LDA(  int, ___len,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,CMS_unsigned_add1_attr_by_txt,
AROS_LDA(  CMS_SignerInfo *, ___si,A0),
AROS_LDA(  const char *, ___attrname,A1),
AROS_LDA(  int, ___type,D0),
AROS_LDA(  const void *, ___bytes,A2),
AROS_LDA(  int, ___len,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,CMS_dataFinal,
AROS_LDA(  CMS_ContentInfo *, ___cms,A0),
AROS_LDA(  BIO *, ___bio,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,CMS_RecipientInfo_ktri_get0_signer_id,
AROS_LDA(  CMS_RecipientInfo *, ___ri,A0),
AROS_LDA(  ASN1_OCTET_STRING **, ___keyid,A1),
AROS_LDA(  X509_NAME **, ___issuer,A2),
AROS_LDA(  ASN1_INTEGER **, ___sno,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_CMS_ReceiptRequest,
AROS_LDA(  CMS_ReceiptRequest *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(CMS_RecipientInfo * ,CMS_add1_recipient_cert,
AROS_LDA(  CMS_ContentInfo *, ___cms,A0),
AROS_LDA(  X509 *, ___recip,A1),
AROS_LDA(  unsigned int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(BIO * ,CMS_dataInit,
AROS_LDA(  CMS_ContentInfo *, ___cms,A0),
AROS_LDA(  BIO *, ___icont,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,CMS_signed_add1_attr_by_txt,
AROS_LDA(  CMS_SignerInfo *, ___si,A0),
AROS_LDA(  const char *, ___attrname,A1),
AROS_LDA(  int, ___type,D0),
AROS_LDA(  const void *, ___bytes,A2),
AROS_LDA(  int, ___len,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,CMS_RecipientInfo_decrypt,
AROS_LDA(  CMS_ContentInfo *, ___cms,A0),
AROS_LDA(  CMS_RecipientInfo *, ___ri,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,CMS_signed_get_attr_count,
AROS_LDA(  const CMS_SignerInfo *, ___si,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const ASN1_OBJECT * ,CMS_get0_eContentType,
AROS_LDA(  CMS_ContentInfo *, ___cms,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,CMS_set1_eContentType,
AROS_LDA(  CMS_ContentInfo *, ___cms,A0),
AROS_LDA(  const ASN1_OBJECT *, ___oid,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(CMS_ReceiptRequest * ,CMS_ReceiptRequest_create0,
AROS_LDA(  unsigned char *, ___id,A0),
AROS_LDA(  int, ___idlen,D0),
AROS_LDA(  int, ___allorfirst,D1),
AROS_LDA(  STACK_OF(GENERAL_NAMES) *, ___receiptList,A1),
AROS_LDA(  STACK_OF(GENERAL_NAMES) *, ___receiptsTo,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(CMS_SignerInfo * ,CMS_add1_signer,
AROS_LDA(  CMS_ContentInfo *, ___cms,A0),
AROS_LDA(  X509 *, ___signer,A1),
AROS_LDA(  EVP_PKEY *, ___pk,A2),
AROS_LDA(  const EVP_MD *, ___md,A3),
AROS_LDA(  unsigned int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,CMS_RecipientInfo_set0_pkey,
AROS_LDA(  CMS_RecipientInfo *, ___ri,A0),
AROS_LDA(  EVP_PKEY *, ___pkey,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ENGINE_set_load_ssl_client_cert_function,
AROS_LDA(  ENGINE *, ___e,A0),
AROS_LDA(  ENGINE_SSL_CLIENT_CERT_PTR, ___loadssl_f,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ENGINE_SSL_CLIENT_CERT_PTR ,ENGINE_get_ssl_client_cert_function,
AROS_LDA(  const ENGINE *, ___e,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD8(int ,ENGINE_load_ssl_client_cert,
AROS_LDA(  ENGINE *, ___e,A0),
AROS_LDA(  SSL *, ___s,A1),
AROS_LDA(  STACK_OF(X509_NAME) *, ___ca_dn,A2),
AROS_LDA(  X509 **, ___pcert,A3),
AROS_LDA(  EVP_PKEY **, ___ppkey,D0),
AROS_LDA(  STACK_OF(X509) **, ___pother,D1),
AROS_LDA(  UI_METHOD *, ___ui_method,D2),
AROS_LDA(  void *, ___callback_data,D3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,ENGINE_register_pkey_meths,
AROS_LDA(  ENGINE *, ___e,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ENGINE * ,ENGINE_get_pkey_asn1_meth_engine,
AROS_LDA(  int, ___nid,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,WHIRLPOOL_Init,
AROS_LDA(  WHIRLPOOL_CTX *, ___c,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(unsigned char * ,WHIRLPOOL,
AROS_LDA(  const void *, ___inp,A0),
AROS_LDA(  size_t, ___bytes,D0),
AROS_LDA(  unsigned char *, ___md,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(const EVP_PKEY_ASN1_METHOD * ,ENGINE_get_pkey_asn1_meth,
AROS_LDA(  ENGINE *, ___e,A0),
AROS_LDA(  int, ___nid,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(const EVP_PKEY_METHOD * ,ENGINE_get_pkey_meth,
AROS_LDA(  ENGINE *, ___e,A0),
AROS_LDA(  int, ___nid,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(BIO * ,BIO_new_CMS,
AROS_LDA(  BIO *, ___out,A0),
AROS_LDA(  CMS_ContentInfo *, ___cms,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,ENGINE_set_default_pkey_asn1_meths,
AROS_LDA(  ENGINE *, ___e,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,WHIRLPOOL_BitUpdate,
AROS_LDA(  WHIRLPOOL_CTX *, ___ctx,A0),
AROS_LDA(  const void *, ___inp,A1),
AROS_LDA(  size_t, ___bits,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,i2d_CMS_bio_stream,
AROS_LDA(  BIO *, ___out,A0),
AROS_LDA(  CMS_ContentInfo *, ___cms,A1),
AROS_LDA(  BIO *, ___in,A2),
AROS_LDA(  int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,CMS_stream,
AROS_LDA(  unsigned char ***, ___boundary,A0),
AROS_LDA(  CMS_ContentInfo *, ___cms,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(const EVP_PKEY_ASN1_METHOD * ,ENGINE_pkey_asn1_find_str,
AROS_LDA(  ENGINE **, ___pe,A0),
AROS_LDA(  const char *, ___str,A1),
AROS_LDA(  int, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ENGINE_PKEY_METHS_PTR ,ENGINE_get_pkey_meths,
AROS_LDA(  const ENGINE *, ___e,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,ENGINE_register_pkey_asn1_meths,
AROS_LDA(  ENGINE *, ___e,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,ENGINE_set_default_pkey_meths,
AROS_LDA(  ENGINE *, ___e,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,HMAC_CTX_copy,
AROS_LDA(  HMAC_CTX *, ___dctx,A0),
AROS_LDA(  HMAC_CTX *, ___sctx,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ENGINE_PKEY_ASN1_METHS_PTR ,ENGINE_get_pkey_asn1_meths,
AROS_LDA(  const ENGINE *, ___e,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_MD * ,EVP_whirlpool,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(void ,ENGINE_register_all_pkey_meths,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,WHIRLPOOL_Final,
AROS_LDA(  unsigned char *, ___md,A0),
AROS_LDA(  WHIRLPOOL_CTX *, ___c,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(const EVP_PKEY_ASN1_METHOD * ,ENGINE_get_pkey_asn1_meth_str,
AROS_LDA(  ENGINE *, ___e,A0),
AROS_LDA(  const char *, ___str,A1),
AROS_LDA(  int, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(void ,ENGINE_register_all_pkey_asn1_meths,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void ,CMS_ContentInfo_print_ctx,
AROS_LDA(  BIO *, ___out,A0),
AROS_LDA(  CMS_ContentInfo *, ___cms,A1),
AROS_LDA(  int, ___a,D0),
AROS_LDA(  void *, ___p,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,CMS_add1_crl,
AROS_LDA(  CMS_ContentInfo *, ___cms,A0),
AROS_LDA(  X509_CRL *, ___crl,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ENGINE_set_pkey_asn1_meths,
AROS_LDA(  ENGINE *, ___e,A0),
AROS_LDA(  ENGINE_PKEY_ASN1_METHS_PTR, ___f,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ENGINE * ,ENGINE_get_pkey_meth_engine,
AROS_LDA(  int, ___nid,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,WHIRLPOOL_Update,
AROS_LDA(  WHIRLPOOL_CTX *, ___c,A0),
AROS_LDA(  const void *, ___inp,A1),
AROS_LDA(  size_t, ___bytes,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,PEM_write_bio_CMS_stream,
AROS_LDA(  BIO *, ___out,A0),
AROS_LDA(  CMS_ContentInfo *, ___cms,A1),
AROS_LDA(  BIO *, ___in,A2),
AROS_LDA(  int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,ENGINE_unregister_pkey_meths,
AROS_LDA(  ENGINE *, ___e,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,ENGINE_unregister_pkey_asn1_meths,
AROS_LDA(  ENGINE *, ___e,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ENGINE_set_pkey_meths,
AROS_LDA(  ENGINE *, ___e,A0),
AROS_LDA(  ENGINE_PKEY_METHS_PTR, ___f,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(DSA * ,DSAparams_dup,
AROS_LDA(  DSA *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(DH * ,DHparams_dup,
AROS_LDA(  DH *, ___d,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(unsigned long ,X509_issuer_name_hash_old,
AROS_LDA(  X509 *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(unsigned long ,X509_subject_name_hash_old,
AROS_LDA(  X509 *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(SRP_user_pwd * ,SRP_VBASE_get_by_user,
AROS_LDA(  SRP_VBASE *, ___vb,A0),
AROS_LDA(  char *, ___username,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(BIGNUM * ,SRP_Calc_server_key,
AROS_LDA(  const BIGNUM *, ___A,A0),
AROS_LDA(  const BIGNUM *, ___v,A1),
AROS_LDA(  const BIGNUM *, ___u,A2),
AROS_LDA(  const BIGNUM *, ___b,A3),
AROS_LDA(  const BIGNUM *, ___N,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(char * ,SRP_create_verifier,
AROS_LDA(  const char *, ___user,A0),
AROS_LDA(  const char *, ___pass,A1),
AROS_LDA(  char **, ___salt,A2),
AROS_LDA(  char **, ___verifier,A3),
AROS_LDA(  const char *, ___N,D0),
AROS_LDA(  const char *, ___g,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int ,SRP_create_verifier_BN,
AROS_LDA(  const char *, ___user,A0),
AROS_LDA(  const char *, ___pass,A1),
AROS_LDA(  BIGNUM **, ___salt,A2),
AROS_LDA(  BIGNUM **, ___verifier,A3),
AROS_LDA(  const BIGNUM *, ___N,D0),
AROS_LDA(  const BIGNUM *, ___g,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(BIGNUM * ,SRP_Calc_u,
AROS_LDA(  const BIGNUM *, ___A,A0),
AROS_LDA(  const BIGNUM *, ___B,A1),
AROS_LDA(  const BIGNUM *, ___N,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,SRP_VBASE_free,
AROS_LDA(  SRP_VBASE *, ___vb,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(BIGNUM * ,SRP_Calc_client_key,
AROS_LDA(  const BIGNUM *, ___N,A0),
AROS_LDA(  const BIGNUM *, ___B,A1),
AROS_LDA(  const BIGNUM *, ___g,A2),
AROS_LDA(  const BIGNUM *, ___x,A3),
AROS_LDA(  const BIGNUM *, ___a,D0),
AROS_LDA(  const BIGNUM *, ___u,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(SRP_gN * ,SRP_get_default_gN,
AROS_LDA(  const char *, ___id,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(BIGNUM * ,SRP_Calc_x,
AROS_LDA(  const BIGNUM *, ___s,A0),
AROS_LDA(  const char *, ___user,A1),
AROS_LDA(  const char *, ___pass,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(BIGNUM * ,SRP_Calc_B,
AROS_LDA(  const BIGNUM *, ___b,A0),
AROS_LDA(  const BIGNUM *, ___N,A1),
AROS_LDA(  const BIGNUM *, ___g,A2),
AROS_LDA(  const BIGNUM *, ___v,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(SRP_VBASE * ,SRP_VBASE_new,
AROS_LDA(  char *, ___seed_key,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(char * ,SRP_check_known_gN_param,
AROS_LDA(  const BIGNUM *, ___g,A0),
AROS_LDA(  const BIGNUM *, ___N,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(BIGNUM * ,SRP_Calc_A,
AROS_LDA(  const BIGNUM *, ___a,A0),
AROS_LDA(  const BIGNUM *, ___N,A1),
AROS_LDA(  const BIGNUM *, ___g,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SRP_Verify_A_mod_N,
AROS_LDA(  const BIGNUM *, ___A,A0),
AROS_LDA(  const BIGNUM *, ___N,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SRP_VBASE_init,
AROS_LDA(  SRP_VBASE *, ___vb,A0),
AROS_LDA(  char *, ___verifier_file,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SRP_Verify_B_mod_N,
AROS_LDA(  const BIGNUM *, ___B,A0),
AROS_LDA(  const BIGNUM *, ___N,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,EC_KEY_set_public_key_affine_coordinates,
AROS_LDA(  EC_KEY *, ___key,A0),
AROS_LDA(  BIGNUM *, ___x,A1),
AROS_LDA(  BIGNUM *, ___y,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aes_192_ctr,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aes_128_ctr,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aes_256_ctr,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EC_KEY_get_flags,
AROS_LDA(  const EC_KEY *, ___key,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aes_128_xts,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aes_256_xts,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aes_128_gcm,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,EC_KEY_clear_flags,
AROS_LDA(  EC_KEY *, ___key,A0),
AROS_LDA(  int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,EC_KEY_set_flags,
AROS_LDA(  EC_KEY *, ___key,A0),
AROS_LDA(  int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aes_256_ccm,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aes_128_ccm,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aes_192_gcm,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aes_256_gcm,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aes_192_ccm,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_rc4_hmac_md5,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aes_128_cbc_hmac_sha1,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aes_256_cbc_hmac_sha1,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(CMS_RecipientInfo * ,CMS_add0_recipient_password,
AROS_LDA(  CMS_ContentInfo *, ___cms,A0),
AROS_LDA(  int, ___iter,D0),
AROS_LDA(  int, ___wrap_nid,D1),
AROS_LDA(  int, ___pbe_nid,D2),
AROS_LDA(  unsigned char *, ___pass,A1),
AROS_LDA(  ossl_ssize_t, ___passlen,D3),
AROS_LDA(  const EVP_CIPHER *, ___kekciph,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,CMS_decrypt_set1_password,
AROS_LDA(  CMS_ContentInfo *, ___cms,A0),
AROS_LDA(  unsigned char *, ___pass,A1),
AROS_LDA(  ossl_ssize_t, ___passlen,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,CMS_RecipientInfo_set0_password,
AROS_LDA(  CMS_RecipientInfo *, ___ri,A0),
AROS_LDA(  unsigned char *, ___pass,A1),
AROS_LDA(  ossl_ssize_t, ___passlen,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_REQ_sign_ctx,
AROS_LDA(  X509_REQ *, ___x,A0),
AROS_LDA(  EVP_MD_CTX *, ___ctx,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_CRL_sign_ctx,
AROS_LDA(  X509_CRL *, ___x,A0),
AROS_LDA(  EVP_MD_CTX *, ___ctx,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509_signature_dump,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  const ASN1_STRING *, ___sig,A1),
AROS_LDA(  int, ___indent,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_sign_ctx,
AROS_LDA(  X509 *, ___x,A0),
AROS_LDA(  EVP_MD_CTX *, ___ctx,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int ,ASN1_item_sign_ctx,
AROS_LDA(  const ASN1_ITEM *, ___it,A0),
AROS_LDA(  X509_ALGOR *, ___algor1,A1),
AROS_LDA(  X509_ALGOR *, ___algor2,A2),
AROS_LDA(  ASN1_BIT_STRING *, ___signature,A3),
AROS_LDA(  void *, ___asn,D0),
AROS_LDA(  EVP_MD_CTX *, ___ctx,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,X509_STORE_CTX_set0_crls,
AROS_LDA(  X509_STORE_CTX *, ___ctx,A0),
AROS_LDA(  STACK_OF(X509_CRL) *, ___sk,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(const unsigned char * ,SSL_SESSION_get_id,
AROS_LDA(  const SSL_SESSION *, ___s,A0),
AROS_LDA(  unsigned int *, ___len,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_CTX_sess_set_new_cb,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  APTR,___new_session_cb,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR ,SSL_CTX_sess_get_get_cb,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_CTX_sess_set_get_cb,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(APTR ,___get_session_cb,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void *,SSL_CTX_get_info_callback,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_CTX_set_client_cert_cb,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(APTR ,___client_cert_cb,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_CTX_sess_set_remove_cb,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(APTR ,___remove_session_cb,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,SSL_CTX_sess_get_new_cb,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR ,SSL_CTX_get_client_cert_cb,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void *,SSL_CTX_sess_get_remove_cb,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,PEM_write_bio_SSL_SESSION,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  SSL_SESSION *, ___x,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(SSL_SESSION * ,PEM_read_bio_SSL_SESSION,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  SSL_SESSION **, ___x,A1),
AROS_LDA(  pem_password_cb *, ___cb,A2),
AROS_LDA(  void *, ___u,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,FIPS_mode_set,
AROS_LDA(  int, ___r,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,BN_X931_generate_Xpq,
AROS_LDA(  BIGNUM *, ___Xp,A0),
AROS_LDA(  BIGNUM *, ___Xq,A1),
AROS_LDA(  int, ___nbits,D0),
AROS_LDA(  BN_CTX *, ___ctx,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const BIGNUM * ,BN_get0_nist_prime_384,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(int ,ERR_set_mark,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,BN_BLINDING_invert_ex,
AROS_LDA(  BIGNUM *, ___n,A0),
AROS_LDA(  const BIGNUM *, ___r,A1),
AROS_LDA(  BN_BLINDING *, ___b,A2),
AROS_LDA(  BN_CTX *, ___ctx,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,NAME_CONSTRAINTS_free,
AROS_LDA(  NAME_CONSTRAINTS *, ___ncons,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,X509_STORE_CTX_set0_param,
AROS_LDA(  X509_STORE_CTX *, ___ctx,A0),
AROS_LDA(  X509_VERIFY_PARAM *, ___param,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,POLICY_CONSTRAINTS_free,
AROS_LDA(  POLICY_CONSTRAINTS *, ___pcons,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,BN_nist_mod_192,
AROS_LDA(  BIGNUM *, ___r,A0),
AROS_LDA(  const BIGNUM *, ___a,A1),
AROS_LDA(  const BIGNUM *, ___p,A2),
AROS_LDA(  BN_CTX *, ___ctx,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,GENERAL_SUBTREE_free,
AROS_LDA(  GENERAL_SUBTREE *, ___sub,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,PKCS12_add_safe,
AROS_LDA(  STACK_OF(PKCS7) **, ___psafes,A0),
AROS_LDA(  STACK_OF(PKCS12_SAFEBAG) *, ___bags,A1),
AROS_LDA(  int, ___safe_nid,D0),
AROS_LDA(  int, ___iter,D1),
AROS_LDA(  const char *, ___pass,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const BIGNUM * ,BN_get0_nist_prime_192,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(unsigned char * ,X509_keyid_get0,
AROS_LDA(  X509 *, ___x,A0),
AROS_LDA(  int *, ___len,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const X509_POLICY_NODE * ,X509_policy_node_get0_parent,
AROS_LDA(  const X509_POLICY_NODE *, ___node,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ASN1_OCTET_STRING * ,a2i_IPADDRESS,
AROS_LDA(  const char *, ___ipasc,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,X509_STORE_CTX_set_depth,
AROS_LDA(  X509_STORE_CTX *, ___ctx,A0),
AROS_LDA(  int, ___depth,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_VERIFY_PARAM_inherit,
AROS_LDA(  X509_VERIFY_PARAM *, ___to,A0),
AROS_LDA(  const X509_VERIFY_PARAM *, ___from,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,X509_VERIFY_PARAM_set_depth,
AROS_LDA(  X509_VERIFY_PARAM *, ___param,A0),
AROS_LDA(  int, ___depth,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,EVP_PKEY_add1_attr_by_txt,
AROS_LDA(  EVP_PKEY *, ___key,A0),
AROS_LDA(  const char *, ___attrname,A1),
AROS_LDA(  int, ___type,D0),
AROS_LDA(  const unsigned char *, ___bytes,A2),
AROS_LDA(  int, ___len,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,BN_BLINDING_set_flags,
AROS_LDA(  BN_BLINDING *, ___b,A0),
AROS_LDA(  unsigned long, ___l,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_VERIFY_PARAM_set1_policies,
AROS_LDA(  X509_VERIFY_PARAM *, ___param,A0),
AROS_LDA(  STACK_OF(ASN1_OBJECT) *, ___policies,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_VERIFY_PARAM_set1_name,
AROS_LDA(  X509_VERIFY_PARAM *, ___param,A0),
AROS_LDA(  const char *, ___name,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,POLICY_MAPPING_free,
AROS_LDA(  POLICY_MAPPING *, ___pmap,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EVP_PKEY_cmp,
AROS_LDA(  const EVP_PKEY *, ___a,A0),
AROS_LDA(  const EVP_PKEY *, ___b,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,X509_policy_level_node_count,
AROS_LDA(  X509_POLICY_LEVEL *, ___level,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(X509_ATTRIBUTE * ,EVP_PKEY_get_attr,
AROS_LDA(  const EVP_PKEY *, ___key,A0),
AROS_LDA(  int, ___loc,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(GENERAL_SUBTREE * ,GENERAL_SUBTREE_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(STACK_OF(POLICYQUALINFO) * ,X509_policy_node_get0_qualifiers,
AROS_LDA(  const X509_POLICY_NODE *, ___node,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const ASN1_OBJECT * ,X509_policy_node_get0_policy,
AROS_LDA(  const X509_POLICY_NODE *, ___node,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(PKCS12 * ,PKCS12_add_safes,
AROS_LDA(  STACK_OF(PKCS7) *, ___safes,A0),
AROS_LDA(  int, ___p7_nid,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,BN_BLINDING_convert_ex,
AROS_LDA(  BIGNUM *, ___n,A0),
AROS_LDA(  BIGNUM *, ___r,A1),
AROS_LDA(  BN_BLINDING *, ___b,A2),
AROS_LDA(  BN_CTX *, ___ctx,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,X509_policy_tree_free,
AROS_LDA(  X509_POLICY_TREE *, ___tree,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const BIGNUM * ,BN_get0_nist_prime_224,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,BN_GENCB_call,
AROS_LDA(  BN_GENCB *, ___cb,A0),
AROS_LDA(  int, ___a,D0),
AROS_LDA(  int, ___b,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(NAME_CONSTRAINTS * ,NAME_CONSTRAINTS_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ECParameters_print,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  const EC_KEY *, ___key,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_VERIFY_PARAM_set_trust,
AROS_LDA(  X509_VERIFY_PARAM *, ___param,A0),
AROS_LDA(  int, ___trust,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EVP_PKEY_get_attr_count,
AROS_LDA(  const EVP_PKEY *, ___key,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_VERIFY_PARAM * ,X509_STORE_CTX_get0_param,
AROS_LDA(  X509_STORE_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_STORE_set_depth,
AROS_LDA(  X509_STORE *, ___store,A0),
AROS_LDA(  int, ___depth,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,ASN1_put_eoc,
AROS_LDA(  unsigned char **, ___pp,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(void ,X509_VERIFY_PARAM_table_cleanup,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(BN_BLINDING * ,RSA_setup_blinding,
AROS_LDA(  RSA *, ___rsa,A0),
AROS_LDA(  BN_CTX *, ___ctx,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,OPENSSL_sk_find_ex,
AROS_LDA(  OPENSSL_STACK *, ___st,A0),
AROS_LDA(  const void *, ___data,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(POLICY_CONSTRAINTS * ,POLICY_CONSTRAINTS_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,X509_VERIFY_PARAM_get_depth,
AROS_LDA(  const X509_VERIFY_PARAM *, ___param,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,ASN1_item_ndef_i2d,
AROS_LDA(  ASN1_VALUE *, ___val,A0),
AROS_LDA(  unsigned char **, ___out,A1),
AROS_LDA(  const ASN1_ITEM *, ___it,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(int ,ERR_pop_to_mark,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(X509_POLICY_NODE * ,X509_policy_level_get0_node,
AROS_LDA(  X509_POLICY_LEVEL *, ___level,A0),
AROS_LDA(  int, ___i,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_PKCS7_NDEF,
AROS_LDA(  PKCS7 *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(ASN1_TYPE * ,ASN1_generate_v3,
AROS_LDA(  const char *, ___str,A0),
AROS_LDA(  X509V3_CTX *, ___cnf,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,X509_policy_tree_level_count,
AROS_LDA(  const X509_POLICY_TREE *, ___tree,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,BN_nist_mod_224,
AROS_LDA(  BIGNUM *, ___r,A0),
AROS_LDA(  const BIGNUM *, ___a,A1),
AROS_LDA(  const BIGNUM *, ___p,A2),
AROS_LDA(  BN_CTX *, ___ctx,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,BIO_dgram_non_fatal_error,
AROS_LDA(  int, ___error,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(ASN1_BIT_STRING * ,v2i_ASN1_BIT_STRING,
AROS_LDA(  X509V3_EXT_METHOD *, ___method,A0),
AROS_LDA(  X509V3_CTX *, ___ctx,A1),
AROS_LDA(  STACK_OF(CONF_VALUE) *, ___nval,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_STORE_CTX_set_default,
AROS_LDA(  X509_STORE_CTX *, ___ctx,A0),
AROS_LDA(  const char *, ___name,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_VERIFY_PARAM_set1,
AROS_LDA(  X509_VERIFY_PARAM *, ___to,A0),
AROS_LDA(  const X509_VERIFY_PARAM *, ___from,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(GENERAL_NAME * ,v2i_GENERAL_NAME_ex,
AROS_LDA(  GENERAL_NAME *, ___out,A0),
AROS_LDA(  const X509V3_EXT_METHOD *, ___method,A1),
AROS_LDA(  X509V3_CTX *, ___ctx,A2),
AROS_LDA(  CONF_VALUE *, ___cnf,A3),
AROS_LDA(  int, ___is_nc,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,BN_nist_mod_521,
AROS_LDA(  BIGNUM *, ___r,A0),
AROS_LDA(  const BIGNUM *, ___a,A1),
AROS_LDA(  const BIGNUM *, ___p,A2),
AROS_LDA(  BN_CTX *, ___ctx,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(X509_POLICY_LEVEL * ,X509_policy_tree_get0_level,
AROS_LDA(  const X509_POLICY_TREE *, ___tree,A0),
AROS_LDA(  int, ___i,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ASN1_const_check_infinite_end,
AROS_LDA(  const unsigned char **, ___p,A0),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(X509_ATTRIBUTE * ,EVP_PKEY_delete_attr,
AROS_LDA(  EVP_PKEY *, ___key,A0),
AROS_LDA(  int, ___loc,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const BIGNUM * ,BN_get0_nist_prime_256,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(STACK_OF(CONF_VALUE) * ,i2v_ASN1_BIT_STRING,
AROS_LDA(  X509V3_EXT_METHOD *, ___method,A0),
AROS_LDA(  ASN1_BIT_STRING *, ___bits,A1),
AROS_LDA(  STACK_OF(CONF_VALUE) *, ___extlist,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,BN_nist_mod_384,
AROS_LDA(  BIGNUM *, ___r,A0),
AROS_LDA(  const BIGNUM *, ___a,A1),
AROS_LDA(  const BIGNUM *, ___p,A2),
AROS_LDA(  BN_CTX *, ___ctx,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,EVP_PKEY_get_attr_by_OBJ,
AROS_LDA(  const EVP_PKEY *, ___key,A0),
AROS_LDA(  const ASN1_OBJECT *, ___obj,A1),
AROS_LDA(  int, ___lastpos,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const X509_VERIFY_PARAM * ,X509_VERIFY_PARAM_lookup,
AROS_LDA(  const char *, ___name,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509V3_NAME_from_section,
AROS_LDA(  X509_NAME *, ___nm,A0),
AROS_LDA(  STACK_OF(CONF_VALUE) *, ___dn_sk,A1),
AROS_LDA(  unsigned long, ___chtype,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EVP_PKEY_add1_attr,
AROS_LDA(  EVP_PKEY *, ___key,A0),
AROS_LDA(  X509_ATTRIBUTE *, ___attr,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,BIO_dump_indent_cb,
AROS_LDA(  APTR, ___cb,A0),
AROS_LDA(  void *, ___u,A1),
AROS_LDA(  const char *, ___s,A2),
AROS_LDA(  int, ___len,D0),
AROS_LDA(  int, ___indent,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,BN_nist_mod_256,
AROS_LDA(  BIGNUM *, ___r,A0),
AROS_LDA(  const BIGNUM *, ___a,A1),
AROS_LDA(  const BIGNUM *, ___p,A2),
AROS_LDA(  BN_CTX *, ___ctx,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,X509_VERIFY_PARAM_add0_table,
AROS_LDA(  X509_VERIFY_PARAM *, ___param,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(BN_BLINDING * ,BN_BLINDING_create_param,
AROS_LDA(  BN_BLINDING *, ___b,A0),
AROS_LDA(  const BIGNUM *, ___e,A1),
AROS_LDA(  BIGNUM *, ___m,A2),
AROS_LDA(  BN_CTX *, ___ctx,A3),
AROS_LDA(  APTR, ___bn_mod_exp,D0),
AROS_LDA(  BN_MONT_CTX *, ___m_ctx,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const BIGNUM * ,BN_get0_nist_prime_521,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,BN_is_prime_fasttest_ex,
AROS_LDA(  const BIGNUM *, ___p,A0),
AROS_LDA(  int, ___nchecks,D0),
AROS_LDA(  BN_CTX *, ___ctx,A1),
AROS_LDA(  int, ___do_trial_devision,D1),
AROS_LDA(  BN_GENCB *, ___cb,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,X509_policy_check,
AROS_LDA(  X509_POLICY_TREE **, ___ptree,A0),
AROS_LDA(  int *, ___pexplicit_policy,A1),
AROS_LDA(  STACK_OF(X509) *, ___certs,A2),
AROS_LDA(  STACK_OF(ASN1_OBJECT) *, ___policy_oids,A3),
AROS_LDA(  unsigned int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,EVP_PKEY_get_attr_by_NID,
AROS_LDA(  const EVP_PKEY *, ___key,A0),
AROS_LDA(  int, ___nid,D0),
AROS_LDA(  int, ___lastpos,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(unsigned long ,BN_BLINDING_get_flags,
AROS_LDA(  const BN_BLINDING *, ___b,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(PKCS12_SAFEBAG * ,PKCS12_add_cert,
AROS_LDA(  STACK_OF(PKCS12_SAFEBAG) **, ___pbags,A0),
AROS_LDA(  X509 *, ___cert,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EVP_CIPHER_CTX_rand_key,
AROS_LDA(  EVP_CIPHER_CTX *, ___ctx,A0),
AROS_LDA(  unsigned char *, ___key,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ASN1_OCTET_STRING * ,a2i_IPADDRESS_NC,
AROS_LDA(  const char *, ___ipasc,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,PKCS7_set_digest,
AROS_LDA(  PKCS7 *, ___p7,A0),
AROS_LDA(  const EVP_MD *, ___md,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(POLICY_MAPPING * ,POLICY_MAPPING_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,PKCS7_set0_type_other,
AROS_LDA(  PKCS7 *, ___p7,A0),
AROS_LDA(  int, ___type,D0),
AROS_LDA(  ASN1_TYPE *, ___other,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,EVP_PKEY_add1_attr_by_OBJ,
AROS_LDA(  EVP_PKEY *, ___key,A0),
AROS_LDA(  const ASN1_OBJECT *, ___obj,A1),
AROS_LDA(  int, ___type,D0),
AROS_LDA(  const unsigned char *, ___bytes,A2),
AROS_LDA(  int, ___len,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,X509_VERIFY_PARAM_set_time,
AROS_LDA(  X509_VERIFY_PARAM *, ___param,A0),
AROS_LDA(  time_t, ___t,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(PKCS12_SAFEBAG * ,PKCS12_add_key,
AROS_LDA(  STACK_OF(PKCS12_SAFEBAG) **, ___pbags,A0),
AROS_LDA(  EVP_PKEY *, ___key,A1),
AROS_LDA(  int, ___key_usage,D0),
AROS_LDA(  int, ___iter,D1),
AROS_LDA(  int, ___key_nid,D2),
AROS_LDA(  const char *, ___pass,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,BIO_dump_cb,
AROS_LDA(  APTR, ___cb,A0),
AROS_LDA(  void *, ___u,A1),
AROS_LDA(  const char *, ___s,A2),
AROS_LDA(  int, ___len,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(BIGNUM * ,BN_get_rfc3526_prime_8192,
AROS_LDA(  BIGNUM *, ___bn,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_VERIFY_PARAM_clear_flags,
AROS_LDA(  X509_VERIFY_PARAM *, ___param,A0),
AROS_LDA(  unsigned long, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(BIGNUM * ,BN_get_rfc2409_prime_1024,
AROS_LDA(  BIGNUM *, ___bn,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(BIGNUM * ,BN_get_rfc3526_prime_2048,
AROS_LDA(  BIGNUM *, ___bn,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(BIGNUM * ,BN_get_rfc3526_prime_6144,
AROS_LDA(  BIGNUM *, ___bn,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(BIGNUM * ,BN_get_rfc3526_prime_1536,
AROS_LDA(  BIGNUM *, ___bn,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(BIGNUM * ,BN_get_rfc3526_prime_3072,
AROS_LDA(  BIGNUM *, ___bn,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(BIGNUM * ,BN_get_rfc3526_prime_4096,
AROS_LDA(  BIGNUM *, ___bn,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(BIGNUM * ,BN_get_rfc2409_prime_768,
AROS_LDA(  BIGNUM *, ___bn,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(unsigned long ,X509_VERIFY_PARAM_get_flags,
AROS_LDA(  X509_VERIFY_PARAM *, ___param,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(EVP_CIPHER_CTX * ,EVP_CIPHER_CTX_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,EVP_CIPHER_CTX_free,
AROS_LDA(  EVP_CIPHER_CTX *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EVP_CIPHER_block_size,
AROS_LDA(  const EVP_CIPHER *, ___cipher,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,EVP_CIPHER_CTX_set_app_data,
AROS_LDA(  EVP_CIPHER_CTX *, ___ctx,A0),
AROS_LDA(  void *, ___data,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,BIO_method_type,
AROS_LDA(  const BIO *, ___b,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EVP_CIPHER_CTX_nid,
AROS_LDA(  const EVP_CIPHER_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EVP_CIPHER_CTX_key_length,
AROS_LDA(  const EVP_CIPHER_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EVP_MD_size,
AROS_LDA(  const EVP_MD *, ___md,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EVP_MD_CTX_test_flags,
AROS_LDA(  const EVP_MD_CTX *, ___ctx,A0),
AROS_LDA(  int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,BIO_clear_flags,
AROS_LDA(  BIO *, ___b,A0),
AROS_LDA(  int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EVP_MD_pkey_type,
AROS_LDA(  const EVP_MD *, ___md,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,EVP_MD_CTX_clear_flags,
AROS_LDA(  EVP_MD_CTX *, ___ctx,A0),
AROS_LDA(  int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(unsigned long ,EVP_CIPHER_flags,
AROS_LDA(  const EVP_CIPHER *, ___cipher,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(BIO_callback_fn ,BIO_get_callback,
AROS_LDA(  const BIO *, ___b,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EVP_CIPHER_key_length,
AROS_LDA(  const EVP_CIPHER *, ___cipher,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,EVP_Cipher,
AROS_LDA(  EVP_CIPHER_CTX *, ___c,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  const unsigned char *, ___in,A2),
AROS_LDA(  unsigned int, ___inl,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EVP_CIPHER_CTX_block_size,
AROS_LDA(  const EVP_CIPHER_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const EVP_CIPHER * ,EVP_CIPHER_CTX_cipher,
AROS_LDA(  const EVP_CIPHER_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void * ,EVP_CIPHER_CTX_get_app_data,
AROS_LDA(  const EVP_CIPHER_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EVP_MD_block_size,
AROS_LDA(  const EVP_MD *, ___md,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const EVP_MD * ,EVP_MD_CTX_md,
AROS_LDA(  const EVP_MD_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char * ,BIO_method_name,
AROS_LDA(  const BIO *, ___b,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EVP_CIPHER_CTX_iv_length,
AROS_LDA(  const EVP_CIPHER_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,CRYPTO_memcmp,
AROS_LDA(  const void *, ___in_a,A0),
AROS_LDA(  const void *, ___in_b,A1),
AROS_LDA(  size_t, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void ,BN_consttime_swap,
AROS_LDA(  BN_ULONG, ___swap,D0),
AROS_LDA(  BIGNUM *, ___a,A0),
AROS_LDA(  BIGNUM *, ___b,A1),
AROS_LDA(  int, ___nwords,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_X509_EXTENSIONS,
AROS_LDA(  X509_EXTENSIONS *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(X509_EXTENSIONS * ,d2i_X509_EXTENSIONS,
AROS_LDA(  X509_EXTENSIONS **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void ,X509_ALGOR_get0,
AROS_LDA(  const ASN1_OBJECT **, ___pobj,A0),
AROS_LDA(  int *, ___pptype,A1),
AROS_LDA(  const void **, ___ppval,A2),
AROS_LDA(  const X509_ALGOR *, ___algor,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,X509_ALGOR_set0,
AROS_LDA(  X509_ALGOR *, ___alg,A0),
AROS_LDA(  ASN1_OBJECT *, ___aobj,A1),
AROS_LDA(  int, ___ptype,D0),
AROS_LDA(  void *, ___pval,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void * ,X509at_get0_data_by_OBJ,
AROS_LDA(  STACK_OF(X509_ATTRIBUTE) *, ___x,A0),
AROS_LDA(  const ASN1_OBJECT *, ___obj,A1),
AROS_LDA(  int, ___lastpos,D0),
AROS_LDA(  int, ___type,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,ASN1_TYPE_set1,
AROS_LDA(  ASN1_TYPE *, ___a,A0),
AROS_LDA(  int, ___type,D0),
AROS_LDA(  const void *, ___value,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,ASN1_STRING_set0,
AROS_LDA(  ASN1_STRING *, ___str,A0),
AROS_LDA(  void *, ___data,A1),
AROS_LDA(  int, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_X509_ALGORS,
AROS_LDA(  X509_ALGORS *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(X509_ALGORS * ,d2i_X509_ALGORS,
AROS_LDA(  X509_ALGORS **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(ASN1_VALUE * ,SMIME_read_ASN1,
AROS_LDA(  BIO *, ___bio,A0),
AROS_LDA(  BIO **, ___bcont,A1),
AROS_LDA(  const ASN1_ITEM *, ___it,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(int ,OPENSSL_isservice,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,EVP_CIPHER_CTX_clear_flags,
AROS_LDA(  EVP_CIPHER_CTX *, ___ctx,A0),
AROS_LDA(  int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD9(int ,BN_X931_generate_prime_ex,
AROS_LDA(  BIGNUM *, ___p,A0),
AROS_LDA(  BIGNUM *, ___p1,A1),
AROS_LDA(  BIGNUM *, ___p2,A2),
AROS_LDA(  BIGNUM *, ___Xp1,A3),
AROS_LDA(  BIGNUM *, ___Xp2,D0),
AROS_LDA(  const BIGNUM *, ___Xp,D1),
AROS_LDA(  const BIGNUM *, ___e,D2),
AROS_LDA(  BN_CTX *, ___ctx,D3),
AROS_LDA(  BN_GENCB *, ___cb,D4),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EVP_CIPHER_CTX_test_flags,
AROS_LDA(  const EVP_CIPHER_CTX *, ___ctx,A0),
AROS_LDA(  int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(void ,EVP_add_alg_module,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD9(int ,BN_X931_derive_prime_ex,
AROS_LDA(  BIGNUM *, ___p,A0),
AROS_LDA(  BIGNUM *, ___p1,A1),
AROS_LDA(  BIGNUM *, ___p2,A2),
AROS_LDA(  const BIGNUM *, ___Xp,D0),
AROS_LDA(  const BIGNUM *, ___Xp1,A3),
AROS_LDA(  const BIGNUM *, ___Xp2,D1),
AROS_LDA(  const BIGNUM *, ___e,D2),
AROS_LDA(  BN_CTX *, ___ctx,D3),
AROS_LDA(  BN_GENCB *, ___cb,D4),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(void ,OPENSSL_init,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(char * ,CRYPTO_strdup,
AROS_LDA(  const char *, ___str,A0),
AROS_LDA(  const char *, ___file,A1),
AROS_LDA(  int, ___line,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_TS_ACCURACY,
AROS_LDA(  const TS_ACCURACY *, ___a,A0),
AROS_LDA(  unsigned char **, ___pp,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_TS_MSG_IMPRINT,
AROS_LDA(  const TS_MSG_IMPRINT *, ___a,A0),
AROS_LDA(  unsigned char **, ___pp,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,EVP_PKEY_print_public,
AROS_LDA(  BIO *, ___out,A0),
AROS_LDA(  const EVP_PKEY *, ___pkey,A1),
AROS_LDA(  int, ___indent,D0),
AROS_LDA(  ASN1_PCTX *, ___pctx,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(EVP_PKEY_CTX * ,EVP_PKEY_CTX_new,
AROS_LDA(  EVP_PKEY *, ___pkey,A0),
AROS_LDA(  ENGINE *, ___e,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_TS_TST_INFO,
AROS_LDA(  const TS_TST_INFO *, ___a,A0),
AROS_LDA(  unsigned char **, ___pp,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(const EVP_PKEY_ASN1_METHOD * ,EVP_PKEY_asn1_find,
AROS_LDA(  ENGINE **, ___pe,A0),
AROS_LDA(  int, ___type,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509 * ,TS_CONF_load_cert,
AROS_LDA(  const char *, ___file,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(X509_EXTENSION * ,TS_REQ_get_ext,
AROS_LDA(  TS_REQ *, ___a,A0),
AROS_LDA(  int, ___loc,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EVP_PKEY_sign_init,
AROS_LDA(  EVP_PKEY_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,ASN1_item_print,
AROS_LDA(  BIO *, ___out,A0),
AROS_LDA(  ASN1_VALUE *, ___ifld,A1),
AROS_LDA(  int, ___indent,D0),
AROS_LDA(  const ASN1_ITEM *, ___it,A2),
AROS_LDA(  const ASN1_PCTX *, ___ctx,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,TS_TST_INFO_set_nonce,
AROS_LDA(  TS_TST_INFO *, ___a,A0),
AROS_LDA(  const ASN1_INTEGER *, ___nonce,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(TS_RESP * ,TS_RESP_dup,
AROS_LDA(  TS_RESP *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EVP_PKEY_asn1_add0,
AROS_LDA(  const EVP_PKEY_ASN1_METHOD *, ___ameth,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,PKCS7_add0_attrib_signing_time,
AROS_LDA(  PKCS7_SIGNER_INFO *, ___si,A0),
AROS_LDA(  ASN1_TIME *, ___t,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,BIO_asn1_get_prefix,
AROS_LDA(  BIO *, ___b,A0),
AROS_LDA(  asn1_ps_func **, ___pprefix,A1),
AROS_LDA(  asn1_ps_func **, ___pprefix_free,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,TS_TST_INFO_set_time,
AROS_LDA(  TS_TST_INFO *, ___a,A0),
AROS_LDA(  const ASN1_GENERALIZEDTIME *, ___gtime,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,EVP_PKEY_meth_set_decrypt,
AROS_LDA(  EVP_PKEY_METHOD *, ___pmeth,A0),
AROS_LDA(APTR,___decrypt_init,A1),
AROS_LDA(APTR,___decrypt,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,EVP_PKEY_set_type_str,
AROS_LDA(  EVP_PKEY *, ___pkey,A0),
AROS_LDA(  const char *, ___str,A1),
AROS_LDA(  int, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EVP_PKEY_CTX_get_keygen_info,
AROS_LDA(  EVP_PKEY_CTX *, ___ctx,A0),
AROS_LDA(  int, ___idx,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,TS_REQ_set_policy_id,
AROS_LDA(  TS_REQ *, ___a,A0),
AROS_LDA(  const ASN1_OBJECT *, ___policy,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,TS_RESP_set_status_info,
AROS_LDA(  TS_RESP *, ___a,A0),
AROS_LDA(  TS_STATUS_INFO *, ___info,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EVP_PKEY_keygen,
AROS_LDA(  EVP_PKEY_CTX *, ___ctx,A0),
AROS_LDA(  EVP_PKEY **, ___ppkey,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,EVP_DigestSignInit,
AROS_LDA(  EVP_MD_CTX *, ___ctx,A0),
AROS_LDA(  EVP_PKEY_CTX **, ___pctx,A1),
AROS_LDA(  const EVP_MD *, ___type,A2),
AROS_LDA(  ENGINE *, ___e,A3),
AROS_LDA(  EVP_PKEY *, ___pkey,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,TS_ACCURACY_set_millis,
AROS_LDA(  TS_ACCURACY *, ___a,A0),
AROS_LDA(  const ASN1_INTEGER *, ___millis,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(TS_REQ * ,TS_REQ_dup,
AROS_LDA(  TS_REQ *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(GENERAL_NAME * ,GENERAL_NAME_dup,
AROS_LDA(  GENERAL_NAME *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(STACK_OF(X509_CRL) * ,X509_STORE_CTX_get1_crls,
AROS_LDA(  X509_STORE_CTX *, ___st,A0),
AROS_LDA(  X509_NAME *, ___nm,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(EVP_PKEY_ASN1_METHOD * ,EVP_PKEY_asn1_new,
AROS_LDA(  int, ___id,D0),
AROS_LDA(  int, ___flags,D1),
AROS_LDA(  const char *, ___pem_str,A0),
AROS_LDA(  const char *, ___info,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(BIO * ,BIO_new_NDEF,
AROS_LDA(  BIO *, ___out,A0),
AROS_LDA(  ASN1_VALUE *, ___val,A1),
AROS_LDA(  const ASN1_ITEM *, ___it,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,TS_MSG_IMPRINT_set_algo,
AROS_LDA(  TS_MSG_IMPRINT *, ___a,A0),
AROS_LDA(  X509_ALGOR *, ___alg,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_TS_TST_INFO_bio,
AROS_LDA(  BIO *, ___fp,A0),
AROS_LDA(  TS_TST_INFO *, ___a,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,TS_TST_INFO_set_ordering,
AROS_LDA(  TS_TST_INFO *, ___a,A0),
AROS_LDA(  int, ___ordering,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,TS_TST_INFO_get_ext_by_OBJ,
AROS_LDA(  TS_TST_INFO *, ___a,A0),
AROS_LDA(  const ASN1_OBJECT *, ___obj,A1),
AROS_LDA(  int, ___lastpos,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(const char * ,TS_CONF_get_tsa_section,
AROS_LDA(  CONF *, ___conf,A0),
AROS_LDA(  const char *, ___section,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD8(int ,SMIME_write_ASN1,
AROS_LDA(  BIO *, ___bio,A0),
AROS_LDA(  ASN1_VALUE *, ___val,A1),
AROS_LDA(  BIO *, ___data,A2),
AROS_LDA(  int, ___flags,A3),
AROS_LDA(  int, ___ctype_nid,D0),
AROS_LDA(  int, ___econt_nid,D1),
AROS_LDA(  STACK_OF(X509_ALGOR) *, ___mdalgs,D2),
AROS_LDA(  const ASN1_ITEM *, ___it,D3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,TS_RESP_CTX_set_signer_key,
AROS_LDA(  TS_RESP_CTX *, ___ctx,A0),
AROS_LDA(  EVP_PKEY *, ___key,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,EVP_PKEY_encrypt_old,
AROS_LDA(  unsigned char *, ___enc_key,A0),
AROS_LDA(  const unsigned char *, ___key,A1),
AROS_LDA(  int, ___key_len,D0),
AROS_LDA(  EVP_PKEY *, ___pub_key,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EVP_PKEY_encrypt_init,
AROS_LDA(  EVP_PKEY_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(unsigned long ,ASN1_PCTX_get_cert_flags,
AROS_LDA(  const ASN1_PCTX *, ___p,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_ESS_SIGNING_CERT,
AROS_LDA(  const ESS_SIGNING_CERT *, ___a,A0),
AROS_LDA(  unsigned char **, ___pp,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(EVP_PKEY * ,TS_CONF_load_key,
AROS_LDA(  const char *, ___file,A0),
AROS_LDA(  const char *, ___pass,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_ASN1_SEQUENCE_ANY,
AROS_LDA(  const ASN1_SEQUENCE_ANY *, ___a,A0),
AROS_LDA(  unsigned char **, ___pp,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(TS_MSG_IMPRINT * ,d2i_TS_MSG_IMPRINT_bio,
AROS_LDA(  BIO *, ___fp,A0),
AROS_LDA(  TS_MSG_IMPRINT **, ___a,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(void ,EVP_PKEY_asn1_set_public,
AROS_LDA(  EVP_PKEY_ASN1_METHOD *, ___ameth,A0),
AROS_LDA(APTR,___pub_decode,A1),
AROS_LDA(APTR,___pub_encode,A2),
AROS_LDA(APTR,___pub_cmp,A3),
AROS_LDA(APTR,___pub_print,D0),
AROS_LDA(APTR,___pkey_size,D1),
AROS_LDA(APTR,___pkey_bits,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(EVP_PKEY * ,b2i_PublicKey_bio,
AROS_LDA(  BIO *, ___in,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,BIO_asn1_set_prefix,
AROS_LDA(  BIO *, ___b,A0),
AROS_LDA(  asn1_ps_func *, ___prefix,A1),
AROS_LDA(  asn1_ps_func *, ___prefix_free,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(EVP_PKEY * ,EVP_PKEY_new_mac_key,
AROS_LDA(  int, ___type,A0),
AROS_LDA(  ENGINE *, ___e,A1),
AROS_LDA(  const unsigned char *, ___key,A2),
AROS_LDA(  int, ___keylen,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,TS_REQ_ext_free,
AROS_LDA(  TS_REQ *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,EVP_PKEY_asn1_set_free,
AROS_LDA(  EVP_PKEY_ASN1_METHOD *, ___ameth,A0),
AROS_LDA(APTR ,___pkey_free,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const EVP_PKEY_ASN1_METHOD * ,EVP_PKEY_get0_asn1,
AROS_LDA(  const EVP_PKEY *, ___pkey,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EVP_PKEY_verify_recover_init,
AROS_LDA(  EVP_PKEY_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,EVP_PKEY_CTX_set_data,
AROS_LDA(  EVP_PKEY_CTX *, ___ctx,A0),
AROS_LDA(  void *, ___data,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EVP_PKEY_keygen_init,
AROS_LDA(  EVP_PKEY_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,TS_RESP_CTX_set_status_info,
AROS_LDA(  TS_RESP_CTX *, ___ctx,A0),
AROS_LDA(  int, ___status,D0),
AROS_LDA(  const char *, ___text,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_ALGOR * ,TS_MSG_IMPRINT_get_algo,
AROS_LDA(  TS_MSG_IMPRINT *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,TS_REQ_print_bio,
AROS_LDA(  BIO *, ___bio,A0),
AROS_LDA(  TS_REQ *, ___a,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,EVP_PKEY_CTX_ctrl_str,
AROS_LDA(  EVP_PKEY_CTX *, ___ctx,A0),
AROS_LDA(  const char *, ___type,A1),
AROS_LDA(  const char *, ___value,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EVP_PKEY_get_default_digest_nid,
AROS_LDA(  EVP_PKEY *, ___pkey,A0),
AROS_LDA(  int *, ___pnid,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,PEM_write_bio_PKCS7_stream,
AROS_LDA(  BIO *, ___out,A0),
AROS_LDA(  PKCS7 *, ___p7,A1),
AROS_LDA(  BIO *, ___in,A2),
AROS_LDA(  int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,TS_MSG_IMPRINT_print_bio,
AROS_LDA(  BIO *, ___bio,A0),
AROS_LDA(  TS_MSG_IMPRINT *, ___msg,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,BN_asc2bn,
AROS_LDA(  BIGNUM **, ___a,A0),
AROS_LDA(  const char *, ___str,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ASN1_OBJECT * ,TS_REQ_get_policy_id,
AROS_LDA(  TS_REQ *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(TS_ACCURACY * ,d2i_TS_ACCURACY,
AROS_LDA(  TS_ACCURACY **, ___a,A0),
AROS_LDA(  const unsigned char **, ___pp,A1),
AROS_LDA(  long, ___length,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void * ,DSO_global_lookup,
AROS_LDA(  const char *, ___name,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,TS_CONF_set_tsa_name,
AROS_LDA(  CONF *, ___conf,A0),
AROS_LDA(  const char *, ___section,A1),
AROS_LDA(  TS_RESP_CTX *, ___ctx,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_ASN1_SET_ANY,
AROS_LDA(  const ASN1_SEQUENCE_ANY *, ___a,A0),
AROS_LDA(  unsigned char **, ___pp,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(unsigned long ,ASN1_PCTX_get_flags,
AROS_LDA(  const ASN1_PCTX *, ___p,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,TS_TST_INFO_get_ext_by_NID,
AROS_LDA(  TS_TST_INFO *, ___a,A0),
AROS_LDA(  int, ___nid,D0),
AROS_LDA(  int, ___lastpos,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(TS_RESP * ,TS_RESP_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ESS_CERT_ID * ,ESS_CERT_ID_dup,
AROS_LDA(  ESS_CERT_ID *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(TS_STATUS_INFO * ,TS_STATUS_INFO_dup,
AROS_LDA(  TS_STATUS_INFO *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(X509_EXTENSION * ,TS_REQ_delete_ext,
AROS_LDA(  TS_REQ *, ___a,A0),
AROS_LDA(  int, ___loc,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,EVP_DigestVerifyFinal,
AROS_LDA(  EVP_MD_CTX *, ___ctx,A0),
AROS_LDA(  const unsigned char *, ___sig,A1),
AROS_LDA(  size_t, ___siglen,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,EVP_PKEY_print_params,
AROS_LDA(  BIO *, ___out,A0),
AROS_LDA(  const EVP_PKEY *, ___pkey,A1),
AROS_LDA(  int, ___inden,D0),
AROS_LDA(  ASN1_PCTX *, ___pctx,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(TS_MSG_IMPRINT * ,TS_REQ_get_msg_imprint,
AROS_LDA(  TS_REQ *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,OBJ_find_sigid_by_algs,
AROS_LDA(  int *, ___psignid,A0),
AROS_LDA(  int, ___dig_nid,D0),
AROS_LDA(  int, ___pkey_nid,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const ASN1_INTEGER * ,TS_TST_INFO_get_serial,
AROS_LDA(  const TS_TST_INFO *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const ASN1_INTEGER * ,TS_REQ_get_nonce,
AROS_LDA(  const TS_REQ *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int ,X509_PUBKEY_set0_param,
AROS_LDA(  X509_PUBKEY *, ___pub,A0),
AROS_LDA(  ASN1_OBJECT *, ___aobj,A1),
AROS_LDA(  int, ___ptype,D0),
AROS_LDA(  void *, ___pval,A2),
AROS_LDA(  unsigned char *, ___penc,A3),
AROS_LDA(  int, ___penclen,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,EVP_PKEY_CTX_set0_keygen_info,
AROS_LDA(  EVP_PKEY_CTX *, ___ctx,A0),
AROS_LDA(  int *, ___dat,A1),
AROS_LDA(  int, ___datlen,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,DIST_POINT_set_dpname,
AROS_LDA(  DIST_POINT_NAME *, ___dpn,A0),
AROS_LDA(  X509_NAME *, ___iname,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_ISSUING_DIST_POINT,
AROS_LDA(  ISSUING_DIST_POINT *, ___a,A0),
AROS_LDA(  unsigned char **, ___pp,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void * ,EVP_PKEY_CTX_get_data,
AROS_LDA(  EVP_PKEY_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,TS_STATUS_INFO_print_bio,
AROS_LDA(  BIO *, ___bio,A0),
AROS_LDA(  TS_STATUS_INFO *, ___a,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EVP_PKEY_derive_init,
AROS_LDA(  EVP_PKEY_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(TS_TST_INFO * ,d2i_TS_TST_INFO,
AROS_LDA(  TS_TST_INFO **, ___a,A0),
AROS_LDA(  const unsigned char **, ___pp,A1),
AROS_LDA(  long, ___length,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EVP_PKEY_asn1_add_alias,
AROS_LDA(  int, ___to,D0),
AROS_LDA(  int, ___from,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(TS_RESP * ,d2i_TS_RESP_bio,
AROS_LDA(  BIO *, ___fp,A0),
AROS_LDA(  TS_RESP **, ___a,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,OTHERNAME_cmp,
AROS_LDA(  OTHERNAME *, ___a,A0),
AROS_LDA(  OTHERNAME *, ___b,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,GENERAL_NAME_set0_value,
AROS_LDA(  GENERAL_NAME *, ___a,A0),
AROS_LDA(  int, ___type,D0),
AROS_LDA(  void *, ___value,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,PKCS7_RECIP_INFO_get0_alg,
AROS_LDA(  PKCS7_RECIP_INFO *, ___ri,A0),
AROS_LDA(  X509_ALGOR **, ___penc,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(TS_RESP_CTX * ,TS_RESP_CTX_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,TS_RESP_set_tst_info,
AROS_LDA(  TS_RESP *, ___a,A0),
AROS_LDA(  PKCS7 *, ___p7,A1),
AROS_LDA(  TS_TST_INFO *, ___tst_info,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,PKCS7_final,
AROS_LDA(  PKCS7 *, ___p7,A0),
AROS_LDA(  BIO *, ___data,A1),
AROS_LDA(  int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EVP_PKEY_base_id,
AROS_LDA(  const EVP_PKEY *, ___pkey,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,TS_RESP_CTX_set_signer_cert,
AROS_LDA(  TS_RESP_CTX *, ___ctx,A0),
AROS_LDA(  X509 *, ___signer,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,TS_REQ_set_msg_imprint,
AROS_LDA(  TS_REQ *, ___a,A0),
AROS_LDA(  TS_MSG_IMPRINT *, ___msg_imprint,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int ,EVP_PKEY_CTX_ctrl,
AROS_LDA(  EVP_PKEY_CTX *, ___ctx,A0),
AROS_LDA(  int, ___keytype,D0),
AROS_LDA(  int, ___optype,D1),
AROS_LDA(  int, ___cmd,D2),
AROS_LDA(  int, ___p1,D3),
AROS_LDA(  void *, ___p2,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,TS_CONF_set_digests,
AROS_LDA(  CONF *, ___conf,A0),
AROS_LDA(  const char *, ___section,A1),
AROS_LDA(  TS_RESP_CTX *, ___ctx,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(TS_MSG_IMPRINT * ,d2i_TS_MSG_IMPRINT,
AROS_LDA(  TS_MSG_IMPRINT **, ___a,A0),
AROS_LDA(  const unsigned char **, ___pp,A1),
AROS_LDA(  long, ___length,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,EVP_PKEY_meth_set_ctrl,
AROS_LDA(  EVP_PKEY_METHOD *, ___pmeth,A0),
AROS_LDA(APTR  ,___ctrl,A1),
AROS_LDA(APTR  ,___ctrl_str,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,TS_REQ_get_ext_by_NID,
AROS_LDA(  TS_REQ *, ___a,A0),
AROS_LDA(  int, ___nid,D0),
AROS_LDA(  int, ___lastpos,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,PKCS5_pbe_set0_algor,
AROS_LDA(  X509_ALGOR *, ___algor,A0),
AROS_LDA(  int, ___alg,D0),
AROS_LDA(  int, ___iter,D1),
AROS_LDA(  const unsigned char *, ___salt,A1),
AROS_LDA(  int, ___saltlen,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(TS_ACCURACY * ,TS_ACCURACY_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,X509_CRL_METHOD_free,
AROS_LDA(  X509_CRL_METHOD *, ___m,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(unsigned long ,ASN1_PCTX_get_nm_flags,
AROS_LDA(  const ASN1_PCTX *, ___p,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,EVP_PKEY_meth_set_sign,
AROS_LDA(  EVP_PKEY_METHOD *, ___pmeth,A0),
AROS_LDA(APTR,___sign_init,A1),
AROS_LDA(APTR,___sign,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EVP_PKEY_decrypt_init,
AROS_LDA(  EVP_PKEY_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,i2b_PVK_bio,
AROS_LDA(  BIO *, ___out,A0),
AROS_LDA(  EVP_PKEY *, ___pk,A1),
AROS_LDA(  int, ___enclevel,D0),
AROS_LDA(  pem_password_cb *, ___cb,A2),
AROS_LDA(  void *, ___u,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,EVP_PKEY_print_private,
AROS_LDA(  BIO *, ___out,A0),
AROS_LDA(  const EVP_PKEY *, ___pkey,A1),
AROS_LDA(  int, ___indent,D0),
AROS_LDA(  ASN1_PCTX *, ___pctx,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void * ,GENERAL_NAME_get0_value,
AROS_LDA(  const GENERAL_NAME *, ___a,A0),
AROS_LDA(  int *, ___ptype,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(EVP_PKEY * ,b2i_PVK_bio,
AROS_LDA(  BIO *, ___in,A0),
AROS_LDA(  pem_password_cb *, ___cb,A1),
AROS_LDA(  void *, ___u,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(ASN1_UTCTIME * ,ASN1_UTCTIME_adj,
AROS_LDA(  ASN1_UTCTIME *, ___s,A0),
AROS_LDA(  time_t, ___t,D0),
AROS_LDA(  int, ___offset_day,D1),
AROS_LDA(  int, ___offset_sec,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(TS_TST_INFO * ,TS_TST_INFO_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,EVP_MD_do_all_sorted,
AROS_LDA(APTR,___fn,A0),
AROS_LDA(APTR,___arg,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,TS_CONF_set_default_engine,
AROS_LDA(  const char *, ___name,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,TS_ACCURACY_set_seconds,
AROS_LDA(  TS_ACCURACY *, ___a,A0),
AROS_LDA(  const ASN1_INTEGER *, ___seconds,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const ASN1_GENERALIZEDTIME * ,TS_TST_INFO_get_time,
AROS_LDA(  const TS_TST_INFO *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,PKCS8_pkey_get0,
AROS_LDA(  const ASN1_OBJECT **, ___ppkalg,A0),
AROS_LDA(  const unsigned char **, ___pk,A1),
AROS_LDA(  int *, ___ppklen,A2),
AROS_LDA(  const X509_ALGOR **, ___pa,A3),
AROS_LDA(  const PKCS8_PRIV_KEY_INFO *, ___p8,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const EVP_PKEY_ASN1_METHOD * ,EVP_PKEY_asn1_get0,
AROS_LDA(  int, ___idx,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,OBJ_add_sigid,
AROS_LDA(  int, ___signid,D0),
AROS_LDA(  int, ___dig_id,D1),
AROS_LDA(  int, ___pkey_id,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,PKCS7_SIGNER_INFO_sign,
AROS_LDA(  PKCS7_SIGNER_INFO *, ___si,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EVP_PKEY_paramgen_init,
AROS_LDA(  EVP_PKEY_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,EVP_PKEY_sign,
AROS_LDA(  EVP_PKEY_CTX *, ___ctx,A0),
AROS_LDA(  unsigned char *, ___sig,A1),
AROS_LDA(  size_t *, ___siglen,D0),
AROS_LDA(  const unsigned char *, ___tbs,A2),
AROS_LDA(  size_t, ___tbslen,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(void ,OBJ_sigid_free,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,EVP_PKEY_meth_set_init,
AROS_LDA(  EVP_PKEY_METHOD *, ___pmeth,A0),
AROS_LDA(APTR ,___init,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(ESS_ISSUER_SERIAL * ,d2i_ESS_ISSUER_SERIAL,
AROS_LDA(  ESS_ISSUER_SERIAL **, ___a,A0),
AROS_LDA(  const unsigned char **, ___pp,A1),
AROS_LDA(  long, ___length,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(ISSUING_DIST_POINT * ,ISSUING_DIST_POINT_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(ASN1_TIME * ,ASN1_TIME_adj,
AROS_LDA(  ASN1_TIME *, ___s,A0),
AROS_LDA(  time_t, ___t,D0),
AROS_LDA(  int, ___offset_day,D1),
AROS_LDA(  int, ___offset_sec,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,TS_OBJ_print_bio,
AROS_LDA(  BIO *, ___bio,A0),
AROS_LDA(  const ASN1_OBJECT *, ___obj,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,EVP_PKEY_meth_set_verify_recover,
AROS_LDA(  EVP_PKEY_METHOD *, ___pmeth,A0),
AROS_LDA(APTR ,___verify_recover_init,A1),
AROS_LDA(APTR ,___verify_recover,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(TS_STATUS_INFO * ,TS_RESP_get_status_info,
AROS_LDA(  TS_RESP *, ___g,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,EVP_PKEY_CTX_set_cb,
AROS_LDA(  EVP_PKEY_CTX *, ___ctx,A0),
AROS_LDA(  EVP_PKEY_gen_cb *, ___cb,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(TS_TST_INFO * ,PKCS7_to_TS_TST_INFO,
AROS_LDA(  PKCS7 *, ___token,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(unsigned long ,ASN1_PCTX_get_oid_flags,
AROS_LDA(  const ASN1_PCTX *, ___p,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,TS_TST_INFO_add_ext,
AROS_LDA(  TS_TST_INFO *, ___a,A0),
AROS_LDA(  X509_EXTENSION *, ___ex,A1),
AROS_LDA(  int, ___loc,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,EVP_PKEY_meth_set_derive,
AROS_LDA(  EVP_PKEY_METHOD *, ___pmeth,A0),
AROS_LDA(APTR ,___derive_init,A1),
AROS_LDA(APTR ,___derive,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_TS_MSG_IMPRINT_bio,
AROS_LDA(  BIO *, ___fp,A0),
AROS_LDA(  TS_MSG_IMPRINT *, ___a,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,TS_RESP_CTX_set_accuracy,
AROS_LDA(  TS_RESP_CTX *, ___ctx,A0),
AROS_LDA(  int, ___secs,D0),
AROS_LDA(  int, ___millis,D1),
AROS_LDA(  int, ___micros,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,TS_REQ_set_nonce,
AROS_LDA(  TS_REQ *, ___a,A0),
AROS_LDA(  const ASN1_INTEGER *, ___nonce,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(ESS_CERT_ID * ,ESS_CERT_ID_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,TS_REQ_get_ext_count,
AROS_LDA(  TS_REQ *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,BUF_reverse,
AROS_LDA(  unsigned char *, ___out,A0),
AROS_LDA(  const unsigned char *, ___in,A1),
AROS_LDA(  size_t, ___siz,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,TS_TST_INFO_print_bio,
AROS_LDA(  BIO *, ___bio,A0),
AROS_LDA(  TS_TST_INFO *, ___a,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(ISSUING_DIST_POINT * ,d2i_ISSUING_DIST_POINT,
AROS_LDA(  ISSUING_DIST_POINT **, ___a,A0),
AROS_LDA(  const unsigned char **, ___pp,A1),
AROS_LDA(  long, ___length,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2b_PrivateKey_bio,
AROS_LDA(  BIO *, ___out,A0),
AROS_LDA(  EVP_PKEY *, ___pk,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_TS_RESP,
AROS_LDA(  const TS_RESP *, ___a,A0),
AROS_LDA(  unsigned char **, ___pp,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(EVP_PKEY * ,b2i_PublicKey,
AROS_LDA(  const unsigned char **, ___in,A0),
AROS_LDA(  long, ___length,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,TS_VERIFY_CTX_cleanup,
AROS_LDA(  TS_VERIFY_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,TS_STATUS_INFO_free,
AROS_LDA(  TS_STATUS_INFO *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,TS_RESP_verify_token,
AROS_LDA(  TS_VERIFY_CTX *, ___ctx,A0),
AROS_LDA(  PKCS7 *, ___token,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(const void * ,OBJ_bsearch_ex_,
AROS_LDA(  const void *, ___key,A0),
AROS_LDA(void *, ___base,A1),
AROS_LDA(  int, ___num,D0),
AROS_LDA(  int, ___size,D1),
AROS_LDA(APTR ,___cmp,A2),
AROS_LDA(  int, ___flags,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,ASN1_bn_print,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  const char *, ___number,A1),
AROS_LDA(  const BIGNUM *, ___num,A2),
AROS_LDA(  unsigned char *, ___ign,A3),
AROS_LDA(  int, ___indent,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(int ,EVP_PKEY_asn1_get_count,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,ASN1_PCTX_set_nm_flags,
AROS_LDA(  ASN1_PCTX *, ___p,A0),
AROS_LDA(  unsigned long, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,EVP_DigestVerifyInit,
AROS_LDA(  EVP_MD_CTX *, ___ctx,A0),
AROS_LDA(  EVP_PKEY_CTX **, ___pctx,A1),
AROS_LDA(  const EVP_MD *, ___type,A2),
AROS_LDA(  ENGINE *, ___e,A3),
AROS_LDA(  EVP_PKEY *, ___pkey,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ASN1_OBJECT * ,TS_TST_INFO_get_policy_id,
AROS_LDA(  TS_TST_INFO *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,TS_REQ_get_cert_req,
AROS_LDA(  const TS_REQ *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,X509_CRL_set_meth_data,
AROS_LDA(  X509_CRL *, ___crl,A0),
AROS_LDA(  void *, ___dat,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(int ,PKCS8_pkey_set0,
AROS_LDA(  PKCS8_PRIV_KEY_INFO *, ___priv,A0),
AROS_LDA(  ASN1_OBJECT *, ___aobj,A1),
AROS_LDA(  int, ___version,D0),
AROS_LDA(  int, ___ptype,D1),
AROS_LDA(  void *, ___pval,A2),
AROS_LDA(  unsigned char *, ___penc,A3),
AROS_LDA(  int, ___penclen,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ASN1_STRING_copy,
AROS_LDA(  ASN1_STRING *, ___dst,A0),
AROS_LDA(  const ASN1_STRING *, ___str,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_CRL_match,
AROS_LDA(  const X509_CRL *, ___a,A0),
AROS_LDA(  const X509_CRL *, ___b,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void ,EVP_PKEY_asn1_set_private,
AROS_LDA(  EVP_PKEY_ASN1_METHOD *, ___ameth,A0),
AROS_LDA(  APTR,___priv_decode,A1),
AROS_LDA(  APTR,___priv_encode,A2),
AROS_LDA(  APTR,___priv_print,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void * ,TS_TST_INFO_get_ext_d2i,
AROS_LDA(  TS_TST_INFO *, ___a,A0),
AROS_LDA(  int, ___nid,D0),
AROS_LDA(  int *, ___crit,A1),
AROS_LDA(  int *, ___idx,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,TS_RESP_CTX_add_policy,
AROS_LDA(  TS_RESP_CTX *, ___ctx,A0),
AROS_LDA(  const ASN1_OBJECT *, ___policy,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(TS_RESP * ,d2i_TS_RESP,
AROS_LDA(  TS_RESP **, ___a,A0),
AROS_LDA(  const unsigned char **, ___pp,A1),
AROS_LDA(  long, ___length,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(STACK_OF(X509) * ,TS_CONF_load_certs,
AROS_LDA(  const char *, ___file,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(TS_MSG_IMPRINT * ,TS_TST_INFO_get_msg_imprint,
AROS_LDA(  TS_TST_INFO *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(int ,ERR_load_TS_strings,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(long ,TS_TST_INFO_get_version,
AROS_LDA(  const TS_TST_INFO *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(EVP_PKEY_CTX * ,EVP_PKEY_CTX_dup,
AROS_LDA(  EVP_PKEY_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,EVP_PKEY_meth_set_verify,
AROS_LDA(  EVP_PKEY_METHOD *, ___pmeth,A0),
AROS_LDA(  APTR,___verify_init,A1),
AROS_LDA(  APTR,___verify,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2b_PublicKey_bio,
AROS_LDA(  BIO *, ___out,A0),
AROS_LDA(  EVP_PKEY *, ___pk,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,TS_CONF_set_certs,
AROS_LDA(  CONF *, ___conf,A0),
AROS_LDA(  const char *, ___section,A1),
AROS_LDA(  const char *, ___certs,A2),
AROS_LDA(  TS_RESP_CTX *, ___ctx,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int ,EVP_PKEY_asn1_get0_info,
AROS_LDA(  int *, ___ppkey_id,A0),
AROS_LDA(  int *, ___ppkey_base_id,A1),
AROS_LDA(  int *, ___ppkey_flags,A2),
AROS_LDA(  const char **, ___pinfo,A3),
AROS_LDA(  const char **, ___ppem_str,D0),
AROS_LDA(  const EVP_PKEY_ASN1_METHOD *, ___ameth,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,TS_VERIFY_CTX_free,
AROS_LDA(  TS_VERIFY_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,TS_REQ_get_ext_by_critical,
AROS_LDA(  TS_REQ *, ___a,A0),
AROS_LDA(  int, ___crit,D0),
AROS_LDA(  int, ___lastpos,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,TS_RESP_CTX_set_serial_cb,
AROS_LDA(  TS_RESP_CTX *, ___ctx,A0),
AROS_LDA(  TS_serial_cb, ___cb,D0),
AROS_LDA(  void *, ___data,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void * ,X509_CRL_get_meth_data,
AROS_LDA(  X509_CRL *, ___crl,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,TS_RESP_CTX_set_time_cb,
AROS_LDA(  TS_RESP_CTX *, ___ctx,A0),
AROS_LDA(  TS_time_cb, ___cb,D0),
AROS_LDA(  void *, ___data,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ASN1_OCTET_STRING * ,TS_MSG_IMPRINT_get_msg,
AROS_LDA(  TS_MSG_IMPRINT *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,TS_TST_INFO_ext_free,
AROS_LDA(  TS_TST_INFO *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(long ,TS_REQ_get_version,
AROS_LDA(  const TS_REQ *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,TS_REQ_add_ext,
AROS_LDA(  TS_REQ *, ___a,A0),
AROS_LDA(  X509_EXTENSION *, ___ex,A1),
AROS_LDA(  int, ___loc,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,EVP_PKEY_CTX_set_app_data,
AROS_LDA(  EVP_PKEY_CTX *, ___ctx,A0),
AROS_LDA(  void *, ___data,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(const void * ,OBJ_bsearch_,
AROS_LDA(  const void *, ___key,A0),
AROS_LDA(  const void *, ___base,A1),
AROS_LDA(  int, ___num,D0),
AROS_LDA(  int, ___size,D1),
AROS_LDA(  APTR,___cmp,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,EVP_PKEY_meth_set_verifyctx,
AROS_LDA(  EVP_PKEY_METHOD *, ___pmeth,A0),
AROS_LDA(  APTR,___verifyctx_init,A1),
AROS_LDA(  APTR,___verifyctx,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,i2d_PKCS7_bio_stream,
AROS_LDA(  BIO *, ___out,A0),
AROS_LDA(  PKCS7 *, ___p7,A1),
AROS_LDA(  BIO *, ___in,A2),
AROS_LDA(  int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(PKCS7_SIGNER_INFO * ,PKCS7_sign_add_signer,
AROS_LDA(  PKCS7 *, ___p7,A0),
AROS_LDA(  X509 *, ___signcert,A1),
AROS_LDA(  EVP_PKEY *, ___pkey,A2),
AROS_LDA(  const EVP_MD *, ___md,A3),
AROS_LDA(  int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(TS_TST_INFO * ,d2i_TS_TST_INFO_bio,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  TS_TST_INFO **, ___a,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,TS_TST_INFO_get_ordering,
AROS_LDA(  const TS_TST_INFO *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,TS_RESP_print_bio,
AROS_LDA(  BIO *, ___bio,A0),
AROS_LDA(  TS_RESP *, ___a,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(STACK_OF(X509_EXTENSION) * ,TS_TST_INFO_get_exts,
AROS_LDA(  TS_TST_INFO *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(X509_ALGOR * ,PKCS5_pbe2_set_iv,
AROS_LDA(  const EVP_CIPHER *, ___cipher,A0),
AROS_LDA(  int, ___iter,D0),
AROS_LDA(  unsigned char *, ___salt,A1),
AROS_LDA(  int, ___saltlen,D1),
AROS_LDA(  unsigned char *, ___aiv,A2),
AROS_LDA(  int, ___prf_nid,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(EVP_PKEY * ,b2i_PrivateKey,
AROS_LDA(  const unsigned char **, ___in,A0),
AROS_LDA(  long, ___length,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void * ,EVP_PKEY_CTX_get_app_data,
AROS_LDA(  EVP_PKEY_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,TS_REQ_set_cert_req,
AROS_LDA(  TS_REQ *, ___a,A0),
AROS_LDA(  int, ___cert_req,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,TS_CONF_set_serial,
AROS_LDA(  CONF *, ___conf,A0),
AROS_LDA(  const char *, ___section,A1),
AROS_LDA(  TS_serial_cb, ___cb,A2),
AROS_LDA(  TS_RESP_CTX *, ___ctx,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,TS_TST_INFO_free,
AROS_LDA(  TS_TST_INFO *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,TS_RESP_verify_response,
AROS_LDA(  TS_VERIFY_CTX *, ___ctx,A0),
AROS_LDA(  TS_RESP *, ___response,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_ESS_ISSUER_SERIAL,
AROS_LDA(  const ESS_ISSUER_SERIAL *, ___a,A0),
AROS_LDA(  unsigned char **, ___pp,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const ASN1_INTEGER * ,TS_ACCURACY_get_seconds,
AROS_LDA(  const TS_ACCURACY *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,EVP_CIPHER_do_all,
AROS_LDA(  APTR,___fn,A0),
AROS_LDA(  void *, ___arg,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(EVP_PKEY * ,b2i_PrivateKey_bio,
AROS_LDA(  BIO *, ___in,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(OCSP_CERTID * ,OCSP_CERTID_dup,
AROS_LDA(  OCSP_CERTID *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,X509_PUBKEY_get0_param,
AROS_LDA(  ASN1_OBJECT **, ___ppkalg,A0),
AROS_LDA(  const unsigned char **, ___pk,A1),
AROS_LDA(  int *, ___ppklen,A2),
AROS_LDA(  X509_ALGOR **, ___pa,A3),
AROS_LDA(  X509_PUBKEY *, ___pub,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(TS_MSG_IMPRINT * ,TS_MSG_IMPRINT_dup,
AROS_LDA(  TS_MSG_IMPRINT *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void ,PKCS7_print_ctx,
AROS_LDA(  BIO *, ___out,A0),
AROS_LDA(  PKCS7 *, ___x,A1),
AROS_LDA(  int, ___indent,D0),
AROS_LDA(  const ASN1_PCTX *, ___pctx,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_TS_REQ_bio,
AROS_LDA(  BIO *, ___fp,A0),
AROS_LDA(  TS_REQ *, ___a,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(void ,EVP_PKEY_asn1_set_param,
AROS_LDA(  EVP_PKEY_ASN1_METHOD *, ___ameth,A0),
AROS_LDA(  APTR,___param_decode,A1),
AROS_LDA(  APTR,___param_encode,A2),
AROS_LDA(  APTR,___param_missing,A3),
AROS_LDA(  APTR,___param_copy,D0),
AROS_LDA(  APTR,___param_cmp,D1),
AROS_LDA(  APTR,___param_print,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,EVP_PKEY_meth_set_encrypt,
AROS_LDA(  EVP_PKEY_METHOD *, ___pmeth,A0),
AROS_LDA(  APTR,___encrypt_init,A1),
AROS_LDA(  APTR,___encryptfn,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,ASN1_PCTX_set_flags,
AROS_LDA(  ASN1_PCTX *, ___p,A0),
AROS_LDA(  unsigned long, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_ESS_CERT_ID,
AROS_LDA(  const ESS_CERT_ID *, ___a,A0),
AROS_LDA(  unsigned char **, ___pp,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(TS_VERIFY_CTX * ,TS_VERIFY_CTX_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,TS_RESP_CTX_set_extension_cb,
AROS_LDA(  TS_RESP_CTX *, ___ctx,A0),
AROS_LDA(  TS_extension_cb, ___cb,A1),
AROS_LDA(  void *, ___data,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,TS_RESP_CTX_set_status_info_cond,
AROS_LDA(  TS_RESP_CTX *, ___ctx,A0),
AROS_LDA(  int, ___status,D0),
AROS_LDA(  const char *, ___text,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,EVP_PKEY_verify,
AROS_LDA(  EVP_PKEY_CTX *, ___ctx,A0),
AROS_LDA(  const unsigned char *, ___sig,A1),
AROS_LDA(  size_t, ___siglen,D0),
AROS_LDA(  const unsigned char *, ___tbs,A2),
AROS_LDA(  size_t, ___tbslen,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(X509_CRL_METHOD * ,X509_CRL_METHOD_new,
AROS_LDA(  APTR,___crl_init,A0),
AROS_LDA(  APTR,___crl_free,A1),
AROS_LDA(  APTR,___crl_lookup,A2),
AROS_LDA(  APTR,___crl_verify,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,EVP_DigestSignFinal,
AROS_LDA(  EVP_MD_CTX *, ___ctx,A0),
AROS_LDA(  unsigned char *, ___sigret,A1),
AROS_LDA(  size_t *, ___siglen,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,TS_RESP_CTX_set_def_policy,
AROS_LDA(  TS_RESP_CTX *, ___ctx,A0),
AROS_LDA(  const ASN1_OBJECT *, ___def_policy,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(TS_RESP * ,TS_RESP_create_response,
AROS_LDA(  TS_RESP_CTX *, ___ctx,A0),
AROS_LDA(  BIO *, ___req_bio,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void ,PKCS7_SIGNER_INFO_get0_algs,
AROS_LDA(  PKCS7_SIGNER_INFO *, ___si,A0),
AROS_LDA(  EVP_PKEY **, ___pk,A1),
AROS_LDA(  X509_ALGOR **, ___pdig,A2),
AROS_LDA(  X509_ALGOR **, ___psig,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const ASN1_INTEGER * ,TS_TST_INFO_get_nonce,
AROS_LDA(  const TS_TST_INFO *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,EVP_PKEY_decrypt_old,
AROS_LDA(  unsigned char *, ___dec_key,A0),
AROS_LDA(  const unsigned char *, ___enc_key,A1),
AROS_LDA(  int, ___enc_key_len,D0),
AROS_LDA(  EVP_PKEY *, ___private_key,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,TS_TST_INFO_set_policy_id,
AROS_LDA(  TS_TST_INFO *, ___a,A0),
AROS_LDA(  ASN1_OBJECT *, ___policy_id,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,TS_CONF_set_ess_cert_id_chain,
AROS_LDA(  CONF *, ___conf,A0),
AROS_LDA(  const char *, ___section,A1),
AROS_LDA(  TS_RESP_CTX *, ___ctx,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(EVP_PKEY * ,EVP_PKEY_CTX_get0_pkey,
AROS_LDA(  EVP_PKEY_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(TS_REQ * ,d2i_TS_REQ,
AROS_LDA(  TS_REQ **, ___a,A0),
AROS_LDA(  const unsigned char **, ___pp,A1),
AROS_LDA(  long, ___length,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(const EVP_PKEY_ASN1_METHOD * ,EVP_PKEY_asn1_find_str,
AROS_LDA(  ENGINE **, ___pe,A0),
AROS_LDA(  const char *, ___str,A1),
AROS_LDA(  int, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const BIO_METHOD * ,BIO_f_asn1,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(ESS_SIGNING_CERT * ,ESS_SIGNING_CERT_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,EVP_PBE_find,
AROS_LDA(  int, ___type,D0),
AROS_LDA(  int, ___pbe_nid,D1),
AROS_LDA(  int *, ___pcnid,A0),
AROS_LDA(  int *, ___pmnid,A1),
AROS_LDA(  EVP_PBE_KEYGEN **, ___pkeygen,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509_CRL_get0_by_cert,
AROS_LDA(  X509_CRL *, ___crl,A0),
AROS_LDA(  X509_REVOKED **, ___ret,A1),
AROS_LDA(  X509 *, ___x,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,EVP_PKEY_derive,
AROS_LDA(  EVP_PKEY_CTX *, ___ctx,A0),
AROS_LDA(  unsigned char *, ___key,A1),
AROS_LDA(  size_t *, ___keylen,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_TS_REQ,
AROS_LDA(  const TS_REQ *, ___a,A0),
AROS_LDA(  unsigned char **, ___pp,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(X509_EXTENSION * ,TS_TST_INFO_delete_ext,
AROS_LDA(  TS_TST_INFO *, ___a,A0),
AROS_LDA(  int, ___loc,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,ESS_ISSUER_SERIAL_free,
AROS_LDA(  ESS_ISSUER_SERIAL *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,ASN1_PCTX_set_str_flags,
AROS_LDA(  ASN1_PCTX *, ___p,A0),
AROS_LDA(  unsigned long, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,TS_CONF_set_signer_key,
AROS_LDA(  CONF *, ___conf,A0),
AROS_LDA(  const char *, ___section,A1),
AROS_LDA(  const char *, ___key,A2),
AROS_LDA(  const char *, ___pass,A3),
AROS_LDA(  TS_RESP_CTX *, ___ctx,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const ASN1_INTEGER * ,TS_ACCURACY_get_millis,
AROS_LDA(  const TS_ACCURACY *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(PKCS7 * ,TS_RESP_get_token,
AROS_LDA(  TS_RESP *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(TS_ACCURACY * ,TS_ACCURACY_dup,
AROS_LDA(  TS_ACCURACY *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,X509_CRL_set_default_method,
AROS_LDA(  const X509_CRL_METHOD *, ___meth,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,TS_RESP_free,
AROS_LDA(  TS_RESP *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,ISSUING_DIST_POINT_free,
AROS_LDA(  ISSUING_DIST_POINT *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(ESS_ISSUER_SERIAL * ,ESS_ISSUER_SERIAL_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,PKCS7_add1_attrib_digest,
AROS_LDA(  PKCS7_SIGNER_INFO *, ___si,A0),
AROS_LDA(  const unsigned char *, ___md,A1),
AROS_LDA(  int, ___mdlen,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,TS_RESP_CTX_add_md,
AROS_LDA(  TS_RESP_CTX *, ___ctx,A0),
AROS_LDA(  const EVP_MD *, ___md,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(TS_TST_INFO * ,TS_TST_INFO_dup,
AROS_LDA(  TS_TST_INFO *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,PEM_write_bio_Parameters,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  EVP_PKEY *, ___x,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(TS_ACCURACY * ,TS_TST_INFO_get_accuracy,
AROS_LDA(  TS_TST_INFO *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509_CRL_get0_by_serial,
AROS_LDA(  X509_CRL *, ___crl,A0),
AROS_LDA(  X509_REVOKED **, ___ret,A1),
AROS_LDA(  ASN1_INTEGER *, ___serial,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,TS_TST_INFO_set_version,
AROS_LDA(  TS_TST_INFO *, ___a,A0),
AROS_LDA(  long, ___version,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(TS_TST_INFO * ,TS_RESP_CTX_get_tst_info,
AROS_LDA(  TS_RESP_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,TS_RESP_verify_signature,
AROS_LDA(  PKCS7 *, ___token,A0),
AROS_LDA(  STACK_OF(X509) *, ___certs,A1),
AROS_LDA(  X509_STORE *, ___store,A2),
AROS_LDA(  X509 **, ___signer_out,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(GENERAL_NAME * ,TS_TST_INFO_get_tsa,
AROS_LDA(  TS_TST_INFO *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(TS_STATUS_INFO * ,TS_STATUS_INFO_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR ,EVP_PKEY_CTX_get_cb,
AROS_LDA(  EVP_PKEY_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void * ,TS_REQ_get_ext_d2i,
AROS_LDA(  TS_REQ *, ___a,A0),
AROS_LDA(  int, ___nid,D0),
AROS_LDA(  int *, ___crit,A1),
AROS_LDA(  int *, ___idx,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,GENERAL_NAME_set0_othername,
AROS_LDA(  GENERAL_NAME *, ___gen,A0),
AROS_LDA(  ASN1_OBJECT *, ___oid,A1),
AROS_LDA(  ASN1_TYPE *, ___value,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,TS_TST_INFO_get_ext_count,
AROS_LDA(  TS_TST_INFO *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(TS_REQ * ,TS_RESP_CTX_get_request,
AROS_LDA(  TS_RESP_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,EVP_PKEY_meth_set_signctx,
AROS_LDA(  EVP_PKEY_METHOD *, ___pmeth,A0),
AROS_LDA(  APTR,___signctx_init,A1),
AROS_LDA(  APTR,___signctx,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,EVP_PKEY_asn1_copy,
AROS_LDA(  EVP_PKEY_ASN1_METHOD *, ___dst,A0),
AROS_LDA(  const EVP_PKEY_ASN1_METHOD *, ___src,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ASN1_TYPE_cmp,
AROS_LDA(  const ASN1_TYPE *, ___a,A0),
AROS_LDA(  const ASN1_TYPE *, ___b,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,EVP_CIPHER_do_all_sorted,
AROS_LDA(  APTR,___fn,A0),
AROS_LDA(  void *, ___arg,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,EVP_PKEY_CTX_free,
AROS_LDA(  EVP_PKEY_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(STACK_OF(X509) * ,X509_STORE_CTX_get1_certs,
AROS_LDA(  X509_STORE_CTX *, ___st,A0),
AROS_LDA(  X509_NAME *, ___nm,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EVP_PKEY_CTX_get_operation,
AROS_LDA(  EVP_PKEY_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(ESS_SIGNING_CERT * ,d2i_ESS_SIGNING_CERT,
AROS_LDA(  ESS_SIGNING_CERT **, ___a,A0),
AROS_LDA(  const unsigned char **, ___pp,A1),
AROS_LDA(  long, ___length,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,TS_CONF_set_ordering,
AROS_LDA(  CONF *, ___conf,A0),
AROS_LDA(  const char *, ___section,A1),
AROS_LDA(  TS_RESP_CTX *, ___ctx,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,EVP_PBE_alg_add_type,
AROS_LDA(  int, ___pbe_type,D0),
AROS_LDA(  int, ___pbe_nid,D1),
AROS_LDA(  int, ___cipher_nid,D2),
AROS_LDA(  int, ___md_nid,D3),
AROS_LDA(  EVP_PBE_KEYGEN *, ___keygen,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,TS_REQ_set_version,
AROS_LDA(  TS_REQ *, ___a,A0),
AROS_LDA(  long, ___version,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void * ,EVP_PKEY_get0,
AROS_LDA(  EVP_PKEY *, ___pkey,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,BIO_asn1_set_suffix,
AROS_LDA(  BIO *, ___b,A0),
AROS_LDA(  asn1_ps_func *, ___suffix,A1),
AROS_LDA(  asn1_ps_func *, ___suffix_free,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_TS_STATUS_INFO,
AROS_LDA(  const TS_STATUS_INFO *, ___a,A0),
AROS_LDA(  unsigned char **, ___pp,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,EVP_MD_do_all,
AROS_LDA(  APTR,___fn,A0),
AROS_LDA(  void *, ___arg,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,TS_TST_INFO_set_accuracy,
AROS_LDA(  TS_TST_INFO *, ___a,A0),
AROS_LDA(  TS_ACCURACY *, ___accuracy,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,PKCS7_add_attrib_content_type,
AROS_LDA(  PKCS7_SIGNER_INFO *, ___si,A0),
AROS_LDA(  ASN1_OBJECT *, ___coid,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EVP_PKEY_meth_add0,
AROS_LDA(  const EVP_PKEY_METHOD *, ___pmeth,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,TS_TST_INFO_set_tsa,
AROS_LDA(  TS_TST_INFO *, ___a,A0),
AROS_LDA(  GENERAL_NAME *, ___tsa,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(EVP_PKEY_METHOD * ,EVP_PKEY_meth_new,
AROS_LDA(  int, ___id,D0),
AROS_LDA(  int, ___flags,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,TS_CONF_set_accuracy,
AROS_LDA(  CONF *, ___conf,A0),
AROS_LDA(  const char *, ___section,A1),
AROS_LDA(  TS_RESP_CTX *, ___ctx,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,ASN1_PCTX_set_oid_flags,
AROS_LDA(  ASN1_PCTX *, ___p,A0),
AROS_LDA(  unsigned long, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ESS_SIGNING_CERT * ,ESS_SIGNING_CERT_dup,
AROS_LDA(  ESS_SIGNING_CERT *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(TS_REQ * ,d2i_TS_REQ_bio,
AROS_LDA(  BIO *, ___fp,A0),
AROS_LDA(  TS_REQ **, ___a,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(ASN1_TIME * ,X509_time_adj_ex,
AROS_LDA(  ASN1_TIME *, ___s,A0),
AROS_LDA(  int, ___offset_day,D0),
AROS_LDA(  long, ___offset_sec,D1),
AROS_LDA(  time_t *, ___t,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,TS_RESP_CTX_add_flags,
AROS_LDA(  TS_RESP_CTX *, ___ctx,A0),
AROS_LDA(  int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(TS_STATUS_INFO * ,d2i_TS_STATUS_INFO,
AROS_LDA(  TS_STATUS_INFO **, ___a,A0),
AROS_LDA(  const unsigned char **, ___pp,A1),
AROS_LDA(  long, ___length,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,TS_MSG_IMPRINT_set_msg,
AROS_LDA(  TS_MSG_IMPRINT *, ___a,A0),
AROS_LDA(  unsigned char *, ___d,A1),
AROS_LDA(  int, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,BIO_asn1_get_suffix,
AROS_LDA(  BIO *, ___b,A0),
AROS_LDA(  asn1_ps_func **, ___psuffix,A1),
AROS_LDA(  asn1_ps_func **, ___psuffix_free,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,TS_REQ_free,
AROS_LDA(  TS_REQ *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,EVP_PKEY_meth_free,
AROS_LDA(  EVP_PKEY_METHOD *, ___pmeth,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(STACK_OF(X509_EXTENSION) * ,TS_REQ_get_exts,
AROS_LDA(  TS_REQ *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,TS_RESP_CTX_set_clock_precision_digits,
AROS_LDA(  TS_RESP_CTX *, ___ctx,A0),
AROS_LDA(  unsigned, ___clock_precision_digits,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,TS_RESP_CTX_add_failure_info,
AROS_LDA(  TS_RESP_CTX *, ___ctx,A0),
AROS_LDA(  int, ___failure,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_TS_RESP_bio,
AROS_LDA(  BIO *, ___fp,A0),
AROS_LDA(  TS_RESP *, ___a,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(EVP_PKEY * ,EVP_PKEY_CTX_get0_peerkey,
AROS_LDA(  EVP_PKEY_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(TS_REQ * ,TS_REQ_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(TS_MSG_IMPRINT * ,TS_MSG_IMPRINT_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const EVP_PKEY_METHOD * ,EVP_PKEY_meth_find,
AROS_LDA(  int, ___type,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EVP_PKEY_id,
AROS_LDA(  const EVP_PKEY *, ___pkey,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,TS_TST_INFO_set_serial,
AROS_LDA(  TS_TST_INFO *, ___a,A0),
AROS_LDA(  const ASN1_INTEGER *, ___serial,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(GENERAL_NAME * ,a2i_GENERAL_NAME,
AROS_LDA(  GENERAL_NAME *, ___out,A0),
AROS_LDA(  const X509V3_EXT_METHOD *, ___method,A1),
AROS_LDA(  X509V3_CTX *, ___ctx,A2),
AROS_LDA(  int, ___gen_type,D0),
AROS_LDA(  const char *, ___value,A3),
AROS_LDA(  int, ___is_nc,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,TS_CONF_set_crypto_device,
AROS_LDA(  CONF *, ___conf,A0),
AROS_LDA(  const char *, ___section,A1),
AROS_LDA(  const char *, ___device,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EVP_PKEY_verify_init,
AROS_LDA(  EVP_PKEY_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,TS_CONF_set_policies,
AROS_LDA(  CONF *, ___conf,A0),
AROS_LDA(  const char *, ___section,A1),
AROS_LDA(  TS_RESP_CTX *, ___ctx,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(ASN1_PCTX * ,ASN1_PCTX_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,ESS_CERT_ID_free,
AROS_LDA(  ESS_CERT_ID *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,TS_MSG_IMPRINT_free,
AROS_LDA(  TS_MSG_IMPRINT *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,TS_VERIFY_CTX_init,
AROS_LDA(  TS_VERIFY_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,PKCS7_stream,
AROS_LDA(  unsigned char ***, ___boundary,A0),
AROS_LDA(  PKCS7 *, ___p7,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,TS_RESP_CTX_set_certs,
AROS_LDA(  TS_RESP_CTX *, ___ctx,A0),
AROS_LDA(  STACK_OF(X509) *, ___certs,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,TS_CONF_set_def_policy,
AROS_LDA(  CONF *, ___conf,A0),
AROS_LDA(  const char *, ___section,A1),
AROS_LDA(  const char *, ___policy,A2),
AROS_LDA(  TS_RESP_CTX *, ___ctx,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(ASN1_GENERALIZEDTIME * ,ASN1_GENERALIZEDTIME_adj,
AROS_LDA(  ASN1_GENERALIZEDTIME *, ___s,A0),
AROS_LDA(  time_t, ___t,D0),
AROS_LDA(  int, ___offset_day,D1),
AROS_LDA(  long, ___offset_sec,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,TS_ACCURACY_free,
AROS_LDA(  TS_ACCURACY *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(TS_TST_INFO * ,TS_RESP_get_tst_info,
AROS_LDA(  TS_RESP *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EVP_PKEY_derive_set_peer,
AROS_LDA(  EVP_PKEY_CTX *, ___ctx,A0),
AROS_LDA(  EVP_PKEY *, ___peer,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(EVP_PKEY * ,PEM_read_bio_Parameters,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  EVP_PKEY **, ___x,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,TS_CONF_set_clock_precision_digits,
AROS_LDA(  CONF *, ___conf,A0),
AROS_LDA(  const char *, ___section,A1),
AROS_LDA(  TS_RESP_CTX *, ___ctx,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ESS_ISSUER_SERIAL * ,ESS_ISSUER_SERIAL_dup,
AROS_LDA(  ESS_ISSUER_SERIAL *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const ASN1_INTEGER * ,TS_ACCURACY_get_micros,
AROS_LDA(  const TS_ACCURACY *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(unsigned long ,ASN1_PCTX_get_str_flags,
AROS_LDA(  const ASN1_PCTX *, ___p,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,NAME_CONSTRAINTS_check,
AROS_LDA(  X509 *, ___x,A0),
AROS_LDA(  NAME_CONSTRAINTS *, ___nc,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,ASN1_BIT_STRING_check,
AROS_LDA(  const ASN1_BIT_STRING *, ___a,A0),
AROS_LDA(  const unsigned char *, ___flags,A1),
AROS_LDA(  int, ___flags_len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_check_akid,
AROS_LDA(  X509 *, ___issuer,A0),
AROS_LDA(  AUTHORITY_KEYID *, ___akid,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,ASN1_PCTX_free,
AROS_LDA(  ASN1_PCTX *, ___p,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int ,PEM_write_bio_ASN1_stream,
AROS_LDA(  BIO *, ___out,A0),
AROS_LDA(  ASN1_VALUE *, ___val,A1),
AROS_LDA(  BIO *, ___in,A2),
AROS_LDA(  int, ___flags,D0),
AROS_LDA(  const char *, ___hdr,A3),
AROS_LDA(  const ASN1_ITEM *, ___it,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,i2d_ASN1_bio_stream,
AROS_LDA(  BIO *, ___out,A0),
AROS_LDA(  ASN1_VALUE *, ___val,A1),
AROS_LDA(  BIO *, ___in,A2),
AROS_LDA(  int, ___flags,D0),
AROS_LDA(  const ASN1_ITEM *, ___it,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,TS_X509_ALGOR_print_bio,
AROS_LDA(  BIO *, ___bio,A0),
AROS_LDA(  const X509_ALGOR *, ___alg,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,EVP_PKEY_meth_set_cleanup,
AROS_LDA(EVP_PKEY_METHOD *, ___pmeth,A0),
AROS_LDA(APTR, ___cleanup, A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,EVP_PKEY_asn1_free,
AROS_LDA(  EVP_PKEY_ASN1_METHOD *, ___ameth,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,ESS_SIGNING_CERT_free,
AROS_LDA(  ESS_SIGNING_CERT *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,TS_TST_INFO_set_msg_imprint,
AROS_LDA(  TS_TST_INFO *, ___a,A0),
AROS_LDA(  TS_MSG_IMPRINT *, ___msg_imprint,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,GENERAL_NAME_cmp,
AROS_LDA(  GENERAL_NAME *, ___a,A0),
AROS_LDA(  GENERAL_NAME *, ___b,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(ASN1_SEQUENCE_ANY * ,d2i_ASN1_SET_ANY,
AROS_LDA(  ASN1_SEQUENCE_ANY **, ___a,A0),
AROS_LDA(  const unsigned char **, ___pp,A1),
AROS_LDA(  long, ___length,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(ASN1_SEQUENCE_ANY * ,d2i_ASN1_SEQUENCE_ANY,
AROS_LDA(  ASN1_SEQUENCE_ANY **, ___a,A0),
AROS_LDA(  const unsigned char **, ___pp,A1),
AROS_LDA(  long, ___length,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,GENERAL_NAME_get0_otherName,
AROS_LDA(  const GENERAL_NAME *, ___gen,A0),
AROS_LDA(  ASN1_OBJECT **, ___poid,A1),
AROS_LDA(  ASN1_TYPE **, ___pvalue,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(ESS_CERT_ID * ,d2i_ESS_CERT_ID,
AROS_LDA(  ESS_CERT_ID **, ___a,A0),
AROS_LDA(  const unsigned char **, ___pp,A1),
AROS_LDA(  long, ___length,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,OBJ_find_sigid_algs,
AROS_LDA(  int, ___signid,D0),
AROS_LDA(  int *, ___pdig_nid,A0),
AROS_LDA(  int *, ___ppkey_nid,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,EVP_PKEY_meth_set_keygen,
AROS_LDA(  EVP_PKEY_METHOD *, ___pmeth,A0),
AROS_LDA(  APTR,___keygen_init,A1),
AROS_LDA(  APTR,___keygen,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD8(int ,PKCS5_PBKDF2_HMAC,
AROS_LDA(  const char *, ___pass,A0),
AROS_LDA(  int, ___passlen,D0),
AROS_LDA(  const unsigned char *, ___salt,A1),
AROS_LDA(  int, ___saltlen,D1),
AROS_LDA(  int, ___iter,D2),
AROS_LDA(  const EVP_MD *, ___digest,A2),
AROS_LDA(  int, ___keylen,D3),
AROS_LDA(  unsigned char *, ___out,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EVP_PKEY_paramgen,
AROS_LDA(  EVP_PKEY_CTX *, ___ctx,A0),
AROS_LDA(  EVP_PKEY **, ___ppkey,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,EVP_PKEY_meth_set_paramgen,
AROS_LDA(  EVP_PKEY_METHOD *, ___pmeth,A0),
AROS_LDA(  APTR,___paramgen_init,A1),
AROS_LDA(  APTR,___paramgen,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(BIO * ,BIO_new_PKCS7,
AROS_LDA(  BIO *, ___out,A0),
AROS_LDA(  PKCS7 *, ___p7,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,EVP_PKEY_verify_recover,
AROS_LDA(  EVP_PKEY_CTX *, ___ctx,A0),
AROS_LDA(  unsigned char *, ___rout,A1),
AROS_LDA(  size_t *, ___routlen,A2),
AROS_LDA(  const unsigned char *, ___sig,A3),
AROS_LDA(  size_t, ___siglen,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,TS_ext_print_bio,
AROS_LDA(  BIO *, ___bio,A0),
AROS_LDA(  STACK_OF(X509_EXTENSION) *, ___extensions,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,TS_ASN1_INTEGER_print_bio,
AROS_LDA(  BIO *, ___bio,A0),
AROS_LDA(  const ASN1_INTEGER *, ___num,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EVP_PKEY_set_type,
AROS_LDA(  EVP_PKEY *, ___pkey,A0),
AROS_LDA(  int, ___type,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,TS_ACCURACY_set_micros,
AROS_LDA(  TS_ACCURACY *, ___a,A0),
AROS_LDA(  const ASN1_INTEGER *, ___micros,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(TS_VERIFY_CTX * ,TS_REQ_to_TS_VERIFY_CTX,
AROS_LDA(  TS_REQ *, ___req,A0),
AROS_LDA(  TS_VERIFY_CTX *, ___ctx,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,EVP_PKEY_meth_set_copy,
AROS_LDA(  EVP_PKEY_METHOD *, ___pmeth,A0),
AROS_LDA(  APTR,___copy,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,ASN1_PCTX_set_cert_flags,
AROS_LDA(  ASN1_PCTX *, ___p,A0),
AROS_LDA(  unsigned long, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(X509_EXTENSION * ,TS_TST_INFO_get_ext,
AROS_LDA(  TS_TST_INFO *, ___a,A0),
AROS_LDA(  int, ___loc,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,EVP_PKEY_asn1_set_ctrl,
AROS_LDA(  EVP_PKEY_ASN1_METHOD *, ___ameth,A0),
AROS_LDA(  APTR,___pkey_ctrl,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,TS_TST_INFO_get_ext_by_critical,
AROS_LDA(  TS_TST_INFO *, ___a,A0),
AROS_LDA(  int, ___crit,D0),
AROS_LDA(  int, ___lastpos,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(EVP_PKEY_CTX * ,EVP_PKEY_CTX_new_id,
AROS_LDA(  int, ___id,D0),
AROS_LDA(  ENGINE *, ___e,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,TS_REQ_get_ext_by_OBJ,
AROS_LDA(  TS_REQ *, ___a,A0),
AROS_LDA(  const ASN1_OBJECT *, ___obj,A1),
AROS_LDA(  int, ___lastpos,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,TS_CONF_set_signer_cert,
AROS_LDA(  CONF *, ___conf,A0),
AROS_LDA(  const char *, ___section,A1),
AROS_LDA(  const char *, ___cert,A2),
AROS_LDA(  TS_RESP_CTX *, ___ctx,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(unsigned long ,X509_NAME_hash_old,
AROS_LDA(  X509_NAME *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ASN1_TIME_set_string,
AROS_LDA(  ASN1_TIME *, ___s,A0),
AROS_LDA(  const char *, ___str,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(unsigned long ,EVP_MD_flags,
AROS_LDA(  const EVP_MD *, ___md,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,TS_RESP_CTX_free,
AROS_LDA(  TS_RESP_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,OCSP_REQ_CTX_add1_header,
AROS_LDA(  OCSP_REQ_CTX *, ___rctx,A0),
AROS_LDA(  const char *, ___name,A1),
AROS_LDA(  const char *, ___value,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,OCSP_REQ_CTX_set1_req,
AROS_LDA(  OCSP_REQ_CTX *, ___rctx,A0),
AROS_LDA(  OCSP_REQUEST *, ___req,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,X509_STORE_set_verify_cb,
AROS_LDA(  X509_STORE *, ___ctx,A0),
AROS_LDA(  X509_STORE_CTX_verify_cb, ___verify_cb,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_CRL * ,X509_STORE_CTX_get0_current_crl,
AROS_LDA(  X509_STORE_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_STORE_CTX * ,X509_STORE_CTX_get0_parent_ctx,
AROS_LDA(  X509_STORE_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509 * ,X509_STORE_CTX_get0_current_issuer,
AROS_LDA(  X509_STORE_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EVP_CIPHER_CTX_copy,
AROS_LDA(  EVP_CIPHER_CTX *, ___out,A0),
AROS_LDA(  const EVP_CIPHER_CTX *, ___in,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR ,UI_method_get_prompt_constructor,
AROS_LDA(  const UI_METHOD *, ___method,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,UI_method_set_prompt_constructor,
AROS_LDA(  UI_METHOD *, ___method,A0),
AROS_LDA(  APTR,___prompt_constructor,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,EVP_read_pw_string_min,
AROS_LDA(  char *, ___buf,A0),
AROS_LDA(  int, ___minlen,D0),
AROS_LDA(  int, ___maxlen,D1),
AROS_LDA(  const char *, ___prompt,A1),
AROS_LDA(  int, ___verify,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(size_t ,CRYPTO_cts128_encrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  size_t, ___len,D0),
AROS_LDA(  const void *, ___key,A2),
AROS_LDA(  unsigned char *, ___ivec,A3),
AROS_LDA(  cbc128_f, ___cbc,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(size_t ,CRYPTO_cts128_decrypt_block,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  size_t, ___len,D0),
AROS_LDA(  const void *, ___key,A2),
AROS_LDA(  unsigned char *, ___ivec,A3),
AROS_LDA(  block128_f, ___block,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD8(void ,CRYPTO_cfb128_1_encrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  size_t, ___bits,D0),
AROS_LDA(  const void *, ___key,A2),
AROS_LDA(  unsigned char *, ___ivec,A3),
AROS_LDA(  int *, ___num,D1),
AROS_LDA(  int, ___enc,D2),
AROS_LDA(  block128_f, ___block,D3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(void ,CRYPTO_cbc128_encrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  size_t, ___len,D0),
AROS_LDA(  const void *, ___key,A2),
AROS_LDA(  unsigned char *, ___ivec,A3),
AROS_LDA(  block128_f, ___block,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD8(void ,CRYPTO_ctr128_encrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  size_t, ___len,D0),
AROS_LDA(  const void *, ___key,A2),
AROS_LDA(  unsigned char *, ___ivec,A3),
AROS_LDA(  unsigned char *, ___ecount_buf,D1),
AROS_LDA(  unsigned int *, ___num,D2),
AROS_LDA(  block128_f, ___block,D3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(void ,CRYPTO_ofb128_encrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  size_t, ___len,D0),
AROS_LDA(  const void *, ___key,A2),
AROS_LDA(  unsigned char *, ___ivec,A3),
AROS_LDA(  int *, ___num,D1),
AROS_LDA(  block128_f, ___block,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(size_t ,CRYPTO_cts128_decrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  size_t, ___len,D0),
AROS_LDA(  const void *, ___key,A2),
AROS_LDA(  unsigned char *, ___ivec,A3),
AROS_LDA(  cbc128_f, ___cbc,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(size_t ,CRYPTO_cts128_encrypt_block,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  size_t, ___len,D0),
AROS_LDA(  const void *, ___key,A2),
AROS_LDA(  unsigned char *, ___ivec,A3),
AROS_LDA(  block128_f, ___block,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(void ,CRYPTO_cbc128_decrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  size_t, ___len,D0),
AROS_LDA(  const void *, ___key,A2),
AROS_LDA(  unsigned char *, ___ivec,A3),
AROS_LDA(  block128_f, ___block,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD8(void ,CRYPTO_cfb128_encrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  size_t, ___len,D0),
AROS_LDA(  const void *, ___key,A2),
AROS_LDA(  unsigned char *, ___ivec,A3),
AROS_LDA(  int *, ___num,D1),
AROS_LDA(  int, ___enc,D2),
AROS_LDA(  block128_f, ___block,D3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD8(void ,CRYPTO_cfb128_8_encrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  size_t, ___length,D0),
AROS_LDA(  const void *, ___key,A2),
AROS_LDA(  unsigned char *, ___ivec,A3),
AROS_LDA(  int *, ___num,D1),
AROS_LDA(  int, ___enc,D2),
AROS_LDA(  block128_f, ___block,D3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,OPENSSL_memcmp,
AROS_LDA(  const void *, ___p1,A0),
AROS_LDA(  const void *, ___p2,A1),
AROS_LDA(  size_t, ___n,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(struct tm * ,OPENSSL_gmtime,
AROS_LDA(  const time_t *, ___timer,A0),
AROS_LDA(  struct tm *, ___result,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,OPENSSL_gmtime_adj,
AROS_LDA(  struct tm *, ___tm,A0),
AROS_LDA(  int, ___offset_day,D0),
AROS_LDA(  long, ___offset_sec,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,OPENSSL_gmtime_diff,
AROS_LDA(  int *, ___pday,A0),
AROS_LDA(  int *, ___psec,A1),
AROS_LDA(  const struct tm *, ___from,A2),
AROS_LDA(  const struct tm *, ___to,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,EVP_PKEY_meth_get0_info,
AROS_LDA(  int *, ___ppkey_id,A0),
AROS_LDA(  int *, ___pflags,A1),
AROS_LDA(  const EVP_PKEY_METHOD *, ___meth,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,EVP_PKEY_meth_copy,
AROS_LDA(  EVP_PKEY_METHOD *, ___dst,A0),
AROS_LDA(  const EVP_PKEY_METHOD *, ___src,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int ,RSA_padding_add_PKCS1_PSS_mgf1,
AROS_LDA(  RSA *, ___rsa,A0),
AROS_LDA(  unsigned char *, ___EM,A1),
AROS_LDA(  const unsigned char *, ___mHash,A2),
AROS_LDA(  const EVP_MD *, ___Hash,A3),
AROS_LDA(  const EVP_MD *, ___mgf1Hash,D0),
AROS_LDA(  int, ___sLen,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int ,RSA_verify_PKCS1_PSS_mgf1,
AROS_LDA(  RSA *, ___rsa,A0),
AROS_LDA(  const unsigned char *, ___mHash,A1),
AROS_LDA(  const EVP_MD *, ___Hash,A2),
AROS_LDA(  const EVP_MD *, ___mgf1Hash,A3),
AROS_LDA(  const unsigned char *, ___EM,D0),
AROS_LDA(  int, ___sLen,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,X509_ALGOR_set_md,
AROS_LDA(  X509_ALGOR *, ___alg,A0),
AROS_LDA(  const EVP_MD *, ___md,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,CMAC_CTX_copy,
AROS_LDA(  CMAC_CTX *, ___out,A0),
AROS_LDA(  const CMAC_CTX *, ___in,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,CMAC_CTX_free,
AROS_LDA(  CMAC_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(EVP_CIPHER_CTX * ,CMAC_CTX_get0_cipher_ctx,
AROS_LDA(  CMAC_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,CMAC_CTX_cleanup,
AROS_LDA(  CMAC_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,CMAC_Init,
AROS_LDA(  CMAC_CTX *, ___ctx,A0),
AROS_LDA(  const void *, ___key,A1),
AROS_LDA(  size_t, ___keylen,D0),
AROS_LDA(  const EVP_CIPHER *, ___cipher,A2),
AROS_LDA(  ENGINE *, ___impl,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,CMAC_Update,
AROS_LDA(  CMAC_CTX *, ___ctx,A0),
AROS_LDA(  const void *, ___data,A1),
AROS_LDA(  size_t, ___dlen,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,CMAC_resume,
AROS_LDA(  CMAC_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(CMAC_CTX * ,CMAC_CTX_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,CMAC_Final,
AROS_LDA(  CMAC_CTX *, ___ctx,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  size_t *, ___poutlen,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD8(void ,CRYPTO_ctr128_encrypt_ctr32,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  size_t, ___len,D0),
AROS_LDA(  const void *, ___key,A2),
AROS_LDA(  unsigned char *, ___ivec,A3),
AROS_LDA(  unsigned char *, ___ecount_buf,D1),
AROS_LDA(  unsigned int *, ___num,D2),
AROS_LDA(  ctr128_f, ___ctr,D3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,CRYPTO_gcm128_release,
AROS_LDA(  GCM128_CONTEXT *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,CRYPTO_ccm128_decrypt_ccm64,
AROS_LDA(  CCM128_CONTEXT *, ___ctx,A0),
AROS_LDA(  const unsigned char *, ___inp,A1),
AROS_LDA(  unsigned char *, ___out,A2),
AROS_LDA(  size_t, ___len,D0),
AROS_LDA(  ccm128_f, ___stream,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,CRYPTO_ccm128_encrypt,
AROS_LDA(  CCM128_CONTEXT *, ___ctx,A0),
AROS_LDA(  const unsigned char *, ___inp,A1),
AROS_LDA(  unsigned char *, ___out,A2),
AROS_LDA(  size_t, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,CRYPTO_gcm128_encrypt,
AROS_LDA(  GCM128_CONTEXT *, ___ctx,A0),
AROS_LDA(  const unsigned char *, ___in,A1),
AROS_LDA(  unsigned char *, ___out,A2),
AROS_LDA(  size_t, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int ,CRYPTO_xts128_encrypt,
AROS_LDA(  XTS128_CONTEXT *, ___ctx,A0),
AROS_LDA(  const unsigned char *, ___iv,A1),
AROS_LDA(  const unsigned char *, ___inp,A2),
AROS_LDA(  unsigned char *, ___out,A3),
AROS_LDA(  size_t, ___len,D0),
AROS_LDA(  int, ___enc,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(size_t ,CRYPTO_nistcts128_decrypt_block,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  size_t, ___len,D0),
AROS_LDA(  const void *, ___key,A2),
AROS_LDA(  unsigned char *, ___ivec,D1),
AROS_LDA(  block128_f, ___block,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,CRYPTO_gcm128_setiv,
AROS_LDA(  GCM128_CONTEXT *, ___ctx,A0),
AROS_LDA(  const unsigned char *, ___iv,A1),
AROS_LDA(  size_t, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(size_t ,CRYPTO_nistcts128_encrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  size_t, ___len,D0),
AROS_LDA(  const void *, ___key,A2),
AROS_LDA(  unsigned char *, ___ivec,A3),
AROS_LDA(  cbc128_f, ___cbc,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,CRYPTO_gcm128_tag,
AROS_LDA(  GCM128_CONTEXT *, ___ctx,A0),
AROS_LDA(  unsigned char *, ___tag,A1),
AROS_LDA(  size_t, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,CRYPTO_ccm128_encrypt_ccm64,
AROS_LDA(  CCM128_CONTEXT *, ___ctx,A0),
AROS_LDA(  const unsigned char *, ___inp,A1),
AROS_LDA(  unsigned char *, ___out,A2),
AROS_LDA(  size_t, ___len,D0),
AROS_LDA(  ccm128_f, ___stream,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,CRYPTO_ccm128_setiv,
AROS_LDA(  CCM128_CONTEXT *, ___ctx,A0),
AROS_LDA(  const unsigned char *, ___nonce,A1),
AROS_LDA(  size_t, ___nlen,D0),
AROS_LDA(  size_t, ___mlen,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(size_t ,CRYPTO_nistcts128_encrypt_block,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  size_t, ___len,D0),
AROS_LDA(  const void *, ___key,A2),
AROS_LDA(  unsigned char *, ___ivec,A3),
AROS_LDA(  block128_f, ___block,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,CRYPTO_gcm128_aad,
AROS_LDA(  GCM128_CONTEXT *, ___ctx,A0),
AROS_LDA(  const unsigned char *, ___aad,A1),
AROS_LDA(  size_t, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(void ,CRYPTO_ccm128_init,
AROS_LDA(  CCM128_CONTEXT *, ___ctx,A0),
AROS_LDA(  unsigned int, ___M,D0),
AROS_LDA(  unsigned int, ___L,D1),
AROS_LDA(  void *, ___key,A1),
AROS_LDA(  block128_f, ___block,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(size_t ,CRYPTO_nistcts128_decrypt,
AROS_LDA(  const unsigned char *, ___in,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  size_t, ___len,D0),
AROS_LDA(  const void *, ___key,A2),
AROS_LDA(  unsigned char *, ___ivec,A3),
AROS_LDA(  cbc128_f, ___cbc,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(GCM128_CONTEXT * ,CRYPTO_gcm128_new,
AROS_LDA(  void *, ___key,A0),
AROS_LDA(  block128_f, ___block,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(size_t ,CRYPTO_ccm128_tag,
AROS_LDA(  CCM128_CONTEXT *, ___ctx,A0),
AROS_LDA(  unsigned char *, ___tag,A1),
AROS_LDA(  size_t, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,CRYPTO_ccm128_decrypt,
AROS_LDA(  CCM128_CONTEXT *, ___ctx,A0),
AROS_LDA(  const unsigned char *, ___inp,A1),
AROS_LDA(  unsigned char *, ___out,A2),
AROS_LDA(  size_t, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,CRYPTO_ccm128_aad,
AROS_LDA(  CCM128_CONTEXT *, ___ctx,A0),
AROS_LDA(  const unsigned char *, ___aad,A1),
AROS_LDA(  size_t, ___alen,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,CRYPTO_gcm128_init,
AROS_LDA(  GCM128_CONTEXT *, ___ctx,A0),
AROS_LDA(  void *, ___key,A1),
AROS_LDA(  block128_f, ___block,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,CRYPTO_gcm128_decrypt,
AROS_LDA(  GCM128_CONTEXT *, ___ctx,A0),
AROS_LDA(  const unsigned char *, ___in,A1),
AROS_LDA(  unsigned char *, ___out,A2),
AROS_LDA(  size_t, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,CRYPTO_gcm128_decrypt_ctr32,
AROS_LDA(  GCM128_CONTEXT *, ___ctx,A0),
AROS_LDA(  const unsigned char *, ___in,A1),
AROS_LDA(  unsigned char *, ___out,A2),
AROS_LDA(  size_t, ___len,D0),
AROS_LDA(  ctr128_f, ___stream,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,CRYPTO_gcm128_encrypt_ctr32,
AROS_LDA(  GCM128_CONTEXT *, ___ctx,A0),
AROS_LDA(  const unsigned char *, ___in,A1),
AROS_LDA(  unsigned char *, ___out,A2),
AROS_LDA(  size_t, ___len,D0),
AROS_LDA(  ctr128_f, ___stream,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,CRYPTO_gcm128_finish,
AROS_LDA(  GCM128_CONTEXT *, ___ctx,A0),
AROS_LDA(  const unsigned char *, ___tag,A1),
AROS_LDA(  size_t, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(X509_ALGOR * ,PKCS5_pbkdf2_set,
AROS_LDA(  int, ___iter,D0),
AROS_LDA(  unsigned char *, ___salt,A0),
AROS_LDA(  int, ___saltlen,D1),
AROS_LDA(  int, ___prf_nid,D2),
AROS_LDA(  int, ___keylen,D3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(RSA_PSS_PARAMS * ,RSA_PSS_PARAMS_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(RSA_PSS_PARAMS * ,d2i_RSA_PSS_PARAMS,
AROS_LDA(  RSA_PSS_PARAMS **, ___a,A0),
AROS_LDA(  const unsigned char **, ___pp,A1),
AROS_LDA(  long, ___length,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,RSA_PSS_PARAMS_free,
AROS_LDA(  RSA_PSS_PARAMS *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_RSA_PSS_PARAMS,
AROS_LDA(  RSA_PSS_PARAMS *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,POLICY_MAPPING_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,NAME_CONSTRAINTS_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,ASN1_OCTET_STRING_NDEF_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,POLICY_CONSTRAINTS_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,POLICY_MAPPINGS_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,GENERAL_SUBTREE_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,X509_EXTENSIONS_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,X509_ALGORS_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,CMS_ContentInfo_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,CMS_ReceiptRequest_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,ASN1_SEQUENCE_ANY_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,ASN1_SET_ANY_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,ISSUING_DIST_POINT_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,RSA_PSS_PARAMS_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,PEM_write_bio_DHxparams,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  DH *, ___x,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_ALGOR_cmp,
AROS_LDA(  const X509_ALGOR *, ___a,A0),
AROS_LDA(  const X509_ALGOR *, ___b,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,ASN1_STRING_clear_free,
AROS_LDA(  ASN1_STRING *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,ASN1_TIME_diff,
AROS_LDA(  int *, ___pday,A0),
AROS_LDA(  int *, ___psec,A1),
AROS_LDA(  const ASN1_TIME *, ___from,A2),
AROS_LDA(  const ASN1_TIME *, ___to,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,BIO_hex_string,
AROS_LDA(  BIO *, ___out,A0),
AROS_LDA(  int, ___indent,D0),
AROS_LDA(  int, ___width,D1),
AROS_LDA(  unsigned char *, ___data,A1),
AROS_LDA(  int, ___datalen,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,CMS_RecipientEncryptedKey_cert_cmp,
AROS_LDA(  CMS_RecipientEncryptedKey *, ___rek,A0),
AROS_LDA(  X509 *, ___cert,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int ,CMS_RecipientEncryptedKey_get0_id,
AROS_LDA(  CMS_RecipientEncryptedKey *, ___rek,A0),
AROS_LDA(  ASN1_OCTET_STRING **, ___keyid,A1),
AROS_LDA(  ASN1_GENERALIZEDTIME **, ___tm,A2),
AROS_LDA(  CMS_OtherKeyAttribute **, ___other,A3),
AROS_LDA(  X509_NAME **, ___issuer,D0),
AROS_LDA(  ASN1_INTEGER **, ___sno,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,CMS_RecipientInfo_encrypt,
AROS_LDA(  CMS_ContentInfo *, ___cms,A0),
AROS_LDA(  CMS_RecipientInfo *, ___ri,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(EVP_PKEY_CTX * ,CMS_RecipientInfo_get0_pkey_ctx,
AROS_LDA(  CMS_RecipientInfo *, ___ri,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,CMS_RecipientInfo_kari_decrypt,
AROS_LDA(  CMS_ContentInfo *, ___cms,A0),
AROS_LDA(  CMS_RecipientInfo *, ___ri,A1),
AROS_LDA(  CMS_RecipientEncryptedKey *, ___rek,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,CMS_RecipientInfo_kari_get0_alg,
AROS_LDA(  CMS_RecipientInfo *, ___ri,A0),
AROS_LDA(  X509_ALGOR **, ___palg,A1),
AROS_LDA(  ASN1_OCTET_STRING **, ___pukm,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(EVP_CIPHER_CTX * ,CMS_RecipientInfo_kari_get0_ctx,
AROS_LDA(  CMS_RecipientInfo *, ___ri,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int ,CMS_RecipientInfo_kari_get0_orig_id,
AROS_LDA(  CMS_RecipientInfo *, ___ri,A0),
AROS_LDA(  X509_ALGOR **, ___pubalg,A1),
AROS_LDA(  ASN1_BIT_STRING **, ___pubkey,A2),
AROS_LDA(  ASN1_OCTET_STRING **, ___keyid,A3),
AROS_LDA(  X509_NAME **, ___issuer,D0),
AROS_LDA(  ASN1_INTEGER **, ___sno,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(STACK_OF(CMS_RecipientEncryptedKey) * ,CMS_RecipientInfo_kari_get0_reks,
AROS_LDA(  CMS_RecipientInfo *, ___ri,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,CMS_RecipientInfo_kari_orig_id_cmp,
AROS_LDA(  CMS_RecipientInfo *, ___ri,A0),
AROS_LDA(  X509 *, ___cert,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,CMS_RecipientInfo_kari_set0_pkey,
AROS_LDA(  CMS_RecipientInfo *, ___ri,A0),
AROS_LDA(  EVP_PKEY *, ___pk,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,CMS_SharedInfo_encode,
AROS_LDA(  unsigned char **, ___pder,A0),
AROS_LDA(  X509_ALGOR *, ___kekalg,A1),
AROS_LDA(  ASN1_OCTET_STRING *, ___ukm,A2),
AROS_LDA(  int, ___keylen,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(EVP_MD_CTX * ,CMS_SignerInfo_get0_md_ctx,
AROS_LDA(  CMS_SignerInfo *, ___si,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(EVP_PKEY_CTX * ,CMS_SignerInfo_get0_pkey_ctx,
AROS_LDA(  CMS_SignerInfo *, ___si,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ASN1_OCTET_STRING * ,CMS_SignerInfo_get0_signature,
AROS_LDA(  CMS_SignerInfo *, ___si,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(DH * ,d2i_DHxparams,
AROS_LDA(  DH **, ___a,A0),
AROS_LDA(  const unsigned char **, ___pp,A1),
AROS_LDA(  long, ___length,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_DHxparams,
AROS_LDA(  const DH *, ___dh,A0),
AROS_LDA(  unsigned char **, ___pp,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,DH_compute_key_padded,
AROS_LDA(  unsigned char *, ___key,A0),
AROS_LDA(  const BIGNUM *, ___pub_key,A1),
AROS_LDA(  DH *, ___dh,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(DH * ,DH_get_1024_160,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(DH * ,DH_get_2048_224,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(DH * ,DH_get_2048_256,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD8(int ,DH_KDF_X9_42,
AROS_LDA(  unsigned char *, ___out,A0),
AROS_LDA(  size_t, ___outlen,D0),
AROS_LDA(  const unsigned char *, ___Z,A1),
AROS_LDA(  size_t, ___Zlen,D1),
AROS_LDA(  ASN1_OBJECT *, ___key_oid,A2),
AROS_LDA(  const unsigned char *, ___ukm,A3),
AROS_LDA(  size_t, ___ukmlen,D2),
AROS_LDA(  const EVP_MD *, ___md,D3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char * ,EC_curve_nid2nist,
AROS_LDA(  int, ___nid,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EC_curve_nist2nid,
AROS_LDA(  const char *, ___name,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(BN_MONT_CTX * ,EC_GROUP_get_mont_data,
AROS_LDA(  const EC_GROUP *, ___group,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(int ,ECDH_KDF_X9_62,
AROS_LDA(  unsigned char *, ___out,A0),
AROS_LDA(  size_t, ___outlen,D0),
AROS_LDA(  const unsigned char *, ___Z,A1),
AROS_LDA(  size_t, ___Zlen,D1),
AROS_LDA(  const unsigned char *, ___sinfo,A2),
AROS_LDA(  size_t, ___sinfolen,D2),
AROS_LDA(  const EVP_MD *, ___md,D3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aes_128_cbc_hmac_sha256,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aes_128_wrap,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aes_192_wrap,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aes_256_cbc_hmac_sha256,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aes_256_wrap,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_des_ede3_wrap,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(size_t ,CRYPTO_128_unwrap,
AROS_LDA(  void *, ___key,A0),
AROS_LDA(  const unsigned char *, ___iv,A1),
AROS_LDA(  unsigned char *, ___out,A2),
AROS_LDA(  const unsigned char *, ___in,A3),
AROS_LDA(  size_t, ___inlen,D0),
AROS_LDA(  block128_f, ___block,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(size_t ,CRYPTO_128_wrap,
AROS_LDA(  void *, ___key,A0),
AROS_LDA(  const unsigned char *, ___iv,A1),
AROS_LDA(  unsigned char *, ___out,A2),
AROS_LDA(  const unsigned char *, ___in,A3),
AROS_LDA(  size_t, ___inlen,D0),
AROS_LDA(  block128_f, ___block,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(BIO * ,OCSP_REQ_CTX_get0_mem_bio,
AROS_LDA(  OCSP_REQ_CTX *, ___rctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,OCSP_REQ_CTX_http,
AROS_LDA(  OCSP_REQ_CTX *, ___rctx,A0),
AROS_LDA(  const char *, ___op,A1),
AROS_LDA(  const char *, ___path,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,OCSP_REQ_CTX_i2d,
AROS_LDA(  OCSP_REQ_CTX *, ___rctx,A0),
AROS_LDA(  const ASN1_ITEM *, ___it,A1),
AROS_LDA(  ASN1_VALUE *, ___val,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,OCSP_REQ_CTX_nbio,
AROS_LDA(  OCSP_REQ_CTX *, ___rctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,OCSP_REQ_CTX_nbio_d2i,
AROS_LDA(  OCSP_REQ_CTX *, ___rctx,A0),
AROS_LDA(  ASN1_VALUE **, ___pval,A1),
AROS_LDA(  const ASN1_ITEM *, ___it,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(OCSP_REQ_CTX * ,OCSP_REQ_CTX_new,
AROS_LDA(  BIO *, ___io,A0),
AROS_LDA(  int, ___maxline,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,OCSP_set_max_response_length,
AROS_LDA(  OCSP_REQ_CTX *, ___rctx,A0),
AROS_LDA(  unsigned long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(RSA_OAEP_PARAMS * ,d2i_RSA_OAEP_PARAMS,
AROS_LDA(  RSA_OAEP_PARAMS **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,RSA_OAEP_PARAMS_free,
AROS_LDA(  RSA_OAEP_PARAMS *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,RSA_OAEP_PARAMS_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(RSA_OAEP_PARAMS * ,RSA_OAEP_PARAMS_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD8(int ,RSA_padding_add_PKCS1_OAEP_mgf1,
AROS_LDA(  unsigned char *, ___to,A0),
AROS_LDA(  int, ___tlen,D0),
AROS_LDA(  const unsigned char *, ___from,A1),
AROS_LDA(  int, ___flen,D1),
AROS_LDA(  const unsigned char *, ___param,A2),
AROS_LDA(  int, ___plen,D2),
AROS_LDA(  const EVP_MD *, ___md,A3),
AROS_LDA(  const EVP_MD *, ___mgf1md,D3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD9(int ,RSA_padding_check_PKCS1_OAEP_mgf1,
AROS_LDA(  unsigned char *, ___to,A0),
AROS_LDA(  int, ___tlen,D0),
AROS_LDA(  const unsigned char *, ___from,A1),
AROS_LDA(  int, ___flen,D1),
AROS_LDA(  int, ___num,D2),
AROS_LDA(  const unsigned char *, ___param,A2),
AROS_LDA(  int, ___plen,D3),
AROS_LDA(  const EVP_MD *, ___md,A3),
AROS_LDA(  const EVP_MD *, ___mgf1md,D4),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OPENSSL_STACK * ,OPENSSL_sk_deep_copy,
AROS_LDA(  const OPENSSL_STACK *, ___sk,A0),
AROS_LDA(  OPENSSL_sk_copyfunc, ___c,A1),
AROS_LDA(  OPENSSL_sk_freefunc, ___f,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_re_X509_tbs,
AROS_LDA(  X509 *, ___x,A0),
AROS_LDA(  unsigned char **, ___pp,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,X509_chain_check_suiteb,
AROS_LDA(  int *, ___perror_depth,A0),
AROS_LDA(  X509 *, ___x,A1),
AROS_LDA(  STACK_OF(X509) *, ___chain,A2),
AROS_LDA(  unsigned long, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(STACK_OF(X509) * ,X509_chain_up_ref,
AROS_LDA(  STACK_OF(X509) *, ___chain,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509_CRL_check_suiteb,
AROS_LDA(  X509_CRL *, ___crl,A0),
AROS_LDA(  EVP_PKEY *, ___pk,A1),
AROS_LDA(  unsigned long, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(X509_CRL * ,X509_CRL_diff,
AROS_LDA(  APTR, ___base,A0),
AROS_LDA(  X509_CRL *, ___newer,A1),
AROS_LDA(  EVP_PKEY *, ___skey,A2),
AROS_LDA(  const EVP_MD *, ___md,A3),
AROS_LDA(  unsigned int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_CRL_http_nbio,
AROS_LDA(  OCSP_REQ_CTX *, ___rctx,A0),
AROS_LDA(  X509_CRL **, ___pcrl,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,X509_get0_signature,
AROS_LDA(  const ASN1_BIT_STRING **, ___psig,A0),
AROS_LDA(  const X509_ALGOR **, ___palg,A1),
AROS_LDA(  const X509 *, ___x,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,X509_get_signature_nid,
AROS_LDA(  const X509 *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_http_nbio,
AROS_LDA(  OCSP_REQ_CTX *, ___rctx,A0),
AROS_LDA(  X509 **, ___pcert,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_REVOKED * ,X509_REVOKED_dup,
AROS_LDA(  X509_REVOKED *, ___rev,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_STORE * ,X509_STORE_CTX_get0_store,
AROS_LDA(  X509_STORE_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509_VERIFY_PARAM_add1_host,
AROS_LDA(  X509_VERIFY_PARAM *, ___param,A0),
AROS_LDA(  const char *, ___name,A1),
AROS_LDA(  size_t, ___namelen,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const X509_VERIFY_PARAM * ,X509_VERIFY_PARAM_get0,
AROS_LDA(  int, ___id,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char * ,X509_VERIFY_PARAM_get0_name,
AROS_LDA(  const X509_VERIFY_PARAM *, ___param,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(char * ,X509_VERIFY_PARAM_get0_peername,
AROS_LDA(  X509_VERIFY_PARAM *, ___param,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(int ,X509_VERIFY_PARAM_get_count,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509_VERIFY_PARAM_set1_email,
AROS_LDA(  X509_VERIFY_PARAM *, ___param,A0),
AROS_LDA(  const char *, ___email,A1),
AROS_LDA(  size_t, ___emaillen,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509_VERIFY_PARAM_set1_host,
AROS_LDA(  X509_VERIFY_PARAM *, ___param,A0),
AROS_LDA(  const char *, ___name,A1),
AROS_LDA(  size_t, ___namelen,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509_VERIFY_PARAM_set1_ip,
AROS_LDA(  X509_VERIFY_PARAM *, ___param,A0),
AROS_LDA(  const unsigned char *, ___ip,A1),
AROS_LDA(  size_t, ___iplen,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_VERIFY_PARAM_set1_ip_asc,
AROS_LDA(  X509_VERIFY_PARAM *, ___param,A0),
AROS_LDA(  const char *, ___ipasc,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,X509_VERIFY_PARAM_set_hostflags,
AROS_LDA(  X509_VERIFY_PARAM *, ___param,A0),
AROS_LDA(  unsigned int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,X509_check_email,
AROS_LDA(  X509 *, ___x,A0),
AROS_LDA(  const char *, ___chk,A1),
AROS_LDA(  size_t, ___chklen,D0),
AROS_LDA(  unsigned int, ___flags,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,X509_check_host,
AROS_LDA(  X509 *, ___x,A0),
AROS_LDA(  const char *, ___chk,A1),
AROS_LDA(  size_t, ___chklen,D0),
AROS_LDA(  unsigned int, ___flags,D1),
AROS_LDA(  char **, ___peername,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,X509_check_ip,
AROS_LDA(  X509 *, ___x,A0),
AROS_LDA(  const unsigned char *, ___chk,A1),
AROS_LDA(  size_t, ___chklen,D0),
AROS_LDA(  unsigned int, ___flags,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509_check_ip_asc,
AROS_LDA(  X509 *, ___x,A0),
AROS_LDA(  const char *, ___ipasc,A1),
AROS_LDA(  unsigned int, ___flags,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,EVP_PKEY_asn1_set_item,
AROS_LDA(  EVP_PKEY_ASN1_METHOD *, ___ameth,A0),
AROS_LDA(  APTR,___item_verify,A1),
AROS_LDA(  APTR,___item_sign,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const SSL_METHOD * ,DTLS_client_method,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const SSL_METHOD * ,DTLS_method,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const SSL_METHOD * ,DTLS_server_method,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,SSL_certs_clear,
AROS_LDA(  SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(const SSL_CIPHER * ,SSL_CIPHER_find,
AROS_LDA(  SSL *, ___ssl,A0),
AROS_LDA(  const unsigned char *, ___ptr,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,SSL_CONF_cmd,
AROS_LDA(  SSL_CONF_CTX *, ___ctx,A0),
AROS_LDA(  const char *, ___cmd,A1),
AROS_LDA(  const char *, ___value,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,SSL_CONF_cmd_argv,
AROS_LDA(  SSL_CONF_CTX *, ___cctx,A0),
AROS_LDA(  int *, ___pargc,A1),
AROS_LDA(  char ***, ___pargv,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_CONF_cmd_value_type,
AROS_LDA(  SSL_CONF_CTX *, ___cctx,A0),
AROS_LDA(  const char *, ___cmd,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(unsigned int ,SSL_CONF_CTX_clear_flags,
AROS_LDA(  SSL_CONF_CTX *, ___cctx,A0),
AROS_LDA(  unsigned int, ___flags,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_CONF_CTX_finish,
AROS_LDA(  SSL_CONF_CTX *, ___cctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,SSL_CONF_CTX_free,
AROS_LDA(  SSL_CONF_CTX *, ___cctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(SSL_CONF_CTX * ,SSL_CONF_CTX_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_CONF_CTX_set1_prefix,
AROS_LDA(  SSL_CONF_CTX *, ___cctx,A0),
AROS_LDA(  const char *, ___pre,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(unsigned int ,SSL_CONF_CTX_set_flags,
AROS_LDA(  SSL_CONF_CTX *, ___cctx,A0),
AROS_LDA(  unsigned int, ___flags,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_CONF_CTX_set_ssl,
AROS_LDA(  SSL_CONF_CTX *, ___cctx,A0),
AROS_LDA(  SSL *, ___ssl,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_CONF_CTX_set_ssl_ctx,
AROS_LDA(  SSL_CONF_CTX *, ___cctx,A0),
AROS_LDA(  SSL_CTX *, ___ctx,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(int ,SSL_CTX_add_client_custom_ext,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  unsigned int, ___ext_type,D0),
AROS_LDA(  custom_ext_add_cb, ___add_cb,D1),
AROS_LDA(  custom_ext_free_cb, ___free_cb,D2),
AROS_LDA(  void *, ___add_arg,A1),
AROS_LDA(  custom_ext_parse_cb, ___parse_cb,D3),
AROS_LDA(  void *, ___parse_arg,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(int ,SSL_CTX_add_server_custom_ext,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  unsigned int, ___ext_type,D0),
AROS_LDA(  custom_ext_add_cb, ___add_cb,D1),
AROS_LDA(  custom_ext_free_cb, ___free_cb,D2),
AROS_LDA(  void *, ___add_arg,A1),
AROS_LDA(  custom_ext_parse_cb, ___parse_cb,D3),
AROS_LDA(  void *, ___parse_arg,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509 * ,SSL_CTX_get0_certificate,
AROS_LDA(  const SSL_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_VERIFY_PARAM * ,SSL_CTX_get0_param,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(EVP_PKEY * ,SSL_CTX_get0_privatekey,
AROS_LDA(  const SSL_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const SSL_METHOD * ,SSL_CTX_get_ssl_method,
AROS_LDA(  const SSL_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,SSL_CTX_set_alpn_protos,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  const unsigned char *, ___protos,A1),
AROS_LDA(  unsigned int, ___protos_len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,SSL_CTX_set_alpn_select_cb,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  SSL_CTX_alpn_select_cb_func, ___cb,A1),
AROS_LDA(  void *, ___arg,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,SSL_CTX_set_cert_cb,
AROS_LDA(  SSL_CTX *, ___c,A0),
AROS_LDA(  APTR,___cb,A1),
AROS_LDA(  void *, ___arg,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,SSL_CTX_use_serverinfo,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  const unsigned char *, ___serverinfo,A1),
AROS_LDA(  size_t, ___serverinfo_length,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_CTX_use_serverinfo_file,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  const char *, ___file,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_extension_supported,
AROS_LDA(  unsigned int, ___ext_type,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,SSL_get0_alpn_selected,
AROS_LDA(  const SSL *, ___ssl,A0),
AROS_LDA(  const unsigned char **, ___data,A1),
AROS_LDA(  unsigned int *, ___len,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_VERIFY_PARAM * ,SSL_get0_param,
AROS_LDA(  SSL *, ___ssl,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_is_server,
AROS_LDA(  const SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,SSL_set_alpn_protos,
AROS_LDA(  SSL *, ___ssl,A0),
AROS_LDA(  const unsigned char *, ___protos,A1),
AROS_LDA(  unsigned int, ___protos_len,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,SSL_set_cert_cb,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  APTR,___cb,A1),
AROS_LDA(  void *, ___arg,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,SSL_check_chain,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  X509 *, ___x,A1),
AROS_LDA(  EVP_PKEY *, ___pk,A2),
AROS_LDA(  STACK_OF(X509) *, ___chain,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(int ,SSL_get_shared_sigalgs,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  int, ___idx,D0),
AROS_LDA(  int *, ___psign,A1),
AROS_LDA(  int *, ___phash,A2),
AROS_LDA(  int *, ___psignandhash,A3),
AROS_LDA(  unsigned char *, ___rsig,D1),
AROS_LDA(  unsigned char *, ___rhash,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(int ,SSL_get_sigalgs,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  int, ___idx,D0),
AROS_LDA(  int *, ___psign,A1),
AROS_LDA(  int *, ___phash,A2),
AROS_LDA(  int *, ___psignandhash,A3),
AROS_LDA(  unsigned char *, ___rsig,D1),
AROS_LDA(  unsigned char *, ___rhash,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(void ,ASN1_add_stable_module,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,ASN1_buf_print,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  const unsigned char *, ___buf,A1),
AROS_LDA(  size_t, ___buflen,A2),
AROS_LDA(  int, ___off,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ASN1_ENUMERATED_get_int64,
AROS_LDA(  int64_t *, ___pr,A0),
AROS_LDA(  const ASN1_ENUMERATED *, ___a,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ASN1_ENUMERATED_set_int64,
AROS_LDA(  ASN1_ENUMERATED *, ___a,A0),
AROS_LDA(  int64_t, ___r,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ASN1_INTEGER_get_int64,
AROS_LDA(  int64_t *, ___pr,A0),
AROS_LDA(  const ASN1_INTEGER *, ___a,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ASN1_INTEGER_get_uint64,
AROS_LDA(  uint64_t *, ___pr,A0),
AROS_LDA(  const ASN1_INTEGER *, ___a,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ASN1_INTEGER_set_int64,
AROS_LDA(  ASN1_INTEGER *, ___a,A0),
AROS_LDA(  int64_t, ___r,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ASN1_INTEGER_set_uint64,
AROS_LDA(  ASN1_INTEGER *, ___a,A0),
AROS_LDA(  uint64_t, ___r,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,ASN1_SCTX_free,
AROS_LDA(  ASN1_SCTX *, ___p,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void * ,ASN1_SCTX_get_app_data,
AROS_LDA(  ASN1_SCTX *, ___p,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(unsigned long ,ASN1_SCTX_get_flags,
AROS_LDA(  ASN1_SCTX *, ___p,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const ASN1_ITEM * ,ASN1_SCTX_get_item,
AROS_LDA(  ASN1_SCTX *, ___p,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const ASN1_TEMPLATE * ,ASN1_SCTX_get_template,
AROS_LDA(  ASN1_SCTX *, ___p,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ASN1_SCTX * ,ASN1_SCTX_new,
AROS_LDA(  APTR,___scan_cb,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,ASN1_SCTX_set_app_data,
AROS_LDA(  ASN1_SCTX *, ___p,A0),
AROS_LDA(  void *, ___data,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ASN1_str2mask,
AROS_LDA(  const char *, ___str,A0),
AROS_LDA(  unsigned long *, ___pmask,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(ASN1_TYPE * ,ASN1_TYPE_pack_sequence,
AROS_LDA(  const ASN1_ITEM *, ___it,A0),
AROS_LDA(  void *, ___s,A1),
AROS_LDA(  ASN1_TYPE **, ___t,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void * ,ASN1_TYPE_unpack_sequence,
AROS_LDA(  const ASN1_ITEM *, ___it,A0),
AROS_LDA(  const ASN1_TYPE *, ___t,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(void ,ASYNC_block_pause,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(void ,ASYNC_cleanup_thread,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(ASYNC_JOB * ,ASYNC_get_current_job,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ASYNC_init_thread,
AROS_LDA(  size_t, ___max_size,D0),
AROS_LDA(  size_t, ___init_size,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(int ,ASYNC_pause_job,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int ,ASYNC_start_job,
AROS_LDA(  ASYNC_JOB **, ___job,A0),
AROS_LDA(  ASYNC_WAIT_CTX *, ___ctx,A1),
AROS_LDA(  int *, ___ret,A2),
AROS_LDA(  APTR,___func,A3),
AROS_LDA(  void *, ___args,D0),
AROS_LDA(  size_t, ___size,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(void ,ASYNC_unblock_pause,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(int ,ERR_load_ASYNC_strings,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,BIO_accept_ex,
AROS_LDA(  int, ___accept_sock,D0),
AROS_LDA(  BIO_ADDR *, ___addr,A0),
AROS_LDA(  int, ___options,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,BIO_ADDR_clear,
AROS_LDA(  BIO_ADDR *, ___ap,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,BIO_ADDR_family,
AROS_LDA(  const BIO_ADDR *, ___ap,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,BIO_ADDR_free,
AROS_LDA(  BIO_ADDR *, ___ap,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(char * ,BIO_ADDR_hostname_string,
AROS_LDA(  const BIO_ADDR *, ___ap,A0),
AROS_LDA(  int, ___numeric,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(BIO_ADDR * ,BIO_ADDR_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(char * ,BIO_ADDR_path_string,
AROS_LDA(  const BIO_ADDR *, ___ap,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,BIO_ADDR_rawaddress,
AROS_LDA(  const BIO_ADDR *, ___ap,A0),
AROS_LDA(  void *, ___p,A1),
AROS_LDA(  size_t *, ___l,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,BIO_ADDR_rawmake,
AROS_LDA(  BIO_ADDR *, ___ap,A0),
AROS_LDA(  int, ___family,D0),
AROS_LDA(  const void *, ___where,A1),
AROS_LDA(  size_t, ___wherelen,D1),
AROS_LDA(  unsigned short, ___port,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(unsigned short ,BIO_ADDR_rawport,
AROS_LDA(  const BIO_ADDR *, ___ap,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(char * ,BIO_ADDR_service_string,
AROS_LDA(  const BIO_ADDR *, ___ap,A0),
AROS_LDA(  int, ___numeric,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const BIO_ADDR * ,BIO_ADDRINFO_address,
AROS_LDA(  const BIO_ADDRINFO *, ___bai,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,BIO_ADDRINFO_family,
AROS_LDA(  const BIO_ADDRINFO *, ___bai,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,BIO_ADDRINFO_free,
AROS_LDA(  BIO_ADDRINFO *, ___bai,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const BIO_ADDRINFO * ,BIO_ADDRINFO_next,
AROS_LDA(  const BIO_ADDRINFO *, ___bai,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,BIO_ADDRINFO_protocol,
AROS_LDA(  const BIO_ADDRINFO *, ___bai,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,BIO_ADDRINFO_socktype,
AROS_LDA(  const BIO_ADDRINFO *, ___bai,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,BIO_closesocket,
AROS_LDA(  int, ___sock,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,BIO_connect,
AROS_LDA(  int, ___sock,D0),
AROS_LDA(  const BIO_ADDR *, ___addr,A0),
AROS_LDA(  int, ___options,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,BIO_listen,
AROS_LDA(  int, ___sock,D0),
AROS_LDA(  const BIO_ADDR *, ___addr,A0),
AROS_LDA(  int, ___options,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int ,BIO_lookup,
AROS_LDA(  const char *, ___host,A0),
AROS_LDA(  const char *, ___service,A1),
AROS_LDA(  enum BIO_lookup_type, ___lookup_type,D0),
AROS_LDA(  int, ___family,D1),
AROS_LDA(  int, ___socktype,D2),
AROS_LDA(  BIO_ADDRINFO **, ___res,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,BIO_parse_hostserv,
AROS_LDA(  const char *, ___hostserv,A0),
AROS_LDA(  char **, ___host,A1),
AROS_LDA(  char **, ___service,A2),
AROS_LDA(  enum BIO_hostserv_priorities, ___hostserv_prio,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const BIO_METHOD * ,BIO_s_secmem,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,BIO_sock_info,
AROS_LDA(  int, ___sock,D0),
AROS_LDA(  enum BIO_sock_info_type, ___type,D1),
AROS_LDA(  union BIO_sock_info_u *, ___info,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,BIO_socket,
AROS_LDA(  int, ___domain,D0),
AROS_LDA(  int, ___socktype,D1),
AROS_LDA(  int, ___protocol,D2),
AROS_LDA(  int, ___options,D3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,BN_abs_is_word,
AROS_LDA(  const BIGNUM *, ___a,A0),
AROS_LDA(  const BN_ULONG, ___w,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,BN_bn2binpad,
AROS_LDA(  const BIGNUM *, ___a,A0),
AROS_LDA(  unsigned char *, ___to,A1),
AROS_LDA(  int, ___tolen,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,BN_bn2lebinpad,
AROS_LDA(  const BIGNUM *, ___a,A0),
AROS_LDA(  unsigned char *, ___to,A1),
AROS_LDA(  int, ___tolen,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(BN_CTX * ,BN_CTX_secure_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,BN_GENCB_free,
AROS_LDA(  BN_GENCB *, ___cb,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void * ,BN_GENCB_get_arg,
AROS_LDA(  BN_GENCB *, ___cb,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(BN_GENCB * ,BN_GENCB_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,BN_GENCB_set,
AROS_LDA(  BN_GENCB *, ___gencb,A0),
AROS_LDA(  APTR,___callback,A1),
AROS_LDA(  void *, ___cb_arg,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,BN_GENCB_set_old,
AROS_LDA(  BN_GENCB *, ___gencb,A0),
AROS_LDA(  APTR,___callback,A1),
AROS_LDA(  void *, ___cb_arg,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int ,BN_generate_dsa_nonce,
AROS_LDA(  BIGNUM *, ___out,A0),
AROS_LDA(  const BIGNUM *, ___range,A1),
AROS_LDA(  const BIGNUM *, ___priv,A2),
AROS_LDA(  const unsigned char *, ___message,A3),
AROS_LDA(  size_t, ___message_len,D0),
AROS_LDA(  BN_CTX *, ___ctx,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,BN_get_flags,
AROS_LDA(  const BIGNUM *, ___b,A0),
AROS_LDA(  int, ___n,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,BN_is_negative,
AROS_LDA(  const BIGNUM *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,BN_is_odd,
AROS_LDA(  const BIGNUM *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,BN_is_one,
AROS_LDA(  const BIGNUM *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,BN_is_word,
AROS_LDA(  const BIGNUM *, ___a,A0),
AROS_LDA(  const BN_ULONG, ___w,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,BN_is_zero,
AROS_LDA(  const BIGNUM *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(BIGNUM * ,BN_lebin2bn,
AROS_LDA(  const unsigned char *, ___s,A0),
AROS_LDA(  int, ___len,D0),
AROS_LDA(  BIGNUM *, ___ret,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,BN_nist_mod_func,
AROS_LDA(  const BIGNUM *, ___p,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(BIGNUM * ,BN_secure_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,BN_security_bits,
AROS_LDA(  int, ___L,D0),
AROS_LDA(  int, ___N,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,BN_set_flags,
AROS_LDA(  BIGNUM *, ___b,A0),
AROS_LDA(  int, ___n,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,BN_to_montgomery,
AROS_LDA(  BIGNUM *, ___r,A0),
AROS_LDA(  const BIGNUM *, ___a,A1),
AROS_LDA(  BN_MONT_CTX *, ___mont,A2),
AROS_LDA(  BN_CTX *, ___ctx,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,BN_with_flags,
AROS_LDA(  BIGNUM *, ___dest,A0),
AROS_LDA(  const BIGNUM *, ___b,A1),
AROS_LDA(  int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,BN_zero_ex,
AROS_LDA(  BIGNUM *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(BUF_MEM * ,BUF_MEM_new_ex,
AROS_LDA(  unsigned long, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const COMP_METHOD * ,COMP_CTX_get_method,
AROS_LDA(  const COMP_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,COMP_CTX_get_type,
AROS_LDA(  const COMP_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char * ,COMP_get_name,
AROS_LDA(  const COMP_METHOD *, ___meth,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,COMP_get_type,
AROS_LDA(  const COMP_METHOD *, ___meth,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void ,CRYPTO_clear_free,
AROS_LDA(  void *, ___str,A0),
AROS_LDA(  size_t, ___num,D0),
AROS_LDA(  const char *, ___file,A1),
AROS_LDA(  int, ___line,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(void * ,CRYPTO_clear_realloc,
AROS_LDA(  void *, ___str,A0),
AROS_LDA(  size_t, ___old_len,D0),
AROS_LDA(  size_t, ___num,D1),
AROS_LDA(  const char *, ___file,A1),
AROS_LDA(  int, ___line,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,CRYPTO_free_ex_index,
AROS_LDA(  int, ___class_index,D0),
AROS_LDA(  int, ___idx,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void * ,CRYPTO_memdup,
AROS_LDA(  const void *, ___data,A0),
AROS_LDA(  size_t, ___siz,D0),
AROS_LDA(  const char *, ___file,A1),
AROS_LDA(  int, ___line,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(size_t ,CRYPTO_secure_actual_size,
AROS_LDA(  void *, ___ptr,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,CRYPTO_secure_allocated,
AROS_LDA(  void *, ___ptr,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,CRYPTO_secure_free,
AROS_LDA(  void *, ___ptr,A0),
AROS_LDA(  const char *, ___file,A1),
AROS_LDA(  int, ___line,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void * ,CRYPTO_secure_malloc,
AROS_LDA(  size_t, ___num,D0),
AROS_LDA(  const char *, ___file,A0),
AROS_LDA(  int, ___line,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(int ,CRYPTO_secure_malloc_done,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,CRYPTO_secure_malloc_init,
AROS_LDA(  size_t, ___sz,D0),
AROS_LDA(  int, ___minsize,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(int ,CRYPTO_secure_malloc_initialized,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(size_t ,CRYPTO_secure_used,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void * ,CRYPTO_secure_zalloc,
AROS_LDA(  size_t, ___num,D0),
AROS_LDA(  const char *, ___file,A0),
AROS_LDA(  int, ___line,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,CRYPTO_set_mem_debug,
AROS_LDA(  int, ___flag,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(char * ,CRYPTO_strndup,
AROS_LDA(  const char *, ___str,A0),
AROS_LDA(  size_t, ___s,D0),
AROS_LDA(  const char *, ___file,A1),
AROS_LDA(  int, ___line,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void * ,CRYPTO_zalloc,
AROS_LDA(  size_t, ___num,D0),
AROS_LDA(  const char *, ___file,A0),
AROS_LDA(  int, ___line,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,OPENSSL_atexit,
AROS_LDA(  APTR, ___handler,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(void ,OPENSSL_cleanup,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,OPENSSL_init_crypto,
AROS_LDA(  uint64_t, ___opts,D0),
AROS_LDA(  const OPENSSL_INIT_SETTINGS *, ___settings,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,OPENSSL_INIT_free,
AROS_LDA(  OPENSSL_INIT_SETTINGS *, ___settings,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OPENSSL_INIT_SETTINGS * ,OPENSSL_INIT_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(size_t ,OPENSSL_strlcat,
AROS_LDA(  char *, ___dst,A0),
AROS_LDA(  const char *, ___src,A1),
AROS_LDA(  size_t, ___size,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(size_t ,OPENSSL_strlcpy,
AROS_LDA(  char *, ___dst,A0),
AROS_LDA(  const char *, ___src,A1),
AROS_LDA(  size_t, ___size,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(size_t ,OPENSSL_strnlen,
AROS_LDA(  const char *, ___str,A0),
AROS_LDA(  size_t, ___maxlen,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(void ,OPENSSL_thread_stop,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char * ,OpenSSL_version,
AROS_LDA(  int, ___type,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(unsigned long ,OpenSSL_version_num,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,DH_bits,
AROS_LDA(  const DH *, ___dh,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,DH_security_bits,
AROS_LDA(  const DH *, ___dh,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,DSA_security_bits,
AROS_LDA(  const DSA *, ___d,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const BIGNUM * ,EC_GROUP_get0_cofactor,
AROS_LDA(  const EC_GROUP *, ___group,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const BIGNUM * ,EC_GROUP_get0_order,
AROS_LDA(  const EC_GROUP *, ___group,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EC_GROUP_order_bits,
AROS_LDA(  const EC_GROUP *, ___group,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EC_KEY_METHOD * ,EC_KEY_get_default_method,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void * ,EC_KEY_get_ex_data,
AROS_LDA(  const EC_KEY *, ___key,A0),
AROS_LDA(  int, ___idx,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const EC_KEY_METHOD * ,EC_KEY_get_method,
AROS_LDA(  const EC_KEY *, ___key,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(size_t ,EC_KEY_key2buf,
AROS_LDA(  const EC_KEY *, ___key,A0),
AROS_LDA(  point_conversion_form_t, ___form,D0),
AROS_LDA(  unsigned char **, ___pbuf,A1),
AROS_LDA(  BN_CTX *, ___ctx,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,EC_KEY_METHOD_free,
AROS_LDA(  EC_KEY_METHOD *, ___meth,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,EC_KEY_METHOD_get_compute_key,
AROS_LDA(  const EC_KEY_METHOD *, ___meth,A0),
AROS_LDA(  APTR,___pck,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(void ,EC_KEY_METHOD_get_init,
AROS_LDA(  const EC_KEY_METHOD *, ___meth,A0),
AROS_LDA(  APTR,___pinit,A1),
AROS_LDA(  APTR,___pfinish,A2),
AROS_LDA(  APTR,___pcopy,A3),
AROS_LDA(  APTR,___pset_group,D0),
AROS_LDA(  APTR,___pset_private,D1),
AROS_LDA(  APTR,___pset_public,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,EC_KEY_METHOD_get_keygen,
AROS_LDA(  const EC_KEY_METHOD *, ___meth,A0),
AROS_LDA(  APTR,___pkeygen,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void ,EC_KEY_METHOD_get_sign,
AROS_LDA(  const EC_KEY_METHOD *, ___meth,A0),
AROS_LDA(  APTR,___psign,A1),
AROS_LDA(  APTR,___psign_setup,A2),
AROS_LDA(  APTR,___psign_sig,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,EC_KEY_METHOD_get_verify,
AROS_LDA(  const EC_KEY_METHOD *, ___meth,A0),
AROS_LDA(  APTR,___pverify,A1),
AROS_LDA(  APTR,___pverify_sig,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(EC_KEY_METHOD * ,EC_KEY_METHOD_new,
AROS_LDA(  const EC_KEY_METHOD *, ___meth,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,EC_KEY_METHOD_set_compute_key,
AROS_LDA(  EC_KEY_METHOD *, ___meth,A0),
AROS_LDA(  APTR,___ckey,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(void ,EC_KEY_METHOD_set_init,
AROS_LDA(  EC_KEY_METHOD *, ___meth,A0),
AROS_LDA(  APTR,___init,A1),
AROS_LDA(  APTR,___finish,A2),
AROS_LDA(  APTR,___copy,A3),
AROS_LDA(  APTR,___set_group,D0),
AROS_LDA(  APTR,___set_private,D1),
AROS_LDA(  APTR,___set_public,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,EC_KEY_METHOD_set_keygen,
AROS_LDA(  EC_KEY_METHOD *, ___meth,A0),
AROS_LDA(  APTR,___keygen,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void ,EC_KEY_METHOD_set_sign,
AROS_LDA(  EC_KEY_METHOD *, ___meth,A0),
AROS_LDA(  APTR,___sign,A1),
AROS_LDA(  APTR,___sign_setup,A2),
AROS_LDA(  APTR,___sign_sig,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,EC_KEY_METHOD_set_verify,
AROS_LDA(  EC_KEY_METHOD *, ___meth,A0),
AROS_LDA(  APTR,___verify,A1),
AROS_LDA(  APTR,___verify_sig,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(EC_KEY * ,EC_KEY_new_method,
AROS_LDA(  ENGINE *, ___engine,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,EC_KEY_oct2key,
AROS_LDA(  EC_KEY *, ___key,A0),
AROS_LDA(  const unsigned char *, ___buf,A1),
AROS_LDA(  size_t, ___len,D0),
AROS_LDA(  BN_CTX *, ___ctx,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,EC_KEY_oct2priv,
AROS_LDA(  EC_KEY *, ___key,A0),
AROS_LDA(  const unsigned char *, ___buf,A1),
AROS_LDA(  size_t, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EC_KEY_METHOD * ,EC_KEY_OpenSSL,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(size_t ,EC_KEY_priv2buf,
AROS_LDA(  const EC_KEY *, ___eckey,A0),
AROS_LDA(  unsigned char **, ___pbuf,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(size_t ,EC_KEY_priv2oct,
AROS_LDA(  const EC_KEY *, ___eckey,A0),
AROS_LDA(  unsigned char *, ___buf,A1),
AROS_LDA(  size_t, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,EC_KEY_set_default_method,
AROS_LDA(  const EC_KEY_METHOD *, ___meth,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,EC_KEY_set_ex_data,
AROS_LDA(  EC_KEY *, ___key,A0),
AROS_LDA(  int, ___idx,D0),
AROS_LDA(  void *, ___arg,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EC_KEY_set_method,
AROS_LDA(  EC_KEY *, ___key,A0),
AROS_LDA(  const EC_KEY_METHOD *, ___meth,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(size_t ,EC_POINT_point2buf,
AROS_LDA(  const EC_GROUP *, ___group,A0),
AROS_LDA(  const EC_POINT *, ___point,A1),
AROS_LDA(  point_conversion_form_t, ___form,D0),
AROS_LDA(  unsigned char **, ___pbuf,A2),
AROS_LDA(  BN_CTX *, ___ctx,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,ECDSA_SIG_get0,
AROS_LDA(  const ECDSA_SIG *, ___sig,A0),
AROS_LDA(  const BIGNUM **, ___pr,A1),
AROS_LDA(  const BIGNUM **, ___ps,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(ENGINE * ,ENGINE_get_default_EC,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const EC_KEY_METHOD * ,ENGINE_get_EC,
AROS_LDA(  const ENGINE *, ___e,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(void ,ENGINE_register_all_EC,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,ENGINE_register_EC,
AROS_LDA(  ENGINE *, ___e,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,ENGINE_set_default_EC,
AROS_LDA(  ENGINE *, ___e,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ENGINE_set_EC,
AROS_LDA(  ENGINE *, ___e,A0),
AROS_LDA(  const EC_KEY_METHOD *, ___ecdsa_meth,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,ENGINE_unregister_EC,
AROS_LDA(  ENGINE *, ___e,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aes_128_ocb,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aes_128_wrap_pad,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aes_192_ocb,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aes_192_wrap_pad,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aes_256_ocb,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aes_256_wrap_pad,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_camellia_128_ctr,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_camellia_192_ctr,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_camellia_256_ctr,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_chacha20,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_chacha20_poly1305,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(unsigned char * ,EVP_CIPHER_CTX_buf_noconst,
AROS_LDA(  EVP_CIPHER_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void * ,EVP_CIPHER_CTX_get_cipher_data,
AROS_LDA(  const EVP_CIPHER_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void * ,EVP_CIPHER_CTX_set_cipher_data,
AROS_LDA(  EVP_CIPHER_CTX *, ___ctx,A0),
AROS_LDA(  void *, ___cipher_data,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EVP_CIPHER_CTX_encrypting,
AROS_LDA(  const EVP_CIPHER_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const unsigned char * ,EVP_CIPHER_CTX_iv,
AROS_LDA(  const EVP_CIPHER_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(unsigned char * ,EVP_CIPHER_CTX_iv_noconst,
AROS_LDA(  EVP_CIPHER_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EVP_CIPHER_CTX_num,
AROS_LDA(  const EVP_CIPHER_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const unsigned char * ,EVP_CIPHER_CTX_original_iv,
AROS_LDA(  const EVP_CIPHER_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EVP_CIPHER_CTX_reset,
AROS_LDA(  EVP_CIPHER_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,EVP_CIPHER_CTX_set_num,
AROS_LDA(  EVP_CIPHER_CTX *, ___ctx,A0),
AROS_LDA(  int, ___num,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EVP_CIPHER_impl_ctx_size,
AROS_LDA(  const EVP_CIPHER *, ___cipher,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(EVP_CIPHER * ,EVP_CIPHER_meth_dup,
AROS_LDA(  const EVP_CIPHER *, ___cipher,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,EVP_CIPHER_meth_free,
AROS_LDA(  EVP_CIPHER *, ___cipher,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR ,EVP_CIPHER_meth_get_cleanup,
AROS_LDA(  const EVP_CIPHER *, ___cipher,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,EVP_CIPHER_meth_get_ctrl,
AROS_LDA(  const EVP_CIPHER *, ___cipher,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,EVP_CIPHER_meth_get_do_cipher,
AROS_LDA(  const EVP_CIPHER *, ___cipher,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,EVP_CIPHER_meth_get_get_asn1_params,
AROS_LDA(  const EVP_CIPHER *, ___cipher,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,EVP_CIPHER_meth_get_init,
AROS_LDA(  const EVP_CIPHER *, ___cipher,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,EVP_CIPHER_meth_get_set_asn1_params,
AROS_LDA(  const EVP_CIPHER *, ___cipher,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(EVP_CIPHER * ,EVP_CIPHER_meth_new,
AROS_LDA(  int, ___cipher_type,D0),
AROS_LDA(  int, ___block_size,D1),
AROS_LDA(  int, ___key_len,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EVP_CIPHER_meth_set_cleanup,
AROS_LDA(  EVP_CIPHER *, ___cipher,A0),
AROS_LDA(  APTR,___cleanup,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EVP_CIPHER_meth_set_ctrl,
AROS_LDA(  EVP_CIPHER *, ___cipher,A0),
AROS_LDA(  APTR,___ctrl,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EVP_CIPHER_meth_set_do_cipher,
AROS_LDA(  EVP_CIPHER *, ___cipher,A0),
AROS_LDA(  APTR,___do_cipher,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EVP_CIPHER_meth_set_flags,
AROS_LDA(  EVP_CIPHER *, ___cipher,A0),
AROS_LDA(  unsigned long, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EVP_CIPHER_meth_set_get_asn1_params,
AROS_LDA(  EVP_CIPHER *, ___cipher,A0),
AROS_LDA(  APTR,___get_asn1_parameters,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EVP_CIPHER_meth_set_impl_ctx_size,
AROS_LDA(  EVP_CIPHER *, ___cipher,A0),
AROS_LDA(  int, ___ctx_size,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EVP_CIPHER_meth_set_init,
AROS_LDA(  EVP_CIPHER *, ___cipher,A0),
AROS_LDA(  APTR,___init,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EVP_CIPHER_meth_set_iv_length,
AROS_LDA(  EVP_CIPHER *, ___cipher,A0),
AROS_LDA(  int, ___iv_len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EVP_CIPHER_meth_set_set_asn1_params,
AROS_LDA(  EVP_CIPHER *, ___cipher,A0),
AROS_LDA(  APTR,___set_asn1_parameters,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,EVP_ENCODE_CTX_free,
AROS_LDA(  EVP_ENCODE_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(EVP_ENCODE_CTX * ,EVP_ENCODE_CTX_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EVP_ENCODE_CTX_num,
AROS_LDA(  EVP_ENCODE_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_MD * ,EVP_md5_sha1,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,EVP_MD_CTX_ctrl,
AROS_LDA(  EVP_MD_CTX *, ___ctx,A0),
AROS_LDA(  int, ___cmd,D0),
AROS_LDA(  int, ___p1,D1),
AROS_LDA(  void *, ___p2,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,EVP_MD_CTX_free,
AROS_LDA(  EVP_MD_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void * ,EVP_MD_CTX_md_data,
AROS_LDA(  const EVP_MD_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(EVP_MD_CTX * ,EVP_MD_CTX_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(EVP_PKEY_CTX * ,EVP_MD_CTX_pkey_ctx,
AROS_LDA(  const EVP_MD_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EVP_MD_CTX_reset,
AROS_LDA(  EVP_MD_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,EVP_MD_CTX_set_update_fn,
AROS_LDA(  EVP_MD_CTX *, ___ctx,A0),
AROS_LDA(  APTR,___update,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,EVP_MD_CTX_update_fn,
AROS_LDA(  EVP_MD_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(EVP_MD * ,EVP_MD_meth_dup,
AROS_LDA(  const EVP_MD *, ___md,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,EVP_MD_meth_free,
AROS_LDA(  EVP_MD *, ___md,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EVP_MD_meth_get_app_datasize,
AROS_LDA(  const EVP_MD *, ___md,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,EVP_MD_meth_get_cleanup,
AROS_LDA(  const EVP_MD *, ___md,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,EVP_MD_meth_get_copy,
AROS_LDA(  const EVP_MD *, ___md,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,EVP_MD_meth_get_ctrl,
AROS_LDA(  const EVP_MD *, ___md,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,EVP_MD_meth_get_final,
AROS_LDA(  const EVP_MD *, ___md,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(unsigned long ,EVP_MD_meth_get_flags,
AROS_LDA(  const EVP_MD *, ___md,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,EVP_MD_meth_get_init,
AROS_LDA(  const EVP_MD *, ___md,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EVP_MD_meth_get_input_blocksize,
AROS_LDA(  const EVP_MD *, ___md,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EVP_MD_meth_get_result_size,
AROS_LDA(  const EVP_MD *, ___md,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,EVP_MD_meth_get_update,
AROS_LDA(  const EVP_MD *, ___md,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(EVP_MD * ,EVP_MD_meth_new,
AROS_LDA(  int, ___md_type,D0),
AROS_LDA(  int, ___pkey_type,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EVP_MD_meth_set_app_datasize,
AROS_LDA(  EVP_MD *, ___md,A0),
AROS_LDA(  int, ___datasize,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EVP_MD_meth_set_cleanup,
AROS_LDA(  EVP_MD *, ___md,A0),
AROS_LDA(  APTR,___cleanup,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EVP_MD_meth_set_copy,
AROS_LDA(  EVP_MD *, ___md,A0),
AROS_LDA(  APTR,___copy,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EVP_MD_meth_set_ctrl,
AROS_LDA(  EVP_MD *, ___md,A0),
AROS_LDA(  APTR,___ctrl,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EVP_MD_meth_set_final,
AROS_LDA(  EVP_MD *, ___md,A0),
AROS_LDA(  APTR,___final,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EVP_MD_meth_set_flags,
AROS_LDA(  EVP_MD *, ___md,A0),
AROS_LDA(  unsigned long, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EVP_MD_meth_set_init,
AROS_LDA(  EVP_MD *, ___md,A0),
AROS_LDA(  APTR,___init,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EVP_MD_meth_set_input_blocksize,
AROS_LDA(  EVP_MD *, ___md,A0),
AROS_LDA(  int, ___blocksize,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EVP_MD_meth_set_result_size,
AROS_LDA(  EVP_MD *, ___md,A0),
AROS_LDA(  int, ___resultsize,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EVP_MD_meth_set_update,
AROS_LDA(  EVP_MD *, ___md,A0),
AROS_LDA(  APTR,___update,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,EVP_PBE_get,
AROS_LDA(  int *, ___ptype,A0),
AROS_LDA(  int *, ___ppbe_nid,A1),
AROS_LDA(  size_t, ___num,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD10(int ,EVP_PBE_scrypt,
AROS_LDA(  const char *, ___pass,A0),
AROS_LDA(  size_t, ___passlen,D0),
AROS_LDA(  const unsigned char *, ___salt,A1),
AROS_LDA(  size_t, ___saltlen,D1),
AROS_LDA(  unsigned long, ___N,D2),
AROS_LDA(  unsigned long, ___r,D3),
AROS_LDA(  unsigned long, ___p,D4),
AROS_LDA(  uint64_t, ___maxmem,D5),
AROS_LDA(  unsigned char *, ___key,A2),
AROS_LDA(  size_t, ___keylen,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,EVP_PKEY_asn1_set_security_bits,
AROS_LDA(  EVP_PKEY_ASN1_METHOD *, ___ameth,A0),
AROS_LDA(  APTR,___pkey_security_bits,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(DH * ,EVP_PKEY_get0_DH,
AROS_LDA(  EVP_PKEY *, ___pkey,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(DSA * ,EVP_PKEY_get0_DSA,
AROS_LDA(  EVP_PKEY *, ___pkey,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(EC_KEY * ,EVP_PKEY_get0_EC_KEY,
AROS_LDA(  EVP_PKEY *, ___pkey,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(RSA * ,EVP_PKEY_get0_RSA,
AROS_LDA(  EVP_PKEY *, ___pkey,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,EVP_PKEY_meth_get_cleanup,
AROS_LDA(  const EVP_PKEY_METHOD *, ___pmeth,A0),
AROS_LDA(  APTR,___pcleanup,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,EVP_PKEY_meth_get_copy,
AROS_LDA(  const EVP_PKEY_METHOD *, ___pmeth,A0),
AROS_LDA(  APTR,___pcopy,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,EVP_PKEY_meth_get_ctrl,
AROS_LDA(  const EVP_PKEY_METHOD *, ___pmeth,A0),
AROS_LDA(  APTR,___pctrl,A1),
AROS_LDA(  APTR,___pctrl_str,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,EVP_PKEY_meth_get_decrypt,
AROS_LDA(  const EVP_PKEY_METHOD *, ___pmeth,A0),
AROS_LDA(  APTR,___pdecrypt_init,A1),
AROS_LDA(  APTR,___pdecrypt,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,EVP_PKEY_meth_get_derive,
AROS_LDA(  const EVP_PKEY_METHOD *, ___pmeth,A0),
AROS_LDA(  APTR,___pderive_init,A1),
AROS_LDA(  APTR,___pderive,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,EVP_PKEY_meth_get_encrypt,
AROS_LDA(  const EVP_PKEY_METHOD *, ___pmeth,A0),
AROS_LDA(  APTR,___pencrypt_init,A1),
AROS_LDA(  APTR,___pencryptfn,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,EVP_PKEY_meth_get_init,
AROS_LDA(  const EVP_PKEY_METHOD *, ___pmeth,A0),
AROS_LDA(  APTR,___pinit,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,EVP_PKEY_meth_get_keygen,
AROS_LDA(  const EVP_PKEY_METHOD *, ___pmeth,A0),
AROS_LDA(  APTR,___pkeygen_init,A1),
AROS_LDA(  APTR,___pkeygen,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,EVP_PKEY_meth_get_paramgen,
AROS_LDA(  const EVP_PKEY_METHOD *, ___pmeth,A0),
AROS_LDA(  APTR,___pparamgen_init,A1),
AROS_LDA(  APTR,___pparamgen,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,EVP_PKEY_meth_get_sign,
AROS_LDA(  const EVP_PKEY_METHOD *, ___pmeth,A0),
AROS_LDA(  APTR,___psign_init,A1),
AROS_LDA(  APTR,___psign,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,EVP_PKEY_meth_get_signctx,
AROS_LDA(  const EVP_PKEY_METHOD *, ___pmeth,A0),
AROS_LDA(  APTR,___psignctx_init,A1),
AROS_LDA(  APTR,___psignctx,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,EVP_PKEY_meth_get_verify,
AROS_LDA(  const EVP_PKEY_METHOD *, ___pmeth,A0),
AROS_LDA(  APTR,___pverify_init,A1),
AROS_LDA(  APTR,___pverify,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,EVP_PKEY_meth_get_verify_recover,
AROS_LDA(  const EVP_PKEY_METHOD *, ___pmeth,A0),
AROS_LDA(  APTR,___pverify_recover_init,A1),
AROS_LDA(  APTR,___pverify_recover,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,EVP_PKEY_meth_get_verifyctx,
AROS_LDA(  const EVP_PKEY_METHOD *, ___pmeth,A0),
AROS_LDA(  APTR,___pverifyctx_init,A1),
AROS_LDA(  APTR,___pverifyctx,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EVP_PKEY_security_bits,
AROS_LDA(  const EVP_PKEY *, ___pkey,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EVP_PKEY_up_ref,
AROS_LDA(  EVP_PKEY *, ___pkey,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(int ,PKCS5_v2_scrypt_keyivgen,
AROS_LDA(  EVP_CIPHER_CTX *, ___ctx,A0),
AROS_LDA(  const char *, ___pass,A1),
AROS_LDA(  int, ___passlen,D0),
AROS_LDA(  ASN1_TYPE *, ___param,A2),
AROS_LDA(  const EVP_CIPHER *, ___c,A3),
AROS_LDA(  const EVP_MD *, ___md,D1),
AROS_LDA(  int, ___en_de,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,HMAC_CTX_free,
AROS_LDA(  HMAC_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(HMAC_CTX * ,HMAC_CTX_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,HMAC_CTX_reset,
AROS_LDA(  HMAC_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(size_t ,HMAC_size,
AROS_LDA(  const HMAC_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,OPENSSL_LH_error,
AROS_LDA(  OPENSSL_LHASH *, ___lh,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(unsigned long ,OPENSSL_LH_get_down_load,
AROS_LDA(  const OPENSSL_LHASH *, ___lh,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,OPENSSL_LH_set_down_load,
AROS_LDA(  OPENSSL_LHASH *, ___lh,A0),
AROS_LDA(  unsigned long, ___down_load,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(size_t ,CRYPTO_128_unwrap_pad,
AROS_LDA(  void *, ___key,A0),
AROS_LDA(  const unsigned char *, ___icv,A1),
AROS_LDA(  unsigned char *, ___out,A2),
AROS_LDA(  const unsigned char *, ___in,A3),
AROS_LDA(  size_t, ___inlen,D0),
AROS_LDA(  block128_f, ___block,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(size_t ,CRYPTO_128_wrap_pad,
AROS_LDA(  void *, ___key,A0),
AROS_LDA(  const unsigned char *, ___icv,A1),
AROS_LDA(  unsigned char *, ___out,A2),
AROS_LDA(  const unsigned char *, ___in,A3),
AROS_LDA(  size_t, ___inlen,D0),
AROS_LDA(  block128_f, ___block,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,CRYPTO_ocb128_aad,
AROS_LDA(  OCB128_CONTEXT *, ___ctx,A0),
AROS_LDA(  const unsigned char *, ___aad,A1),
AROS_LDA(  size_t, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,CRYPTO_ocb128_cleanup,
AROS_LDA(  OCB128_CONTEXT *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,CRYPTO_ocb128_copy_ctx,
AROS_LDA(  OCB128_CONTEXT *, ___dest,A0),
AROS_LDA(  OCB128_CONTEXT *, ___src,A1),
AROS_LDA(  void *, ___keyenc,A2),
AROS_LDA(  void *, ___keydec,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,CRYPTO_ocb128_decrypt,
AROS_LDA(  OCB128_CONTEXT *, ___ctx,A0),
AROS_LDA(  const unsigned char *, ___in,A1),
AROS_LDA(  unsigned char *, ___out,A2),
AROS_LDA(  size_t, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,CRYPTO_ocb128_encrypt,
AROS_LDA(  OCB128_CONTEXT *, ___ctx,A0),
AROS_LDA(  const unsigned char *, ___in,A1),
AROS_LDA(  unsigned char *, ___out,A2),
AROS_LDA(  size_t, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,CRYPTO_ocb128_finish,
AROS_LDA(  OCB128_CONTEXT *, ___ctx,A0),
AROS_LDA(  const unsigned char *, ___tag,A1),
AROS_LDA(  size_t, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int ,CRYPTO_ocb128_init,
AROS_LDA(  OCB128_CONTEXT *, ___ctx,A0),
AROS_LDA(  void *, ___keyenc,A1),
AROS_LDA(  void *, ___keydec,A2),
AROS_LDA(  block128_f, ___encrypt,D0),
AROS_LDA(  block128_f, ___decrypt,D1),
AROS_LDA(  ocb128_f, ___stream,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(OCB128_CONTEXT * ,CRYPTO_ocb128_new,
AROS_LDA(  void *, ___keyenc,A0),
AROS_LDA(  void *, ___keydec,A1),
AROS_LDA(  block128_f, ___encrypt,D0),
AROS_LDA(  block128_f, ___decrypt,D1),
AROS_LDA(  ocb128_f, ___stream,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,CRYPTO_ocb128_setiv,
AROS_LDA(  OCB128_CONTEXT *, ___ctx,A0),
AROS_LDA(  const unsigned char *, ___iv,A1),
AROS_LDA(  size_t, ___len,D0),
AROS_LDA(  size_t, ___taglen,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,CRYPTO_ocb128_tag,
AROS_LDA(  OCB128_CONTEXT *, ___ctx,A0),
AROS_LDA(  unsigned char *, ___tag,A1),
AROS_LDA(  size_t, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const unsigned char * ,OBJ_get0_data,
AROS_LDA(  const ASN1_OBJECT *, ___obj,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(size_t ,OBJ_length,
AROS_LDA(  const ASN1_OBJECT *, ___obj,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const ASN1_GENERALIZEDTIME * ,OCSP_resp_get0_produced_at,
AROS_LDA(  const OCSP_BASICRESP *, ___bs,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const ASN1_OCTET_STRING * ,OCSP_resp_get0_signature,
AROS_LDA(  const OCSP_BASICRESP *, ___bs,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OCSP_CERTID * ,OCSP_SINGLERESP_get0_id,
AROS_LDA(  const OCSP_SINGLERESP *, ___bs,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(void ,PKCS12_get0_mac,
AROS_LDA(  const ASN1_OCTET_STRING **, ___pmac,A0),
AROS_LDA(  const X509_ALGOR **, ___pmacalg,A1),
AROS_LDA(  const ASN1_OCTET_STRING **, ___psalt,A2),
AROS_LDA(  const ASN1_INTEGER **, ___piter,A3),
AROS_LDA(  const PKCS12 *, ___p12,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,PKCS12_mac_present,
AROS_LDA(  const PKCS12 *, ___p12,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(PKCS12_SAFEBAG * ,PKCS12_SAFEBAG_create0_p8inf,
AROS_LDA(  PKCS8_PRIV_KEY_INFO *, ___p8,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(PKCS12_SAFEBAG * ,PKCS12_SAFEBAG_create0_pkcs8,
AROS_LDA(  X509_SIG *, ___p8,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(PKCS12_SAFEBAG * ,PKCS12_SAFEBAG_create_cert,
AROS_LDA(  X509 *, ___x509,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(PKCS12_SAFEBAG * ,PKCS12_SAFEBAG_create_crl,
AROS_LDA(  X509_CRL *, ___crl,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(PKCS12_SAFEBAG * ,PKCS12_SAFEBAG_create_pkcs8_encrypt,
AROS_LDA(  int, ___pbe_nid,D0),
AROS_LDA(  const char *, ___pass,A0),
AROS_LDA(  int, ___passlen,D1),
AROS_LDA(  unsigned char *, ___salt,A1),
AROS_LDA(  int, ___saltlen,D2),
AROS_LDA(  int, ___iter,D3),
AROS_LDA(  PKCS8_PRIV_KEY_INFO *, ___p8inf,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(const ASN1_TYPE * ,PKCS12_SAFEBAG_get0_attr,
AROS_LDA(  const PKCS12_SAFEBAG *, ___bag,A0),
AROS_LDA(  int, ___attr_nid,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const STACK_OF(X509_ATTRIBUTE) * ,PKCS12_SAFEBAG_get0_attrs,
AROS_LDA(  const PKCS12_SAFEBAG *, ___bag,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const PKCS8_PRIV_KEY_INFO * ,PKCS12_SAFEBAG_get0_p8inf,
AROS_LDA(  const PKCS12_SAFEBAG *, ___bag,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const X509_SIG * ,PKCS12_SAFEBAG_get0_pkcs8,
AROS_LDA(  const PKCS12_SAFEBAG *, ___bag,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const STACK_OF(PKCS12_SAFEBAG) * ,PKCS12_SAFEBAG_get0_safes,
AROS_LDA(  const PKCS12_SAFEBAG *, ___bag,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const ASN1_OBJECT * ,PKCS12_SAFEBAG_get0_type,
AROS_LDA(  const PKCS12_SAFEBAG *, ___bag,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509 * ,PKCS12_SAFEBAG_get1_cert,
AROS_LDA(  const PKCS12_SAFEBAG *, ___bag,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_CRL * ,PKCS12_SAFEBAG_get1_crl,
AROS_LDA(  const PKCS12_SAFEBAG *, ___bag,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,PKCS12_SAFEBAG_get_bag_nid,
AROS_LDA(  const PKCS12_SAFEBAG *, ___bag,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,PKCS12_SAFEBAG_get_nid,
AROS_LDA(  const PKCS12_SAFEBAG *, ___bag,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(ASN1_TYPE * ,PKCS8_get_attr,
AROS_LDA(  PKCS8_PRIV_KEY_INFO *, ___p8,A0),
AROS_LDA(  int, ___attr_nid,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(X509_SIG * ,PKCS8_set0_pbe,
AROS_LDA(  const char *, ___pass,A0),
AROS_LDA(  int, ___passlen,D0),
AROS_LDA(  PKCS8_PRIV_KEY_INFO *, ___p8inf,A1),
AROS_LDA(  X509_ALGOR *, ___pbe,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(RAND_METHOD * ,RAND_OpenSSL,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,RSA_bits,
AROS_LDA(  const RSA *, ___r,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,RSA_check_key_ex,
AROS_LDA(  const RSA *, ___key,A0),
AROS_LDA(  BN_GENCB *, ___cb,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const RSA_METHOD * ,RSA_PKCS1_OpenSSL,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,RSA_security_bits,
AROS_LDA(  const RSA *, ___rsa,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD13(int ,OBSOLETE_RSA_X931_derive_ex,
AROS_LDA(  RSA *, ___rsa,A0),
AROS_LDA(  BIGNUM *, ___p1,A1),
AROS_LDA(  BIGNUM *, ___p2,A2),
AROS_LDA(  BIGNUM *, ___q1,A3),
AROS_LDA(  BIGNUM *, ___q2,D0),
AROS_LDA(  const BIGNUM *, ___Xp1,D1),
AROS_LDA(  const BIGNUM *, ___Xp2,D2),
AROS_LDA(  const BIGNUM *, ___Xp,D3),
AROS_LDA(  const BIGNUM *, ___Xq1,D4),
AROS_LDA(  const BIGNUM *, ___Xq2,D5),
AROS_LDA(  const BIGNUM *, ___Xq,D6),
AROS_LDA(  const BIGNUM *, ___e,D7),
AROS_LDA(  BN_GENCB *, ___cb,A4),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,RSA_X931_generate_key_ex,
AROS_LDA(  RSA *, ___rsa,A0),
AROS_LDA(  int, ___bits,D0),
AROS_LDA(  const BIGNUM *, ___e,A1),
AROS_LDA(  BN_GENCB *, ___cb,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,TS_CONF_set_signer_digest,
AROS_LDA(  CONF *, ___conf,A0),
AROS_LDA(  const char *, ___section,A1),
AROS_LDA(  const char *, ___md,A2),
AROS_LDA(  TS_RESP_CTX *, ___ctx,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,TS_RESP_CTX_set_signer_digest,
AROS_LDA(  TS_RESP_CTX *, ___ctx,A0),
AROS_LDA(  const EVP_MD *, ___md,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const ASN1_BIT_STRING * ,TS_STATUS_INFO_get0_failure_info,
AROS_LDA(  const TS_STATUS_INFO *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const ASN1_INTEGER * ,TS_STATUS_INFO_get0_status,
AROS_LDA(  const TS_STATUS_INFO *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,TS_STATUS_INFO_set_status,
AROS_LDA(  TS_STATUS_INFO *, ___a,A0),
AROS_LDA(  int, ___i,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,TS_VERIFY_CTX_add_flags,
AROS_LDA(  TS_VERIFY_CTX *, ___ctx,A0),
AROS_LDA(  int, ___f,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(BIO * ,TS_VERIFY_CTX_set_data,
AROS_LDA(  TS_VERIFY_CTX *, ___ctx,A0),
AROS_LDA(  BIO *, ___b,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,TS_VERIFY_CTX_set_flags,
AROS_LDA(  TS_VERIFY_CTX *, ___ctx,A0),
AROS_LDA(  int, ___f,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(unsigned char * ,TS_VERIFY_CTX_set_imprint,
AROS_LDA(  TS_VERIFY_CTX *, ___ctx,A0),
AROS_LDA(  unsigned char *, ___hexstr,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(X509_STORE * ,TS_VERIFY_CTX_set_store,
AROS_LDA(  TS_VERIFY_CTX *, ___ctx,A0),
AROS_LDA(  X509_STORE *, ___s,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(STACK_OF(X509) * ,TS_VERIFY_CTS_set_certs,
AROS_LDA(  TS_VERIFY_CTX *, ___ctx,A0),
AROS_LDA(  STACK_OF(X509) *, ___certs,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_re_X509_CRL_tbs,
AROS_LDA(  X509_CRL *, ___req,A0),
AROS_LDA(  unsigned char **, ___pp,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_re_X509_REQ_tbs,
AROS_LDA(  X509_REQ *, ___req,A0),
AROS_LDA(  unsigned char **, ___pp,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(X509_ALGOR * ,PKCS5_pbe2_set_scrypt,
AROS_LDA(  const EVP_CIPHER *, ___cipher,A0),
AROS_LDA(  const unsigned char *, ___salt,A1),
AROS_LDA(  int, ___saltlen,D0),
AROS_LDA(  unsigned char *, ___aiv,A2),
AROS_LDA(  unsigned long, ___N,D1),
AROS_LDA(  unsigned long, ___r,D2),
AROS_LDA(  uint64_t, ___p,D3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const STACK_OF(X509_EXTENSION) * ,X509_CRL_get0_extensions,
AROS_LDA(  const X509_CRL *, ___crl,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,X509_CRL_get0_signature,
AROS_LDA(  const X509_CRL *, ___crl,A0),
AROS_LDA(  const ASN1_BIT_STRING **, ___psig,A1),
AROS_LDA(  const X509_ALGOR **, ___palg,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_NAME * ,X509_CRL_get_issuer,
AROS_LDA(  const X509_CRL *, ___crl,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ASN1_TIME * ,X509_CRL_get_lastUpdate,
AROS_LDA(  X509_CRL *, ___crl,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ASN1_TIME * ,X509_CRL_get_nextUpdate,
AROS_LDA(  X509_CRL *, ___crl,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(STACK_OF(X509_REVOKED) * ,X509_CRL_get_REVOKED,
AROS_LDA(  X509_CRL *, ___crl,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,X509_CRL_get_signature_nid,
AROS_LDA(  const X509_CRL *, ___crl,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(long ,X509_CRL_get_version,
AROS_LDA(  const X509_CRL *, ___crl,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,X509_CRL_up_ref,
AROS_LDA(  X509_CRL *, ___crl,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const STACK_OF(X509_EXTENSION) * ,X509_get0_extensions,
AROS_LDA(  const X509 *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(EVP_PKEY * ,X509_get0_pubkey,
AROS_LDA(  const X509 *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(STACK_OF(ASN1_OBJECT) * ,X509_get0_reject_objects,
AROS_LDA(  X509 *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const X509_ALGOR * ,X509_get0_tbs_sigalg,
AROS_LDA(  const X509 *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(STACK_OF(ASN1_OBJECT) * ,X509_get0_trust_objects,
AROS_LDA(  X509 *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,X509_get0_uids,
AROS_LDA(  const X509 *, ___x,A0),
AROS_LDA(  const ASN1_BIT_STRING **, ___piuid,A1),
AROS_LDA(  const ASN1_BIT_STRING **, ___psuid,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ASN1_TIME * ,X509_getm_notAfter,
AROS_LDA(  const X509 *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ASN1_TIME * ,X509_getm_notBefore,
AROS_LDA(  const X509 *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,X509_get_signature_type,
AROS_LDA(  const X509 *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(long ,X509_get_version,
AROS_LDA(  const X509 *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_PUBKEY * ,X509_get_X509_PUBKEY,
AROS_LDA(  const X509 *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,X509_NAME_ENTRY_set,
AROS_LDA(  const X509_NAME_ENTRY *, ___ne,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509_NAME_get0_der,
AROS_LDA(  X509_NAME *, ___nm,A0),
AROS_LDA(  const unsigned char **, ___pder,A1),
AROS_LDA(  size_t *, ___pderlen,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(EVP_PKEY * ,X509_PUBKEY_get0,
AROS_LDA(  X509_PUBKEY *, ___key,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,X509_REQ_get0_signature,
AROS_LDA(  const X509_REQ *, ___req,A0),
AROS_LDA(  const ASN1_BIT_STRING **, ___psig,A1),
AROS_LDA(  const X509_ALGOR **, ___palg,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,X509_REQ_get_signature_nid,
AROS_LDA(  const X509_REQ *, ___req,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_NAME * ,X509_REQ_get_subject_name,
AROS_LDA(  const X509_REQ *, ___req,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(long ,X509_REQ_get_version,
AROS_LDA(  const X509_REQ *, ___req,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_PUBKEY * ,X509_REQ_get_X509_PUBKEY,
AROS_LDA(  X509_REQ *, ___req,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const STACK_OF(X509_EXTENSION) * ,X509_REVOKED_get0_extensions,
AROS_LDA(  const X509_REVOKED *, ___r,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const ASN1_TIME * ,X509_REVOKED_get0_revocationDate,
AROS_LDA(  const X509_REVOKED *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const ASN1_INTEGER * ,X509_REVOKED_get0_serialNumber,
AROS_LDA(  const X509_REVOKED *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,X509_trusted,
AROS_LDA(  const X509 *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,X509_up_ref,
AROS_LDA(  X509 *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,X509_STORE_CTX_get_num_untrusted,
AROS_LDA(  X509_STORE_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,X509_STORE_CTX_set0_dane,
AROS_LDA(  X509_STORE_CTX *, ___ctx,A0),
AROS_LDA(  SSL_DANE *, ___dane,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,X509_VERIFY_PARAM_move_peername,
AROS_LDA(  X509_VERIFY_PARAM *, ___to,A0),
AROS_LDA(  X509_VERIFY_PARAM *, ___from,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(char * ,i2s_ASN1_IA5STRING,
AROS_LDA(  X509V3_EXT_METHOD *, ___method,A0),
AROS_LDA(  ASN1_IA5STRING *, ___ia5,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(ASN1_IA5STRING * ,s2i_ASN1_IA5STRING,
AROS_LDA(  X509V3_EXT_METHOD *, ___method,A0),
AROS_LDA(  X509V3_CTX *, ___ctx,A1),
AROS_LDA(  const char *, ___str,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509v3_addr_add_inherit,
AROS_LDA(  IPAddrBlocks *, ___addr,A0),
AROS_LDA(  const unsigned, ___afi,D0),
AROS_LDA(  const unsigned *, ___safi,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,X509v3_addr_add_prefix,
AROS_LDA(  IPAddrBlocks *, ___addr,A0),
AROS_LDA(  const unsigned, ___afi,D0),
AROS_LDA(  const unsigned *, ___safi,A1),
AROS_LDA(  unsigned char *, ___a,A2),
AROS_LDA(  const int, ___prefixlen,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,X509v3_addr_add_range,
AROS_LDA(  IPAddrBlocks *, ___addr,A0),
AROS_LDA(  const unsigned, ___afi,D0),
AROS_LDA(  const unsigned *, ___safi,A1),
AROS_LDA(  unsigned char *, ___min,A2),
AROS_LDA(  unsigned char *, ___max,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,X509v3_addr_canonize,
AROS_LDA(  IPAddrBlocks *, ___addr,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(unsigned ,X509v3_addr_get_afi,
AROS_LDA(  const IPAddressFamily *, ___f,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,X509v3_addr_get_range,
AROS_LDA(  IPAddressOrRange *, ___aor,A0),
AROS_LDA(  const unsigned, ___afi,D0),
AROS_LDA(  unsigned char *, ___min,A1),
AROS_LDA(  unsigned char *, ___max,A2),
AROS_LDA(  const int, ___length,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,X509v3_addr_inherits,
AROS_LDA(  IPAddrBlocks *, ___addr,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,X509v3_addr_is_canonical,
AROS_LDA(  IPAddrBlocks *, ___addr,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509v3_addr_subset,
AROS_LDA(  IPAddrBlocks *, ___a,A0),
AROS_LDA(  IPAddrBlocks *, ___b,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,X509v3_addr_validate_path,
AROS_LDA(  X509_STORE_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509v3_addr_validate_resource_set,
AROS_LDA(  STACK_OF(X509) *, ___chain,A0),
AROS_LDA(  IPAddrBlocks *, ___ext,A1),
AROS_LDA(  int, ___allow_inheritance,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509v3_asid_add_inherit,
AROS_LDA(  ASIdentifiers *, ___asid,A0),
AROS_LDA(  int, ___which,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,X509v3_asid_add_id_or_range,
AROS_LDA(  ASIdentifiers *, ___asid,A0),
AROS_LDA(  int, ___which,D0),
AROS_LDA(  ASN1_INTEGER *, ___min,A1),
AROS_LDA(  ASN1_INTEGER *, ___max,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,X509v3_asid_canonize,
AROS_LDA(  ASIdentifiers *, ___asid,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,X509v3_asid_inherits,
AROS_LDA(  ASIdentifiers *, ___asid,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,X509v3_asid_is_canonical,
AROS_LDA(  ASIdentifiers *, ___asid,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509v3_asid_subset,
AROS_LDA(  ASIdentifiers *, ___a,A0),
AROS_LDA(  ASIdentifiers *, ___b,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,X509v3_asid_validate_path,
AROS_LDA(  X509_STORE_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509v3_asid_validate_resource_set,
AROS_LDA(  STACK_OF(X509) *, ___chain,A0),
AROS_LDA(  ASIdentifiers *, ___ext,A1),
AROS_LDA(  int, ___allow_inheritance,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const ASN1_OCTET_STRING * ,X509_get0_subject_key_id,
AROS_LDA(  X509 *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(uint32_t ,X509_get_extended_key_usage,
AROS_LDA(  X509 *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(uint32_t ,X509_get_extension_flags,
AROS_LDA(  X509 *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(uint32_t ,X509_get_key_usage,
AROS_LDA(  X509 *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,DTLSv1_listen,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  BIO_ADDR *, ___client,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,OPENSSL_init_ssl,
AROS_LDA(  uint64_t, ___opts,D0),
AROS_LDA(  const OPENSSL_INIT_SETTINGS *, ___settings,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_add1_host,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  const char *, ___hostname,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(void ,SSL_add_ssl_module,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_CIPHER_get_cipher_nid,
AROS_LDA(  const SSL_CIPHER *, ___c,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_CIPHER_get_digest_nid,
AROS_LDA(  const SSL_CIPHER *, ___c,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(unsigned long ,SSL_clear_options,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  unsigned long, ___op,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_config,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  const char *, ___name,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(unsigned long ,SSL_CTX_clear_options,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  unsigned long, ___op,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_CTX_config,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  const char *, ___name,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_CTX_dane_enable,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,SSL_CTX_dane_mtype_set,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  const EVP_MD *, ___md,A1),
AROS_LDA(  uint8_t, ___mtype,D0),
AROS_LDA(  uint8_t, ___ord,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void * ,SSL_CTX_get0_security_ex_data,
AROS_LDA(  const SSL_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(unsigned long ,SSL_CTX_get_options,
AROS_LDA(  const SSL_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,SSL_CTX_get_security_callback,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_CTX_get_security_level,
AROS_LDA(  const SSL_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_CTX_set0_security_ex_data,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  void *, ___ex,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_CTX_set_default_verify_dir,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_CTX_set_default_verify_file,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_CTX_set_not_resumable_session_callback,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  APTR,___cb,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(unsigned long ,SSL_CTX_set_options,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  unsigned long, ___op,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_CTX_set_security_callback,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  APTR,___cb,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_CTX_set_security_level,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  int, ___level,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_CTX_up_ref,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_dane_enable,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  const char *, ___basedomain,AA),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int ,SSL_dane_tlsa_add,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  uint8_t, ___usage,D0),
AROS_LDA(  uint8_t, ___selector,D1),
AROS_LDA(  uint8_t, ___mtype,D2),
AROS_LDA(  unsigned const char *, ___data,A1),
AROS_LDA(  size_t, ___dlen,D3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(SSL_DANE * ,SSL_get0_dane,
AROS_LDA(  SSL *, ___ssl,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,SSL_get0_dane_authority,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  X509 **, ___mcert,A1),
AROS_LDA(  EVP_PKEY **, ___mspki,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int ,SSL_get0_dane_tlsa,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  uint8_t *, ___usage,A1),
AROS_LDA(  uint8_t *, ___selector,A2),
AROS_LDA(  uint8_t *, ___mtype,A3),
AROS_LDA(  unsigned const char **, ___data,D0),
AROS_LDA(  size_t *, ___dlen,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char * ,SSL_get0_peername,
AROS_LDA(  SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void * ,SSL_get0_security_ex_data,
AROS_LDA(  const SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(STACK_OF(SSL_CIPHER) * ,SSL_get1_supported_ciphers,
AROS_LDA(  SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(size_t ,SSL_get_client_random,
AROS_LDA(  const SSL *, ___s,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  size_t, ___outlen,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(unsigned long ,SSL_get_options,
AROS_LDA(  const SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,SSL_get_security_callback,
AROS_LDA(  const SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_get_security_level,
AROS_LDA(  const SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(size_t ,SSL_get_server_random,
AROS_LDA(  const SSL *, ___s,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  size_t, ___outlen,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(OSSL_HANDSHAKE_STATE ,SSL_get_state,
AROS_LDA(  const SSL *, ___ssl,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_in_before,
AROS_LDA(  const SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_in_init,
AROS_LDA(  const SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_is_init_finished,
AROS_LDA(  const SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,SSL_SESSION_get0_ticket,
AROS_LDA(  const SSL_SESSION *, ___s,A0),
AROS_LDA(  const unsigned char **, ___tick,A1),
AROS_LDA(  size_t *, ___len,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(size_t ,SSL_SESSION_get_master_key,
AROS_LDA(  const SSL_SESSION *, ___sess,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  size_t, ___outlen,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(unsigned long ,SSL_SESSION_get_ticket_lifetime_hint,
AROS_LDA(  const SSL_SESSION *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_SESSION_has_ticket,
AROS_LDA(  const SSL_SESSION *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_SESSION_print_keylog,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  const SSL_SESSION *, ___x,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_session_reused,
AROS_LDA(  const SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_set0_security_ex_data,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  void *, ___ex,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_set1_host,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  const char *, ___hostname,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_set_default_passwd_cb,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  pem_password_cb *, ___cb,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_set_default_passwd_cb_userdata,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  void *, ___u,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_set_hostflags,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  unsigned int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_set_not_resumable_session_callback,
AROS_LDA(  SSL *, ___ssl,A0),
AROS_LDA(  APTR,___cb,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(unsigned long ,SSL_set_options,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  unsigned long, ___op,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_set0_rbio,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  BIO *, ___rbio,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_set_security_callback,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  APTR,___cb,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_set_security_level,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  int, ___level,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_set0_wbio,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  BIO *, ___wbio,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_up_ref,
AROS_LDA(  SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_use_certificate_chain_file,
AROS_LDA(  SSL *, ___ssl,A0),
AROS_LDA(  const char *, ___file,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_waiting_for_async,
AROS_LDA(  SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const SSL_METHOD * ,TLS_client_method,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const SSL_METHOD * ,TLS_method,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const SSL_METHOD * ,TLS_server_method,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(ASYNC_WAIT_CTX * ,ASYNC_WAIT_CTX_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,ASYNC_WAIT_CTX_free,
AROS_LDA(  ASYNC_WAIT_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,ASYNC_WAIT_CTX_set_wait_fd,
AROS_LDA(  ASYNC_WAIT_CTX *, ___ctx,A0),
AROS_LDA(  const void *, ___key,A1),
AROS_LDA(  OSSL_ASYNC_FD, ___fd,D0),
AROS_LDA(  void *, ___custom_data,A2),
AROS_LDA(  APTR,___cleanup,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,ASYNC_WAIT_CTX_get_fd,
AROS_LDA(  ASYNC_WAIT_CTX *, ___ctx,A0),
AROS_LDA(  const void *, ___key,A1),
AROS_LDA(  OSSL_ASYNC_FD *, ___fd,A2),
AROS_LDA(  void **, ___custom_data,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,ASYNC_WAIT_CTX_get_all_fds,
AROS_LDA(  ASYNC_WAIT_CTX *, ___ctx,A0),
AROS_LDA(  OSSL_ASYNC_FD *, ___fd,A1),
AROS_LDA(  size_t *, ___numfds,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,ASYNC_WAIT_CTX_get_changed_fds,
AROS_LDA(  ASYNC_WAIT_CTX *, ___ctx,A0),
AROS_LDA(  OSSL_ASYNC_FD *, ___addfd,A1),
AROS_LDA(  size_t *, ___numaddfds,A2),
AROS_LDA(  OSSL_ASYNC_FD *, ___delfd,A3),
AROS_LDA(  size_t *, ___numdelfds,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ASYNC_WAIT_CTX_clear_fd,
AROS_LDA(  ASYNC_WAIT_CTX *, ___ctx,A0),
AROS_LDA(  const void *, ___key,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(int ,ASYNC_is_capable,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ASYNC_WAIT_CTX * ,ASYNC_get_wait_ctx,
AROS_LDA(  ASYNC_JOB *, ___job,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,BIO_up_ref,
AROS_LDA(  BIO *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,BN_BLINDING_is_current_thread,
AROS_LDA(  BN_BLINDING *, ___b,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,BN_BLINDING_set_current_thread,
AROS_LDA(  BN_BLINDING *, ___b,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,BN_BLINDING_lock,
AROS_LDA(  BN_BLINDING *, ___b,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,BN_BLINDING_unlock,
AROS_LDA(  BN_BLINDING *, ___b,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,CRYPTO_THREAD_run_once,
AROS_LDA(  CRYPTO_ONCE *, ___once,A0),
AROS_LDA(  APTR, ___init,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,CRYPTO_THREAD_init_local,
AROS_LDA(  CRYPTO_THREAD_LOCAL *, ___key,A0),
AROS_LDA(  APTR,___cleanup,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,CRYPTO_THREAD_get_local,
AROS_LDA(  CRYPTO_THREAD_LOCAL *, ___key,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,CRYPTO_THREAD_set_local,
AROS_LDA(  CRYPTO_THREAD_LOCAL *, ___key,A0),
AROS_LDA(  void *, ___val,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,CRYPTO_THREAD_cleanup_local,
AROS_LDA(  CRYPTO_THREAD_LOCAL *, ___key,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(CRYPTO_THREAD_ID ,CRYPTO_THREAD_get_current_id,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,CRYPTO_THREAD_compare_id,
AROS_LDA(  CRYPTO_THREAD_ID, ___a,D0),
AROS_LDA(  CRYPTO_THREAD_ID, ___b,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(CRYPTO_RWLOCK * ,CRYPTO_THREAD_lock_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,CRYPTO_THREAD_read_lock,
AROS_LDA(  CRYPTO_RWLOCK *, ___lock,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,CRYPTO_THREAD_write_lock,
AROS_LDA(  CRYPTO_RWLOCK *, ___lock,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,CRYPTO_THREAD_unlock,
AROS_LDA(  CRYPTO_RWLOCK *, ___lock,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,CRYPTO_THREAD_lock_free,
AROS_LDA(  CRYPTO_RWLOCK *, ___lock,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,CRYPTO_atomic_add,
AROS_LDA(  int *, ___val,A0),
AROS_LDA(  int, ___amount,D0),
AROS_LDA(  int *, ___ret,A1),
AROS_LDA(  CRYPTO_RWLOCK *, ___lock,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,OPENSSL_die,
AROS_LDA(  const char *, ___assertion,A0),
AROS_LDA(  const char *, ___file,A1),
AROS_LDA(  int, ___line,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(CT_POLICY_EVAL_CTX * ,CT_POLICY_EVAL_CTX_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,CT_POLICY_EVAL_CTX_free,
AROS_LDA(  CT_POLICY_EVAL_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509 * ,CT_POLICY_EVAL_CTX_get0_cert,
AROS_LDA(  const CT_POLICY_EVAL_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509 * ,CT_POLICY_EVAL_CTX_get0_issuer,
AROS_LDA(  const CT_POLICY_EVAL_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const CTLOG_STORE * ,CT_POLICY_EVAL_CTX_get0_log_store,
AROS_LDA(  const CT_POLICY_EVAL_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(SCT * ,SCT_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(SCT * ,SCT_new_from_base64,
AROS_LDA(  unsigned char, ___version,D0),
AROS_LDA(  const char *, ___logid_base64,A0),
AROS_LDA(  ct_log_entry_type_t, ___entry_type,D1),
AROS_LDA(  uint64_t, ___timestamp,D2),
AROS_LDA(  const char *, ___extensions_base64,A1),
AROS_LDA(  const char *, ___signature_base64,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,SCT_free,
AROS_LDA(  SCT *, ___sct,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,SCT_LIST_free,
AROS_LDA(  STACK_OF(SCT) *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(sct_version_t ,SCT_get_version,
AROS_LDA(  const SCT *, ___sct,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SCT_set_version,
AROS_LDA(  SCT *, ___sct,A0),
AROS_LDA(  sct_version_t, ___version,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ct_log_entry_type_t ,SCT_get_log_entry_type,
AROS_LDA(  const SCT *, ___sct,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SCT_set_log_entry_type,
AROS_LDA(  SCT *, ___sct,A0),
AROS_LDA(  ct_log_entry_type_t, ___entry_type,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(size_t ,SCT_get0_log_id,
AROS_LDA(  const SCT *, ___sct,A0),
AROS_LDA(  unsigned char **, ___log_id,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,SCT_set0_log_id,
AROS_LDA(  SCT *, ___sct,A0),
AROS_LDA(  unsigned char *, ___log_id,A1),
AROS_LDA(  size_t, ___log_id_len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,SCT_set1_log_id,
AROS_LDA(  SCT *, ___sct,A0),
AROS_LDA(  const unsigned char *, ___log_id,A1),
AROS_LDA(  size_t, ___log_id_len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(uint64_t ,SCT_get_timestamp,
AROS_LDA(  const SCT *, ___sct,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SCT_set_timestamp,
AROS_LDA(  SCT *, ___sct,A0),
AROS_LDA(  uint64_t, ___timestamp,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SCT_get_signature_nid,
AROS_LDA(  const SCT *, ___sct,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SCT_set_signature_nid,
AROS_LDA(  SCT *, ___sct,A0),
AROS_LDA(  int, ___nid,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(size_t ,SCT_get0_extensions,
AROS_LDA(  const SCT *, ___sct,A0),
AROS_LDA(  unsigned char **, ___ext,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,SCT_set0_extensions,
AROS_LDA(  SCT *, ___sct,A0),
AROS_LDA(  unsigned char *, ___ext,A1),
AROS_LDA(  size_t, ___ext_len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,SCT_set1_extensions,
AROS_LDA(  SCT *, ___sct,A0),
AROS_LDA(  const unsigned char *, ___ext,A1),
AROS_LDA(  size_t, ___ext_len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(size_t ,SCT_get0_signature,
AROS_LDA(  const SCT *, ___sct,A0),
AROS_LDA(  unsigned char **, ___sig,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,SCT_set0_signature,
AROS_LDA(  SCT *, ___sct,A0),
AROS_LDA(  unsigned char *, ___sig,A1),
AROS_LDA(  size_t, ___sig_len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,SCT_set1_signature,
AROS_LDA(  SCT *, ___sct,A0),
AROS_LDA(  const unsigned char *, ___sig,A1),
AROS_LDA(  size_t, ___sig_len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(sct_source_t ,SCT_get_source,
AROS_LDA(  const SCT *, ___sct,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SCT_set_source,
AROS_LDA(  SCT *, ___sct,A0),
AROS_LDA(  sct_source_t, ___source,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void ,SCT_print,
AROS_LDA(  const SCT *, ___sct,A0),
AROS_LDA(  BIO *, ___out,A1),
AROS_LDA(  int, ___indent,D0),
AROS_LDA(  const CTLOG_STORE *, ___logs,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(void ,SCT_LIST_print,
AROS_LDA(  const STACK_OF(SCT) *, ___sct_list,A0),
AROS_LDA(  BIO *, ___out,A1),
AROS_LDA(  int, ___indent,D0),
AROS_LDA(  const char *, ___separator,A2),
AROS_LDA(  const CTLOG_STORE *, ___logs,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(sct_validation_status_t ,SCT_get_validation_status,
AROS_LDA(  const SCT *, ___sct,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SCT_validate,
AROS_LDA(  SCT *, ___sct,A0),
AROS_LDA(  const CT_POLICY_EVAL_CTX *, ___ctx,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SCT_LIST_validate,
AROS_LDA(  const STACK_OF(SCT) *, ___scts,A0),
AROS_LDA(  CT_POLICY_EVAL_CTX *, ___ctx,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2o_SCT_LIST,
AROS_LDA(  const STACK_OF(SCT) *, ___a,A0),
AROS_LDA(  unsigned char **, ___pp,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(STACK_OF(SCT) * ,o2i_SCT_LIST,
AROS_LDA(  STACK_OF(SCT) **, ___a,A0),
AROS_LDA(  const unsigned char **, ___pp,A1),
AROS_LDA(  size_t, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_SCT_LIST,
AROS_LDA(  const STACK_OF(SCT) *, ___a,A0),
AROS_LDA(  unsigned char **, ___pp,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(STACK_OF(SCT) * ,d2i_SCT_LIST,
AROS_LDA(  STACK_OF(SCT) **, ___a,A0),
AROS_LDA(  const unsigned char **, ___pp,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2o_SCT,
AROS_LDA(  const SCT *, ___sct,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(SCT * ,o2i_SCT,
AROS_LDA(  SCT **, ___psct,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  size_t, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(CTLOG * ,CTLOG_new,
AROS_LDA(  EVP_PKEY *, ___public_key,A0),
AROS_LDA(  const char *, ___name,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,CTLOG_new_from_base64,
AROS_LDA(  CTLOG **, ___ct_log,A0),
AROS_LDA(  const char *, ___pkey_base64,A1),
AROS_LDA(  const char *, ___name,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,CTLOG_free,
AROS_LDA(  CTLOG *, ___log,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char * ,CTLOG_get0_name,
AROS_LDA(  const CTLOG *, ___log,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,CTLOG_get0_log_id,
AROS_LDA(  const CTLOG *, ___log,A0),
AROS_LDA(  const uint8_t **, ___log_id,A1),
AROS_LDA(  size_t *, ___log_id_len,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(EVP_PKEY * ,CTLOG_get0_public_key,
AROS_LDA(  const CTLOG *, ___log,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(CTLOG_STORE * ,CTLOG_STORE_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,CTLOG_STORE_free,
AROS_LDA(  CTLOG_STORE *, ___store,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(const CTLOG * ,CTLOG_STORE_get0_log_by_id,
AROS_LDA(  const CTLOG_STORE *, ___store,A0),
AROS_LDA(  const uint8_t *, ___log_id,A1),
AROS_LDA(  size_t, ___log_id_len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,CTLOG_STORE_load_file,
AROS_LDA(  CTLOG_STORE *, ___store,A0),
AROS_LDA(  const char *, ___file,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,CTLOG_STORE_load_default_file,
AROS_LDA(  CTLOG_STORE *, ___store,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(int ,ERR_load_CT_strings,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,DHparams_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,DSA_SIG_get0,
AROS_LDA(  const DSA_SIG *, ___sig,A0),
AROS_LDA(  const BIGNUM **, ___pr,A1),
AROS_LDA(  const BIGNUM **, ___ps,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(EC_GROUP * ,EC_GROUP_new_from_ecparameters,
AROS_LDA(  const ECPARAMETERS *, ___params,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(ECPARAMETERS * ,EC_GROUP_get_ecparameters,
AROS_LDA(  const EC_GROUP *, ___group,A0),
AROS_LDA(  ECPARAMETERS *, ___params,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(EC_GROUP * ,EC_GROUP_new_from_ecpkparameters,
AROS_LDA(  const ECPKPARAMETERS *, ___params,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(ECPKPARAMETERS * ,EC_GROUP_get_ecpkparameters,
AROS_LDA(  const EC_GROUP *, ___group,A0),
AROS_LDA(  ECPKPARAMETERS *, ___params,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,ECPKPARAMETERS_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,ECPARAMETERS_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EC_KEY_can_sign,
AROS_LDA(  const EC_KEY *, ___eckey,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_MD * ,EVP_blake2b512,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_MD * ,EVP_blake2s256,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,EVP_PKEY_CTX_str2ctrl,
AROS_LDA(  EVP_PKEY_CTX *, ___ctx,A0),
AROS_LDA(  int, ___cmd,D0),
AROS_LDA(  const char *, ___str,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,EVP_PKEY_CTX_hex2ctrl,
AROS_LDA(  EVP_PKEY_CTX *, ___ctx,A0),
AROS_LDA(  int, ___cmd,D0),
AROS_LDA(  const char *, ___hex,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(int ,ERR_load_KDF_strings,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,SRP_user_pwd_free,
AROS_LDA(  SRP_user_pwd *, ___user_pwd,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(SRP_user_pwd * ,SRP_VBASE_get1_by_user,
AROS_LDA(  SRP_VBASE *, ___vb,A0),
AROS_LDA(  char *, ___username,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_CTX_has_client_custom_ext,
AROS_LDA(  const SSL_CTX *, ___ctx,A0),
AROS_LDA(  unsigned int, ___ext_type,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_CIPHER_get_kx_nid,
AROS_LDA(  const SSL_CIPHER *, ___c,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_CIPHER_get_auth_nid,
AROS_LDA(  const SSL_CIPHER *, ___c,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_CIPHER_is_aead,
AROS_LDA(  const SSL_CIPHER *, ___c,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_has_pending,
AROS_LDA(  const SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_SESSION_up_ref,
AROS_LDA(  SSL_SESSION *, ___ses,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,SSL_CTX_get_default_passwd_cb,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void * ,SSL_CTX_get_default_passwd_cb_userdata,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,SSL_get_default_passwd_cb,
AROS_LDA(  SSL *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void * ,SSL_get_default_passwd_cb_userdata,
AROS_LDA(  SSL *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,SSL_get_all_async_fds,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  OSSL_ASYNC_FD *, ___fds,A1),
AROS_LDA(  size_t *, ___numfds,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,SSL_get_changed_async_fds,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  OSSL_ASYNC_FD *, ___addfd,A1),
AROS_LDA(  size_t *, ___numaddfds,A2),
AROS_LDA(  OSSL_ASYNC_FD *, ___delfd,A3),
AROS_LDA(  size_t *, ___numdelfds,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_CTX_set_default_read_buffer_len,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  size_t, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_set_default_read_buffer_len,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  size_t, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,SSL_set_ct_validation_callback,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  ssl_ct_validation_cb, ___callback,A1),
AROS_LDA(  void *, ___arg,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,SSL_CTX_set_ct_validation_callback,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  ssl_ct_validation_cb, ___callback,A1),
AROS_LDA(  void *, ___arg,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_ct_is_enabled,
AROS_LDA(  const SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_CTX_ct_is_enabled,
AROS_LDA(  const SSL_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const STACK_OF(SCT) * ,SSL_get0_peer_scts,
AROS_LDA(  SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_CTX_set_default_ctlog_list_file,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_CTX_set_ctlog_list_file,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  const char *, ___path,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_CTX_set0_ctlog_store,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  CTLOG_STORE *, ___logs,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const CTLOG_STORE * ,SSL_CTX_get0_ctlog_store,
AROS_LDA(  const SSL_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,X509_SIG_get0,
AROS_LDA(  const X509_SIG *, ___sig,A0),
AROS_LDA(  const X509_ALGOR **, ___palg,A1),
AROS_LDA(  const ASN1_OCTET_STRING **, ___pdigest,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const STACK_OF(X509_ATTRIBUTE) * ,PKCS8_pkey_get0_attrs,
AROS_LDA(  const PKCS8_PRIV_KEY_INFO *, ___p8,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,PKCS8_pkey_add1_attr_by_NID,
AROS_LDA(  PKCS8_PRIV_KEY_INFO *, ___p8,A0),
AROS_LDA(  int, ___nid,D0),
AROS_LDA(  int, ___type,D1),
AROS_LDA(  const unsigned char *, ___bytes,A1),
AROS_LDA(  int, ___len,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,X509_STORE_up_ref,
AROS_LDA(  X509_STORE *, ___v,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_enable_ct,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  int, ___validation_mode,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_CTX_enable_ct,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  int, ___validation_mode,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(STACK_OF(SSL_CIPHER) * ,SSL_CTX_get_ciphers,
AROS_LDA(  const SSL_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char * ,SSL_SESSION_get0_hostname,
AROS_LDA(  const SSL_SESSION *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char * ,SCT_validation_status_string,
AROS_LDA(  const SCT *, ___sct,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(BIO_METHOD * ,BIO_meth_new,
AROS_LDA(  int, ___type,D0),
AROS_LDA(  const char *, ___name,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,BIO_meth_get_puts,
AROS_LDA(  const BIO_METHOD *, ___biom,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,BIO_meth_get_ctrl,
AROS_LDA(  const BIO_METHOD *, ___biom,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,BIO_meth_get_gets,
AROS_LDA(  const BIO_METHOD *, ___biom,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void * ,BIO_get_data,
AROS_LDA(  BIO *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,BIO_set_init,
AROS_LDA(  BIO *, ___a,A0),
AROS_LDA(  int, ___init,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,BIO_meth_set_puts,
AROS_LDA(  BIO_METHOD *, ___biom,A0),
AROS_LDA(  APTR,___func,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,BIO_get_shutdown,
AROS_LDA(  BIO *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,BIO_get_init,
AROS_LDA(  BIO *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,BIO_meth_set_ctrl,
AROS_LDA(  BIO_METHOD *, ___biom,A0),
AROS_LDA(  APTR,___ctrl,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,BIO_meth_set_read,
AROS_LDA(  BIO_METHOD *, ___biom,A0),
AROS_LDA(  APTR,___read,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,BIO_set_shutdown,
AROS_LDA(  BIO *, ___a,A0),
AROS_LDA(  int, ___shut,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,BIO_meth_set_create,
AROS_LDA(  BIO_METHOD *, ___biom,A0),
AROS_LDA(  APTR,___create,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,BIO_meth_get_write,
AROS_LDA(  const BIO_METHOD *, ___biom,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,BIO_meth_set_callback_ctrl,
AROS_LDA(  BIO_METHOD *, ___biom,A0),
AROS_LDA(  APTR,___callback_ctrl,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,BIO_meth_get_create,
AROS_LDA(  const BIO_METHOD *, ___biom,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,BIO_set_next,
AROS_LDA(  BIO *, ___b,A0),
AROS_LDA(  BIO *, ___next,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,BIO_set_data,
AROS_LDA(  BIO *, ___a,A0),
AROS_LDA(  void *, ___ptr,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,BIO_meth_set_write,
AROS_LDA(  BIO_METHOD *, ___biom,A0),
AROS_LDA(  APTR,___write,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,BIO_meth_set_destroy,
AROS_LDA(  BIO_METHOD *, ___biom,A0),
AROS_LDA(  APTR,___destroy,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,BIO_meth_set_gets,
AROS_LDA(  BIO_METHOD *, ___biom,A0),
AROS_LDA(  APTR,___func,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,BIO_meth_get_callback_ctrl,
AROS_LDA(  const BIO_METHOD *, ___biom,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,BIO_meth_get_destroy,
AROS_LDA(  const BIO_METHOD *, ___biom,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,BIO_meth_get_read,
AROS_LDA(  const BIO_METHOD *, ___biom,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,BIO_set_retry_reason,
AROS_LDA(  BIO *, ___bio,A0),
AROS_LDA(  int, ___reason,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,BIO_meth_free,
AROS_LDA(  BIO_METHOD *, ___biom,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,DSA_meth_set_bn_mod_exp,
AROS_LDA(  DSA_METHOD *, ___dsam,A0),
AROS_LDA(  APTR,___bn_mod_exp,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,DSA_meth_set_init,
AROS_LDA(  DSA_METHOD *, ___dsam,A0),
AROS_LDA(  APTR,___init,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,DSA_meth_free,
AROS_LDA(  DSA_METHOD *, ___dsam,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,DSA_meth_set_mod_exp,
AROS_LDA(  DSA_METHOD *, ___dsam,A0),
AROS_LDA(  APTR,___mod_exp,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,DSA_meth_set_sign,
AROS_LDA(  DSA_METHOD *, ___dsam,A0),
AROS_LDA(  APTR,___sign,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,DSA_meth_get_finish,
AROS_LDA(  const DSA_METHOD *, ___dsam,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,DSA_set_flags,
AROS_LDA(  DSA *, ___d,A0),
AROS_LDA(  int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void ,DSA_get0_pqg,
AROS_LDA(  const DSA *, ___d,A0),
AROS_LDA(  const BIGNUM **, ___p,A1),
AROS_LDA(  const BIGNUM **, ___q,A2),
AROS_LDA(  const BIGNUM **, ___g,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void * ,DSA_meth_get0_app_data,
AROS_LDA(  const DSA_METHOD *, ___dsam,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,DSA_meth_get_keygen,
AROS_LDA(  const DSA_METHOD *, ___dsam,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,DSA_clear_flags,
AROS_LDA(  DSA *, ___d,A0),
AROS_LDA(  int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char * ,DSA_meth_get0_name,
AROS_LDA(  const DSA_METHOD *, ___dsam,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,DSA_meth_get_paramgen,
AROS_LDA(  DSA_METHOD *, ___dsam,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,DSA_meth_get_sign,
AROS_LDA(  DSA_METHOD *, ___dsam,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,DSA_meth_set_paramgen,
AROS_LDA(  DSA_METHOD *, ___dsam,A0),
AROS_LDA(  APTR,___paramgen,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,DSA_test_flags,
AROS_LDA(  const DSA *, ___d,A0),
AROS_LDA(  int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,DSA_meth_set0_app_data,
AROS_LDA(  DSA_METHOD *, ___dsam,A0),
AROS_LDA(  void *, ___app_data,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,DSA_meth_set1_name,
AROS_LDA(  DSA_METHOD *, ___dsam,A0),
AROS_LDA(  const char *, ___name,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,DSA_get0_key,
AROS_LDA(  const DSA *, ___d,A0),
AROS_LDA(  const BIGNUM **, ___pub_key,A1),
AROS_LDA(  const BIGNUM **, ___priv_key,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,DSA_meth_get_mod_exp,
AROS_LDA(  const DSA_METHOD *, ___dsam,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,DSA_set0_pqg,
AROS_LDA(  DSA *, ___d,A0),
AROS_LDA(  BIGNUM *, ___p,A1),
AROS_LDA(  BIGNUM *, ___q,A2),
AROS_LDA(  BIGNUM *, ___g,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,DSA_meth_get_flags,
AROS_LDA(  const DSA_METHOD *, ___dsam,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,DSA_meth_get_verify,
AROS_LDA(  const DSA_METHOD *, ___dsam,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,DSA_meth_set_verify,
AROS_LDA(  DSA_METHOD *, ___dsam,A0),
AROS_LDA(  APTR,___verify,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,DSA_meth_set_finish,
AROS_LDA(  DSA_METHOD *, ___dsam,A0),
AROS_LDA(  APTR,___finish,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,DSA_meth_set_keygen,
AROS_LDA(  DSA_METHOD *, ___dsam,A0),
AROS_LDA(  APTR,___keygen,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(DSA_METHOD * ,DSA_meth_dup,
AROS_LDA(  const DSA_METHOD *, ___dsam,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,DSA_set0_key,
AROS_LDA(  DSA *, ___d,A0),
AROS_LDA(  BIGNUM *, ___pub_key,A1),
AROS_LDA(  BIGNUM *, ___priv_key,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,DSA_meth_get_init,
AROS_LDA(  const DSA_METHOD *, ___dsam,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,DSA_meth_set_sign_setup,
AROS_LDA(  DSA_METHOD *, ___dsam,A0),
AROS_LDA(  APTR,___sign_setup,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,DSA_meth_get_bn_mod_exp,
AROS_LDA(  const DSA_METHOD *, ___dsam,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const DSA_METHOD * ,DSA_get_method,
AROS_LDA(  DSA *, ___d,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(DSA_METHOD * ,DSA_meth_new,
AROS_LDA(  const char *, ___name,A0),
AROS_LDA(  int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,DSA_meth_set_flags,
AROS_LDA(  DSA_METHOD *, ___dsam,A0),
AROS_LDA(  int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,DSA_meth_get_sign_setup,
AROS_LDA(  const DSA_METHOD *, ___dsam,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ENGINE * ,DSA_get0_engine,
AROS_LDA(  DSA *, ___d,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,X509_VERIFY_PARAM_set_auth_level,
AROS_LDA(  X509_VERIFY_PARAM *, ___param,A0),
AROS_LDA(  int, ___auth_level,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,X509_VERIFY_PARAM_get_auth_level,
AROS_LDA(  const X509_VERIFY_PARAM *, ___param,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(EVP_PKEY * ,X509_REQ_get0_pubkey,
AROS_LDA(  X509_REQ *, ___req,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,RSA_set0_key,
AROS_LDA(  RSA *, ___r,A0),
AROS_LDA(  BIGNUM *, ___n,A1),
AROS_LDA(  BIGNUM *, ___e,A2),
AROS_LDA(  BIGNUM *, ___d,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,RSA_meth_get_flags,
AROS_LDA(  const RSA_METHOD *, ___meth,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,RSA_meth_set_finish,
AROS_LDA(  RSA_METHOD *, ___rsa,A0),
AROS_LDA(  APTR,___finish,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,RSA_meth_get_priv_dec,
AROS_LDA(  const RSA_METHOD *, ___meth,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,RSA_meth_get_sign,
AROS_LDA(  const RSA_METHOD *, ___meth,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,RSA_meth_get_bn_mod_exp,
AROS_LDA(  const RSA_METHOD *, ___meth,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,RSA_test_flags,
AROS_LDA(  const RSA *, ___r,A0),
AROS_LDA(  int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(RSA_METHOD * ,RSA_meth_new,
AROS_LDA(  const char *, ___name,A0),
AROS_LDA(  int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void * ,RSA_meth_get0_app_data,
AROS_LDA(  const RSA_METHOD *, ___meth,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(RSA_METHOD * ,RSA_meth_dup,
AROS_LDA(  const RSA_METHOD *, ___meth,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,RSA_meth_set1_name,
AROS_LDA(  RSA_METHOD *, ___meth,A0),
AROS_LDA(  const char *, ___name,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,RSA_meth_set0_app_data,
AROS_LDA(  RSA_METHOD *, ___meth,A0),
AROS_LDA(  void *, ___app_data,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,RSA_set_flags,
AROS_LDA(  RSA *, ___r,A0),
AROS_LDA(  int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,RSA_meth_set_sign,
AROS_LDA(  RSA_METHOD *, ___rsa,A0),
AROS_LDA(  APTR,___sign,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,RSA_clear_flags,
AROS_LDA(  RSA *, ___r,A0),
AROS_LDA(  int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,RSA_meth_get_keygen,
AROS_LDA(  const RSA_METHOD *, ___meth,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,RSA_meth_set_keygen,
AROS_LDA(  RSA_METHOD *, ___rsa,A0),
AROS_LDA(  APTR,___keygen,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,RSA_meth_set_pub_dec,
AROS_LDA(  RSA_METHOD *, ___rsa,A0),
AROS_LDA(  APTR,___pub_dec,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,RSA_meth_get_finish,
AROS_LDA(  const RSA_METHOD *, ___meth,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void ,RSA_get0_key,
AROS_LDA(  const RSA *, ___r,A0),
AROS_LDA(  const BIGNUM **, ___n,A1),
AROS_LDA(  const BIGNUM **, ___e,A2),
AROS_LDA(  const BIGNUM **, ___d,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ENGINE * ,RSA_get0_engine,
AROS_LDA(  const RSA *, ___r,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,RSA_meth_set_priv_enc,
AROS_LDA(  RSA_METHOD *, ___rsa,A0),
AROS_LDA(  APTR,___priv_enc,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,RSA_meth_set_verify,
AROS_LDA(  RSA_METHOD *, ___rsa,A0),
AROS_LDA(  APTR,___verify,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,RSA_get0_factors,
AROS_LDA(  const RSA *, ___r,A0),
AROS_LDA(  const BIGNUM **, ___p,A1),
AROS_LDA(  const BIGNUM **, ___q,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char * ,RSA_meth_get0_name,
AROS_LDA(  const RSA_METHOD *, ___meth,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,RSA_meth_get_mod_exp,
AROS_LDA(  const RSA_METHOD *, ___meth,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,RSA_meth_set_flags,
AROS_LDA(  RSA_METHOD *, ___meth,A0),
AROS_LDA(  int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,RSA_meth_get_pub_dec,
AROS_LDA(  const RSA_METHOD *, ___meth,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,RSA_meth_set_bn_mod_exp,
AROS_LDA(  RSA_METHOD *, ___rsa,A0),
AROS_LDA(  APTR,___bn_mod_exp,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,RSA_meth_get_init,
AROS_LDA(  const RSA_METHOD *, ___meth,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,RSA_meth_free,
AROS_LDA(  RSA_METHOD *, ___meth,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,RSA_meth_get_pub_enc,
AROS_LDA(  const RSA_METHOD *, ___meth,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,RSA_meth_set_mod_exp,
AROS_LDA(  RSA_METHOD *, ___rsa,A0),
AROS_LDA(  APTR,___mod_exp,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,RSA_set0_factors,
AROS_LDA(  RSA *, ___r,A0),
AROS_LDA(  BIGNUM *, ___p,A1),
AROS_LDA(  BIGNUM *, ___q,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,RSA_meth_set_pub_enc,
AROS_LDA(  RSA_METHOD *, ___rsa,A0),
AROS_LDA(  APTR,___pub_enc,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,RSA_meth_set_priv_dec,
AROS_LDA(  RSA_METHOD *, ___rsa,A0),
AROS_LDA(  APTR,___priv_dec,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,RSA_meth_get_verify,
AROS_LDA(  const RSA_METHOD *, ___meth,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,RSA_meth_set_init,
AROS_LDA(  RSA_METHOD *, ___rsa,A0),
AROS_LDA(  APTR,___init,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,RSA_meth_get_priv_enc,
AROS_LDA(  const RSA_METHOD *, ___meth,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,RSA_set0_crt_params,
AROS_LDA(  RSA *, ___r,A0),
AROS_LDA(  BIGNUM *, ___dmp1,A1),
AROS_LDA(  BIGNUM *, ___dmq1,A2),
AROS_LDA(  BIGNUM *, ___iqmp,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void ,RSA_get0_crt_params,
AROS_LDA(  const RSA *, ___r,A0),
AROS_LDA(  const BIGNUM **, ___dmp1,A1),
AROS_LDA(  const BIGNUM **, ___dmq1,A2),
AROS_LDA(  const BIGNUM **, ___iqmp,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,DH_set0_pqg,
AROS_LDA(  DH *, ___dh,A0),
AROS_LDA(  BIGNUM *, ___p,A1),
AROS_LDA(  BIGNUM *, ___q,A2),
AROS_LDA(  BIGNUM *, ___g,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,DH_clear_flags,
AROS_LDA(  DH *, ___dh,A0),
AROS_LDA(  int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,DH_get0_key,
AROS_LDA(  const DH *, ___dh,A0),
AROS_LDA(  const BIGNUM **, ___pub_key,A1),
AROS_LDA(  const BIGNUM **, ___priv_key,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ENGINE * ,DH_get0_engine,
AROS_LDA(  DH *, ___d,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,DH_set0_key,
AROS_LDA(  DH *, ___dh,A0),
AROS_LDA(  BIGNUM *, ___pub_key,A1),
AROS_LDA(  BIGNUM *, ___priv_key,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,DH_set_length,
AROS_LDA(  DH *, ___dh,A0),
AROS_LDA(  long, ___length,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,DH_test_flags,
AROS_LDA(  const DH *, ___dh,A0),
AROS_LDA(  int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(long ,DH_get_length,
AROS_LDA(  const DH *, ___dh,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void ,DH_get0_pqg,
AROS_LDA(  const DH *, ___dh,A0),
AROS_LDA(  const BIGNUM **, ___p,A1),
AROS_LDA(  const BIGNUM **, ___q,A2),
AROS_LDA(  const BIGNUM **, ___g,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,DH_meth_get_compute_key,
AROS_LDA(  const DH_METHOD *, ___dhm,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,DH_meth_set1_name,
AROS_LDA(  DH_METHOD *, ___dhm,A0),
AROS_LDA(  const char *, ___name,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,DH_meth_set_init,
AROS_LDA(  DH_METHOD *, ___dhm,A0),
AROS_LDA(  APTR,___init,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,DH_meth_get_finish,
AROS_LDA(  const DH_METHOD *, ___dhm,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char * ,DH_meth_get0_name,
AROS_LDA(  const DH_METHOD *, ___dhm,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,DH_meth_set_generate_params,
AROS_LDA(  DH_METHOD *, ___dhm,A0),
AROS_LDA(  APTR,___generate_params,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,DH_meth_set_compute_key,
AROS_LDA(  DH_METHOD *, ___dhm,A0),
AROS_LDA(  APTR,___compute_key,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,DH_meth_set_flags,
AROS_LDA(  DH_METHOD *, ___dhm,A0),
AROS_LDA(  int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,DH_meth_get_generate_params,
AROS_LDA(  const DH_METHOD *, ___dhm,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,DH_meth_get_flags,
AROS_LDA(  const DH_METHOD *, ___dhm,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,DH_meth_set_finish,
AROS_LDA(  DH_METHOD *, ___dhm,A0),
AROS_LDA(  APTR,___finish,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void * ,DH_meth_get0_app_data,
AROS_LDA(  const DH_METHOD *, ___dhm,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,DH_meth_set0_app_data,
AROS_LDA(  DH_METHOD *, ___dhm,A0),
AROS_LDA(  void *, ___app_data,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,DH_meth_get_init,
AROS_LDA(  const DH_METHOD *, ___dhm,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,DH_meth_get_bn_mod_exp,
AROS_LDA(  const DH_METHOD *, ___dhm,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(DH_METHOD * ,DH_meth_new,
AROS_LDA(  const char *, ___name,A0),
AROS_LDA(  int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(DH_METHOD * ,DH_meth_dup,
AROS_LDA(  const DH_METHOD *, ___dhm,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,DH_meth_set_bn_mod_exp,
AROS_LDA(  DH_METHOD *, ___dhm,A0),
AROS_LDA(  APTR,___bn_mod_exp,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,DH_meth_set_generate_key,
AROS_LDA(  DH_METHOD *, ___dhm,A0),
AROS_LDA(  APTR,___generate_key,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,DH_meth_free,
AROS_LDA(  DH_METHOD *, ___dhm,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,DH_meth_get_generate_key,
AROS_LDA(  const DH_METHOD *, ___dhm,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,DH_set_flags,
AROS_LDA(  DH *, ___dh,A0),
AROS_LDA(  int, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(X509_OBJECT * ,X509_STORE_CTX_get_obj_by_subject,
AROS_LDA(  X509_STORE_CTX *, ___vs,A0),
AROS_LDA(  X509_LOOKUP_TYPE, ___type,D0),
AROS_LDA(  X509_NAME *, ___name,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,X509_OBJECT_free,
AROS_LDA(  X509_OBJECT *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509 * ,X509_OBJECT_get0_X509,
AROS_LDA(  const X509_OBJECT *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(STACK_OF(X509) * ,X509_STORE_CTX_get0_untrusted,
AROS_LDA(  X509_STORE_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509 * ,X509_STORE_CTX_get0_cert,
AROS_LDA(  X509_STORE_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,X509_STORE_CTX_set_verify,
AROS_LDA(  X509_STORE_CTX *, ___ctx,A0),
AROS_LDA(  X509_STORE_CTX_verify_fn, ___verify,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_STORE_CTX_verify_fn ,X509_STORE_CTX_get_verify,
AROS_LDA(  X509_STORE_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_STORE_CTX_verify_cb ,X509_STORE_CTX_get_verify_cb,
AROS_LDA(  X509_STORE_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,X509_STORE_CTX_set0_verified_chain,
AROS_LDA(  X509_STORE_CTX *, ___ctx,A0),
AROS_LDA(  STACK_OF(X509) *, ___sk,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,X509_STORE_CTX_set0_untrusted,
AROS_LDA(  X509_STORE_CTX *, ___ctx,A0),
AROS_LDA(  STACK_OF(X509) *, ___sk,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,OPENSSL_hexchar2int,
AROS_LDA(  unsigned char, ___c,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,DSA_SIG_set0,
AROS_LDA(  DSA_SIG *, ___sig,A0),
AROS_LDA(  BIGNUM *, ___r,A1),
AROS_LDA(  BIGNUM *, ___s,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,DSA_bits,
AROS_LDA(  const DSA *, ___d,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,ECDSA_SIG_set0,
AROS_LDA(  ECDSA_SIG *, ___sig,A0),
AROS_LDA(  BIGNUM *, ___r,A1),
AROS_LDA(  BIGNUM *, ___s,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EVP_ENCODE_CTX_copy,
AROS_LDA(  EVP_ENCODE_CTX *, ___dctx,A0),
AROS_LDA(  EVP_ENCODE_CTX *, ___sctx,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(const unsigned char * ,EVP_PKEY_get0_hmac,
AROS_LDA(  const EVP_PKEY *, ___pkey,A0),
AROS_LDA(  size_t *, ___len,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const EVP_MD * ,HMAC_CTX_get_md,
AROS_LDA(  const HMAC_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const STACK_OF(X509) * ,OCSP_resp_get0_certs,
AROS_LDA(  const OCSP_BASICRESP *, ___bs,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,OCSP_resp_get0_id,
AROS_LDA(  const OCSP_BASICRESP *, ___bs,A0),
AROS_LDA(  const ASN1_OCTET_STRING **, ___pid,A1),
AROS_LDA(  const X509_NAME **, ___pname,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(int ,PEM_write_bio_PrivateKey_traditional,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  EVP_PKEY *, ___x,A1),
AROS_LDA(  const EVP_CIPHER *, ___enc,A2),
AROS_LDA(  unsigned char *, ___kstr,A3),
AROS_LDA(  int, ___klen,D0),
AROS_LDA(  pem_password_cb *, ___cb,D1),
AROS_LDA(  void *, ___u,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_SESSION_get_protocol_version,
AROS_LDA(  const SSL_SESSION *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_is_dtls,
AROS_LDA(  const SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(unsigned long ,SSL_CTX_dane_set_flags,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  unsigned long, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(unsigned long ,SSL_CTX_dane_clear_flags,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  unsigned long, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(unsigned long ,SSL_dane_set_flags,
AROS_LDA(  SSL *, ___ssl,A0),
AROS_LDA(  unsigned long, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(unsigned long ,SSL_dane_clear_flags,
AROS_LDA(  SSL *, ___ssl,A0),
AROS_LDA(  unsigned long, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_client_version,
AROS_LDA(  const SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(long ,X509_get_pathlen,
AROS_LDA(  X509 *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_LOOKUP_TYPE ,X509_OBJECT_get_type,
AROS_LDA(  const X509_OBJECT *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_CRL * ,X509_OBJECT_get0_X509_CRL,
AROS_LDA(  X509_OBJECT *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,X509_STORE_lock,
AROS_LDA(  X509_STORE *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,X509_STORE_unlock,
AROS_LDA(  X509_STORE *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(STACK_OF(X509_OBJECT) * ,X509_STORE_get0_objects,
AROS_LDA(  X509_STORE *, ___v,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_VERIFY_PARAM * ,X509_STORE_get0_param,
AROS_LDA(  X509_STORE *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,X509_STORE_set_verify,
AROS_LDA(  X509_STORE *, ___ctx,A0),
AROS_LDA(  X509_STORE_CTX_verify_fn, ___verify,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_STORE_CTX_verify_fn ,X509_STORE_get_verify,
AROS_LDA(  X509_STORE *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_STORE_CTX_verify_cb ,X509_STORE_get_verify_cb,
AROS_LDA(  X509_STORE *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,X509_STORE_set_get_issuer,
AROS_LDA(  X509_STORE *, ___ctx,A0),
AROS_LDA(  X509_STORE_CTX_get_issuer_fn, ___get_issuer,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_STORE_CTX_get_issuer_fn ,X509_STORE_get_get_issuer,
AROS_LDA(  X509_STORE *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,X509_STORE_set_check_issued,
AROS_LDA(  X509_STORE *, ___ctx,A0),
AROS_LDA(  X509_STORE_CTX_check_issued_fn, ___check_issued,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_STORE_CTX_check_issued_fn ,X509_STORE_get_check_issued,
AROS_LDA(  X509_STORE *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,X509_STORE_set_check_revocation,
AROS_LDA(  X509_STORE *, ___ctx,A0),
AROS_LDA(  X509_STORE_CTX_check_revocation_fn, ___check_revocation,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_STORE_CTX_check_revocation_fn ,X509_STORE_get_check_revocation,
AROS_LDA(  X509_STORE *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,X509_STORE_set_get_crl,
AROS_LDA(  X509_STORE *, ___ctx,A0),
AROS_LDA(  X509_STORE_CTX_get_crl_fn, ___get_crl,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_STORE_CTX_get_crl_fn ,X509_STORE_get_get_crl,
AROS_LDA(  X509_STORE *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,X509_STORE_set_check_crl,
AROS_LDA(  X509_STORE *, ___ctx,A0),
AROS_LDA(  X509_STORE_CTX_check_crl_fn, ___check_crl,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_STORE_CTX_check_crl_fn ,X509_STORE_get_check_crl,
AROS_LDA(  X509_STORE *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,X509_STORE_set_cert_crl,
AROS_LDA(  X509_STORE *, ___ctx,A0),
AROS_LDA(  X509_STORE_CTX_cert_crl_fn, ___cert_crl,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_STORE_CTX_cert_crl_fn ,X509_STORE_get_cert_crl,
AROS_LDA(  X509_STORE *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,X509_STORE_set_check_policy,
AROS_LDA(  X509_STORE *, ___ctx,A0),
AROS_LDA(  X509_STORE_CTX_check_policy_fn, ___check_policy,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_STORE_CTX_check_policy_fn ,X509_STORE_get_check_policy,
AROS_LDA(  X509_STORE *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,X509_STORE_set_lookup_certs,
AROS_LDA(  X509_STORE *, ___ctx,A0),
AROS_LDA(  X509_STORE_CTX_lookup_certs_fn, ___lookup_certs,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_STORE_CTX_lookup_certs_fn ,X509_STORE_get_lookup_certs,
AROS_LDA(  X509_STORE *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,X509_STORE_set_lookup_crls,
AROS_LDA(  X509_STORE *, ___ctx,A0),
AROS_LDA(  X509_STORE_CTX_lookup_crls_fn, ___lookup_crls,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_STORE_CTX_lookup_crls_fn ,X509_STORE_get_lookup_crls,
AROS_LDA(  X509_STORE *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,X509_STORE_set_cleanup,
AROS_LDA(  X509_STORE *, ___ctx,A0),
AROS_LDA(  X509_STORE_CTX_cleanup_fn, ___cleanup,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_STORE_CTX_cleanup_fn ,X509_STORE_get_cleanup,
AROS_LDA(  X509_STORE *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509_STORE_set_ex_data,
AROS_LDA(  X509_STORE *, ___ctx,A0),
AROS_LDA(  int, ___idx,D0),
AROS_LDA(  void *, ___data,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void * ,X509_STORE_get_ex_data,
AROS_LDA(  X509_STORE *, ___ctx,A0),
AROS_LDA(  int, ___idx,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_STORE_CTX_get_issuer_fn ,X509_STORE_CTX_get_get_issuer,
AROS_LDA(  X509_STORE_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_STORE_CTX_check_issued_fn ,X509_STORE_CTX_get_check_issued,
AROS_LDA(  X509_STORE_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_STORE_CTX_check_revocation_fn ,X509_STORE_CTX_get_check_revocation,
AROS_LDA(  X509_STORE_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_STORE_CTX_get_crl_fn ,X509_STORE_CTX_get_get_crl,
AROS_LDA(  X509_STORE_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_STORE_CTX_check_crl_fn ,X509_STORE_CTX_get_check_crl,
AROS_LDA(  X509_STORE_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_STORE_CTX_cert_crl_fn ,X509_STORE_CTX_get_cert_crl,
AROS_LDA(  X509_STORE_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_STORE_CTX_check_policy_fn ,X509_STORE_CTX_get_check_policy,
AROS_LDA(  X509_STORE_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_STORE_CTX_lookup_certs_fn ,X509_STORE_CTX_get_lookup_certs,
AROS_LDA(  X509_STORE_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_STORE_CTX_lookup_crls_fn ,X509_STORE_CTX_get_lookup_crls,
AROS_LDA(  X509_STORE_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_STORE_CTX_cleanup_fn ,X509_STORE_CTX_get_cleanup,
AROS_LDA(  X509_STORE_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,X509_STORE_CTX_set_error_depth,
AROS_LDA(  X509_STORE_CTX *, ___ctx,A0),
AROS_LDA(  int, ___depth,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,X509_STORE_CTX_set_current_cert,
AROS_LDA(  X509_STORE_CTX *, ___ctx,A0),
AROS_LDA(  X509 *, ___x,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,NAME_CONSTRAINTS_check_CN,
AROS_LDA(  X509 *, ___x,A0),
AROS_LDA(  NAME_CONSTRAINTS *, ___nc,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,X509_set_proxy_flag,
AROS_LDA(  X509 *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,X509_set_proxy_pathlen,
AROS_LDA(  X509 *, ___x,A0),
AROS_LDA(  long, ___l,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(long ,X509_get_proxy_pathlen,
AROS_LDA(  X509 *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(ASIdentifierChoice * ,ASIdentifierChoice_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,ASIdentifierChoice_free,
AROS_LDA(  ASIdentifierChoice *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(ASIdentifierChoice * ,d2i_ASIdentifierChoice,
AROS_LDA(  ASIdentifierChoice **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_ASIdentifierChoice,
AROS_LDA(  ASIdentifierChoice *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,ASIdentifierChoice_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(ASIdentifiers * ,ASIdentifiers_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,ASIdentifiers_free,
AROS_LDA(  ASIdentifiers *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(ASIdentifiers * ,d2i_ASIdentifiers,
AROS_LDA(  ASIdentifiers **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_ASIdentifiers,
AROS_LDA(  ASIdentifiers *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,ASIdentifiers_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(ASIdOrRange * ,ASIdOrRange_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,ASIdOrRange_free,
AROS_LDA(  ASIdOrRange *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(ASIdOrRange * ,d2i_ASIdOrRange,
AROS_LDA(  ASIdOrRange **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_ASIdOrRange,
AROS_LDA(  ASIdOrRange *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,ASIdOrRange_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(ASRange * ,ASRange_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,ASRange_free,
AROS_LDA(  ASRange *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(ASRange * ,d2i_ASRange,
AROS_LDA(  ASRange **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_ASRange,
AROS_LDA(  ASRange *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,ASRange_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(IPAddressChoice * ,IPAddressChoice_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,IPAddressChoice_free,
AROS_LDA(  IPAddressChoice *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(IPAddressChoice * ,d2i_IPAddressChoice,
AROS_LDA(  IPAddressChoice **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_IPAddressChoice,
AROS_LDA(  IPAddressChoice *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,IPAddressChoice_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(IPAddressFamily * ,IPAddressFamily_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,IPAddressFamily_free,
AROS_LDA(  IPAddressFamily *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(IPAddressFamily * ,d2i_IPAddressFamily,
AROS_LDA(  IPAddressFamily **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_IPAddressFamily,
AROS_LDA(  IPAddressFamily *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,IPAddressFamily_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(IPAddressOrRange * ,IPAddressOrRange_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,IPAddressOrRange_free,
AROS_LDA(  IPAddressOrRange *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(IPAddressOrRange * ,d2i_IPAddressOrRange,
AROS_LDA(  IPAddressOrRange **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_IPAddressOrRange,
AROS_LDA(  IPAddressOrRange *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,IPAddressOrRange_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const unsigned char * ,ASN1_STRING_get0_data,
AROS_LDA(  const ASN1_STRING *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const ASN1_TIME * ,X509_get0_notBefore,
AROS_LDA(  const X509 *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const ASN1_TIME * ,X509_get0_notAfter,
AROS_LDA(  const X509 *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const ASN1_TIME * ,X509_CRL_get0_lastUpdate,
AROS_LDA(  const X509_CRL *, ___crl,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const ASN1_TIME * ,X509_CRL_get0_nextUpdate,
AROS_LDA(  const X509_CRL *, ___crl,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(char * ,OPENSSL_uni2utf8,
AROS_LDA(  const unsigned char *, ___uni,A0),
AROS_LDA(  int, ___unilen,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,CT_POLICY_EVAL_CTX_set_shared_CTLOG_STORE,
AROS_LDA(  CT_POLICY_EVAL_CTX *, ___ctx,A0),
AROS_LDA(  CTLOG_STORE *, ___log_store,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,CT_POLICY_EVAL_CTX_set1_cert,
AROS_LDA(  CT_POLICY_EVAL_CTX *, ___ctx,A0),
AROS_LDA(  X509 *, ___cert,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,CT_POLICY_EVAL_CTX_set1_issuer,
AROS_LDA(  CT_POLICY_EVAL_CTX *, ___ctx,A0),
AROS_LDA(  X509 *, ___issuer,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(ECPARAMETERS * ,ECPARAMETERS_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,ECPARAMETERS_free,
AROS_LDA(  ECPARAMETERS *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(int ,BIO_get_new_index,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,EVP_PKEY_set1_tls_encodedpoint,
AROS_LDA(  EVP_PKEY *, ___pkey,A0),
AROS_LDA(  const unsigned char *, ___pt,A1),
AROS_LDA(  size_t, ___ptlen,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(size_t ,EVP_PKEY_get1_tls_encodedpoint,
AROS_LDA(  EVP_PKEY *, ___pkey,A0),
AROS_LDA(  unsigned char **, ___ppt,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,OCSP_RESPID_set_by_name,
AROS_LDA(  OCSP_RESPID *, ___respid,A0),
AROS_LDA(  X509 *, ___cert,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,OCSP_RESPID_set_by_key,
AROS_LDA(  OCSP_RESPID *, ___respid,A0),
AROS_LDA(  X509 *, ___cert,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,OCSP_RESPID_match,
AROS_LDA(  OCSP_RESPID *, ___respid,A0),
AROS_LDA(  X509 *, ___cert,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,PKCS12_add_friendlyname_utf8,
AROS_LDA(  PKCS12_SAFEBAG *, ___bag,A0),
AROS_LDA(  const char *, ___name,A1),
AROS_LDA(  int, ___namelen,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD9(int ,PKCS12_key_gen_utf8,
AROS_LDA(  const char *, ___pass,A0),
AROS_LDA(  int, ___passlen,D0),
AROS_LDA(  unsigned char *, ___salt,A1),
AROS_LDA(  int, ___saltlen,D1),
AROS_LDA(  int, ___id,D2),
AROS_LDA(  int, ___iter,D3),
AROS_LDA(  int, ___n,D4),
AROS_LDA(  unsigned char *, ___out,A2),
AROS_LDA(  const EVP_MD *, ___md_type,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(unsigned char * ,OPENSSL_utf82uni,
AROS_LDA(  const char *, ___asc,A0),
AROS_LDA(  int, ___asclen,D0),
AROS_LDA(  unsigned char **, ___uni,A1),
AROS_LDA(  int *, ___unilen,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const SSL_CIPHER * ,SSL_SESSION_get0_cipher,
AROS_LDA(  const SSL_SESSION *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,SSL_SESSION_set1_id,
AROS_LDA(  SSL_SESSION *, ___s,A0),
AROS_LDA(  const unsigned char *, ___sid,A1),
AROS_LDA(  unsigned int, ___sid_len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(const unsigned char * ,SSL_SESSION_get0_id_context,
AROS_LDA(  const SSL_SESSION *, ___s,A0),
AROS_LDA(  unsigned int *, ___len,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const STACK_OF(ASN1_UTF8STRING) * ,TS_STATUS_INFO_get0_text,
AROS_LDA(  const TS_STATUS_INFO *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,X509_SIG_getm,
AROS_LDA(  X509_SIG *, ___sig,A0),
AROS_LDA(  X509_ALGOR **, ___palg,A1),
AROS_LDA(  ASN1_OCTET_STRING **, ___pdigest,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const ASN1_INTEGER * ,X509_get0_serialNumber,
AROS_LDA(  const X509 *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(uint64_t ,CT_POLICY_EVAL_CTX_get_time,
AROS_LDA(  const CT_POLICY_EVAL_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,CT_POLICY_EVAL_CTX_set_time,
AROS_LDA(  CT_POLICY_EVAL_CTX *, ___ctx,A0),
AROS_LDA(  uint64_t, ___time_in_ms,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,DH_check_params,
AROS_LDA(  const DH *, ___dh,A0),
AROS_LDA(  int *, ___ret,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char * ,SSL_COMP_get0_name,
AROS_LDA(  const SSL_COMP *, ___comp,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_COMP_get_id,
AROS_LDA(  const SSL_COMP *, ___comp,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(time_t ,X509_VERIFY_PARAM_get_time,
AROS_LDA(  const X509_VERIFY_PARAM *, ___param,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_VERIFY_PARAM_set_inh_flags,
AROS_LDA(  X509_VERIFY_PARAM *, ___param,A0),
AROS_LDA(  uint32_t, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(uint32_t ,X509_VERIFY_PARAM_get_inh_flags,
AROS_LDA(  const X509_VERIFY_PARAM *, ___param,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void ,CRYPTO_secure_clear_free,
AROS_LDA(  void *, ___ptr,A0),
AROS_LDA(  size_t, ___num,D0),
AROS_LDA(  const char *, ___file,A1),
AROS_LDA(  int, ___line,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EVP_PKEY_set1_engine,
AROS_LDA(  EVP_PKEY *, ___pkey,A0),
AROS_LDA(  ENGINE *, ___e,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(STACK_OF(SSL_CIPHER) * ,SSL_get_client_ciphers,
AROS_LDA(  const SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char * ,SSL_CIPHER_standard_name,
AROS_LDA(  const SSL_CIPHER *, ___c,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(STACK_OF(X509) * ,SSL_get0_verified_chain,
AROS_LDA(  const SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(STACK_OF(SSL_COMP) * ,SSL_COMP_set0_compression_methods,
AROS_LDA(  STACK_OF(SSL_COMP) *, ___meths,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_CTX_set1_cert_store,
AROS_LDA(  SSL_CTX *, ___a,A0),
AROS_LDA(  X509_STORE *, ___b,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(size_t ,DTLS_get_data_mtu,
AROS_LDA(  const SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,SSL_read_ex,
AROS_LDA(  SSL *, ___ssl,A0),
AROS_LDA(  void *, ___buf,A1),
AROS_LDA(  size_t, ___num,D0),
AROS_LDA(  size_t *, ___readbytes,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,SSL_peek_ex,
AROS_LDA(  SSL *, ___ssl,A0),
AROS_LDA(  void *, ___buf,A1),
AROS_LDA(  size_t, ___num,D0),
AROS_LDA(  size_t *, ___readbytes,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,SSL_write_ex,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  const void *, ___buf,A1),
AROS_LDA(  size_t, ___num,D0),
AROS_LDA(  size_t *, ___written,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_CTX_set_keylog_callback,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  SSL_CTX_keylog_cb_func, ___cb,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(SSL_CTX_keylog_cb_func ,SSL_CTX_get_keylog_callback,
AROS_LDA(  const SSL_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_get_peer_signature_type_nid,
AROS_LDA(  const SSL *, ___s,A0),
AROS_LDA(  int *, ___pnid,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_key_update,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  int, ___updatetype,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_get_key_update_type,
AROS_LDA(  const SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int ,SSL_bytes_to_cipher_list,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  const unsigned char *, ___bytes,A1),
AROS_LDA(  size_t, ___len,D0),
AROS_LDA(  int, ___isv2format,D1),
AROS_LDA(  STACK_OF(SSL_CIPHER) **, ___sk,A2),
AROS_LDA(  STACK_OF(SSL_CIPHER) **, ___scsvs,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(size_t ,SSL_client_hello_get0_compression_methods,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  const unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(size_t ,SSL_client_hello_get0_ciphers,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  const unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,SSL_client_hello_get0_ext,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  unsigned int, ___type,D0),
AROS_LDA(  const unsigned char **, ___out,A1),
AROS_LDA(  size_t *, ___outlen,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(size_t ,SSL_client_hello_get0_session_id,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  const unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(size_t ,SSL_client_hello_get0_random,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  const unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,SSL_CTX_set_client_hello_cb,
AROS_LDA(  SSL_CTX *, ___c,A0),
AROS_LDA(  SSL_client_hello_cb_fn, ___cb,A1),
AROS_LDA(  void *, ___arg,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(unsigned int ,SSL_client_hello_get0_legacy_version,
AROS_LDA(  SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_client_hello_isv2,
AROS_LDA(  SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_set_max_early_data,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  uint32_t, ___max_early_data,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_CTX_set_max_early_data,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  uint32_t, ___max_early_data,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(uint32_t ,SSL_get_max_early_data,
AROS_LDA(  const SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(uint32_t ,SSL_CTX_get_max_early_data,
AROS_LDA(  const SSL_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,SSL_write_early_data,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  const void *, ___buf,A1),
AROS_LDA(  size_t, ___num,D0),
AROS_LDA(  size_t *, ___written,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,SSL_read_early_data,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  void *, ___buf,A1),
AROS_LDA(  size_t, ___num,D0),
AROS_LDA(  size_t *, ___readbytes,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_get_early_data_status,
AROS_LDA(  const SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(uint32_t ,SSL_SESSION_get_max_early_data,
AROS_LDA(  const SSL_SESSION *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_add1_to_CA_list,
AROS_LDA(  SSL *, ___ssl,A0),
AROS_LDA(  const X509 *, ___x,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_set0_CA_list,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  STACK_OF(X509_NAME) *, ___name_list,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_CTX_set0_CA_list,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  STACK_OF(X509_NAME) *, ___name_list,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const STACK_OF(X509_NAME) * ,SSL_get0_CA_list,
AROS_LDA(  const SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const STACK_OF(X509_NAME) * ,SSL_get0_peer_CA_list,
AROS_LDA(  const SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_CTX_add1_to_CA_list,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  const X509 *, ___x,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const STACK_OF(X509_NAME) * ,SSL_CTX_get0_CA_list,
AROS_LDA(  const SSL_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD8(int ,SSL_CTX_add_custom_ext,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  unsigned int, ___ext_type,D0),
AROS_LDA(  unsigned int, ___context,D1),
AROS_LDA(  SSL_custom_ext_add_cb_ex, ___add_cb,A1),
AROS_LDA(  SSL_custom_ext_free_cb_ex, ___free_cb,A2),
AROS_LDA(  void *, ___add_arg,A3),
AROS_LDA(  SSL_custom_ext_parse_cb_ex, ___parse_cb,D2),
AROS_LDA(  void *, ___parse_arg,D3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_SESSION_is_resumable,
AROS_LDA(  const SSL_SESSION *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_CTX_set_record_padding_callback,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(APTR  ,___cb,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_set_record_padding_callback,
AROS_LDA(  SSL *, ___ssl,A0),
AROS_LDA(APTR  ,___cb,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_CTX_set_block_padding,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  size_t, ___block_size,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void * ,SSL_CTX_get_record_padding_callback_arg,
AROS_LDA(  const SSL_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void * ,SSL_get_record_padding_callback_arg,
AROS_LDA(  const SSL *, ___ssl,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_set_block_padding,
AROS_LDA(  SSL *, ___ssl,A0),
AROS_LDA(  size_t, ___block_size,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_set_record_padding_callback_arg,
AROS_LDA(  SSL *, ___ssl,A0),
AROS_LDA(  void *, ___arg,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_CTX_set_record_padding_callback_arg,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  void *, ___arg,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,SSL_CTX_use_serverinfo_ex,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  unsigned int, ___version,D0),
AROS_LDA(  const unsigned char *, ___serverinfo,A1),
AROS_LDA(  size_t, ___serverinfo_length,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,SSL_client_hello_get1_extensions_present,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  int **, ___out,A1),
AROS_LDA(  size_t *, ___outlen,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_set_psk_find_session_callback,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  SSL_psk_find_session_cb_func, ___cb,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_set_psk_use_session_callback,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  SSL_psk_use_session_cb_func, ___cb,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_CTX_set_psk_use_session_callback,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  SSL_psk_use_session_cb_func, ___cb,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_CTX_set_psk_find_session_callback,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  SSL_psk_find_session_cb_func, ___cb,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const EVP_MD * ,SSL_CIPHER_get_handshake_digest,
AROS_LDA(  const SSL_CIPHER *, ___c,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,SSL_SESSION_set1_master_key,
AROS_LDA(  SSL_SESSION *, ___sess,A0),
AROS_LDA(  const unsigned char *, ___in,A1),
AROS_LDA(  size_t, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_SESSION_set_cipher,
AROS_LDA(  SSL_SESSION *, ___s,A0),
AROS_LDA(  const SSL_CIPHER *, ___cipher,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_SESSION_set_protocol_version,
AROS_LDA(  SSL_SESSION *, ___s,A0),
AROS_LDA(  int, ___version,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char * ,OPENSSL_cipher_name,
AROS_LDA(  const char *, ___rfc_name,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_alloc_buffers,
AROS_LDA(  SSL *, ___ssl,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_free_buffers,
AROS_LDA(  SSL *, ___ssl,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(SSL_SESSION * ,SSL_SESSION_dup,
AROS_LDA(  SSL_SESSION *, ___src,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const SSL_CIPHER * ,SSL_get_pending_cipher,
AROS_LDA(  const SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(uint16_t ,SSL_CIPHER_get_protocol_id,
AROS_LDA(  const SSL_CIPHER *, ___c,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_SESSION_set_max_early_data,
AROS_LDA(  SSL_SESSION *, ___s,A0),
AROS_LDA(  uint32_t, ___max_early_data,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,SSL_SESSION_set1_alpn_selected,
AROS_LDA(  SSL_SESSION *, ___s,A0),
AROS_LDA(  const unsigned char *, ___alpn,A1),
AROS_LDA(  size_t, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_SESSION_set1_hostname,
AROS_LDA(  SSL_SESSION *, ___s,A0),
AROS_LDA(  const char *, ___hostname,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,SSL_SESSION_get0_alpn_selected,
AROS_LDA(  const SSL_SESSION *, ___s,A0),
AROS_LDA(  const unsigned char **, ___alpn,A1),
AROS_LDA(  size_t *, ___len,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,DTLS_set_timer_cb,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  DTLS_timer_cb, ___cb,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_CTX_set_tlsext_max_fragment_length,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  uint8_t, ___mode,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_set_tlsext_max_fragment_length,
AROS_LDA(  SSL *, ___ssl,A0),
AROS_LDA(  uint8_t, ___mode,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(uint8_t ,SSL_SESSION_get_max_fragment_length,
AROS_LDA(  const SSL_SESSION *, ___sess,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_stateless,
AROS_LDA(  SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,SSL_verify_client_post_handshake,
AROS_LDA(  SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_set_post_handshake_auth,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  int, ___val,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(int ,SSL_export_keying_material_early,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  size_t, ___olen,D0),
AROS_LDA(  const char *, ___label,A2),
AROS_LDA(  size_t, ___llen,D1),
AROS_LDA(  const unsigned char *, ___context,A3),
AROS_LDA(  size_t, ___contextlen,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,SSL_CTX_use_cert_and_key,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  X509 *, ___x509,A1),
AROS_LDA(  EVP_PKEY *, ___privatekey,A2),
AROS_LDA(  STACK_OF(X509) *, ___chain,A3),
AROS_LDA(  int, ___override,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,SSL_use_cert_and_key,
AROS_LDA(  SSL *, ___ssl,A0),
AROS_LDA(  X509 *, ___x509,A1),
AROS_LDA(  EVP_PKEY *, ___privatekey,A2),
AROS_LDA(  STACK_OF(X509) *, ___chain,A3),
AROS_LDA(  int, ___override,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,SSL_SESSION_get0_ticket_appdata,
AROS_LDA(  SSL_SESSION *, ___ss,A0),
AROS_LDA(  void **, ___data,A1),
AROS_LDA(  size_t *, ___len,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,SSL_SESSION_set1_ticket_appdata,
AROS_LDA(  SSL_SESSION *, ___ss,A0),
AROS_LDA(  const void *, ___data,A1),
AROS_LDA(  size_t, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,SSL_CTX_set_session_ticket_cb,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  SSL_CTX_generate_session_ticket_fn, ___gen_cb,A1),
AROS_LDA(  SSL_CTX_decrypt_session_ticket_fn, ___dec_cb,A2),
AROS_LDA(  void *, ___arg,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_CTX_set_stateless_cookie_generate_cb,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(APTR  ,___gen_stateless_cookie_cb,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_CTX_set_stateless_cookie_verify_cb,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(APTR  ,___verify_stateless_cookie_cb,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_CTX_set_ciphersuites,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  const char *, ___str,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_set_ciphersuites,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  const char *, ___str,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_set_num_tickets,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  size_t, ___num_tickets,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(size_t ,SSL_CTX_get_num_tickets,
AROS_LDA(  const SSL_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(size_t ,SSL_get_num_tickets,
AROS_LDA(  const SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_CTX_set_num_tickets,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  size_t, ___num_tickets,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,SSL_CTX_set_allow_early_data_cb,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  SSL_allow_early_data_cb_fn, ___cb,A1),
AROS_LDA(  void *, ___arg,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void ,SSL_set_allow_early_data_cb,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  SSL_allow_early_data_cb_fn, ___cb,A1),
AROS_LDA(  void *, ___arg,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_set_recv_max_early_data,
AROS_LDA(  SSL *, ___s,A0),
AROS_LDA(  uint32_t, ___recv_max_early_data,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(uint32_t ,SSL_get_recv_max_early_data,
AROS_LDA(  const SSL *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(uint32_t ,SSL_CTX_get_recv_max_early_data,
AROS_LDA(  const SSL_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_CTX_set_recv_max_early_data,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  uint32_t, ___recv_max_early_data,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,SSL_CTX_set_post_handshake_auth,
AROS_LDA(  SSL_CTX *, ___ctx,A0),
AROS_LDA(  int, ___val,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,SSL_get_signature_type_nid,
AROS_LDA(  const SSL *, ___s,A0),
AROS_LDA(  int *, ___pnid,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,IPAddressRange_free,
AROS_LDA(  IPAddressRange *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(TLS_FEATURE * ,TLS_FEATURE_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const BIO_METHOD * ,BIO_f_linebuffer,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(IPAddressRange * ,IPAddressRange_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,IPAddressRange_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(IPAddressRange * ,d2i_IPAddressRange,
AROS_LDA(  IPAddressRange **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,TLS_FEATURE_free,
AROS_LDA(  TLS_FEATURE *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_RSA_OAEP_PARAMS,
AROS_LDA(  RSA_OAEP_PARAMS *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_IPAddressRange,
AROS_LDA(  IPAddressRange *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(X509_OBJECT * ,X509_OBJECT_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(ASN1_TYPE * ,PKCS12_get_attr,
AROS_LDA(  const PKCS12_SAFEBAG *, ___bag,A0),
AROS_LDA(  int, ___attr_nid,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,ECPKPARAMETERS_free,
AROS_LDA(  ECPKPARAMETERS *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(ECPKPARAMETERS * ,ECPKPARAMETERS_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const ASN1_ITEM * ,ASN1_ITEM_lookup,
AROS_LDA(  const char *, ___name,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const ASN1_ITEM * ,ASN1_ITEM_get,
AROS_LDA(  size_t, ___i,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,BIO_read_ex,
AROS_LDA(  BIO *, ___b,A0),
AROS_LDA(  void *, ___data,A1),
AROS_LDA(  size_t, ___dlen,D0),
AROS_LDA(  size_t *, ___readbytes,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,BIO_set_callback_ex,
AROS_LDA(  BIO *, ___b,A0),
AROS_LDA(  BIO_callback_fn_ex, ___callback,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(BIO_callback_fn_ex ,BIO_get_callback_ex,
AROS_LDA(  const BIO *, ___b,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,BIO_meth_set_read_ex,
AROS_LDA(  BIO_METHOD *, ___biom,A0),
AROS_LDA(APTR  ,___bread,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,BIO_meth_get_read_ex,
AROS_LDA(  const BIO_METHOD *, ___biom,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,BIO_write_ex,
AROS_LDA(  BIO *, ___b,A0),
AROS_LDA(  const void *, ___data,A1),
AROS_LDA(  size_t, ___dlen,D0),
AROS_LDA(  size_t *, ___written,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,BIO_meth_get_write_ex,
AROS_LDA(  const BIO_METHOD *, ___biom,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,BIO_meth_set_write_ex,
AROS_LDA(  BIO_METHOD *, ___biom,A0),
AROS_LDA(  APTR,___bwrite,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,EVP_PKEY_CTX_md,
AROS_LDA(  EVP_PKEY_CTX *, ___ctx,A0),
AROS_LDA(  int, ___optype,D0),
AROS_LDA(  int, ___cmd,D1),
AROS_LDA(  const char *, ___md,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,RSA_pkey_ctx_ctrl,
AROS_LDA(  EVP_PKEY_CTX *, ___ctx,A0),
AROS_LDA(  int, ___optype,D0),
AROS_LDA(  int, ___cmd,D1),
AROS_LDA(  int, ___p1,D2),
AROS_LDA(  void *, ___p2,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,UI_method_set_ex_data,
AROS_LDA(  UI_METHOD *, ___method,A0),
AROS_LDA(  int, ___idx,D0),
AROS_LDA(  void *, ___data,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(const void * ,UI_method_get_ex_data,
AROS_LDA(  const UI_METHOD *, ___method,A0),
AROS_LDA(  int, ___idx,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(UI_METHOD * ,UI_UTIL_wrap_read_pem_callback,
AROS_LDA(  pem_password_cb *, ___cb,A0),
AROS_LDA(  int, ___rwflag,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(const unsigned char * ,EVP_PKEY_get0_poly1305,
AROS_LDA(  const EVP_PKEY *, ___pkey,A0),
AROS_LDA(  size_t *, ___len,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(const unsigned char * ,EVP_PKEY_get0_siphash,
AROS_LDA(  const EVP_PKEY *, ___pkey,A0),
AROS_LDA(  size_t *, ___len,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aria_256_ofb,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aria_256_cfb128,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aria_128_cfb1,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aria_128_ecb,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aria_128_cfb128,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aria_192_ecb,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aria_128_cbc,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aria_192_ofb,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aria_192_cbc,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aria_192_cfb1,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aria_128_cfb8,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aria_256_cfb1,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aria_192_cfb8,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aria_256_cfb8,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aria_256_cbc,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aria_128_ofb,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aria_192_cfb128,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aria_256_ecb,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aria_256_ctr,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aria_128_ctr,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aria_192_ctr,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const UI_METHOD * ,UI_null,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ENGINE * ,EC_KEY_get0_engine,
AROS_LDA(  const EC_KEY *, ___eckey,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,INT32_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,UINT64_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,ZINT32_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,ZUINT64_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,INT64_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,ZUINT32_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,UINT32_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,ZINT64_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(int ,BIO_lookup_ex,
AROS_LDA(  const char *, ___host,A0),
AROS_LDA(  const char *, ___service,A1),
AROS_LDA(  int, ___lookup_type,D0),
AROS_LDA(  int, ___family,D1),
AROS_LDA(  int, ___socktype,D2),
AROS_LDA(  int, ___protocol,D3),
AROS_LDA(  BIO_ADDRINFO **, ___res,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,X509_CRL_print_ex,
AROS_LDA(  BIO *, ___out,A0),
AROS_LDA(  X509_CRL *, ___x,A1),
AROS_LDA(  unsigned long, ___nmflag,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,X509_SIG_INFO_get,
AROS_LDA(  const X509_SIG_INFO *, ___siginf,A0),
AROS_LDA(  int *, ___mdnid,A1),
AROS_LDA(  int *, ___pknid,A2),
AROS_LDA(  int *, ___secbits,A3),
AROS_LDA(  uint32_t *, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,X509_get_signature_info,
AROS_LDA(  X509 *, ___x,A0),
AROS_LDA(  int *, ___mdnid,A1),
AROS_LDA(  int *, ___pknid,A2),
AROS_LDA(  int *, ___secbits,A3),
AROS_LDA(  uint32_t *, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(void ,X509_SIG_INFO_set,
AROS_LDA(  X509_SIG_INFO *, ___siginf,A0),
AROS_LDA(  int, ___mdnid,D0),
AROS_LDA(  int, ___pknid,D1),
AROS_LDA(  int, ___secbits,D2),
AROS_LDA(  uint32_t, ___flags,D3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,ESS_CERT_ID_V2_free,
AROS_LDA(  ESS_CERT_ID_V2 *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(ESS_SIGNING_CERT_V2 * ,ESS_SIGNING_CERT_V2_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(ESS_SIGNING_CERT_V2 * ,d2i_ESS_SIGNING_CERT_V2,
AROS_LDA(  ESS_SIGNING_CERT_V2 **, ___a,A0),
AROS_LDA(  const unsigned char **, ___pp,A1),
AROS_LDA(  long, ___length,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_ESS_CERT_ID_V2,
AROS_LDA(  const ESS_CERT_ID_V2 *, ___a,A0),
AROS_LDA(  unsigned char **, ___pp,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ESS_CERT_ID_V2 * ,ESS_CERT_ID_V2_dup,
AROS_LDA(  ESS_CERT_ID_V2 *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,TS_RESP_CTX_set_ess_cert_id_digest,
AROS_LDA(  TS_RESP_CTX *, ___ctx,A0),
AROS_LDA(  const EVP_MD *, ___md,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(ESS_CERT_ID_V2 * ,d2i_ESS_CERT_ID_V2,
AROS_LDA(  ESS_CERT_ID_V2 **, ___a,A0),
AROS_LDA(  const unsigned char **, ___pp,A1),
AROS_LDA(  long, ___length,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_ESS_SIGNING_CERT_V2,
AROS_LDA(  const ESS_SIGNING_CERT_V2 *, ___a,A0),
AROS_LDA(  unsigned char **, ___pp,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,TS_CONF_set_ess_cert_id_digest,
AROS_LDA(  CONF *, ___conf,A0),
AROS_LDA(  const char *, ___section,A1),
AROS_LDA(  TS_RESP_CTX *, ___ctx,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,ESS_SIGNING_CERT_V2_free,
AROS_LDA(  ESS_SIGNING_CERT_V2 *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ESS_SIGNING_CERT_V2 * ,ESS_SIGNING_CERT_V2_dup,
AROS_LDA(  ESS_SIGNING_CERT_V2 *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(ESS_CERT_ID_V2 * ,ESS_CERT_ID_V2_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int ,PEM_read_bio_ex,
AROS_LDA(  BIO *, ___bp,A0),
AROS_LDA(  char **, ___name,A1),
AROS_LDA(  char **, ___header,A2),
AROS_LDA(  unsigned char **, ___data,A3),
AROS_LDA(  long *, ___len,D0),
AROS_LDA(  unsigned int, ___flags,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(int ,PEM_bytes_read_bio_secmem,
AROS_LDA(  unsigned char **, ___pdata,A0),
AROS_LDA(  long *, ___plen,A1),
AROS_LDA(  char **, ___pnm,A2),
AROS_LDA(  const char *, ___name,A3),
AROS_LDA(  BIO *, ___bp,D0),
AROS_LDA(  pem_password_cb *, ___cb,D1),
AROS_LDA(  void *, ___u,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,EVP_DigestSign,
AROS_LDA(  EVP_MD_CTX *, ___ctx,A0),
AROS_LDA(  unsigned char *, ___sigret,A1),
AROS_LDA(  size_t *, ___siglen,A2),
AROS_LDA(  const unsigned char *, ___tbs,A3),
AROS_LDA(  size_t, ___tbslen,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,EVP_DigestVerify,
AROS_LDA(  EVP_MD_CTX *, ___ctx,A0),
AROS_LDA(  const unsigned char *, ___sigret,A1),
AROS_LDA(  size_t, ___siglen,D0),
AROS_LDA(  const unsigned char *, ___tbs,A2),
AROS_LDA(  size_t, ___tbslen,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,UI_method_get_data_duplicator,
AROS_LDA(  const UI_METHOD *, ___method,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,UI_method_set_data_duplicator,
AROS_LDA(  UI_METHOD *, ___method,A0),
AROS_LDA(  APTR,___duplicator,A1),
AROS_LDA(  APTR,___destructor,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,UI_dup_user_data,
AROS_LDA(  UI *, ___ui,A0),
AROS_LDA(  void *, ___user_data,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,UI_method_get_data_destructor,
AROS_LDA(  const UI_METHOD *, ___method,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,ERR_load_strings_const,
AROS_LDA(  const ERR_STRING_DATA *, ___str,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ASN1_TIME_to_tm,
AROS_LDA(  const ASN1_TIME *, ___s,A0),
AROS_LDA(  struct tm *, ___tm,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ASN1_TIME_set_string_X509,
AROS_LDA(  ASN1_TIME *, ___s,A0),
AROS_LDA(  const char *, ___str,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,OCSP_resp_get1_id,
AROS_LDA(  const OCSP_BASICRESP *, ___bs,A0),
AROS_LDA(  ASN1_OCTET_STRING **, ___pid,A1),
AROS_LDA(  X509_NAME **, ___pname,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,OSSL_STORE_register_loader,
AROS_LDA(  OSSL_STORE_LOADER *, ___loader,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,OSSL_STORE_LOADER_set_error,
AROS_LDA(  OSSL_STORE_LOADER *, ___loader,A0),
AROS_LDA(  OSSL_STORE_error_fn, ___error_function,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(EVP_PKEY * ,OSSL_STORE_INFO_get0_PKEY,
AROS_LDA(  const OSSL_STORE_INFO *, ___info,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,OSSL_STORE_INFO_get_type,
AROS_LDA(  const OSSL_STORE_INFO *, ___info,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(int ,ERR_load_OSSL_STORE_strings,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,OSSL_STORE_LOADER_free,
AROS_LDA(  OSSL_STORE_LOADER *, ___loader,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(EVP_PKEY * ,OSSL_STORE_INFO_get1_PKEY,
AROS_LDA(  const OSSL_STORE_INFO *, ___info,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,OSSL_STORE_INFO_free,
AROS_LDA(  OSSL_STORE_INFO *, ___info,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,OSSL_STORE_LOADER_set_eof,
AROS_LDA(  OSSL_STORE_LOADER *, ___loader,A0),
AROS_LDA(  OSSL_STORE_eof_fn, ___eof_function,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(OSSL_STORE_LOADER * ,OSSL_STORE_LOADER_new,
AROS_LDA(  ENGINE *, ___e,A0),
AROS_LDA(  const char *, ___scheme,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509 * ,OSSL_STORE_INFO_get0_CERT,
AROS_LDA(  const OSSL_STORE_INFO *, ___info,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,OSSL_STORE_LOADER_set_close,
AROS_LDA(  OSSL_STORE_LOADER *, ___loader,A0),
AROS_LDA(  OSSL_STORE_close_fn, ___close_function,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(OSSL_STORE_INFO * ,OSSL_STORE_INFO_new_PARAMS,
AROS_LDA(  EVP_PKEY *, ___params,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(OSSL_STORE_INFO * ,OSSL_STORE_INFO_new_PKEY,
AROS_LDA(  EVP_PKEY *, ___pkey,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(EVP_PKEY * ,OSSL_STORE_INFO_get1_PARAMS,
AROS_LDA(  const OSSL_STORE_INFO *, ___info,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_CRL * ,OSSL_STORE_INFO_get1_CRL,
AROS_LDA(  const OSSL_STORE_INFO *, ___info,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,OSSL_STORE_error,
AROS_LDA(  OSSL_STORE_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509 * ,OSSL_STORE_INFO_get1_CERT,
AROS_LDA(  const OSSL_STORE_INFO *, ___info,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(EVP_PKEY * ,OSSL_STORE_INFO_get0_PARAMS,
AROS_LDA(  const OSSL_STORE_INFO *, ___info,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char * ,OSSL_STORE_INFO_type_string,
AROS_LDA(  int, ___type,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(char * ,OSSL_STORE_INFO_get1_NAME,
AROS_LDA(  const OSSL_STORE_INFO *, ___info,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,OSSL_STORE_LOADER_set_load,
AROS_LDA(  OSSL_STORE_LOADER *, ___loader,A0),
AROS_LDA(  OSSL_STORE_load_fn, ___load_function,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char * ,OSSL_STORE_LOADER_get0_scheme,
AROS_LDA(  const OSSL_STORE_LOADER *, ___loader,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(OSSL_STORE_CTX * ,OSSL_STORE_open,
AROS_LDA(  const char *, ___uri,A0),
AROS_LDA(  const UI_METHOD *, ___ui_method,A1),
AROS_LDA(  void *, ___ui_data,A2),
AROS_LDA(  OSSL_STORE_post_process_info_fn, ___post_process,A3),
AROS_LDA(  void *, ___post_process_data,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,OSSL_STORE_close,
AROS_LDA(  OSSL_STORE_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(OSSL_STORE_INFO * ,OSSL_STORE_INFO_new_CERT,
AROS_LDA(  X509 *, ___x509,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_CRL * ,OSSL_STORE_INFO_get0_CRL,
AROS_LDA(  const OSSL_STORE_INFO *, ___info,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(OSSL_STORE_INFO * ,OSSL_STORE_load,
AROS_LDA(  OSSL_STORE_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char * ,OSSL_STORE_INFO_get0_NAME,
AROS_LDA(  const OSSL_STORE_INFO *, ___info,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(OSSL_STORE_LOADER * ,OSSL_STORE_unregister_loader,
AROS_LDA(  const char *, ___scheme,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(OSSL_STORE_INFO * ,OSSL_STORE_INFO_new_CRL,
AROS_LDA(  X509_CRL *, ___crl,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(OSSL_STORE_INFO * ,OSSL_STORE_INFO_new_NAME,
AROS_LDA(  char *, ___name,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,OSSL_STORE_eof,
AROS_LDA(  OSSL_STORE_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,OSSL_STORE_LOADER_set_open,
AROS_LDA(  OSSL_STORE_LOADER *, ___loader,A0),
AROS_LDA(  OSSL_STORE_open_fn, ___open_function,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,OSSL_STORE_LOADER_set_ctrl,
AROS_LDA(  OSSL_STORE_LOADER *, ___loader,A0),
AROS_LDA(  OSSL_STORE_ctrl_fn, ___ctrl_function,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,OSSL_STORE_vctrl,
AROS_LDA(  OSSL_STORE_CTX *, ___ctx,A0),
AROS_LDA(  int, ___cmd,D0),
AROS_LDA(  long *, ___args,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char * ,OSSL_STORE_INFO_get0_NAME_description,
AROS_LDA(  const OSSL_STORE_INFO *, ___info,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,OSSL_STORE_INFO_set0_NAME_description,
AROS_LDA(  OSSL_STORE_INFO *, ___info,A0),
AROS_LDA(  char *, ___desc,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(char * ,OSSL_STORE_INFO_get1_NAME_description,
AROS_LDA(  const OSSL_STORE_INFO *, ___info,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,OSSL_STORE_do_all_loaders,
AROS_LDA(APTR ,___do_function,A0),
AROS_LDA(  void *, ___do_arg,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const ENGINE * ,OSSL_STORE_LOADER_get0_engine,
AROS_LDA(  const OSSL_STORE_LOADER *, ___loader,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,RAND_DRBG_instantiate,
AROS_LDA(  RAND_DRBG *, ___drbg,A0),
AROS_LDA(  const unsigned char *, ___pers,A1),
AROS_LDA(  size_t, ___perslen,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,RAND_DRBG_uninstantiate,
AROS_LDA(  RAND_DRBG *, ___drbg,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,RAND_DRBG_set,
AROS_LDA(  RAND_DRBG *, ___drbg,A0),
AROS_LDA(  int, ___type,D0),
AROS_LDA(  unsigned int, ___flags,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);


AROS_LD3(RAND_DRBG * ,RAND_DRBG_new,
AROS_LDA(  int, ___type,D0),
AROS_LDA(  unsigned int, ___flags,D1),
AROS_LDA(  RAND_DRBG *, ___parent,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,RAND_DRBG_set_reseed_interval,
AROS_LDA(  RAND_DRBG *, ___drbg,A0),
AROS_LDA(  unsigned int, ___interval,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,RAND_DRBG_free,
AROS_LDA(  RAND_DRBG *, ___drbg,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int ,RAND_DRBG_generate,
AROS_LDA(  RAND_DRBG *, ___drbg,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  size_t, ___outlen,D0),
AROS_LDA(  int, ___prediction_resistance,D1),
AROS_LDA(  const unsigned char *, ___adin,A2),
AROS_LDA(  size_t, ___adinlen,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,RAND_DRBG_reseed,
AROS_LDA(  RAND_DRBG *, ___drbg,A0),
AROS_LDA(  const unsigned char *, ___adin,A1),
AROS_LDA(  size_t, ___adinlen,D0),
AROS_LDA(  int, ___prediction_resistance,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,RAND_DRBG_set_ex_data,
AROS_LDA(  RAND_DRBG *, ___drbg,A0),
AROS_LDA(  int, ___idx,D0),
AROS_LDA(  void *, ___arg,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void * ,RAND_DRBG_get_ex_data,
AROS_LDA(  const RAND_DRBG *, ___drbg,A0),
AROS_LDA(  int, ___idx,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_MD * ,EVP_sha3_224,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_MD * ,EVP_sha3_256,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_MD * ,EVP_sha3_384,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_MD * ,EVP_sha3_512,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_MD * ,EVP_shake128,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_MD * ,EVP_shake256,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(SCRYPT_PARAMS * ,SCRYPT_PARAMS_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,SCRYPT_PARAMS_free,
AROS_LDA(  SCRYPT_PARAMS *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_SCRYPT_PARAMS,
AROS_LDA(  SCRYPT_PARAMS *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(SCRYPT_PARAMS * ,d2i_SCRYPT_PARAMS,
AROS_LDA(  SCRYPT_PARAMS **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,SCRYPT_PARAMS_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const EVP_PKEY_METHOD * ,EVP_PKEY_meth_get0,
AROS_LDA(  size_t, ___idx,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(size_t ,EVP_PKEY_meth_get_count,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(RAND_DRBG * ,RAND_DRBG_get0_public,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,RAND_priv_bytes,
AROS_LDA(  unsigned char *, ___buf,A0),
AROS_LDA(  int, ___num,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,BN_priv_rand,
AROS_LDA(  BIGNUM *, ___rnd,A0),
AROS_LDA(  int, ___bits,D0),
AROS_LDA(  int, ___top,D1),
AROS_LDA(  int, ___bottom,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,BN_priv_rand_range,
AROS_LDA(  BIGNUM *, ___rnd,A0),
AROS_LDA(  const BIGNUM *, ___range,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,ASN1_TIME_normalize,
AROS_LDA(  ASN1_TIME *, ___s,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ASN1_TIME_cmp_time_t,
AROS_LDA(  const ASN1_TIME *, ___s,A0),
AROS_LDA(  time_t, ___t,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,ASN1_TIME_compare,
AROS_LDA(  const ASN1_TIME *, ___a,A0),
AROS_LDA(  const ASN1_TIME *, ___b,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,EVP_PKEY_CTX_ctrl_uint64,
AROS_LDA(  EVP_PKEY_CTX *, ___ctx,A0),
AROS_LDA(  int, ___keytype,D0),
AROS_LDA(  int, ___optype,D1),
AROS_LDA(  int, ___cmd,D4),
AROS_LDA(  uint64_t, ___value,D2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,EVP_DigestFinalXOF,
AROS_LDA(  EVP_MD_CTX *, ___ctx,A0),
AROS_LDA(  unsigned char *, ___md,A1),
AROS_LDA(  size_t, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(int ,ERR_clear_last_mark,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(RAND_DRBG * ,RAND_DRBG_get0_private,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aria_192_ccm,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aria_256_gcm,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aria_256_ccm,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aria_128_gcm,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aria_128_ccm,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_aria_192_gcm,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,UI_get_result_length,
AROS_LDA(  UI *, ___ui,A0),
AROS_LDA(  int, ___i,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,UI_set_result_ex,
AROS_LDA(  UI *, ___ui,A0),
AROS_LDA(  UI_STRING *, ___uis,A1),
AROS_LDA(  const char *, ___result,A2),
AROS_LDA(  int, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,UI_get_result_string_length,
AROS_LDA(  UI_STRING *, ___uis,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EVP_PKEY_check,
AROS_LDA(  EVP_PKEY_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,EVP_PKEY_meth_set_check,
AROS_LDA(  EVP_PKEY_METHOD *, ___pmeth,A0),
AROS_LDA(APTR ,___check,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,EVP_PKEY_meth_get_check,
AROS_LDA(  const EVP_PKEY_METHOD *, ___pmeth,A0),
AROS_LDA(APTR ,___pcheck,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EVP_PKEY_meth_remove,
AROS_LDA(  const EVP_PKEY_METHOD *, ___pmeth,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,OPENSSL_sk_reserve,
AROS_LDA(  OPENSSL_STACK *, ___st,A0),
AROS_LDA(  int, ___n,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(DH * ,DH_new_by_nid,
AROS_LDA(  int, ___nid,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,DH_get_nid,
AROS_LDA(  const DH *, ___dh,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(OPENSSL_STACK * ,OPENSSL_sk_new_reserve,
AROS_LDA(  OPENSSL_sk_compfunc, ___c,A0),
AROS_LDA(  int, ___n,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,EVP_PKEY_asn1_set_check,
AROS_LDA(  EVP_PKEY_ASN1_METHOD *, ___ameth,A0),
AROS_LDA(APTR ,___pkey_check,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,EVP_PKEY_asn1_set_siginf,
AROS_LDA(  EVP_PKEY_ASN1_METHOD *, ___ameth,A0),
AROS_LDA(APTR ,___siginf_set,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_sm4_ctr,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_sm4_cbc,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_sm4_ofb,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_sm4_ecb,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_CIPHER * ,EVP_sm4_cfb128,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_MD * ,EVP_sm3,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,RSA_get0_multi_prime_factors,
AROS_LDA(  const RSA *, ___r,A0),
AROS_LDA(  const BIGNUM **, ___primes,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EVP_PKEY_public_check,
AROS_LDA(  EVP_PKEY_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EVP_PKEY_param_check,
AROS_LDA(  EVP_PKEY_CTX *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,EVP_PKEY_meth_set_public_check,
AROS_LDA(  EVP_PKEY_METHOD *, ___pmeth,A0),
AROS_LDA(APTR  ,___check,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,EVP_PKEY_meth_set_param_check,
AROS_LDA(  EVP_PKEY_METHOD *, ___pmeth,A0),
AROS_LDA(APTR  ,___check,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,EVP_PKEY_meth_get_public_check,
AROS_LDA(  const EVP_PKEY_METHOD *, ___pmeth,A0),
AROS_LDA(APTR  ,___pcheck,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,EVP_PKEY_meth_get_param_check,
AROS_LDA(  const EVP_PKEY_METHOD *, ___pmeth,A0),
AROS_LDA(APTR  ,___pcheck,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,EVP_PKEY_asn1_set_public_check,
AROS_LDA(  EVP_PKEY_ASN1_METHOD *, ___ameth,A0),
AROS_LDA(APTR  ,___pkey_pub_check,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,EVP_PKEY_asn1_set_param_check,
AROS_LDA(  EVP_PKEY_ASN1_METHOD *, ___ameth,A0),
AROS_LDA(APTR  ,___pkey_param_check,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,DH_check_ex,
AROS_LDA(  const DH *, ___dh,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,DH_check_pub_key_ex,
AROS_LDA(  const DH *, ___dh,A0),
AROS_LDA(  const BIGNUM *, ___pub_key,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,DH_check_params_ex,
AROS_LDA(  const DH *, ___dh,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,RSA_generate_multi_prime_key,
AROS_LDA(  RSA *, ___rsa,A0),
AROS_LDA(  int, ___bits,D0),
AROS_LDA(  int, ___primes,D1),
AROS_LDA(  BIGNUM *, ___e,A1),
AROS_LDA(  BN_GENCB *, ___cb,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,RSA_get_multi_prime_extra_count,
AROS_LDA(  const RSA *, ___r,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,OCSP_resp_get0_signer,
AROS_LDA(  OCSP_BASICRESP *, ___bs,A0),
AROS_LDA(  X509 **, ___signer,A1),
AROS_LDA(  STACK_OF(X509) *, ___extra_certs,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,RSA_get0_multi_prime_crt_params,
AROS_LDA(  const RSA *, ___r,A0),
AROS_LDA(  const BIGNUM **, ___exps,A1),
AROS_LDA(  const BIGNUM **, ___coeffs,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,RSA_set0_multi_prime_params,
AROS_LDA(  RSA *, ___r,A0),
AROS_LDA(  BIGNUM **, ___primes,A1),
AROS_LDA(  BIGNUM **, ___exps,A2),
AROS_LDA(  BIGNUM **, ___coeffs,A3),
AROS_LDA(  int, ___pnum,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,RSA_get_version,
AROS_LDA(  RSA *, ___r,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,RSA_meth_get_multi_prime_keygen,
AROS_LDA(  const RSA_METHOD *, ___meth,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,RSA_meth_set_multi_prime_keygen,
AROS_LDA(  RSA_METHOD *, ___meth,A0),
AROS_LDA(  APTR,___keygen,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(RAND_DRBG * ,RAND_DRBG_get0_master,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,RAND_DRBG_set_reseed_time_interval,
AROS_LDA(  RAND_DRBG *, ___drbg,A0),
AROS_LDA(  time_t, ___interval,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const ASN1_OCTET_STRING * ,PROFESSION_INFO_get0_addProfessionInfo,
AROS_LDA(  const PROFESSION_INFO *, ___pi,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,ADMISSION_SYNTAX_free,
AROS_LDA(  ADMISSION_SYNTAX *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(ADMISSION_SYNTAX * ,d2i_ADMISSION_SYNTAX,
AROS_LDA(  ADMISSION_SYNTAX **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,NAMING_AUTHORITY_set0_authorityId,
AROS_LDA(  NAMING_AUTHORITY *, ___n,A0),
AROS_LDA(  ASN1_OBJECT*, ___namingAuthorityId,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,NAMING_AUTHORITY_set0_authorityURL,
AROS_LDA(  NAMING_AUTHORITY *, ___n,A0),
AROS_LDA(  ASN1_IA5STRING*, ___namingAuthorityUrl,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(PROFESSION_INFO * ,d2i_PROFESSION_INFO,
AROS_LDA(  PROFESSION_INFO **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,NAMING_AUTHORITY_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const STACK_OF(ADMISSIONS) * ,ADMISSION_SYNTAX_get0_contentsOfAdmissions,
AROS_LDA(  const ADMISSION_SYNTAX *, ___as,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,PROFESSION_INFO_set0_professionItems,
AROS_LDA(  PROFESSION_INFO *, ___pi,A0),
AROS_LDA(  STACK_OF(ASN1_STRING) *, ___as,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(NAMING_AUTHORITY * ,NAMING_AUTHORITY_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const ASN1_IA5STRING * ,NAMING_AUTHORITY_get0_authorityURL,
AROS_LDA(  const NAMING_AUTHORITY *, ___n,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const GENERAL_NAME * ,ADMISSION_SYNTAX_get0_admissionAuthority,
AROS_LDA(  const ADMISSION_SYNTAX *, ___as,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(PROFESSION_INFO * ,PROFESSION_INFO_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(ADMISSIONS * ,ADMISSIONS_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,ADMISSION_SYNTAX_set0_admissionAuthority,
AROS_LDA(  ADMISSION_SYNTAX *, ___as,A0),
AROS_LDA(  GENERAL_NAME *, ___aa,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const STACK_OF(ASN1_OBJECT) * ,PROFESSION_INFO_get0_professionOIDs,
AROS_LDA(  const PROFESSION_INFO *, ___pi,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,PROFESSION_INFO_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_PROFESSION_INFO,
AROS_LDA(  PROFESSION_INFO *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,ADMISSIONS_set0_professionInfos,
AROS_LDA(  ADMISSIONS *, ___a,A0),
AROS_LDA(  PROFESSION_INFOS *, ___pi,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const NAMING_AUTHORITY * ,PROFESSION_INFO_get0_namingAuthority,
AROS_LDA(  const PROFESSION_INFO *, ___pi,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,PROFESSION_INFO_free,
AROS_LDA(  PROFESSION_INFO *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,PROFESSION_INFO_set0_addProfessionInfo,
AROS_LDA(  PROFESSION_INFO *, ___pi,A0),
AROS_LDA(  ASN1_OCTET_STRING *, ___aos,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,PROFESSION_INFO_set0_registrationNumber,
AROS_LDA(  PROFESSION_INFO *, ___pi,A0),
AROS_LDA(  ASN1_PRINTABLESTRING *, ___rn,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,ADMISSION_SYNTAX_set0_contentsOfAdmissions,
AROS_LDA(  ADMISSION_SYNTAX *, ___as,A0),
AROS_LDA(  STACK_OF(ADMISSIONS) *, ___a,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const ASN1_OBJECT * ,NAMING_AUTHORITY_get0_authorityId,
AROS_LDA(  const NAMING_AUTHORITY *, ___n,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,ADMISSION_SYNTAX_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_ADMISSION_SYNTAX,
AROS_LDA(  ADMISSION_SYNTAX *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const ASN1_STRING * ,NAMING_AUTHORITY_get0_authorityText,
AROS_LDA(  const NAMING_AUTHORITY *, ___n,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,PROFESSION_INFO_set0_namingAuthority,
AROS_LDA(  PROFESSION_INFO *, ___pi,A0),
AROS_LDA(  NAMING_AUTHORITY *, ___na,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_NAMING_AUTHORITY,
AROS_LDA(  NAMING_AUTHORITY *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,NAMING_AUTHORITY_free,
AROS_LDA(  NAMING_AUTHORITY *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,ADMISSIONS_set0_admissionAuthority,
AROS_LDA(  ADMISSIONS *, ___a,A0),
AROS_LDA(  GENERAL_NAME *, ___aa,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,ADMISSIONS_free,
AROS_LDA(  ADMISSIONS *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const ASN1_PRINTABLESTRING * ,PROFESSION_INFO_get0_registrationNumber,
AROS_LDA(  const PROFESSION_INFO *, ___pi,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(ADMISSIONS * ,d2i_ADMISSIONS,
AROS_LDA(  ADMISSIONS **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,i2d_ADMISSIONS,
AROS_LDA(  ADMISSIONS *, ___a,A0),
AROS_LDA(  unsigned char **, ___out,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const STACK_OF(ASN1_STRING) * ,PROFESSION_INFO_get0_professionItems,
AROS_LDA(  const PROFESSION_INFO *, ___pi,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const GENERAL_NAME * ,ADMISSIONS_get0_admissionAuthority,
AROS_LDA(  const ADMISSIONS *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,PROFESSION_INFO_set0_professionOIDs,
AROS_LDA(  PROFESSION_INFO *, ___pi,A0),
AROS_LDA(  STACK_OF(ASN1_OBJECT) *, ___po,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(NAMING_AUTHORITY * ,d2i_NAMING_AUTHORITY,
AROS_LDA(  NAMING_AUTHORITY **, ___a,A0),
AROS_LDA(  const unsigned char **, ___in,A1),
AROS_LDA(  long, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM * ,ADMISSIONS_it,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const NAMING_AUTHORITY * ,ADMISSIONS_get0_namingAuthority,
AROS_LDA(  const ADMISSIONS *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,NAMING_AUTHORITY_set0_authorityText,
AROS_LDA(  NAMING_AUTHORITY *, ___n,A0),
AROS_LDA(  ASN1_STRING*, ___namingAuthorityText,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,ADMISSIONS_set0_namingAuthority,
AROS_LDA(  ADMISSIONS *, ___a,A0),
AROS_LDA(  NAMING_AUTHORITY *, ___na,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const PROFESSION_INFOS * ,ADMISSIONS_get0_professionInfos,
AROS_LDA(  const ADMISSIONS *, ___a,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(ADMISSION_SYNTAX * ,ADMISSION_SYNTAX_new,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_MD * ,EVP_sha512_256,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const EVP_MD * ,EVP_sha512_224,
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,OCSP_basic_sign_ctx,
AROS_LDA(  OCSP_BASICRESP *, ___brsp,A0),
AROS_LDA(  X509 *, ___signer,A1),
AROS_LDA(  EVP_MD_CTX *, ___ctx,A2),
AROS_LDA(  STACK_OF(X509) *, ___certs,A3),
AROS_LDA(  unsigned long, ___flags,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,RAND_DRBG_bytes,
AROS_LDA(  RAND_DRBG *, ___drbg,A0),
AROS_LDA(  unsigned char *, ___out,A1),
AROS_LDA(  size_t, ___outlen,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(RAND_DRBG * ,RAND_DRBG_secure_new,
AROS_LDA(  int, ___type,D0),
AROS_LDA(  unsigned int, ___flags,D1),
AROS_LDA(  RAND_DRBG *, ___parent,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(OSSL_STORE_SEARCH * ,OSSL_STORE_SEARCH_by_alias,
AROS_LDA(  const char *, ___alias,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,BIO_bind,
AROS_LDA(  int, ___sock,D0),
AROS_LDA(  const BIO_ADDR *, ___addr,A0),
AROS_LDA(  int, ___options,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,OSSL_STORE_LOADER_set_expect,
AROS_LDA(  OSSL_STORE_LOADER *, ___loader,A0),
AROS_LDA(  OSSL_STORE_expect_fn, ___expect_function,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,OSSL_STORE_expect,
AROS_LDA(  OSSL_STORE_CTX *, ___ctx,A0),
AROS_LDA(  int, ___expected_type,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_STORE_SEARCH * ,OSSL_STORE_SEARCH_by_key_fingerprint,
AROS_LDA(  const EVP_MD *, ___digest,A0),
AROS_LDA(  const unsigned char *, ___bytes,A1),
AROS_LDA(  size_t, ___len,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const ASN1_INTEGER * ,OSSL_STORE_SEARCH_get0_serial,
AROS_LDA(  const OSSL_STORE_SEARCH *, ___criterion,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(OSSL_STORE_SEARCH * ,OSSL_STORE_SEARCH_by_name,
AROS_LDA(  X509_NAME *, ___name,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,OSSL_STORE_supports_search,
AROS_LDA(  OSSL_STORE_CTX *, ___ctx,A0),
AROS_LDA(  int, ___search_type,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,OSSL_STORE_find,
AROS_LDA(  OSSL_STORE_CTX *, ___ctx,A0),
AROS_LDA(  OSSL_STORE_SEARCH *, ___search,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,OSSL_STORE_SEARCH_get_type,
AROS_LDA(  const OSSL_STORE_SEARCH *, ___criterion,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(const unsigned char * ,OSSL_STORE_SEARCH_get0_bytes,
AROS_LDA(  const OSSL_STORE_SEARCH *, ___criterion,A0),
AROS_LDA(  size_t *, ___length,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char * ,OSSL_STORE_SEARCH_get0_string,
AROS_LDA(  const OSSL_STORE_SEARCH *, ___criterion,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(OSSL_STORE_SEARCH * ,OSSL_STORE_SEARCH_by_issuer_serial,
AROS_LDA(  X509_NAME *, ___name,A0),
AROS_LDA(  const ASN1_INTEGER *, ___serial,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_NAME * ,OSSL_STORE_SEARCH_get0_name,
AROS_LDA(  OSSL_STORE_SEARCH *, ___criterion,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const ASN1_OCTET_STRING * ,X509_get0_authority_key_id,
AROS_LDA(  X509 *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,OSSL_STORE_LOADER_set_find,
AROS_LDA(  OSSL_STORE_LOADER *, ___loader,A0),
AROS_LDA(  OSSL_STORE_find_fn, ___find_function,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,OSSL_STORE_SEARCH_free,
AROS_LDA(  OSSL_STORE_SEARCH *, ___search,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const EVP_MD * ,OSSL_STORE_SEARCH_get0_digest,
AROS_LDA(  const OSSL_STORE_SEARCH *, ___criterion,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int ,RAND_DRBG_set_reseed_defaults,
AROS_LDA(  unsigned int, ___master_reseed_interval,D0),
AROS_LDA(  unsigned int, ___slave_reseed_interval,D1),
AROS_LDA(  time_t, ___master_reseed_time_interval,D2),
AROS_LDA(  time_t, ___slave_reseed_time_interval,D3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(EVP_PKEY * ,EVP_PKEY_new_raw_private_key,
AROS_LDA(  int, ___type,D0),
AROS_LDA(  ENGINE *, ___e,A0),
AROS_LDA(  const unsigned char *, ___priv,A1),
AROS_LDA(  size_t, ___len,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(EVP_PKEY * ,EVP_PKEY_new_raw_public_key,
AROS_LDA(  int, ___type,D0),
AROS_LDA(  ENGINE *, ___e,A0),
AROS_LDA(  const unsigned char *, ___pub,A1),
AROS_LDA(  size_t, ___len,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(EVP_PKEY * ,EVP_PKEY_new_CMAC_key,
AROS_LDA(  ENGINE *, ___e,A0),
AROS_LDA(  const unsigned char *, ___priv,A1),
AROS_LDA(  size_t, ___len,D0),
AROS_LDA(  const EVP_CIPHER *, ___cipher,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,EVP_PKEY_asn1_set_set_priv_key,
AROS_LDA(  EVP_PKEY_ASN1_METHOD *, ___ameth,A0),
AROS_LDA(APTR ,___set_priv_key,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,EVP_PKEY_asn1_set_set_pub_key,
AROS_LDA(  EVP_PKEY_ASN1_METHOD *, ___ameth,A0),
AROS_LDA(APTR ,___set_pub_key,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,RAND_DRBG_set_defaults,
AROS_LDA(  int, ___type,D0),
AROS_LDA(  unsigned int, ___flags,D1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(unsigned int ,X509_VERIFY_PARAM_get_hostflags,
AROS_LDA(  const X509_VERIFY_PARAM *, ___param,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const BIGNUM * ,DH_get0_p,
AROS_LDA(  const DH *, ___dh,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const BIGNUM * ,DH_get0_q,
AROS_LDA(  const DH *, ___dh,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const BIGNUM * ,DH_get0_g,
AROS_LDA(  const DH *, ___dh,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const BIGNUM * ,DH_get0_priv_key,
AROS_LDA(  const DH *, ___dh,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const BIGNUM * ,DH_get0_pub_key,
AROS_LDA(  const DH *, ___dh,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const BIGNUM * ,DSA_get0_priv_key,
AROS_LDA(  const DSA *, ___d,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const BIGNUM * ,DSA_get0_pub_key,
AROS_LDA(  const DSA *, ___d,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const BIGNUM * ,DSA_get0_q,
AROS_LDA(  const DSA *, ___d,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const BIGNUM * ,DSA_get0_p,
AROS_LDA(  const DSA *, ___d,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const BIGNUM * ,DSA_get0_g,
AROS_LDA(  const DSA *, ___d,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const BIGNUM * ,RSA_get0_dmp1,
AROS_LDA(  const RSA *, ___r,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const BIGNUM * ,RSA_get0_d,
AROS_LDA(  const RSA *, ___d,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const BIGNUM * ,RSA_get0_n,
AROS_LDA(  const RSA *, ___d,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const BIGNUM * ,RSA_get0_dmq1,
AROS_LDA(  const RSA *, ___r,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const BIGNUM * ,RSA_get0_e,
AROS_LDA(  const RSA *, ___d,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const BIGNUM * ,RSA_get0_q,
AROS_LDA(  const RSA *, ___d,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const BIGNUM * ,RSA_get0_p,
AROS_LDA(  const RSA *, ___d,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const BIGNUM * ,RSA_get0_iqmp,
AROS_LDA(  const RSA *, ___r,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const BIGNUM * ,ECDSA_SIG_get0_r,
AROS_LDA(  const ECDSA_SIG *, ___sig,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const BIGNUM * ,ECDSA_SIG_get0_s,
AROS_LDA(  const ECDSA_SIG *, ___sig,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_LOOKUP_get_by_fingerprint_fn ,X509_LOOKUP_meth_get_get_by_fingerprint,
AROS_LDA(  const X509_LOOKUP_METHOD *, ___method,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_LOOKUP_METHOD * ,X509_LOOKUP_meth_new,
AROS_LDA(  const char *, ___name,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,X509_LOOKUP_meth_get_init,
AROS_LDA(  const X509_LOOKUP_METHOD*, ___method,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_LOOKUP_get_by_alias_fn ,X509_LOOKUP_meth_get_get_by_alias,
AROS_LDA(  const X509_LOOKUP_METHOD *, ___method,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_LOOKUP_meth_set_new_item,
AROS_LDA(  X509_LOOKUP_METHOD *, ___method,A0),
AROS_LDA(APTR, ___new_item,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_LOOKUP_meth_set_shutdown,
AROS_LDA(  X509_LOOKUP_METHOD *, ___method,A0),
AROS_LDA(APTR, _____shutdown,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,X509_LOOKUP_meth_get_new_item,
AROS_LDA(  const X509_LOOKUP_METHOD*, ___method,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_LOOKUP_meth_set_ctrl,
AROS_LDA(  X509_LOOKUP_METHOD *, ___method,A0),
AROS_LDA(  X509_LOOKUP_ctrl_fn, ___ctrl_fn,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_LOOKUP_meth_set_get_by_issuer_serial,
AROS_LDA(  X509_LOOKUP_METHOD *, ___method,A0),
AROS_LDA(  X509_LOOKUP_get_by_issuer_serial_fn, ___fn,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_STORE * ,X509_LOOKUP_get_store,
AROS_LDA(  const X509_LOOKUP *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_LOOKUP_ctrl_fn ,X509_LOOKUP_meth_get_ctrl,
AROS_LDA(  const X509_LOOKUP_METHOD *, ___method,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_LOOKUP_meth_set_get_by_alias,
AROS_LDA(  X509_LOOKUP_METHOD *, ___method,A0),
AROS_LDA(  X509_LOOKUP_get_by_alias_fn, ___fn,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_LOOKUP_get_by_subject_fn ,X509_LOOKUP_meth_get_get_by_subject,
AROS_LDA(  const X509_LOOKUP_METHOD *, ___method,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,X509_LOOKUP_meth_get_free,
AROS_LDA(  const X509_LOOKUP_METHOD*, ___method,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_LOOKUP_meth_set_get_by_subject,
AROS_LDA(  X509_LOOKUP_METHOD *, ___method,A0),
AROS_LDA(  X509_LOOKUP_get_by_subject_fn, ___fn,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_LOOKUP_meth_set_free,
AROS_LDA(  X509_LOOKUP_METHOD *, ___method,A0),
AROS_LDA(APTR  ,___free_fn,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(APTR,X509_LOOKUP_meth_get_shutdown,
AROS_LDA(  const X509_LOOKUP_METHOD*, ___method,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_LOOKUP_set_method_data,
AROS_LDA(  X509_LOOKUP *, ___ctx,A0),
AROS_LDA(  void *, ___data,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void * ,X509_LOOKUP_get_method_data,
AROS_LDA(  const X509_LOOKUP *, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_LOOKUP_meth_set_get_by_fingerprint,
AROS_LDA(  X509_LOOKUP_METHOD *, ___method,A0),
AROS_LDA(  X509_LOOKUP_get_by_fingerprint_fn, ___fn,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,X509_LOOKUP_meth_free,
AROS_LDA(  X509_LOOKUP_METHOD *, ___method,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_OBJECT_set1_X509,
AROS_LDA(  X509_OBJECT *, ___a,A0),
AROS_LDA(  X509 *, ___obj,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_LOOKUP_get_by_issuer_serial_fn ,X509_LOOKUP_meth_get_get_by_issuer_serial,
AROS_LDA(  const X509_LOOKUP_METHOD *, ___method,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_LOOKUP_meth_set_init,
AROS_LDA(  X509_LOOKUP_METHOD *, ___method,A0),
AROS_LDA(APTR  ,___init,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_OBJECT_set1_X509_CRL,
AROS_LDA(  X509_OBJECT *, ___a,A0),
AROS_LDA(  X509_CRL *, ___obj,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,EVP_PKEY_get_raw_public_key,
AROS_LDA(  const EVP_PKEY *, ___pkey,A0),
AROS_LDA(  unsigned char *, ___pub,A1),
AROS_LDA(  size_t *, ___len,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int ,EVP_PKEY_get_raw_private_key,
AROS_LDA(  const EVP_PKEY *, ___pkey,A0),
AROS_LDA(  unsigned char *, ___priv,A1),
AROS_LDA(  size_t *, ___len,A2),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,EVP_PKEY_asn1_set_get_priv_key,
AROS_LDA(  EVP_PKEY_ASN1_METHOD *, ___ameth,A0),
AROS_LDA(APTR, ___get_priv_key,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,EVP_PKEY_asn1_set_get_pub_key,
AROS_LDA(  EVP_PKEY_ASN1_METHOD *, ___ameth,A0),
AROS_LDA(APTR, ___get_pub_key,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,EVP_PKEY_set_alias_type,
AROS_LDA(  EVP_PKEY *, ___pkey,A0),
AROS_LDA(  int, ___type,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void ,RAND_keep_random_devices_open,
AROS_LDA(  int, ___keep,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,EC_POINT_set_compressed_coordinates,
AROS_LDA(  const EC_GROUP *, ___group,A0),
AROS_LDA(  EC_POINT *, ___p,A1),
AROS_LDA(  const BIGNUM *, ___x,A2),
AROS_LDA(  int, ___y_bit,D0),
AROS_LDA(  BN_CTX *, ___ctx,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,EC_POINT_set_affine_coordinates,
AROS_LDA(  const EC_GROUP *, ___group,A0),
AROS_LDA(  EC_POINT *, ___p,A1),
AROS_LDA(  const BIGNUM *, ___x,A2),
AROS_LDA(  const BIGNUM *, ___y,A3),
AROS_LDA(  BN_CTX *, ___ctx,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,EC_POINT_get_affine_coordinates,
AROS_LDA(  const EC_GROUP *, ___group,A0),
AROS_LDA(  const EC_POINT *, ___p,A1),
AROS_LDA(  BIGNUM *, ___x,A2),
AROS_LDA(  BIGNUM *, ___y,A3),
AROS_LDA(  BN_CTX *, ___ctx,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,EC_GROUP_set_curve,
AROS_LDA(  EC_GROUP *, ___group,A0),
AROS_LDA(  const BIGNUM *, ___p,A1),
AROS_LDA(  const BIGNUM *, ___a,A2),
AROS_LDA(  const BIGNUM *, ___b,A3),
AROS_LDA(  BN_CTX *, ___ctx,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int ,EC_GROUP_get_curve,
AROS_LDA(  const EC_GROUP *, ___group,A0),
AROS_LDA(  BIGNUM *, ___p,A1),
AROS_LDA(  BIGNUM *, ___a,A2),
AROS_LDA(  BIGNUM *, ___b,A3),
AROS_LDA(  BN_CTX *, ___ctx,D0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const X509_ALGOR * ,OCSP_resp_get0_tbs_sigalg,
AROS_LDA(  const OCSP_BASICRESP *, ___bs,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OCSP_RESPDATA * ,OCSP_resp_get0_respdata,
AROS_LDA(  const OCSP_BASICRESP *, ___bs,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,EVP_MD_CTX_set_pkey_ctx,
AROS_LDA(  EVP_MD_CTX *, ___ctx,A0),
AROS_LDA(  EVP_PKEY_CTX *, ___pctx,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,EVP_PKEY_meth_set_digest_custom,
AROS_LDA(  EVP_PKEY_METHOD *, ___pmeth,A0),
AROS_LDA(APTR  ,___digest_custom,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,EVP_PKEY_meth_get_digest_custom,
AROS_LDA(  EVP_PKEY_METHOD *, ___pmeth,A0),
AROS_LDA(APTR  ,___pdigest_custom,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(const char * ,OPENSSL_DIR_read,
AROS_LDA(  OPENSSL_DIR_CTX **, ___ctx,A0),
AROS_LDA(  const char *, ___directory,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,OPENSSL_DIR_end,
AROS_LDA(  OPENSSL_DIR_CTX **, ___ctx,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ENGINE * ,EVP_PKEY_get0_engine,
AROS_LDA(  const EVP_PKEY *, ___pkey,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const ASN1_INTEGER * ,X509_get0_authority_serial,
AROS_LDA(  X509 *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const GENERAL_NAMES * ,X509_get0_authority_issuer,
AROS_LDA(  X509 *, ___x,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,EVP_PKEY_meth_set_digestsign,
AROS_LDA(  EVP_PKEY_METHOD *, ___pmeth,A0),
AROS_LDA(APTR , ___digestsign,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,EVP_PKEY_meth_set_digestverify,
AROS_LDA(  EVP_PKEY_METHOD *, ___pmeth,A0),
AROS_LDA(APTR , ___digestverify,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,EVP_PKEY_meth_get_digestverify,
AROS_LDA(  EVP_PKEY_METHOD *, ___pmeth,A0),
AROS_LDA(APTR , ___digestverify,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,EVP_PKEY_meth_get_digestsign,
AROS_LDA(  EVP_PKEY_METHOD *, ___pmeth,A0),
AROS_LDA(APTR , ___digestsign,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const RSA_PSS_PARAMS * ,RSA_get0_pss_params,
AROS_LDA(  const RSA *, ___r,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_ALGOR_copy,
AROS_LDA(  X509_ALGOR *, ___dest,A0),
AROS_LDA(  const X509_ALGOR *, ___src,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void ,X509_REQ_set0_signature,
AROS_LDA(  X509_REQ *, ___req,A0),
AROS_LDA(  ASN1_BIT_STRING *, ___psig,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int ,X509_REQ_set1_signature_algo,
AROS_LDA(  X509_REQ *, ___req,A0),
AROS_LDA(  X509_ALGOR *, ___palg,A1),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int ,EC_KEY_decoded_from_explicit_params,
AROS_LDA(  const EC_KEY *, ___key,A0),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(int ,RSA_X931_derive_ex_amiga_1,
AROS_LDA(  RSA *, ___rsa,A0),
AROS_LDA(  BIGNUM *, ___p1,A1),
AROS_LDA(  BIGNUM *, ___p2,A2),
AROS_LDA(  BIGNUM *, ___q1,D0),
AROS_LDA(  BIGNUM *, ___q2,D1),
AROS_LDA(  const BIGNUM *, ___Xp1,D2),
AROS_LDA(  void *, ___moreargs,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(void * ,RSA_X931_derive_ex_amiga_2,
AROS_LDA(  const BIGNUM *, ___Xp2,A0),
AROS_LDA(  const BIGNUM *, ___Xp,A1),
AROS_LDA(  const BIGNUM *, ___Xq1,A2),
AROS_LDA(  const BIGNUM *, ___Xq2,D0),
AROS_LDA(  const BIGNUM *, ___Xq,D1),
AROS_LDA(  const BIGNUM *, ___e,D2),
AROS_LDA(  BN_GENCB *, ___cb,A3),
struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

#include "amissl_stubs_aros_obsolete.h"
#include "amissl_stubs_aros_new.h"

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* _GATEPROTO_AMISSL_H */

