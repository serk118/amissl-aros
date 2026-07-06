/* AROS stubs for OBSOLETE functions. Auto-generated. */
#ifndef _AMISSL_STUBS_AROS_OBSOLETE_H
#define _AMISSL_STUBS_AROS_OBSOLETE_H
#ifdef __AROS__
AROS_LH5(int,OBSOLETE_BIO_get_ex_new_index,
    AROS_LHA(  long, ___argl,D0),
    AROS_LHA(  void *, ___argp,A0),
    AROS_LHA(  CRYPTO_EX_new *, ___new_func,D1),
    AROS_LHA(  CRYPTO_EX_dup *, ___dup_func,A1),
    AROS_LHA(  CRYPTO_EX_free *, ___free_func,D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)

{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OBSOLETE_BIO_get_ex_new_index, ___argl, ___argp, ___new_func, ___dup_func, ___free_func);
    AROS_LIBFUNC_EXIT
}

AROS_LH1(char *,OBSOLETE_BUF_strdup,
    AROS_LHA(  const char *, ___str,D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)

{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OBSOLETE_BUF_strdup, ___str);
    AROS_LIBFUNC_EXIT
}

AROS_LH3(size_t,OBSOLETE_BUF_strlcpy,
    AROS_LHA(  char *, ___dst,D0),
    AROS_LHA(  const char *, ___src,A0),
    AROS_LHA(  size_t, ___siz,D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)

{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OBSOLETE_BUF_strlcpy, ___dst, ___src, ___siz);
    AROS_LIBFUNC_EXIT
}

AROS_LH3(size_t,OBSOLETE_BUF_strlcat,
    AROS_LHA(  char *, ___dst,D0),
    AROS_LHA(  const char *, ___src,A0),
    AROS_LHA(  size_t, ___siz,D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)

{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OBSOLETE_BUF_strlcat, ___dst, ___src, ___siz);
    AROS_LIBFUNC_EXIT
}

AROS_LH0(void,OBSOLETE_OPENSSL_no_config,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)

{
    AROS_LIBFUNC_INIT
    CALL_LFUNC_NP(OBSOLETE_OPENSSL_no_config);
    AROS_LIBFUNC_EXIT
}

AROS_LH1(const char *,OBSOLETE_SSLeay_version,
    AROS_LHA(  int, ___type,D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)

{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OBSOLETE_SSLeay_version, ___type);
    AROS_LIBFUNC_EXIT
}

AROS_LH0(unsigned long,OBSOLETE_SSLeay,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)

{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OBSOLETE_SSLeay);
    AROS_LIBFUNC_EXIT
}

AROS_LH5(void,OBSOLETE_ERR_put_error,
    AROS_LHA(  int, ___lib,D0),
    AROS_LHA(  int, ___func,A0),
    AROS_LHA(  int, ___reason,D1),
    AROS_LHA(  const char *, ___file,A1),
    AROS_LHA(  int, ___line,D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)

{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OBSOLETE_ERR_put_error, ___lib, ___func, ___reason, ___file, ___line);
    AROS_LIBFUNC_EXIT
}

AROS_LH0(void,OBSOLETE_ERR_load_crypto_strings,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)

{
    AROS_LIBFUNC_INIT
    CALL_LFUNC_NP(OBSOLETE_ERR_load_crypto_strings);
    AROS_LIBFUNC_EXIT
}

AROS_LH1(void,OBSOLETE_EVP_MD_CTX_init,
    AROS_LHA(  EVP_MD_CTX *, ___ctx,D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)

{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OBSOLETE_EVP_MD_CTX_init, ___ctx);
    AROS_LIBFUNC_EXIT
}

AROS_LH0(EVP_MD_CTX *,OBSOLETE_EVP_MD_CTX_create,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)

{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OBSOLETE_EVP_MD_CTX_create);
    AROS_LIBFUNC_EXIT
}

AROS_LH1(void,OBSOLETE_EVP_MD_CTX_destroy,
    AROS_LHA(  EVP_MD_CTX *, ___ctx,D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)

{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OBSOLETE_EVP_MD_CTX_destroy, ___ctx);
    AROS_LIBFUNC_EXIT
}

AROS_LH1(void,OBSOLETE_EVP_CIPHER_CTX_init,
    AROS_LHA(  EVP_CIPHER_CTX *, ___a,D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)

{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OBSOLETE_EVP_CIPHER_CTX_init, ___a);
    AROS_LIBFUNC_EXIT
}

