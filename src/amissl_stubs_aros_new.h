/* New OpenSSL 3.x stubs for AROS - Auto-generated */
#ifndef _AMISSL_STUBS_AROS_NEW_H
#define _AMISSL_STUBS_AROS_NEW_H
#ifdef __AROS__

AROS_LD0(LONG,ASYNC_WAIT_CTX_get_callback,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,ASYNC_WAIT_CTX_get_status,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,ASYNC_WAIT_CTX_set_callback,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,ASYNC_WAIT_CTX_set_status,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,BN_bn2nativepad,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,BN_native2bn,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,CRYPTO_alloc_ex_data,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,EC_GROUP_get0_field,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,EVP_KDF_CTX_free,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,EVP_KDF_CTX_get_kdf_size,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,EVP_KDF_CTX_reset,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,EVP_KDF_derive,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,EVP_KDF_get0_name,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,EVP_MAC_CTX_dup,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,EVP_MAC_CTX_free,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,EVP_MAC_CTX_get0_mac,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,EVP_MAC_CTX_get_mac_size,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,EVP_MAC_CTX_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,EVP_MAC_final,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,EVP_MAC_finalXOF,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,EVP_MAC_init,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,EVP_MAC_update,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,EVP_PKEY_digestsign_supports_digest,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,EVP_PKEY_get1_encoded_public_key,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,EVP_PKEY_set1_encoded_public_key,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,EVP_Q_mac,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,OPENSSL_LH_flush,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,OPENSSL_version_build_metadata,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,OPENSSL_version_major,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,OPENSSL_version_minor,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,OPENSSL_version_patch,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,OPENSSL_version_pre_release,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,OSSL_default_cipher_list,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,OSSL_default_ciphersuites,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,OSSL_EC_curve_nid2name,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,OSSL_HTTP_parse_url,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,OSSL_HTTP_REQ_CTX_exchange,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,OSSL_HTTP_REQ_CTX_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,OSSL_HTTP_REQ_CTX_set1_req,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,OSSL_HTTP_REQ_CTX_set_request_line,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,OSSL_LIB_CTX_free,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,OSSL_LIB_CTX_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,OSSL_trace_get_category_name,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,OSSL_trace_get_category_num,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,OSSL_trace_set_callback,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,OSSL_trace_set_channel,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,OSSL_trace_set_prefix,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,OSSL_trace_set_suffix,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,SRP_user_pwd_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,SRP_user_pwd_set0_sv,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,SRP_user_pwd_set1_ids,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,SRP_user_pwd_set_gN,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,SRP_VBASE_add0_user,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,SSL_add_store_cert_subjects_to_stack,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,SSL_CTX_load_verify_dir,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,SSL_CTX_load_verify_file,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,SSL_CTX_load_verify_store,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,SSL_CTX_new_ex,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,SSL_CTX_set0_tmp_dh_pkey,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,SSL_CTX_set_async_callback,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,SSL_CTX_set_async_callback_arg,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,SSL_CTX_set_default_verify_store,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,SSL_CTX_set_tlsext_ticket_key_evp_cb,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,SSL_get0_peer_certificate,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,SSL_get_async_status,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,SSL_group_to_name,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,SSL_load_client_CA_file_ex,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,SSL_new_session_ticket,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,SSL_sendfile,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,SSL_set0_tmp_dh_pkey,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,SSL_set_async_callback,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,SSL_set_async_callback_arg,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,TS_VERIFY_CTX_set_certs,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,UI_read_string_lib,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,UI_write_string_lib,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,X509_CRL_load_http,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,X509_load_http,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(LONG,X509_NAME_hash_ex,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

/* AA_DIST_POINT functions */
AROS_LD3(OSSL_AA_DIST_POINT *,d2i_OSSL_AA_DIST_POINT,
    AROS_LDA(OSSL_AA_DIST_POINT **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,i2d_OSSL_AA_DIST_POINT,
    AROS_LDA(const OSSL_AA_DIST_POINT *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_AA_DIST_POINT_free,
    AROS_LDA(OSSL_AA_DIST_POINT *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OSSL_AA_DIST_POINT *,OSSL_AA_DIST_POINT_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM *,OSSL_AA_DIST_POINT_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD10(int,PEM_ASN1_write_bio_ctx,
    AROS_LDA(OSSL_i2d_of_void_ctx *, i2d, A0),
    AROS_LDA(void *, vctx, A1),
    AROS_LDA(const char *, name, A2),
    AROS_LDA(BIO *, bp, A3),
    AROS_LDA(const void *, x, D0),
    AROS_LDA(const EVP_CIPHER *, enc, D1),
    AROS_LDA(const unsigned char *, kstr, D2),
    AROS_LDA(int, klen, D3),
    AROS_LDA(pem_password_cb *, cb, D4),
    AROS_LDA(void *, u, D5),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,EVP_PKEY_get_security_category,
    AROS_LDA(const EVP_PKEY *, pkey, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void,X509_STORE_CTX_set_ocsp_resp,
    AROS_LDA(X509_STORE_CTX *, ctx, A0),
    AROS_LDA(STACK_OF(OCSP_RESPONSE) *, sk, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(OPENSSL_STACK *,OPENSSL_sk_set_thunks,
    AROS_LDA(OPENSSL_STACK *, st, A0),
    AROS_LDA(OPENSSL_sk_freefunc_thunk, f_thunk, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,i2d_PKCS8PrivateKey,
    AROS_LDA(const EVP_PKEY *, a, A0),
    AROS_LDA(unsigned char **, pp, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,OSSL_PARAM_set_octet_string_or_ptr,
    AROS_LDA(OSSL_PARAM *, p, A0),
    AROS_LDA(const void *, val, A1),
    AROS_LDA(size_t, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

/* Additional ext library functions (OpenSSL 3.6) */
AROS_LD1(const OSSL_PARAM *,OSSL_STORE_LOADER_settable_ctx_params,
    AROS_LDA(const OSSL_STORE_LOADER *, loader, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const X509_ALGOR *,X509_CRL_get0_tbs_sigalg,
    AROS_LDA(const X509_CRL *, crl, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,CMS_RecipientInfo_kemri_cert_cmp,
    AROS_LDA(CMS_RecipientInfo *, ri, A0),
    AROS_LDA(X509 *, cert, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,CMS_RecipientInfo_kemri_set0_pkey,
    AROS_LDA(CMS_RecipientInfo *, ri, A0),
    AROS_LDA(EVP_PKEY *, pk, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(EVP_CIPHER_CTX *,CMS_RecipientInfo_kemri_get0_ctx,
    AROS_LDA(CMS_RecipientInfo *, ri, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_ALGOR *,CMS_RecipientInfo_kemri_get0_kdf_alg,
    AROS_LDA(CMS_RecipientInfo *, ri, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,CMS_RecipientInfo_kemri_set_ukm,
    AROS_LDA(CMS_RecipientInfo *, ri, A0),
    AROS_LDA(const unsigned char *, ukm, A1),
    AROS_LDA(int, ukmLength, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(EVP_SKEY *,EVP_PKEY_derive_SKEY,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(EVP_SKEYMGMT *, mgmt, A1),
    AROS_LDA(const char *, key_type, A2),
    AROS_LDA(const char *, propquery, A3),
    AROS_LDA(size_t, keylen, D0),
    AROS_LDA(const OSSL_PARAM *, params, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,EVP_KDF_CTX_set_SKEY,
    AROS_LDA(EVP_KDF_CTX *, ctx, A0),
    AROS_LDA(EVP_SKEY *, key, A1),
    AROS_LDA(const char *, paramname, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(EVP_SKEY *,EVP_KDF_derive_SKEY,
    AROS_LDA(EVP_KDF_CTX *, ctx, A0),
    AROS_LDA(EVP_SKEYMGMT *, mgmt, A1),
    AROS_LDA(const char *, key_type, A2),
    AROS_LDA(const char *, propquery, A3),
    AROS_LDA(size_t, keylen, D0),
    AROS_LDA(const OSSL_PARAM *, params, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(EVP_SKEY *,EVP_SKEY_import_SKEYMGMT,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(EVP_SKEYMGMT *, skeymgmt, A1),
    AROS_LDA(int, selection, D0),
    AROS_LDA(const OSSL_PARAM *, params, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

/* CRYPTO array allocation functions (OpenSSL 3.6) */
AROS_LD4(void *,CRYPTO_malloc_array,
    AROS_LDA(size_t, num, D0),
    AROS_LDA(size_t, size, D1),
    AROS_LDA(const char *, file, A0),
    AROS_LDA(int, line, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void *,CRYPTO_calloc,
    AROS_LDA(size_t, num, D0),
    AROS_LDA(size_t, size, D1),
    AROS_LDA(const char *, file, A0),
    AROS_LDA(int, line, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(void *,CRYPTO_aligned_alloc_array,
    AROS_LDA(size_t, num, D0),
    AROS_LDA(size_t, size, D1),
    AROS_LDA(size_t, align, D2),
    AROS_LDA(void **, freeptr, A0),
    AROS_LDA(const char *, file, A1),
    AROS_LDA(int, line, D3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(void *,CRYPTO_realloc_array,
    AROS_LDA(void *, addr, A0),
    AROS_LDA(size_t, num, D0),
    AROS_LDA(size_t, size, D1),
    AROS_LDA(const char *, file, A1),
    AROS_LDA(int, line, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(void *,CRYPTO_clear_realloc_array,
    AROS_LDA(void *, addr, A0),
    AROS_LDA(size_t, old_num, D0),
    AROS_LDA(size_t, num, D1),
    AROS_LDA(size_t, size, D2),
    AROS_LDA(const char *, file, A1),
    AROS_LDA(int, line, D3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void *,CRYPTO_secure_malloc_array,
    AROS_LDA(size_t, num, D0),
    AROS_LDA(size_t, size, D1),
    AROS_LDA(const char *, file, A0),
    AROS_LDA(int, line, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void *,CRYPTO_secure_calloc,
    AROS_LDA(size_t, num, D0),
    AROS_LDA(size_t, size, D1),
    AROS_LDA(const char *, file, A0),
    AROS_LDA(int, line, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

#include "amissl_stubs_aros_gen.h"
#endif /* __AROS__ */
#endif /* _AMISSL_STUBS_AROS_NEW_H */