AROS_LH1(int,OBSOLETE_EVP_CIPHER_CTX_cleanup,
    AROS_LHA(  EVP_CIPHER_CTX *, ___a,D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)

{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OBSOLETE_EVP_CIPHER_CTX_cleanup, ___a);
    AROS_LIBFUNC_EXIT
}

AROS_LH0(void,OBSOLETE_OPENSSL_add_all_algorithms_noconf,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)

{
    AROS_LIBFUNC_INIT
    CALL_LFUNC_NP(OBSOLETE_OPENSSL_add_all_algorithms_noconf);
    AROS_LIBFUNC_EXIT
}

AROS_LH0(void,OBSOLETE_OPENSSL_add_all_algorithms_conf,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)

{
    AROS_LIBFUNC_INIT
    CALL_LFUNC_NP(OBSOLETE_OPENSSL_add_all_algorithms_conf);
    AROS_LIBFUNC_EXIT
}

AROS_LH0(void,OBSOLETE_OpenSSL_add_all_ciphers,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)

{
    AROS_LIBFUNC_INIT
    CALL_LFUNC_NP(OBSOLETE_OpenSSL_add_all_ciphers);
    AROS_LIBFUNC_EXIT
}

AROS_LH0(void,OBSOLETE_OpenSSL_add_all_digests,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)

{
    AROS_LIBFUNC_INIT
    CALL_LFUNC_NP(OBSOLETE_OpenSSL_add_all_digests);
    AROS_LIBFUNC_EXIT
}

AROS_LH5(int,OBSOLETE_OCSP_parse_url,
    AROS_LHA(  const char *, ___url,D0),
    AROS_LHA(  char *  *, ___phost,A0),
    AROS_LHA(  char *  *, ___pport,D1),
    AROS_LHA(  char *  *, ___ppath,A1),
    AROS_LHA(  int *, ___pssl,D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)

{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OBSOLETE_OCSP_parse_url, ___url, ___phost, ___pport, ___ppath, ___pssl);
    AROS_LIBFUNC_EXIT
}

AROS_LH1(PKCS12_SAFEBAG *,OBSOLETE_PKCS12_x5092certbag,
    AROS_LHA(  X509 *, ___x509,D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)

{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OBSOLETE_PKCS12_x5092certbag, ___x509);
    AROS_LIBFUNC_EXIT
}

AROS_LH1(PKCS12_SAFEBAG *,OBSOLETE_PKCS12_x509crl2certbag,
    AROS_LHA(  X509_CRL *, ___crl,D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)

{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OBSOLETE_PKCS12_x509crl2certbag, ___crl);
    AROS_LIBFUNC_EXIT
}

AROS_LH1(X509 *,OBSOLETE_PKCS12_certbag2x509,
    AROS_LHA(  PKCS12_SAFEBAG *, ___bag,D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)

{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OBSOLETE_PKCS12_certbag2x509, ___bag);
    AROS_LIBFUNC_EXIT
}

AROS_LH1(PKCS12_SAFEBAG *,OBSOLETE_PKCS12_MAKE_KEYBAG,
    AROS_LHA(  PKCS8_PRIV_KEY_INFO *, ___p8,D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)

{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OBSOLETE_PKCS12_MAKE_KEYBAG, ___p8);
    AROS_LIBFUNC_EXIT
}

AROS_LH7(PKCS12_SAFEBAG *,OBSOLETE_PKCS12_MAKE_SHKEYBAG,
    AROS_LHA(  int, ___pbe_nid,D0),
    AROS_LHA(  const char *, ___pass,A0),
    AROS_LHA(  int, ___passlen,D1),
    AROS_LHA(  unsigned char *, ___salt,A1),
    AROS_LHA(  int, ___saltlen,D2),
    AROS_LHA(  int, ___iter,A2),
    AROS_LHA(  PKCS8_PRIV_KEY_INFO *, ___p8,D3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)

{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OBSOLETE_PKCS12_MAKE_SHKEYBAG, ___pbe_nid, ___pass, ___passlen, ___salt, ___saltlen, ___iter, ___p8);
    AROS_LIBFUNC_EXIT
}

AROS_LH0(void,OBSOLETE_SSL_load_error_strings,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)

{
    AROS_LIBFUNC_INIT
    CALL_LFUNC_NP(OBSOLETE_SSL_load_error_strings);
    AROS_LIBFUNC_EXIT
}

AROS_LH0(int,OBSOLETE_SSL_library_init,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)

{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OBSOLETE_SSL_library_init);
    AROS_LIBFUNC_EXIT
}

AROS_LH5(int,OBSOLETE_SSL_get_ex_new_index,
    AROS_LHA(  long, ___argl,D0),
    AROS_LHA(  void *, ___argp,A0),
    AROS_LHA(  CRYPTO_EX_new *, ___new_func,D1),
    AROS_LHA(  CRYPTO_EX_dup *, ___dup_func,A1),
    AROS_LHA(  CRYPTO_EX_free *, ___free_func,D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)

{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OBSOLETE_SSL_get_ex_new_index, ___argl, ___argp, ___new_func, ___dup_func, ___free_func);
    AROS_LIBFUNC_EXIT
}

AROS_LH5(int,OBSOLETE_SSL_SESSION_get_ex_new_index,
    AROS_LHA(  long, ___argl,D0),
    AROS_LHA(  void *, ___argp,A0),
    AROS_LHA(  CRYPTO_EX_new *, ___new_func,D1),
    AROS_LHA(  CRYPTO_EX_dup *, ___dup_func,A1),
    AROS_LHA(  CRYPTO_EX_free *, ___free_func,D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)

{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OBSOLETE_SSL_SESSION_get_ex_new_index, ___argl, ___argp, ___new_func, ___dup_func, ___free_func);
    AROS_LIBFUNC_EXIT
}

AROS_LH5(int,OBSOLETE_SSL_CTX_get_ex_new_index,
    AROS_LHA(  long, ___argl,D0),
    AROS_LHA(  void *, ___argp,A0),
    AROS_LHA(  CRYPTO_EX_new *, ___new_func,D1),
    AROS_LHA(  CRYPTO_EX_dup *, ___dup_func,A1),
    AROS_LHA(  CRYPTO_EX_free *, ___free_func,D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)

{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OBSOLETE_SSL_CTX_get_ex_new_index, ___argl, ___argp, ___new_func, ___dup_func, ___free_func);
    AROS_LIBFUNC_EXIT
}

AROS_LH5(int,OBSOLETE_UI_get_ex_new_index,
    AROS_LHA(  long, ___argl,D0),
    AROS_LHA(  void *, ___argp,A0),
    AROS_LHA(  CRYPTO_EX_new *, ___new_func,D1),
    AROS_LHA(  CRYPTO_EX_dup *, ___dup_func,A1),
    AROS_LHA(  CRYPTO_EX_free *, ___free_func,D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)

{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OBSOLETE_UI_get_ex_new_index, ___argl, ___argp, ___new_func, ___dup_func, ___free_func);
    AROS_LIBFUNC_EXIT
}

AROS_LH5(int,OBSOLETE_X509_get_ex_new_index,
    AROS_LHA(  long, ___argl,D0),
    AROS_LHA(  void *, ___argp,A0),
    AROS_LHA(  CRYPTO_EX_new *, ___new_func,D1),
    AROS_LHA(  CRYPTO_EX_dup *, ___dup_func,A1),
    AROS_LHA(  CRYPTO_EX_free *, ___free_func,D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)

{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OBSOLETE_X509_get_ex_new_index, ___argl, ___argp, ___new_func, ___dup_func, ___free_func);
    AROS_LIBFUNC_EXIT
}

AROS_LH1(unsigned long,OBSOLETE_X509_NAME_hash,
    AROS_LHA(  X509_NAME *, ___x,D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)

{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OBSOLETE_X509_NAME_hash, ___x);
    AROS_LIBFUNC_EXIT
}

AROS_LH5(int,OBSOLETE_X509_STORE_CTX_get_ex_new_index,
    AROS_LHA(  long, ___argl,D0),
    AROS_LHA(  void *, ___argp,A0),
    AROS_LHA(  CRYPTO_EX_new *, ___new_func,D1),
    AROS_LHA(  CRYPTO_EX_dup *, ___dup_func,A1),
    AROS_LHA(  CRYPTO_EX_free *, ___free_func,D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)

{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OBSOLETE_X509_STORE_CTX_get_ex_new_index, ___argl, ___argp, ___new_func, ___dup_func, ___free_func);
    AROS_LIBFUNC_EXIT
}

AROS_LH5(int,OBSOLETE_DH_get_ex_new_index,
    AROS_LHA(  long, ___argl,D0),
    AROS_LHA(  void *, ___argp,A0),
    AROS_LHA(  CRYPTO_EX_new *, ___new_func,D1),
    AROS_LHA(  CRYPTO_EX_dup *, ___dup_func,A1),
    AROS_LHA(  CRYPTO_EX_free *, ___free_func,D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)

{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OBSOLETE_DH_get_ex_new_index, ___argl, ___argp, ___new_func, ___dup_func, ___free_func);
    AROS_LIBFUNC_EXIT
}

AROS_LH5(int,OBSOLETE_DSA_get_ex_new_index,
    AROS_LHA(  long, ___argl,D0),
    AROS_LHA(  void *, ___argp,A0),
    AROS_LHA(  CRYPTO_EX_new *, ___new_func,D1),
    AROS_LHA(  CRYPTO_EX_dup *, ___dup_func,A1),
    AROS_LHA(  CRYPTO_EX_free *, ___free_func,D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)

{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OBSOLETE_DSA_get_ex_new_index, ___argl, ___argp, ___new_func, ___dup_func, ___free_func);
    AROS_LIBFUNC_EXIT
}

AROS_LH5(int,OBSOLETE_RSA_get_ex_new_index,
    AROS_LHA(  long, ___argl,D0),
    AROS_LHA(  void *, ___argp,A0),
    AROS_LHA(  CRYPTO_EX_new *, ___new_func,D1),
    AROS_LHA(  CRYPTO_EX_dup *, ___dup_func,A1),
    AROS_LHA(  CRYPTO_EX_free *, ___free_func,D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)

{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OBSOLETE_RSA_get_ex_new_index, ___argl, ___argp, ___new_func, ___dup_func, ___free_func);
    AROS_LIBFUNC_EXIT
}

AROS_LH2(int,OBSOLETE_OCSP_sendreq_nbio,
    AROS_LHA(  OCSP_RESPONSE *  *, ___presp,D0),
    AROS_LHA(  OSSL_HTTP_REQ_CTX *, ___rctx,A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)

{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OBSOLETE_OCSP_sendreq_nbio, ___presp, ___rctx);
    AROS_LIBFUNC_EXIT
}

AROS_LH1(int,OBSOLETE_SSL_cache_hit,
    AROS_LHA(  SSL *, ___s,D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)

{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OBSOLETE_SSL_cache_hit, ___s);
    AROS_LIBFUNC_EXIT
}

AROS_LH0(void,OBSOLETE_ENGINE_load_dynamic,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)

{
    AROS_LIBFUNC_INIT
    CALL_LFUNC_NP(OBSOLETE_ENGINE_load_dynamic);
    AROS_LIBFUNC_EXIT
}

AROS_LH0(void,OBSOLETE_ENGINE_load_cryptodev,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)

{
    AROS_LIBFUNC_INIT
    CALL_LFUNC_NP(OBSOLETE_ENGINE_load_cryptodev);
    AROS_LIBFUNC_EXIT
}

AROS_LH0(void,OBSOLETE_ENGINE_load_openssl,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)

{
    AROS_LIBFUNC_INIT
    CALL_LFUNC_NP(OBSOLETE_ENGINE_load_openssl);
    AROS_LIBFUNC_EXIT
}

AROS_LH5(int,OBSOLETE_ENGINE_get_ex_new_index,
    AROS_LHA(  long, ___argl,D0),
    AROS_LHA(  void *, ___argp,A0),
    AROS_LHA(  CRYPTO_EX_new *, ___new_func,D1),
    AROS_LHA(  CRYPTO_EX_dup *, ___dep_func,A1),
    AROS_LHA(  CRYPTO_EX_free *, ___free_func,D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)

{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OBSOLETE_ENGINE_get_ex_new_index, ___argl, ___argp, ___new_func, ___dep_func, ___free_func);
    AROS_LIBFUNC_EXIT
}

AROS_LH0(void,OBSOLETE_ENGINE_load_padlock,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)

{
    AROS_LIBFUNC_INIT
    CALL_LFUNC_NP(OBSOLETE_ENGINE_load_padlock);
    AROS_LIBFUNC_EXIT
}

AROS_LH0(void,OBSOLETE_ENGINE_load_capi,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)

{
    AROS_LIBFUNC_INIT
    CALL_LFUNC_NP(OBSOLETE_ENGINE_load_capi);
    AROS_LIBFUNC_EXIT
}

AROS_LH0(void,OBSOLETE_ENGINE_load_rdrand,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)

{
    AROS_LIBFUNC_INIT
    CALL_LFUNC_NP(OBSOLETE_ENGINE_load_rdrand);
    AROS_LIBFUNC_EXIT
}

AROS_LH2(void *,OBSOLETE_BUF_memdup,
    AROS_LHA(  const void *, ___data,D0),
    AROS_LHA(  size_t, ___siz,A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)

{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OBSOLETE_BUF_memdup, ___data, ___siz);
    AROS_LIBFUNC_EXIT
}

AROS_LH2(char *,OBSOLETE_BUF_strndup,
    AROS_LHA(  const char *, ___str,D0),
    AROS_LHA(  size_t, ___siz,A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)

{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OBSOLETE_BUF_strndup, ___str, ___siz);
    AROS_LIBFUNC_EXIT
}

AROS_LH1(unsigned long,OBSOLETE_EVP_CIPHER_CTX_flags,
    AROS_LHA(  const EVP_CIPHER_CTX *, ___ctx,D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)

{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OBSOLETE_EVP_CIPHER_CTX_flags, ___ctx);
    AROS_LIBFUNC_EXIT
}

AROS_LH2(int,OBSOLETE_OCSP_REQ_CTX_set1_req,
    AROS_LHA(  OSSL_HTTP_REQ_CTX *, ___rctx,D0),
    AROS_LHA(  OCSP_REQUEST *, ___req,A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)

{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OBSOLETE_OCSP_REQ_CTX_set1_req, ___rctx, ___req);
    AROS_LIBFUNC_EXIT
}

AROS_LH2(size_t,OBSOLETE_BUF_strnlen,
    AROS_LHA(  const char *, ___str,D0),
    AROS_LHA(  size_t, ___maxlen,A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)

{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OBSOLETE_BUF_strnlen, ___str, ___maxlen);
    AROS_LIBFUNC_EXIT
}

AROS_LH3(int,OBSOLETE_OCSP_REQ_CTX_http,
    AROS_LHA(  OSSL_HTTP_REQ_CTX *, ___rctx,D0),
    AROS_LHA(  const char *, ___op,A0),
    AROS_LHA(  const char *, ___path,D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)

{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OBSOLETE_OCSP_REQ_CTX_http, ___rctx, ___op, ___path);
    AROS_LIBFUNC_EXIT
}

AROS_LH3(int,OBSOLETE_OCSP_REQ_CTX_i2d,
    AROS_LHA(  OSSL_HTTP_REQ_CTX *, ___rctx,D0),
    AROS_LHA(  const ASN1_ITEM *, ___it,A0),
    AROS_LHA(  ASN1_VALUE *, ___val,D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)

{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OBSOLETE_OCSP_REQ_CTX_i2d, ___rctx, ___it, ___val);
    AROS_LIBFUNC_EXIT
}

AROS_LH2(OSSL_HTTP_REQ_CTX *,OBSOLETE_OCSP_REQ_CTX_new,
    AROS_LHA(  BIO *, ___io,D0),
    AROS_LHA(  int, ___maxline,A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)

{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OBSOLETE_OCSP_REQ_CTX_new, ___io, ___maxline);
    AROS_LIBFUNC_EXIT
}

AROS_LH2(int,OBSOLETE_X509_CRL_http_nbio,
    AROS_LHA(  OSSL_HTTP_REQ_CTX *, ___rctx,D0),
    AROS_LHA(  X509_CRL *  *, ___pcrl,A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)

{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OBSOLETE_X509_CRL_http_nbio, ___rctx, ___pcrl);
    AROS_LIBFUNC_EXIT
}

AROS_LH2(int,OBSOLETE_X509_http_nbio,
    AROS_LHA(  OSSL_HTTP_REQ_CTX *, ___rctx,D0),
    AROS_LHA(  X509 *  *, ___pcert,A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)

{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OBSOLETE_X509_http_nbio, ___rctx, ___pcert);
    AROS_LIBFUNC_EXIT
}

AROS_LH10(int,OBSOLETE_EVP_PBE_scrypt,
    AROS_LHA(  const char *, ___pass,D0),
    AROS_LHA(  size_t, ___passlen,A0),
    AROS_LHA(  const unsigned char *, ___salt,D1),
    AROS_LHA(  size_t, ___saltlen,A1),
    AROS_LHA(  unsigned long, ___N,D2),
    AROS_LHA(  unsigned long, ___r,A2),
    AROS_LHA(  unsigned long, ___p,D3),
    AROS_LHA(  uint64_t, ___maxmem,A3),
    AROS_LHA(  unsigned char *, ___key,D4),
    AROS_LHA(  size_t, ___keylen,A4),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)

{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OBSOLETE_EVP_PBE_scrypt, ___pass, ___passlen, ___salt, ___saltlen, ___N, ___r, ___p, ___maxmem, ___key, ___keylen);
    AROS_LIBFUNC_EXIT
}

#endif
#endif
