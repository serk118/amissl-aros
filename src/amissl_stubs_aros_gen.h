/* Auto-generated AROS EXT library stubs */
#ifdef __AROS__

AROS_LD1(ASN1_GENERALIZEDTIME *,ASN1_GENERALIZEDTIME_dup,
    AROS_LDA(const ASN1_GENERALIZEDTIME *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ASN1_TIME *,ASN1_TIME_dup,
    AROS_LDA(const ASN1_TIME *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,ASN1_TIME_print_ex,
    AROS_LDA(BIO *, bp, A0),
    AROS_LDA(const ASN1_TIME *, tm, A1),
    AROS_LDA(unsigned long, flags, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ASN1_UTCTIME *,ASN1_UTCTIME_dup,
    AROS_LDA(const ASN1_UTCTIME *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(void *,ASN1_item_d2i_bio_ex,
    AROS_LDA(const ASN1_ITEM *, it, A0),
    AROS_LDA(BIO *, in, A1),
    AROS_LDA(void *, pval, A2),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A3),
    AROS_LDA(const char *, propq, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(ASN1_VALUE *,ASN1_item_d2i_ex,
    AROS_LDA(ASN1_VALUE **, val, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    AROS_LDA(const ASN1_ITEM *, it, A2),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A3),
    AROS_LDA(const char *, propq, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(BIO *,ASN1_item_i2d_mem_bio,
    AROS_LDA(const ASN1_ITEM *, it, A0),
    AROS_LDA(const ASN1_VALUE *, val, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(ASN1_VALUE *,ASN1_item_new_ex,
    AROS_LDA(const ASN1_ITEM *, it, A0),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A1),
    AROS_LDA(const char *, propq, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD10(int,ASN1_item_sign_ex,
    AROS_LDA(const ASN1_ITEM *, it, A0),
    AROS_LDA(X509_ALGOR *, algor1, A1),
    AROS_LDA(X509_ALGOR *, algor2, A2),
    AROS_LDA(ASN1_BIT_STRING *, signature, A3),
    AROS_LDA(const void *, data, D0),
    AROS_LDA(const ASN1_OCTET_STRING *, id, D1),
    AROS_LDA(EVP_PKEY *, pkey, D2),
    AROS_LDA(const EVP_MD *, md, D3),
    AROS_LDA(OSSL_LIB_CTX *, libctx, D4),
    AROS_LDA(const char *, propq, D5),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void *,ASN1_item_unpack_ex,
    AROS_LDA(const ASN1_STRING *, oct, A0),
    AROS_LDA(const ASN1_ITEM *, it, A1),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A2),
    AROS_LDA(const char *, propq, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int,ASN1_item_verify_ctx,
    AROS_LDA(const ASN1_ITEM *, it, A0),
    AROS_LDA(const X509_ALGOR *, alg, A1),
    AROS_LDA(const ASN1_BIT_STRING *, signature, A2),
    AROS_LDA(const void *, data, A3),
    AROS_LDA(EVP_MD_CTX *, ctx, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD8(int,ASN1_item_verify_ex,
    AROS_LDA(const ASN1_ITEM *, it, A0),
    AROS_LDA(const X509_ALGOR *, alg, A1),
    AROS_LDA(const ASN1_BIT_STRING *, signature, A2),
    AROS_LDA(const void *, data, A3),
    AROS_LDA(const ASN1_OCTET_STRING *, id, D0),
    AROS_LDA(EVP_PKEY *, pkey, D1),
    AROS_LDA(OSSL_LIB_CTX *, libctx, D2),
    AROS_LDA(const char *, propq, D3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void,ASYNC_get_mem_functions,
    AROS_LDA(ASYNC_stack_alloc_fn *, alloc_fn, A0),
    AROS_LDA(ASYNC_stack_free_fn *, free_fn, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,ASYNC_set_mem_functions,
    AROS_LDA(ASYNC_stack_alloc_fn, alloc_fn, A0),
    AROS_LDA(ASYNC_stack_free_fn, free_fn, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,BIO_ADDR_copy,
    AROS_LDA(BIO_ADDR *, dst, A0),
    AROS_LDA(const BIO_ADDR *, src, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(BIO_ADDR *,BIO_ADDR_dup,
    AROS_LDA(const BIO_ADDR *, ap, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD8(long,BIO_debug_callback_ex,
    AROS_LDA(BIO *, bio, A0),
    AROS_LDA(int, oper, D0),
    AROS_LDA(const char *, argp, A1),
    AROS_LDA(size_t, len, D1),
    AROS_LDA(int, argi, D2),
    AROS_LDA(long, argl, D3),
    AROS_LDA(int, ret, D4),
    AROS_LDA(size_t *, processed, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,BIO_do_connect_retry,
    AROS_LDA(BIO *, bio, A0),
    AROS_LDA(int, timeout, D0),
    AROS_LDA(int, nap_milliseconds, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,BIO_err_is_non_fatal,
    AROS_LDA(unsigned int, errcode, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const BIO_METHOD *,BIO_f_brotli,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const BIO_METHOD *,BIO_f_prefix,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const BIO_METHOD *,BIO_f_readbuffer,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const BIO_METHOD *,BIO_f_zlib,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const BIO_METHOD *,BIO_f_zstd,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,BIO_get_line,
    AROS_LDA(BIO *, bio, A0),
    AROS_LDA(char *, buf, A1),
    AROS_LDA(int, size, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,BIO_get_rpoll_descriptor,
    AROS_LDA(BIO *, b, A0),
    AROS_LDA(BIO_POLL_DESCRIPTOR *, desc, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,BIO_get_wpoll_descriptor,
    AROS_LDA(BIO *, b, A0),
    AROS_LDA(BIO_POLL_DESCRIPTOR *, desc, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,BIO_meth_set_recvmmsg,
    AROS_LDA(BIO_METHOD *, biom, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,BIO_meth_set_sendmmsg,
    AROS_LDA(BIO_METHOD *, biom, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int,BIO_new_bio_dgram_pair,
    AROS_LDA(BIO **, bio1, A0),
    AROS_LDA(size_t, writebuf1, D0),
    AROS_LDA(BIO **, bio2, A1),
    AROS_LDA(size_t, writebuf2, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(BIO *,BIO_new_ex,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const BIO_METHOD *, method, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(BIO *,BIO_new_from_core_bio,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(OSSL_CORE_BIO *, corebio, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int,BIO_recvmmsg,
    AROS_LDA(BIO *, b, A0),
    AROS_LDA(BIO_MSG *, msg, A1),
    AROS_LDA(size_t, stride, D0),
    AROS_LDA(size_t, num_msg, D1),
    AROS_LDA(uint64_t, flags, D2),
    AROS_LDA(size_t *, msgs_processed, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const BIO_METHOD *,BIO_s_core,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const BIO_METHOD *,BIO_s_dgram_mem,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const BIO_METHOD *,BIO_s_dgram_pair,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int,BIO_sendmmsg,
    AROS_LDA(BIO *, b, A0),
    AROS_LDA(BIO_MSG *, msg, A1),
    AROS_LDA(size_t, stride, D0),
    AROS_LDA(size_t, num_msg, D1),
    AROS_LDA(uint64_t, flags, D2),
    AROS_LDA(size_t *, msgs_processed, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,BIO_socket_wait,
    AROS_LDA(int, fd, D0),
    AROS_LDA(int, for_read, D1),
    AROS_LDA(time_t, max_time, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,BIO_wait,
    AROS_LDA(BIO *, bio, A0),
    AROS_LDA(time_t, max_time, D0),
    AROS_LDA(unsigned int, nap_milliseconds, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(BN_CTX *,BN_CTX_new_ex,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(BN_CTX *,BN_CTX_secure_new_ex,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,BN_are_coprime,
    AROS_LDA(BIGNUM *, a, A0),
    AROS_LDA(const BIGNUM *, b, A1),
    AROS_LDA(BN_CTX *, ctx, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,BN_check_prime,
    AROS_LDA(const BIGNUM *, p, A0),
    AROS_LDA(BN_CTX *, ctx, A1),
    AROS_LDA(BN_GENCB *, cb, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(int,BN_generate_prime_ex2,
    AROS_LDA(BIGNUM *, ret, A0),
    AROS_LDA(int, bits, D0),
    AROS_LDA(int, safe, D1),
    AROS_LDA(const BIGNUM *, add, A1),
    AROS_LDA(const BIGNUM *, rem, A2),
    AROS_LDA(BN_GENCB *, cb, A3),
    AROS_LDA(BN_CTX *, ctx, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD11(int,BN_mod_exp_mont_consttime_x2,
    AROS_LDA(BIGNUM *, rr1, A0),
    AROS_LDA(const BIGNUM *, a1, A1),
    AROS_LDA(const BIGNUM *, p1, A2),
    AROS_LDA(const BIGNUM *, m1, A3),
    AROS_LDA(BN_MONT_CTX *, in_mont1, D0),
    AROS_LDA(BIGNUM *, rr2, D1),
    AROS_LDA(const BIGNUM *, a2, D2),
    AROS_LDA(const BIGNUM *, p2, D3),
    AROS_LDA(const BIGNUM *, m2, D4),
    AROS_LDA(BN_MONT_CTX *, in_mont2, D5),
    AROS_LDA(BN_CTX *, ctx, D6),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int,BN_priv_rand_ex,
    AROS_LDA(BIGNUM *, rnd, A0),
    AROS_LDA(int, bits, D0),
    AROS_LDA(int, top, D1),
    AROS_LDA(int, bottom, D2),
    AROS_LDA(unsigned int, strength, D3),
    AROS_LDA(BN_CTX *, ctx, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int,BN_priv_rand_range_ex,
    AROS_LDA(BIGNUM *, r, A0),
    AROS_LDA(const BIGNUM *, range, A1),
    AROS_LDA(unsigned int, strength, D0),
    AROS_LDA(BN_CTX *, ctx, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int,BN_rand_ex,
    AROS_LDA(BIGNUM *, rnd, A0),
    AROS_LDA(int, bits, D0),
    AROS_LDA(int, top, D1),
    AROS_LDA(int, bottom, D2),
    AROS_LDA(unsigned int, strength, D3),
    AROS_LDA(BN_CTX *, ctx, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int,BN_rand_range_ex,
    AROS_LDA(BIGNUM *, r, A0),
    AROS_LDA(const BIGNUM *, range, A1),
    AROS_LDA(unsigned int, strength, D0),
    AROS_LDA(BN_CTX *, ctx, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(BIGNUM *,BN_signed_bin2bn,
    AROS_LDA(const unsigned char *, s, A0),
    AROS_LDA(int, len, D0),
    AROS_LDA(BIGNUM *, ret, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,BN_signed_bn2bin,
    AROS_LDA(const BIGNUM *, a, A0),
    AROS_LDA(unsigned char *, to, A1),
    AROS_LDA(int, tolen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,BN_signed_bn2lebin,
    AROS_LDA(const BIGNUM *, a, A0),
    AROS_LDA(unsigned char *, to, A1),
    AROS_LDA(int, tolen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,BN_signed_bn2native,
    AROS_LDA(const BIGNUM *, a, A0),
    AROS_LDA(unsigned char *, to, A1),
    AROS_LDA(int, tolen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(BIGNUM *,BN_signed_lebin2bn,
    AROS_LDA(const unsigned char *, s, A0),
    AROS_LDA(int, len, D0),
    AROS_LDA(BIGNUM *, ret, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(BIGNUM *,BN_signed_native2bn,
    AROS_LDA(const unsigned char *, s, A0),
    AROS_LDA(int, len, D0),
    AROS_LDA(BIGNUM *, ret, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(CMS_ContentInfo *,CMS_AuthEnvelopedData_create,
    AROS_LDA(const EVP_CIPHER *, cipher, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(CMS_ContentInfo *,CMS_AuthEnvelopedData_create_ex,
    AROS_LDA(const EVP_CIPHER *, cipher, A0),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A1),
    AROS_LDA(const char *, propq, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(CMS_ContentInfo *,CMS_ContentInfo_new_ex,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, propq, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(CMS_ContentInfo *,CMS_EncryptedData_encrypt_ex,
    AROS_LDA(BIO *, in, A0),
    AROS_LDA(const EVP_CIPHER *, cipher, A1),
    AROS_LDA(const unsigned char *, key, A2),
    AROS_LDA(size_t, keylen, D0),
    AROS_LDA(unsigned int, flags, D1),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A3),
    AROS_LDA(const char *, propq, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(CMS_ContentInfo *,CMS_EnvelopedData_create_ex,
    AROS_LDA(const EVP_CIPHER *, cipher, A0),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A1),
    AROS_LDA(const char *, propq, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD8(BIO *,CMS_EnvelopedData_decrypt,
    AROS_LDA(CMS_EnvelopedData *, env, A0),
    AROS_LDA(BIO *, detached_data, A1),
    AROS_LDA(EVP_PKEY *, pkey, A2),
    AROS_LDA(X509 *, cert, A3),
    AROS_LDA(ASN1_OCTET_STRING *, secret, D0),
    AROS_LDA(unsigned int, flags, D1),
    AROS_LDA(OSSL_LIB_CTX *, libctx, D2),
    AROS_LDA(const char *, propq, D3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(CMS_EnvelopedData *,CMS_EnvelopedData_dup,
    AROS_LDA(const CMS_EnvelopedData *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM *,CMS_EnvelopedData_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,CMS_RecipientInfo_kari_set0_pkey_and_peer,
    AROS_LDA(CMS_RecipientInfo *, ri, A0),
    AROS_LDA(EVP_PKEY *, pk, A1),
    AROS_LDA(X509 *, peer, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,CMS_SignedData_free,
    AROS_LDA(CMS_SignedData *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(CMS_SignedData *,CMS_SignedData_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(CMS_RecipientInfo *,CMS_add1_recipient,
    AROS_LDA(CMS_ContentInfo *, cms, A0),
    AROS_LDA(X509 *, recip, A1),
    AROS_LDA(EVP_PKEY *, originatorPrivKey, A2),
    AROS_LDA(X509 *, originator, A3),
    AROS_LDA(unsigned int, flags, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(CMS_ContentInfo *,CMS_data_create_ex,
    AROS_LDA(BIO *, in, A0),
    AROS_LDA(unsigned int, flags, D0),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A1),
    AROS_LDA(const char *, propq, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int,CMS_decrypt_set1_pkey_and_peer,
    AROS_LDA(CMS_ContentInfo *, cms, A0),
    AROS_LDA(EVP_PKEY *, pk, A1),
    AROS_LDA(X509 *, cert, A2),
    AROS_LDA(X509 *, peer, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(CMS_ContentInfo *,CMS_digest_create_ex,
    AROS_LDA(BIO *, in, A0),
    AROS_LDA(const EVP_MD *, md, A1),
    AROS_LDA(unsigned int, flags, D0),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A2),
    AROS_LDA(const char *, propq, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int,CMS_final_digest,
    AROS_LDA(CMS_ContentInfo *, cms, A0),
    AROS_LDA(const unsigned char *, md, A1),
    AROS_LDA(unsigned int, mdlen, D0),
    AROS_LDA(BIO *, dcont, A2),
    AROS_LDA(unsigned int, flags, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(COMP_METHOD *,COMP_brotli,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(COMP_METHOD *,COMP_brotli_oneshot,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(COMP_METHOD *,COMP_zlib_oneshot,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(COMP_METHOD *,COMP_zstd,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(COMP_METHOD *,COMP_zstd_oneshot,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int,CONF_modules_load_file_ex,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, filename, A1),
    AROS_LDA(const char *, appname, A2),
    AROS_LDA(unsigned long, flags, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(void *,CRYPTO_aligned_alloc,
    AROS_LDA(size_t, num, D0),
    AROS_LDA(size_t, align, D1),
    AROS_LDA(void **, freeptr, A0),
    AROS_LDA(const char *, file, A1),
    AROS_LDA(int, line, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int,CRYPTO_atomic_add64,
    AROS_LDA(uint64_t *, val, A0),
    AROS_LDA(uint64_t, op, D0),
    AROS_LDA(uint64_t *, ret, A1),
    AROS_LDA(CRYPTO_RWLOCK *, lock, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int,CRYPTO_atomic_and,
    AROS_LDA(uint64_t *, val, A0),
    AROS_LDA(uint64_t, op, D0),
    AROS_LDA(uint64_t *, ret, A1),
    AROS_LDA(CRYPTO_RWLOCK *, lock, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,CRYPTO_atomic_load,
    AROS_LDA(uint64_t *, val, A0),
    AROS_LDA(uint64_t *, ret, A1),
    AROS_LDA(CRYPTO_RWLOCK *, lock, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,CRYPTO_atomic_load_int,
    AROS_LDA(int *, val, A0),
    AROS_LDA(int *, ret, A1),
    AROS_LDA(CRYPTO_RWLOCK *, lock, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int,CRYPTO_atomic_or,
    AROS_LDA(uint64_t *, val, A0),
    AROS_LDA(uint64_t, op, D0),
    AROS_LDA(uint64_t *, ret, A1),
    AROS_LDA(CRYPTO_RWLOCK *, lock, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,CRYPTO_atomic_store,
    AROS_LDA(uint64_t *, dst, A0),
    AROS_LDA(uint64_t, val, D0),
    AROS_LDA(CRYPTO_RWLOCK *, lock, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(CTLOG_STORE *,CTLOG_STORE_new_ex,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, propq, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(CTLOG *,CTLOG_new_ex,
    AROS_LDA(EVP_PKEY *, public_key, A0),
    AROS_LDA(const char *, name, A1),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A2),
    AROS_LDA(const char *, propq, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int,CTLOG_new_from_base64_ex,
    AROS_LDA(CTLOG **, ct_log, A0),
    AROS_LDA(const char *, pkey_base64, A1),
    AROS_LDA(const char *, name, A2),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A3),
    AROS_LDA(const char *, propq, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(CT_POLICY_EVAL_CTX *,CT_POLICY_EVAL_CTX_new_ex,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, propq, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(DIST_POINT_NAME *,DIST_POINT_NAME_dup,
    AROS_LDA(const DIST_POINT_NAME *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,EC_GROUP_check_named_curve,
    AROS_LDA(const EC_GROUP *, group, A0),
    AROS_LDA(int, nist_only, D0),
    AROS_LDA(BN_CTX *, ctx, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,EC_GROUP_get_field_type,
    AROS_LDA(const EC_GROUP *, group, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(EC_GROUP *,EC_GROUP_new_by_curve_name_ex,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, propq, A1),
    AROS_LDA(int, nid, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(EC_GROUP *,EC_GROUP_new_from_params,
    AROS_LDA(const OSSL_PARAM *, params, A0),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A1),
    AROS_LDA(const char *, propq, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(OSSL_PARAM *,EC_GROUP_to_params,
    AROS_LDA(const EC_GROUP *, group, A0),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A1),
    AROS_LDA(const char *, propq, A2),
    AROS_LDA(BN_CTX *, bnctx, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(EC_KEY *,EC_KEY_new_by_curve_name_ex,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    AROS_LDA(const char *, propq, A1),
    AROS_LDA(int, nid, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(EC_KEY *,EC_KEY_new_ex,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    AROS_LDA(const char *, propq, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void,ERR_add_error_mem_bio,
    AROS_LDA(const char *, sep, A0),
    AROS_LDA(BIO *, bio, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void,ERR_add_error_txt,
    AROS_LDA(const char *, sepr, A0),
    AROS_LDA(const char *, txt, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(int,ERR_count_to_mark,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(unsigned long,ERR_get_error_all,
    AROS_LDA(const char **, file, A0),
    AROS_LDA(int *, line, A1),
    AROS_LDA(const char **, func, A2),
    AROS_LDA(const char **, data, A3),
    AROS_LDA(int *, flags, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(void,ERR_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(unsigned long,ERR_peek_error_all,
    AROS_LDA(const char **, file, A0),
    AROS_LDA(int *, line, A1),
    AROS_LDA(const char **, func, A2),
    AROS_LDA(const char **, data, A3),
    AROS_LDA(int *, flags, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(unsigned long,ERR_peek_error_data,
    AROS_LDA(const char **, data, A0),
    AROS_LDA(int *, flags, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(unsigned long,ERR_peek_error_func,
    AROS_LDA(const char **, func, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(unsigned long,ERR_peek_last_error_all,
    AROS_LDA(const char **, file, A0),
    AROS_LDA(int *, line, A1),
    AROS_LDA(const char **, func, A2),
    AROS_LDA(const char **, data, A3),
    AROS_LDA(int *, flags, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(unsigned long,ERR_peek_last_error_data,
    AROS_LDA(const char **, data, A0),
    AROS_LDA(int *, flags, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(unsigned long,ERR_peek_last_error_func,
    AROS_LDA(const char **, func, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(int,ERR_pop,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void,ERR_set_debug,
    AROS_LDA(const char *, file, A0),
    AROS_LDA(int, line, D0),
    AROS_LDA(const char *, func, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void,ERR_vset_error,
    AROS_LDA(int, lib, D0),
    AROS_LDA(int, reason, D1),
    AROS_LDA(const char *, fmt, A0),
    AROS_LDA(long *, args, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM *,ESS_SIGNING_CERT_V2_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM *,ESS_SIGNING_CERT_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void,EVP_ASYM_CIPHER_do_all_provided,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(void *, arg, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(EVP_ASYM_CIPHER *,EVP_ASYM_CIPHER_fetch,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    AROS_LDA(const char *, algorithm, A1),
    AROS_LDA(const char *, properties, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,EVP_ASYM_CIPHER_free,
    AROS_LDA(EVP_ASYM_CIPHER *, cipher, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char *,EVP_ASYM_CIPHER_get0_description,
    AROS_LDA(const EVP_ASYM_CIPHER *, cipher, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char *,EVP_ASYM_CIPHER_get0_name,
    AROS_LDA(const EVP_ASYM_CIPHER *, cipher, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(OSSL_PROVIDER *,EVP_ASYM_CIPHER_get0_provider,
    AROS_LDA(const EVP_ASYM_CIPHER *, cipher, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PARAM *,EVP_ASYM_CIPHER_gettable_ctx_params,
    AROS_LDA(const EVP_ASYM_CIPHER *, ciph, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_ASYM_CIPHER_is_a,
    AROS_LDA(const EVP_ASYM_CIPHER *, cipher, A0),
    AROS_LDA(const char *, name, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_ASYM_CIPHER_names_do_all,
    AROS_LDA(const EVP_ASYM_CIPHER *, cipher, A0),
    AROS_LDA(void *, data, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PARAM *,EVP_ASYM_CIPHER_settable_ctx_params,
    AROS_LDA(const EVP_ASYM_CIPHER *, ciph, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,EVP_ASYM_CIPHER_up_ref,
    AROS_LDA(EVP_ASYM_CIPHER *, cipher, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(EVP_CIPHER_CTX *,EVP_CIPHER_CTX_dup,
    AROS_LDA(const EVP_CIPHER_CTX *, in, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const EVP_CIPHER *,EVP_CIPHER_CTX_get0_cipher,
    AROS_LDA(const EVP_CIPHER_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(EVP_CIPHER *,EVP_CIPHER_CTX_get1_cipher,
    AROS_LDA(EVP_CIPHER_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_CIPHER_CTX_get_algor,
    AROS_LDA(EVP_CIPHER_CTX *, ctx, A0),
    AROS_LDA(X509_ALGOR **, alg, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_CIPHER_CTX_get_algor_params,
    AROS_LDA(EVP_CIPHER_CTX *, ctx, A0),
    AROS_LDA(X509_ALGOR *, alg, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,EVP_CIPHER_CTX_get_original_iv,
    AROS_LDA(EVP_CIPHER_CTX *, ctx, A0),
    AROS_LDA(void *, buf, A1),
    AROS_LDA(size_t, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_CIPHER_CTX_get_params,
    AROS_LDA(EVP_CIPHER_CTX *, ctx, A0),
    AROS_LDA(OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,EVP_CIPHER_CTX_get_tag_length,
    AROS_LDA(const EVP_CIPHER_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,EVP_CIPHER_CTX_get_updated_iv,
    AROS_LDA(EVP_CIPHER_CTX *, ctx, A0),
    AROS_LDA(void *, buf, A1),
    AROS_LDA(size_t, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PARAM *,EVP_CIPHER_CTX_gettable_params,
    AROS_LDA(EVP_CIPHER_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_CIPHER_CTX_set_algor_params,
    AROS_LDA(EVP_CIPHER_CTX *, ctx, A0),
    AROS_LDA(const X509_ALGOR *, alg, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_CIPHER_CTX_set_params,
    AROS_LDA(EVP_CIPHER_CTX *, ctx, A0),
    AROS_LDA(const OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PARAM *,EVP_CIPHER_CTX_settable_params,
    AROS_LDA(EVP_CIPHER_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_CIPHER_can_pipeline,
    AROS_LDA(const EVP_CIPHER *, cipher, A0),
    AROS_LDA(int, enc, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void,EVP_CIPHER_do_all_provided,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(void *, arg, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(EVP_CIPHER *,EVP_CIPHER_fetch,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    AROS_LDA(const char *, algorithm, A1),
    AROS_LDA(const char *, properties, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,EVP_CIPHER_free,
    AROS_LDA(EVP_CIPHER *, cipher, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char *,EVP_CIPHER_get0_description,
    AROS_LDA(const EVP_CIPHER *, cipher, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char *,EVP_CIPHER_get0_name,
    AROS_LDA(const EVP_CIPHER *, cipher, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PROVIDER *,EVP_CIPHER_get0_provider,
    AROS_LDA(const EVP_CIPHER *, cipher, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,EVP_CIPHER_get_mode,
    AROS_LDA(const EVP_CIPHER *, cipher, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_CIPHER_get_params,
    AROS_LDA(EVP_CIPHER *, cipher, A0),
    AROS_LDA(OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PARAM *,EVP_CIPHER_gettable_ctx_params,
    AROS_LDA(const EVP_CIPHER *, cipher, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PARAM *,EVP_CIPHER_gettable_params,
    AROS_LDA(const EVP_CIPHER *, cipher, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_CIPHER_is_a,
    AROS_LDA(const EVP_CIPHER *, cipher, A0),
    AROS_LDA(const char *, name, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_CIPHER_names_do_all,
    AROS_LDA(const EVP_CIPHER *, cipher, A0),
    AROS_LDA(void *, data, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PARAM *,EVP_CIPHER_settable_ctx_params,
    AROS_LDA(const EVP_CIPHER *, cipher, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,EVP_CIPHER_up_ref,
    AROS_LDA(EVP_CIPHER *, cipher, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(int,EVP_CipherInit_SKEY,
    AROS_LDA(EVP_CIPHER_CTX *, ctx, A0),
    AROS_LDA(const EVP_CIPHER *, cipher, A1),
    AROS_LDA(EVP_SKEY *, skey, A2),
    AROS_LDA(const unsigned char *, iv, A3),
    AROS_LDA(size_t, iv_len, D0),
    AROS_LDA(int, enc, D1),
    AROS_LDA(const OSSL_PARAM *, params, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int,EVP_CipherInit_ex2,
    AROS_LDA(EVP_CIPHER_CTX *, ctx, A0),
    AROS_LDA(const EVP_CIPHER *, cipher, A1),
    AROS_LDA(const unsigned char *, key, A2),
    AROS_LDA(const unsigned char *, iv, A3),
    AROS_LDA(int, enc, D0),
    AROS_LDA(const OSSL_PARAM *, params, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(int,EVP_CipherPipelineDecryptInit,
    AROS_LDA(EVP_CIPHER_CTX *, ctx, A0),
    AROS_LDA(const EVP_CIPHER *, cipher, A1),
    AROS_LDA(const unsigned char *, key, A2),
    AROS_LDA(size_t, keylen, D0),
    AROS_LDA(size_t, numpipes, D1),
    AROS_LDA(const unsigned char **, iv, A3),
    AROS_LDA(size_t, ivlen, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(int,EVP_CipherPipelineEncryptInit,
    AROS_LDA(EVP_CIPHER_CTX *, ctx, A0),
    AROS_LDA(const EVP_CIPHER *, cipher, A1),
    AROS_LDA(const unsigned char *, key, A2),
    AROS_LDA(size_t, keylen, D0),
    AROS_LDA(size_t, numpipes, D1),
    AROS_LDA(const unsigned char **, iv, A3),
    AROS_LDA(size_t, ivlen, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int,EVP_CipherPipelineFinal,
    AROS_LDA(EVP_CIPHER_CTX *, ctx, A0),
    AROS_LDA(unsigned char **, outm, A1),
    AROS_LDA(size_t *, outl, A2),
    AROS_LDA(const size_t *, outsize, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int,EVP_CipherPipelineUpdate,
    AROS_LDA(EVP_CIPHER_CTX *, ctx, A0),
    AROS_LDA(unsigned char **, out, A1),
    AROS_LDA(size_t *, outl, A2),
    AROS_LDA(const size_t *, outsize, A3),
    AROS_LDA(const unsigned char **, in, D0),
    AROS_LDA(const size_t *, inl, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int,EVP_DecryptInit_ex2,
    AROS_LDA(EVP_CIPHER_CTX *, ctx, A0),
    AROS_LDA(const EVP_CIPHER *, cipher, A1),
    AROS_LDA(const unsigned char *, key, A2),
    AROS_LDA(const unsigned char *, iv, A3),
    AROS_LDA(const OSSL_PARAM *, params, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,EVP_DigestInit_ex2,
    AROS_LDA(EVP_MD_CTX *, ctx, A0),
    AROS_LDA(const EVP_MD *, type, A1),
    AROS_LDA(const OSSL_PARAM *, params, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(int,EVP_DigestSignInit_ex,
    AROS_LDA(EVP_MD_CTX *, ctx, A0),
    AROS_LDA(EVP_PKEY_CTX **, pctx, A1),
    AROS_LDA(const char *, mdname, A2),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A3),
    AROS_LDA(const char *, props, D0),
    AROS_LDA(EVP_PKEY *, pkey, D1),
    AROS_LDA(const OSSL_PARAM *, params, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,EVP_DigestSignUpdate,
    AROS_LDA(EVP_MD_CTX *, ctx, A0),
    AROS_LDA(const void *, data, A1),
    AROS_LDA(size_t, dsize, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,EVP_DigestSqueeze,
    AROS_LDA(EVP_MD_CTX *, ctx, A0),
    AROS_LDA(unsigned char *, out, A1),
    AROS_LDA(size_t, outlen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(int,EVP_DigestVerifyInit_ex,
    AROS_LDA(EVP_MD_CTX *, ctx, A0),
    AROS_LDA(EVP_PKEY_CTX **, pctx, A1),
    AROS_LDA(const char *, mdname, A2),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A3),
    AROS_LDA(const char *, props, D0),
    AROS_LDA(EVP_PKEY *, pkey, D1),
    AROS_LDA(const OSSL_PARAM *, params, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,EVP_DigestVerifyUpdate,
    AROS_LDA(EVP_MD_CTX *, ctx, A0),
    AROS_LDA(const void *, data, A1),
    AROS_LDA(size_t, dsize, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int,EVP_EncryptInit_ex2,
    AROS_LDA(EVP_CIPHER_CTX *, ctx, A0),
    AROS_LDA(const EVP_CIPHER *, cipher, A1),
    AROS_LDA(const unsigned char *, key, A2),
    AROS_LDA(const unsigned char *, iv, A3),
    AROS_LDA(const OSSL_PARAM *, params, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(EVP_KDF_CTX *,EVP_KDF_CTX_dup,
    AROS_LDA(const EVP_KDF_CTX *, src, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_KDF_CTX_get_params,
    AROS_LDA(EVP_KDF_CTX *, ctx, A0),
    AROS_LDA(OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PARAM *,EVP_KDF_CTX_gettable_params,
    AROS_LDA(EVP_KDF_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const EVP_KDF *,EVP_KDF_CTX_kdf,
    AROS_LDA(EVP_KDF_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(EVP_KDF_CTX *,EVP_KDF_CTX_new,
    AROS_LDA(EVP_KDF *, kdf, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_KDF_CTX_set_params,
    AROS_LDA(EVP_KDF_CTX *, ctx, A0),
    AROS_LDA(const OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PARAM *,EVP_KDF_CTX_settable_params,
    AROS_LDA(EVP_KDF_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void,EVP_KDF_do_all_provided,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(void *, arg, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(EVP_KDF *,EVP_KDF_fetch,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, algorithm, A1),
    AROS_LDA(const char *, properties, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,EVP_KDF_free,
    AROS_LDA(EVP_KDF *, kdf, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char *,EVP_KDF_get0_description,
    AROS_LDA(const EVP_KDF *, kdf, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PROVIDER *,EVP_KDF_get0_provider,
    AROS_LDA(const EVP_KDF *, kdf, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_KDF_get_params,
    AROS_LDA(EVP_KDF *, kdf, A0),
    AROS_LDA(OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PARAM *,EVP_KDF_gettable_ctx_params,
    AROS_LDA(const EVP_KDF *, kdf, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PARAM *,EVP_KDF_gettable_params,
    AROS_LDA(const EVP_KDF *, kdf, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_KDF_is_a,
    AROS_LDA(const EVP_KDF *, kdf, A0),
    AROS_LDA(const char *, name, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_KDF_names_do_all,
    AROS_LDA(const EVP_KDF *, kdf, A0),
    AROS_LDA(void *, data, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PARAM *,EVP_KDF_settable_ctx_params,
    AROS_LDA(const EVP_KDF *, kdf, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,EVP_KDF_up_ref,
    AROS_LDA(EVP_KDF *, kdf, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void,EVP_KEM_do_all_provided,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(void *, arg, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(EVP_KEM *,EVP_KEM_fetch,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    AROS_LDA(const char *, algorithm, A1),
    AROS_LDA(const char *, properties, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,EVP_KEM_free,
    AROS_LDA(EVP_KEM *, wrap, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char *,EVP_KEM_get0_description,
    AROS_LDA(const EVP_KEM *, wrap, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char *,EVP_KEM_get0_name,
    AROS_LDA(const EVP_KEM *, wrap, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(OSSL_PROVIDER *,EVP_KEM_get0_provider,
    AROS_LDA(const EVP_KEM *, wrap, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PARAM *,EVP_KEM_gettable_ctx_params,
    AROS_LDA(const EVP_KEM *, kem, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_KEM_is_a,
    AROS_LDA(const EVP_KEM *, wrap, A0),
    AROS_LDA(const char *, name, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_KEM_names_do_all,
    AROS_LDA(const EVP_KEM *, wrap, A0),
    AROS_LDA(void *, data, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PARAM *,EVP_KEM_settable_ctx_params,
    AROS_LDA(const EVP_KEM *, kem, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,EVP_KEM_up_ref,
    AROS_LDA(EVP_KEM *, wrap, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void,EVP_KEYEXCH_do_all_provided,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(void *, data, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(EVP_KEYEXCH *,EVP_KEYEXCH_fetch,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    AROS_LDA(const char *, algorithm, A1),
    AROS_LDA(const char *, properties, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,EVP_KEYEXCH_free,
    AROS_LDA(EVP_KEYEXCH *, exchange, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char *,EVP_KEYEXCH_get0_description,
    AROS_LDA(const EVP_KEYEXCH *, keyexch, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char *,EVP_KEYEXCH_get0_name,
    AROS_LDA(const EVP_KEYEXCH *, keyexch, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(OSSL_PROVIDER *,EVP_KEYEXCH_get0_provider,
    AROS_LDA(const EVP_KEYEXCH *, exchange, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PARAM *,EVP_KEYEXCH_gettable_ctx_params,
    AROS_LDA(const EVP_KEYEXCH *, keyexch, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_KEYEXCH_is_a,
    AROS_LDA(const EVP_KEYEXCH *, keyexch, A0),
    AROS_LDA(const char *, name, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_KEYEXCH_names_do_all,
    AROS_LDA(const EVP_KEYEXCH *, keyexch, A0),
    AROS_LDA(void *, data, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PARAM *,EVP_KEYEXCH_settable_ctx_params,
    AROS_LDA(const EVP_KEYEXCH *, keyexch, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,EVP_KEYEXCH_up_ref,
    AROS_LDA(EVP_KEYEXCH *, exchange, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void,EVP_KEYMGMT_do_all_provided,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(void *, arg, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(EVP_KEYMGMT *,EVP_KEYMGMT_fetch,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    AROS_LDA(const char *, algorithm, A1),
    AROS_LDA(const char *, properties, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,EVP_KEYMGMT_free,
    AROS_LDA(EVP_KEYMGMT *, keymgmt, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PARAM *,EVP_KEYMGMT_gen_gettable_params,
    AROS_LDA(const EVP_KEYMGMT *, keymgmt, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PARAM *,EVP_KEYMGMT_gen_settable_params,
    AROS_LDA(const EVP_KEYMGMT *, keymgmt, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char *,EVP_KEYMGMT_get0_description,
    AROS_LDA(const EVP_KEYMGMT *, keymgmt, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char *,EVP_KEYMGMT_get0_name,
    AROS_LDA(const EVP_KEYMGMT *, keymgmt, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PROVIDER *,EVP_KEYMGMT_get0_provider,
    AROS_LDA(const EVP_KEYMGMT *, keymgmt, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PARAM *,EVP_KEYMGMT_gettable_params,
    AROS_LDA(const EVP_KEYMGMT *, keymgmt, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_KEYMGMT_is_a,
    AROS_LDA(const EVP_KEYMGMT *, keymgmt, A0),
    AROS_LDA(const char *, name, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_KEYMGMT_names_do_all,
    AROS_LDA(const EVP_KEYMGMT *, keymgmt, A0),
    AROS_LDA(void *, data, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PARAM *,EVP_KEYMGMT_settable_params,
    AROS_LDA(const EVP_KEYMGMT *, keymgmt, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,EVP_KEYMGMT_up_ref,
    AROS_LDA(EVP_KEYMGMT *, keymgmt, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(size_t,EVP_MAC_CTX_get_block_size,
    AROS_LDA(EVP_MAC_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_MAC_CTX_get_params,
    AROS_LDA(EVP_MAC_CTX *, ctx, A0),
    AROS_LDA(OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PARAM *,EVP_MAC_CTX_gettable_params,
    AROS_LDA(EVP_MAC_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_MAC_CTX_set_params,
    AROS_LDA(EVP_MAC_CTX *, ctx, A0),
    AROS_LDA(const OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PARAM *,EVP_MAC_CTX_settable_params,
    AROS_LDA(EVP_MAC_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void,EVP_MAC_do_all_provided,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(void *, arg, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(EVP_MAC *,EVP_MAC_fetch,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, algorithm, A1),
    AROS_LDA(const char *, properties, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,EVP_MAC_free,
    AROS_LDA(EVP_MAC *, mac, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char *,EVP_MAC_get0_description,
    AROS_LDA(const EVP_MAC *, mac, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char *,EVP_MAC_get0_name,
    AROS_LDA(const EVP_MAC *, mac, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PROVIDER *,EVP_MAC_get0_provider,
    AROS_LDA(const EVP_MAC *, mac, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_MAC_get_params,
    AROS_LDA(EVP_MAC *, mac, A0),
    AROS_LDA(OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PARAM *,EVP_MAC_gettable_ctx_params,
    AROS_LDA(const EVP_MAC *, mac, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PARAM *,EVP_MAC_gettable_params,
    AROS_LDA(const EVP_MAC *, mac, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,EVP_MAC_init_SKEY,
    AROS_LDA(EVP_MAC_CTX *, ctx, A0),
    AROS_LDA(EVP_SKEY *, skey, A1),
    AROS_LDA(const OSSL_PARAM *, params, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_MAC_is_a,
    AROS_LDA(const EVP_MAC *, mac, A0),
    AROS_LDA(const char *, name, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_MAC_names_do_all,
    AROS_LDA(const EVP_MAC *, mac, A0),
    AROS_LDA(void *, data, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PARAM *,EVP_MAC_settable_ctx_params,
    AROS_LDA(const EVP_MAC *, mac, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,EVP_MAC_up_ref,
    AROS_LDA(EVP_MAC *, mac, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(EVP_MD_CTX *,EVP_MD_CTX_dup,
    AROS_LDA(const EVP_MD_CTX *, in, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const EVP_MD *,EVP_MD_CTX_get0_md,
    AROS_LDA(const EVP_MD_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(EVP_MD *,EVP_MD_CTX_get1_md,
    AROS_LDA(EVP_MD_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_MD_CTX_get_params,
    AROS_LDA(EVP_MD_CTX *, ctx, A0),
    AROS_LDA(OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,EVP_MD_CTX_get_size_ex,
    AROS_LDA(const EVP_MD_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PARAM *,EVP_MD_CTX_gettable_params,
    AROS_LDA(EVP_MD_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_MD_CTX_set_params,
    AROS_LDA(EVP_MD_CTX *, ctx, A0),
    AROS_LDA(const OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PARAM *,EVP_MD_CTX_settable_params,
    AROS_LDA(EVP_MD_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void,EVP_MD_do_all_provided,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(void *, arg, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(EVP_MD *,EVP_MD_fetch,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    AROS_LDA(const char *, algorithm, A1),
    AROS_LDA(const char *, properties, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,EVP_MD_free,
    AROS_LDA(EVP_MD *, md, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char *,EVP_MD_get0_description,
    AROS_LDA(const EVP_MD *, md, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char *,EVP_MD_get0_name,
    AROS_LDA(const EVP_MD *, md, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PROVIDER *,EVP_MD_get0_provider,
    AROS_LDA(const EVP_MD *, md, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_MD_get_params,
    AROS_LDA(const EVP_MD *, digest, A0),
    AROS_LDA(OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PARAM *,EVP_MD_gettable_ctx_params,
    AROS_LDA(const EVP_MD *, md, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PARAM *,EVP_MD_gettable_params,
    AROS_LDA(const EVP_MD *, digest, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_MD_is_a,
    AROS_LDA(const EVP_MD *, md, A0),
    AROS_LDA(const char *, name, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_MD_names_do_all,
    AROS_LDA(const EVP_MD *, md, A0),
    AROS_LDA(void *, data, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PARAM *,EVP_MD_settable_ctx_params,
    AROS_LDA(const EVP_MD *, md, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,EVP_MD_up_ref,
    AROS_LDA(EVP_MD *, md, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,EVP_MD_xof,
    AROS_LDA(const EVP_MD *, md, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD8(int,EVP_PBE_CipherInit_ex,
    AROS_LDA(ASN1_OBJECT *, pbe_obj, A0),
    AROS_LDA(const char *, pass, A1),
    AROS_LDA(int, passlen, D0),
    AROS_LDA(ASN1_TYPE *, param, A2),
    AROS_LDA(EVP_CIPHER_CTX *, ctx, A3),
    AROS_LDA(int, en_de, D1),
    AROS_LDA(OSSL_LIB_CTX *, libctx, D2),
    AROS_LDA(const char *, propq, D3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int,EVP_PBE_find_ex,
    AROS_LDA(int, type, D0),
    AROS_LDA(int, pbe_nid, D1),
    AROS_LDA(int *, pcnid, A0),
    AROS_LDA(int *, pmnid, A1),
    AROS_LDA(EVP_PBE_KEYGEN **, pkeygen, A2),
    AROS_LDA(EVP_PBE_KEYGEN_EX **, pkeygen_ex, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD8(int,EVP_PBE_scrypt_amiga_1,
    AROS_LDA(const char *, pass, A0),
    AROS_LDA(size_t, passlen, A1),
    AROS_LDA(const unsigned char *, salt, A2),
    AROS_LDA(uint64_t, N, D0),
    AROS_LDA(uint64_t, r, D2),
    AROS_LDA(uint64_t, p, D4),
    AROS_LDA(uint64_t, maxmem, D6),
    AROS_LDA(void *, moreargs, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void *,EVP_PBE_scrypt_amiga_2,
    AROS_LDA(size_t, saltlen, D0),
    AROS_LDA(unsigned char *, key, A0),
    AROS_LDA(size_t, keylen, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(void *,EVP_PBE_scrypt_ex_amiga_2,
    AROS_LDA(size_t, saltlen, D0),
    AROS_LDA(unsigned char *, key, A0),
    AROS_LDA(size_t, keylen, D1),
    AROS_LDA(OSSL_LIB_CTX *, ctx, A1),
    AROS_LDA(const char *, propq, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(EVP_PKEY *,EVP_PKCS82PKEY_ex,
    AROS_LDA(const PKCS8_PRIV_KEY_INFO *, p8, A0),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A1),
    AROS_LDA(const char *, propq, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,EVP_PKEY_CTX_add1_hkdf_info,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const unsigned char *, info, A1),
    AROS_LDA(int, infolen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,EVP_PKEY_CTX_add1_tls1_prf_seed,
    AROS_LDA(EVP_PKEY_CTX *, pctx, A0),
    AROS_LDA(const unsigned char *, seed, A1),
    AROS_LDA(int, seedlen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_get0_dh_kdf_oid,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(ASN1_OBJECT **, oid, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_get0_dh_kdf_ukm,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(unsigned char **, ukm, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_get0_ecdh_kdf_ukm,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(unsigned char **, ukm, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(OSSL_LIB_CTX *,EVP_PKEY_CTX_get0_libctx,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char *,EVP_PKEY_CTX_get0_propq,
    AROS_LDA(const EVP_PKEY_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PROVIDER *,EVP_PKEY_CTX_get0_provider,
    AROS_LDA(const EVP_PKEY_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_get0_rsa_oaep_label,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(unsigned char **, label, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_get1_id,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(void *, id, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_get1_id_len,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(size_t *, id_len, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_get_algor,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(X509_ALGOR **, alg, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_get_algor_params,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(X509_ALGOR *, alg, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_get_dh_kdf_md,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const EVP_MD **, md, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_get_dh_kdf_outlen,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int *, len, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,EVP_PKEY_CTX_get_dh_kdf_type,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,EVP_PKEY_CTX_get_ecdh_cofactor_mode,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_get_ecdh_kdf_md,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const EVP_MD **, md, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_get_ecdh_kdf_outlen,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int *, len, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,EVP_PKEY_CTX_get_ecdh_kdf_type,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,EVP_PKEY_CTX_get_group_name,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(char *, name, A1),
    AROS_LDA(size_t, namelen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_get_params,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_get_rsa_mgf1_md,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const EVP_MD **, md, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,EVP_PKEY_CTX_get_rsa_mgf1_md_name,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(char *, name, A1),
    AROS_LDA(size_t, namelen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_get_rsa_oaep_md,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const EVP_MD **, md, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,EVP_PKEY_CTX_get_rsa_oaep_md_name,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(char *, name, A1),
    AROS_LDA(size_t, namelen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_get_rsa_padding,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int *, pad_mode, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_get_rsa_pss_saltlen,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int *, saltlen, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_get_signature_md,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const EVP_MD **, md, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PARAM *,EVP_PKEY_CTX_gettable_params,
    AROS_LDA(const EVP_PKEY_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_is_a,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const char *, keytype, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(EVP_PKEY_CTX *,EVP_PKEY_CTX_new_from_name,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, name, A1),
    AROS_LDA(const char *, propquery, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(EVP_PKEY_CTX *,EVP_PKEY_CTX_new_from_pkey,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(EVP_PKEY *, pkey, A1),
    AROS_LDA(const char *, propquery, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_set0_dh_kdf_oid,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(ASN1_OBJECT *, oid, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,EVP_PKEY_CTX_set0_dh_kdf_ukm,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(unsigned char *, ukm, A1),
    AROS_LDA(int, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,EVP_PKEY_CTX_set0_ecdh_kdf_ukm,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(unsigned char *, ukm, A1),
    AROS_LDA(int, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,EVP_PKEY_CTX_set0_rsa_oaep_label,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(void *, label, A1),
    AROS_LDA(int, llen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,EVP_PKEY_CTX_set1_hkdf_key,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const unsigned char *, key, A1),
    AROS_LDA(int, keylen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,EVP_PKEY_CTX_set1_hkdf_salt,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const unsigned char *, salt, A1),
    AROS_LDA(int, saltlen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,EVP_PKEY_CTX_set1_id,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const void *, id, A1),
    AROS_LDA(int, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,EVP_PKEY_CTX_set1_pbe_pass,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const char *, pass, A1),
    AROS_LDA(int, passlen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_set1_rsa_keygen_pubexp,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(BIGNUM *, pubexp, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,EVP_PKEY_CTX_set1_scrypt_salt,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const unsigned char *, salt, A1),
    AROS_LDA(int, saltlen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,EVP_PKEY_CTX_set1_tls1_prf_secret,
    AROS_LDA(EVP_PKEY_CTX *, pctx, A0),
    AROS_LDA(const unsigned char *, sec, A1),
    AROS_LDA(int, seclen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_set_algor_params,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const X509_ALGOR *, alg, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_set_dh_kdf_md,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const EVP_MD *, md, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_set_dh_kdf_outlen,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_set_dh_kdf_type,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int, kdf, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_set_dh_nid,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int, nid, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_set_dh_pad,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int, pad, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_set_dh_paramgen_generator,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int, gen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_set_dh_paramgen_gindex,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int, gindex, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_set_dh_paramgen_prime_len,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int, pbits, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,EVP_PKEY_CTX_set_dh_paramgen_seed,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const unsigned char *, seed, A1),
    AROS_LDA(size_t, seedlen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_set_dh_paramgen_subprime_len,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int, qlen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_set_dh_paramgen_type,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int, typ, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_set_dh_rfc5114,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int, gen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_set_dhx_rfc5114,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int, gen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_set_dsa_paramgen_bits,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int, nbits, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_set_dsa_paramgen_gindex,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int, gindex, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_set_dsa_paramgen_md,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const EVP_MD *, md, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,EVP_PKEY_CTX_set_dsa_paramgen_md_props,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const char *, md_name, A1),
    AROS_LDA(const char *, md_properties, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_set_dsa_paramgen_q_bits,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int, qbits, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,EVP_PKEY_CTX_set_dsa_paramgen_seed,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const unsigned char *, seed, A1),
    AROS_LDA(size_t, seedlen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_set_dsa_paramgen_type,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const char *, name, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_set_ec_param_enc,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int, param_enc, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_set_ec_paramgen_curve_nid,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int, nid, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_set_ecdh_cofactor_mode,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int, cofactor_mode, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_set_ecdh_kdf_md,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const EVP_MD *, md, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_set_ecdh_kdf_outlen,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_set_ecdh_kdf_type,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int, kdf, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_set_group_name,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const char *, name, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_set_hkdf_md,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const EVP_MD *, md, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_set_hkdf_mode,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int, mode, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_set_kem_op,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const char *, op, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,EVP_PKEY_CTX_set_mac_key,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const unsigned char *, key, A1),
    AROS_LDA(int, keylen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_set_params,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_set_rsa_keygen_bits,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int, bits, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_set_rsa_keygen_primes,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int, primes, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_set_rsa_keygen_pubexp,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(BIGNUM *, pubexp, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_set_rsa_mgf1_md,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const EVP_MD *, md, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,EVP_PKEY_CTX_set_rsa_mgf1_md_name,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const char *, mdname, A1),
    AROS_LDA(const char *, mdprops, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_set_rsa_oaep_md,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const EVP_MD *, md, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,EVP_PKEY_CTX_set_rsa_oaep_md_name,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const char *, mdname, A1),
    AROS_LDA(const char *, mdprops, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_set_rsa_padding,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int, pad_mode, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_set_rsa_pss_keygen_md,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const EVP_MD *, md, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,EVP_PKEY_CTX_set_rsa_pss_keygen_md_name,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const char *, mdname, A1),
    AROS_LDA(const char *, mdprops, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_set_rsa_pss_keygen_mgf1_md,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const EVP_MD *, md, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_set_rsa_pss_keygen_mgf1_md_name,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const char *, mdname, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_set_rsa_pss_keygen_saltlen,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int, saltlen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_set_rsa_pss_saltlen,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int, saltlen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_set_scrypt_N,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(uint64_t, n, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_set_scrypt_maxmem_bytes,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(uint64_t, maxmem_bytes, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_set_scrypt_p,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(uint64_t, p, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_set_scrypt_r,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(uint64_t, r, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,EVP_PKEY_CTX_set_signature,
    AROS_LDA(EVP_PKEY_CTX *, pctx, A0),
    AROS_LDA(const unsigned char *, sig, A1),
    AROS_LDA(size_t, siglen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_set_signature_md,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const EVP_MD *, md, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_CTX_set_tls1_prf_md,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const EVP_MD *, md, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PARAM *,EVP_PKEY_CTX_settable_params,
    AROS_LDA(const EVP_PKEY_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(EVP_PKEY *,EVP_PKEY_Q_vkeygen,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, propq, A1),
    AROS_LDA(const char *, type, A2),
    AROS_LDA(long *, args, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,EVP_PKEY_auth_decapsulate_init,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(EVP_PKEY *, authpub, A1),
    AROS_LDA(const OSSL_PARAM *, params, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,EVP_PKEY_auth_encapsulate_init,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(EVP_PKEY *, authpriv, A1),
    AROS_LDA(const OSSL_PARAM *, params, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,EVP_PKEY_can_sign,
    AROS_LDA(const EVP_PKEY *, pkey, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int,EVP_PKEY_decapsulate,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(unsigned char *, unwrapped, A1),
    AROS_LDA(size_t *, unwrappedlen, A2),
    AROS_LDA(const unsigned char *, wrapped, A3),
    AROS_LDA(size_t, wrappedlen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_decapsulate_init,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_decrypt_init_ex,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_derive_init_ex,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,EVP_PKEY_derive_set_peer_ex,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(EVP_PKEY *, peer, A1),
    AROS_LDA(int, validate_peer, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(EVP_PKEY *,EVP_PKEY_dup,
    AROS_LDA(EVP_PKEY *, pkey, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int,EVP_PKEY_encapsulate,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(unsigned char *, wrappedkey, A1),
    AROS_LDA(size_t *, wrappedkeylen, A2),
    AROS_LDA(unsigned char *, genkey, A3),
    AROS_LDA(size_t *, genkeylen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_encapsulate_init,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_encrypt_init_ex,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_eq,
    AROS_LDA(const EVP_PKEY *, a, A0),
    AROS_LDA(const EVP_PKEY *, b, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int,EVP_PKEY_export,
    AROS_LDA(const EVP_PKEY *, pkey, A0),
    AROS_LDA(int, selection, D0),
    AROS_LDA(OSSL_CALLBACK *, export_cb, A1),
    AROS_LDA(void *, export_cbarg, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int,EVP_PKEY_fromdata,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(EVP_PKEY **, ppkey, A1),
    AROS_LDA(int, selection, D0),
    AROS_LDA(OSSL_PARAM *, params, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,EVP_PKEY_fromdata_init,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(const OSSL_PARAM *,EVP_PKEY_fromdata_settable,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int, selection, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_generate,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(EVP_PKEY **, ppkey, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char *,EVP_PKEY_get0_description,
    AROS_LDA(const EVP_PKEY *, pkey, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PROVIDER *,EVP_PKEY_get0_provider,
    AROS_LDA(const EVP_PKEY *, key, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char *,EVP_PKEY_get0_type_name,
    AROS_LDA(const EVP_PKEY *, key, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,EVP_PKEY_get_bn_param,
    AROS_LDA(const EVP_PKEY *, pkey, A0),
    AROS_LDA(const char *, key_name, A1),
    AROS_LDA(BIGNUM **, bn, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,EVP_PKEY_get_default_digest_name,
    AROS_LDA(EVP_PKEY *, pkey, A0),
    AROS_LDA(char *, mdname, A1),
    AROS_LDA(size_t, mdname_sz, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,EVP_PKEY_get_ec_point_conv_form,
    AROS_LDA(const EVP_PKEY *, pkey, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void *,EVP_PKEY_get_ex_data,
    AROS_LDA(const EVP_PKEY *, key, A0),
    AROS_LDA(int, idx, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,EVP_PKEY_get_field_type,
    AROS_LDA(const EVP_PKEY *, pkey, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int,EVP_PKEY_get_group_name,
    AROS_LDA(const EVP_PKEY *, pkey, A0),
    AROS_LDA(char *, name, A1),
    AROS_LDA(size_t, name_sz, D0),
    AROS_LDA(size_t *, gname_len, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,EVP_PKEY_get_int_param,
    AROS_LDA(const EVP_PKEY *, pkey, A0),
    AROS_LDA(const char *, key_name, A1),
    AROS_LDA(int *, out, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int,EVP_PKEY_get_octet_string_param,
    AROS_LDA(const EVP_PKEY *, pkey, A0),
    AROS_LDA(const char *, key_name, A1),
    AROS_LDA(unsigned char *, buf, A2),
    AROS_LDA(size_t, max_buf_sz, D0),
    AROS_LDA(size_t *, out_sz, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_get_params,
    AROS_LDA(const EVP_PKEY *, pkey, A0),
    AROS_LDA(OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,EVP_PKEY_get_size_t_param,
    AROS_LDA(const EVP_PKEY *, pkey, A0),
    AROS_LDA(const char *, key_name, A1),
    AROS_LDA(size_t *, out, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int,EVP_PKEY_get_utf8_string_param,
    AROS_LDA(const EVP_PKEY *, pkey, A0),
    AROS_LDA(const char *, key_name, A1),
    AROS_LDA(char *, str, A2),
    AROS_LDA(size_t, max_buf_sz, D0),
    AROS_LDA(size_t *, out_sz, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PARAM *,EVP_PKEY_gettable_params,
    AROS_LDA(const EVP_PKEY *, pkey, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_is_a,
    AROS_LDA(const EVP_PKEY *, pkey, A0),
    AROS_LDA(const char *, name, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(EVP_PKEY *,EVP_PKEY_new_raw_private_key_ex,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, keytype, A1),
    AROS_LDA(const char *, propq, A2),
    AROS_LDA(const unsigned char *, priv, A3),
    AROS_LDA(size_t, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(EVP_PKEY *,EVP_PKEY_new_raw_public_key_ex,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, keytype, A1),
    AROS_LDA(const char *, propq, A2),
    AROS_LDA(const unsigned char *, pub, A3),
    AROS_LDA(size_t, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,EVP_PKEY_pairwise_check,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,EVP_PKEY_param_check_quick,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_parameters_eq,
    AROS_LDA(const EVP_PKEY *, a, A0),
    AROS_LDA(const EVP_PKEY *, b, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,EVP_PKEY_private_check,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,EVP_PKEY_public_check_quick,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,EVP_PKEY_set_bn_param,
    AROS_LDA(EVP_PKEY *, pkey, A0),
    AROS_LDA(const char *, key_name, A1),
    AROS_LDA(const BIGNUM *, bn, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,EVP_PKEY_set_ex_data,
    AROS_LDA(EVP_PKEY *, key, A0),
    AROS_LDA(int, idx, D0),
    AROS_LDA(void *, arg, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,EVP_PKEY_set_int_param,
    AROS_LDA(EVP_PKEY *, pkey, A0),
    AROS_LDA(const char *, key_name, A1),
    AROS_LDA(int, in, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int,EVP_PKEY_set_octet_string_param,
    AROS_LDA(EVP_PKEY *, pkey, A0),
    AROS_LDA(const char *, key_name, A1),
    AROS_LDA(const unsigned char *, buf, A2),
    AROS_LDA(size_t, bsize, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_set_params,
    AROS_LDA(EVP_PKEY *, pkey, A0),
    AROS_LDA(OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,EVP_PKEY_set_size_t_param,
    AROS_LDA(EVP_PKEY *, pkey, A0),
    AROS_LDA(const char *, key_name, A1),
    AROS_LDA(size_t, in, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_set_type_by_keymgmt,
    AROS_LDA(EVP_PKEY *, pkey, A0),
    AROS_LDA(EVP_KEYMGMT *, keymgmt, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,EVP_PKEY_set_utf8_string_param,
    AROS_LDA(EVP_PKEY *, pkey, A0),
    AROS_LDA(const char *, key_name, A1),
    AROS_LDA(const char *, str, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PARAM *,EVP_PKEY_settable_params,
    AROS_LDA(const EVP_PKEY *, pkey, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_sign_init_ex,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,EVP_PKEY_sign_init_ex2,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(EVP_SIGNATURE *, algo, A1),
    AROS_LDA(const OSSL_PARAM *, params, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,EVP_PKEY_sign_message_final,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(unsigned char *, sig, A1),
    AROS_LDA(size_t *, siglen, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,EVP_PKEY_sign_message_init,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(EVP_SIGNATURE *, algo, A1),
    AROS_LDA(const OSSL_PARAM *, params, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,EVP_PKEY_sign_message_update,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const unsigned char *, in, A1),
    AROS_LDA(size_t, inlen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,EVP_PKEY_todata,
    AROS_LDA(const EVP_PKEY *, pkey, A0),
    AROS_LDA(int, selection, D0),
    AROS_LDA(OSSL_PARAM **, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_type_names_do_all,
    AROS_LDA(const EVP_PKEY *, pkey, A0),
    AROS_LDA(void *, data, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_verify_init_ex,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,EVP_PKEY_verify_init_ex2,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(EVP_SIGNATURE *, algo, A1),
    AROS_LDA(const OSSL_PARAM *, params, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,EVP_PKEY_verify_message_final,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,EVP_PKEY_verify_message_init,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(EVP_SIGNATURE *, algo, A1),
    AROS_LDA(const OSSL_PARAM *, params, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,EVP_PKEY_verify_message_update,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const unsigned char *, in, A1),
    AROS_LDA(size_t, inlen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_PKEY_verify_recover_init_ex,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,EVP_PKEY_verify_recover_init_ex2,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(EVP_SIGNATURE *, algo, A1),
    AROS_LDA(const OSSL_PARAM *, params, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(int,EVP_Q_digest,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, name, A1),
    AROS_LDA(const char *, propq, A2),
    AROS_LDA(const void *, data, A3),
    AROS_LDA(size_t, datalen, D0),
    AROS_LDA(unsigned char *, md, D1),
    AROS_LDA(size_t *, mdlen, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,EVP_RAND_CTX_free,
    AROS_LDA(EVP_RAND_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(EVP_RAND *,EVP_RAND_CTX_get0_rand,
    AROS_LDA(EVP_RAND_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_RAND_CTX_get_params,
    AROS_LDA(EVP_RAND_CTX *, ctx, A0),
    AROS_LDA(OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PARAM *,EVP_RAND_CTX_gettable_params,
    AROS_LDA(EVP_RAND_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(EVP_RAND_CTX *,EVP_RAND_CTX_new,
    AROS_LDA(EVP_RAND *, rand, A0),
    AROS_LDA(EVP_RAND_CTX *, parent, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_RAND_CTX_set_params,
    AROS_LDA(EVP_RAND_CTX *, ctx, A0),
    AROS_LDA(const OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PARAM *,EVP_RAND_CTX_settable_params,
    AROS_LDA(EVP_RAND_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,EVP_RAND_CTX_up_ref,
    AROS_LDA(EVP_RAND_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void,EVP_RAND_do_all_provided,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(void *, arg, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,EVP_RAND_enable_locking,
    AROS_LDA(EVP_RAND_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(EVP_RAND *,EVP_RAND_fetch,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, algorithm, A1),
    AROS_LDA(const char *, properties, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,EVP_RAND_free,
    AROS_LDA(EVP_RAND *, rand, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(int,EVP_RAND_generate,
    AROS_LDA(EVP_RAND_CTX *, ctx, A0),
    AROS_LDA(unsigned char *, out, A1),
    AROS_LDA(size_t, outlen, D0),
    AROS_LDA(unsigned int, strength, D1),
    AROS_LDA(int, prediction_resistance, D2),
    AROS_LDA(const unsigned char *, addin, A2),
    AROS_LDA(size_t, addin_len, D3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char *,EVP_RAND_get0_description,
    AROS_LDA(const EVP_RAND *, md, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char *,EVP_RAND_get0_name,
    AROS_LDA(const EVP_RAND *, rand, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PROVIDER *,EVP_RAND_get0_provider,
    AROS_LDA(const EVP_RAND *, rand, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_RAND_get_params,
    AROS_LDA(EVP_RAND *, rand, A0),
    AROS_LDA(OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,EVP_RAND_get_state,
    AROS_LDA(EVP_RAND_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(unsigned int,EVP_RAND_get_strength,
    AROS_LDA(EVP_RAND_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PARAM *,EVP_RAND_gettable_ctx_params,
    AROS_LDA(const EVP_RAND *, rand, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PARAM *,EVP_RAND_gettable_params,
    AROS_LDA(const EVP_RAND *, rand, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int,EVP_RAND_instantiate,
    AROS_LDA(EVP_RAND_CTX *, ctx, A0),
    AROS_LDA(unsigned int, strength, D0),
    AROS_LDA(int, prediction_resistance, D1),
    AROS_LDA(const unsigned char *, pstr, A1),
    AROS_LDA(size_t, pstr_len, D2),
    AROS_LDA(const OSSL_PARAM *, params, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_RAND_is_a,
    AROS_LDA(const EVP_RAND *, rand, A0),
    AROS_LDA(const char *, name, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_RAND_names_do_all,
    AROS_LDA(const EVP_RAND *, rand, A0),
    AROS_LDA(void *, data, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,EVP_RAND_nonce,
    AROS_LDA(EVP_RAND_CTX *, ctx, A0),
    AROS_LDA(unsigned char *, out, A1),
    AROS_LDA(size_t, outlen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int,EVP_RAND_reseed,
    AROS_LDA(EVP_RAND_CTX *, ctx, A0),
    AROS_LDA(int, prediction_resistance, D0),
    AROS_LDA(const unsigned char *, ent, A1),
    AROS_LDA(size_t, ent_len, D1),
    AROS_LDA(const unsigned char *, addin, A2),
    AROS_LDA(size_t, addin_len, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PARAM *,EVP_RAND_settable_ctx_params,
    AROS_LDA(const EVP_RAND *, rand, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,EVP_RAND_uninstantiate,
    AROS_LDA(EVP_RAND_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,EVP_RAND_up_ref,
    AROS_LDA(EVP_RAND *, rand, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,EVP_RAND_verify_zeroization,
    AROS_LDA(EVP_RAND_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void,EVP_SIGNATURE_do_all_provided,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(void *, data, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(EVP_SIGNATURE *,EVP_SIGNATURE_fetch,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    AROS_LDA(const char *, algorithm, A1),
    AROS_LDA(const char *, properties, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,EVP_SIGNATURE_free,
    AROS_LDA(EVP_SIGNATURE *, signature, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char *,EVP_SIGNATURE_get0_description,
    AROS_LDA(const EVP_SIGNATURE *, signature, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char *,EVP_SIGNATURE_get0_name,
    AROS_LDA(const EVP_SIGNATURE *, signature, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(OSSL_PROVIDER *,EVP_SIGNATURE_get0_provider,
    AROS_LDA(const EVP_SIGNATURE *, signature, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PARAM *,EVP_SIGNATURE_gettable_ctx_params,
    AROS_LDA(const EVP_SIGNATURE *, sig, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_SIGNATURE_is_a,
    AROS_LDA(const EVP_SIGNATURE *, signature, A0),
    AROS_LDA(const char *, name, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_SIGNATURE_names_do_all,
    AROS_LDA(const EVP_SIGNATURE *, signature, A0),
    AROS_LDA(void *, data, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PARAM *,EVP_SIGNATURE_settable_ctx_params,
    AROS_LDA(const EVP_SIGNATURE *, sig, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,EVP_SIGNATURE_up_ref,
    AROS_LDA(EVP_SIGNATURE *, signature, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void,EVP_SKEYMGMT_do_all_provided,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(void *, arg, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(EVP_SKEYMGMT *,EVP_SKEYMGMT_fetch,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    AROS_LDA(const char *, algorithm, A1),
    AROS_LDA(const char *, properties, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,EVP_SKEYMGMT_free,
    AROS_LDA(EVP_SKEYMGMT *, keymgmt, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char *,EVP_SKEYMGMT_get0_description,
    AROS_LDA(const EVP_SKEYMGMT *, keymgmt, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PARAM *,EVP_SKEYMGMT_get0_gen_settable_params,
    AROS_LDA(const EVP_SKEYMGMT *, skeymgmt, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PARAM *,EVP_SKEYMGMT_get0_imp_settable_params,
    AROS_LDA(const EVP_SKEYMGMT *, skeymgmt, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char *,EVP_SKEYMGMT_get0_name,
    AROS_LDA(const EVP_SKEYMGMT *, keymgmt, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PROVIDER *,EVP_SKEYMGMT_get0_provider,
    AROS_LDA(const EVP_SKEYMGMT *, keymgmt, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_SKEYMGMT_is_a,
    AROS_LDA(const EVP_SKEYMGMT *, keymgmt, A0),
    AROS_LDA(const char *, name, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_SKEYMGMT_names_do_all,
    AROS_LDA(const EVP_SKEYMGMT *, keymgmt, A0),
    AROS_LDA(void *, data, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,EVP_SKEYMGMT_up_ref,
    AROS_LDA(EVP_SKEYMGMT *, keymgmt, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int,EVP_SKEY_export,
    AROS_LDA(const EVP_SKEY *, skey, A0),
    AROS_LDA(int, selection, D0),
    AROS_LDA(OSSL_CALLBACK *, export_cb, A1),
    AROS_LDA(void *, export_cbarg, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,EVP_SKEY_free,
    AROS_LDA(EVP_SKEY *, skey, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(EVP_SKEY *,EVP_SKEY_generate,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, skeymgmtname, A1),
    AROS_LDA(const char *, propquery, A2),
    AROS_LDA(const OSSL_PARAM *, params, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char *,EVP_SKEY_get0_key_id,
    AROS_LDA(const EVP_SKEY *, skey, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char *,EVP_SKEY_get0_provider_name,
    AROS_LDA(const EVP_SKEY *, skey, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,EVP_SKEY_get0_raw_key,
    AROS_LDA(const EVP_SKEY *, skey, A0),
    AROS_LDA(const unsigned char **, key, A1),
    AROS_LDA(size_t *, len, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char *,EVP_SKEY_get0_skeymgmt_name,
    AROS_LDA(const EVP_SKEY *, skey, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(EVP_SKEY *,EVP_SKEY_import,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, skeymgmtname, A1),
    AROS_LDA(const char *, propquery, A2),
    AROS_LDA(int, selection, D0),
    AROS_LDA(const OSSL_PARAM *, params, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(EVP_SKEY *,EVP_SKEY_import_raw_key,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, skeymgmtname, A1),
    AROS_LDA(unsigned char *, key, A2),
    AROS_LDA(size_t, keylen, D0),
    AROS_LDA(const char *, propquery, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_SKEY_is_a,
    AROS_LDA(const EVP_SKEY *, skey, A0),
    AROS_LDA(const char *, name, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(EVP_SKEY *,EVP_SKEY_to_provider,
    AROS_LDA(EVP_SKEY *, skey, A0),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A1),
    AROS_LDA(OSSL_PROVIDER *, prov, A2),
    AROS_LDA(const char *, propquery, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,EVP_SKEY_up_ref,
    AROS_LDA(EVP_SKEY *, skey, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int,EVP_SignFinal_ex,
    AROS_LDA(EVP_MD_CTX *, ctx, A0),
    AROS_LDA(unsigned char *, md, A1),
    AROS_LDA(unsigned int *, s, A2),
    AROS_LDA(EVP_PKEY *, pkey, A3),
    AROS_LDA(OSSL_LIB_CTX *, libctx, D0),
    AROS_LDA(const char *, propq, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int,EVP_VerifyFinal_ex,
    AROS_LDA(EVP_MD_CTX *, ctx, A0),
    AROS_LDA(const unsigned char *, sigbuf, A1),
    AROS_LDA(unsigned int, siglen, D0),
    AROS_LDA(EVP_PKEY *, pkey, A2),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A3),
    AROS_LDA(const char *, propq, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_default_properties_enable_fips,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(int, enable, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,EVP_default_properties_is_fips_enabled,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(char *,EVP_get1_default_properties,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,EVP_set_default_properties,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, propq, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,GENERAL_NAME_set1_X509_NAME,
    AROS_LDA(GENERAL_NAME **, tgt, A0),
    AROS_LDA(const X509_NAME *, src, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,ISSUER_SIGN_TOOL_free,
    AROS_LDA(ISSUER_SIGN_TOOL *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM *,ISSUER_SIGN_TOOL_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(ISSUER_SIGN_TOOL *,ISSUER_SIGN_TOOL_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(OSSL_LIB_CTX *,NCONF_get0_libctx,
    AROS_LDA(const CONF *, conf, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(STACK_OF(OPENSSL_CSTRING) *,NCONF_get_section_names,
    AROS_LDA(const CONF *, conf, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(CONF *,NCONF_new_ex,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(CONF_METHOD *, meth, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int,OCSP_RESPID_match_ex,
    AROS_LDA(OCSP_RESPID *, respid, A0),
    AROS_LDA(X509 *, cert, A1),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A2),
    AROS_LDA(const char *, propq, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int,OCSP_RESPID_set_by_key_ex,
    AROS_LDA(OCSP_RESPID *, respid, A0),
    AROS_LDA(X509 *, cert, A1),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A2),
    AROS_LDA(const char *, propq, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void,OPENSSL_LH_doall_arg_thunk,
    AROS_LDA(OPENSSL_LHASH *, lh, A0),
    AROS_LDA(OPENSSL_LH_DOALL_FUNCARG_THUNK, daaw, D0),
    AROS_LDA(OPENSSL_LH_DOALL_FUNCARG, fn, D1),
    AROS_LDA(void *, arg, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(OPENSSL_LHASH *,OPENSSL_LH_set_thunks,
    AROS_LDA(OPENSSL_LHASH *, lh, A0),
    AROS_LDA(OPENSSL_LH_HASHFUNCTHUNK, hw, A1),
    AROS_LDA(OPENSSL_LH_COMPFUNCTHUNK, cw, A2),
    AROS_LDA(OPENSSL_LH_DOALL_FUNC_THUNK, daw, A3),
    AROS_LDA(OPENSSL_LH_DOALL_FUNCARG_THUNK, daaw, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int,OPENSSL_buf2hexstr_ex,
    AROS_LDA(char *, str, A0),
    AROS_LDA(size_t, str_n, D0),
    AROS_LDA(size_t *, strlength, A1),
    AROS_LDA(const unsigned char *, buf, A2),
    AROS_LDA(size_t, buflen, D1),
    AROS_LDA(const char, sep, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int,OPENSSL_hexstr2buf_ex,
    AROS_LDA(unsigned char *, buf, A0),
    AROS_LDA(size_t, buf_n, D0),
    AROS_LDA(size_t *, buflen, A1),
    AROS_LDA(const char *, str, A2),
    AROS_LDA(const char, sep, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char *,OPENSSL_info,
    AROS_LDA(int, type, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,OPENSSL_sk_find_all,
    AROS_LDA(OPENSSL_STACK *, st, A0),
    AROS_LDA(const void *, data, A1),
    AROS_LDA(int *, pnum, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OPENSSL_strcasecmp,
    AROS_LDA(const char *, s1, A0),
    AROS_LDA(const char *, s2, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,OPENSSL_strncasecmp,
    AROS_LDA(const char *, s1, A0),
    AROS_LDA(const char *, s2, A1),
    AROS_LDA(size_t, n, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int,OPENSSL_strtoul,
    AROS_LDA(const char *, str, A0),
    AROS_LDA(char **, endptr, A1),
    AROS_LDA(int, base, D0),
    AROS_LDA(unsigned long *, num, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OPENSSL_thread_stop_ex,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_ALLOWED_ATTRIBUTES_CHOICE_free,
    AROS_LDA(OSSL_ALLOWED_ATTRIBUTES_CHOICE *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM *,OSSL_ALLOWED_ATTRIBUTES_CHOICE_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OSSL_ALLOWED_ATTRIBUTES_CHOICE *,OSSL_ALLOWED_ATTRIBUTES_CHOICE_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_ALLOWED_ATTRIBUTES_ITEM_free,
    AROS_LDA(OSSL_ALLOWED_ATTRIBUTES_ITEM *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM *,OSSL_ALLOWED_ATTRIBUTES_ITEM_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OSSL_ALLOWED_ATTRIBUTES_ITEM *,OSSL_ALLOWED_ATTRIBUTES_ITEM_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_ALLOWED_ATTRIBUTES_SYNTAX_free,
    AROS_LDA(OSSL_ALLOWED_ATTRIBUTES_SYNTAX *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM *,OSSL_ALLOWED_ATTRIBUTES_SYNTAX_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OSSL_ALLOWED_ATTRIBUTES_SYNTAX *,OSSL_ALLOWED_ATTRIBUTES_SYNTAX_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_ATAV_free,
    AROS_LDA(OSSL_ATAV *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM *,OSSL_ATAV_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OSSL_ATAV *,OSSL_ATAV_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_ATTRIBUTES_SYNTAX_free,
    AROS_LDA(OSSL_ATTRIBUTES_SYNTAX *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM *,OSSL_ATTRIBUTES_SYNTAX_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OSSL_ATTRIBUTES_SYNTAX *,OSSL_ATTRIBUTES_SYNTAX_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_ATTRIBUTE_DESCRIPTOR_free,
    AROS_LDA(OSSL_ATTRIBUTE_DESCRIPTOR *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM *,OSSL_ATTRIBUTE_DESCRIPTOR_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OSSL_ATTRIBUTE_DESCRIPTOR *,OSSL_ATTRIBUTE_DESCRIPTOR_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_ATTRIBUTE_MAPPINGS_free,
    AROS_LDA(OSSL_ATTRIBUTE_MAPPINGS *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM *,OSSL_ATTRIBUTE_MAPPINGS_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OSSL_ATTRIBUTE_MAPPINGS *,OSSL_ATTRIBUTE_MAPPINGS_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_ATTRIBUTE_MAPPING_free,
    AROS_LDA(OSSL_ATTRIBUTE_MAPPING *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM *,OSSL_ATTRIBUTE_MAPPING_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OSSL_ATTRIBUTE_MAPPING *,OSSL_ATTRIBUTE_MAPPING_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_ATTRIBUTE_TYPE_MAPPING_free,
    AROS_LDA(OSSL_ATTRIBUTE_TYPE_MAPPING *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM *,OSSL_ATTRIBUTE_TYPE_MAPPING_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OSSL_ATTRIBUTE_TYPE_MAPPING *,OSSL_ATTRIBUTE_TYPE_MAPPING_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_ATTRIBUTE_VALUE_MAPPING_free,
    AROS_LDA(OSSL_ATTRIBUTE_VALUE_MAPPING *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM *,OSSL_ATTRIBUTE_VALUE_MAPPING_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OSSL_ATTRIBUTE_VALUE_MAPPING *,OSSL_ATTRIBUTE_VALUE_MAPPING_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX_free,
    AROS_LDA(OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM *,OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX *,OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_BASIC_ATTR_CONSTRAINTS_free,
    AROS_LDA(OSSL_BASIC_ATTR_CONSTRAINTS *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM *,OSSL_BASIC_ATTR_CONSTRAINTS_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OSSL_BASIC_ATTR_CONSTRAINTS *,OSSL_BASIC_ATTR_CONSTRAINTS_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_CMP_ATAVS_free,
    AROS_LDA(OSSL_CMP_ATAVS *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM *,OSSL_CMP_ATAVS_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OSSL_CMP_ATAVS *,OSSL_CMP_ATAVS_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(OSSL_CMP_ATAV *,OSSL_CMP_ATAV_create,
    AROS_LDA(ASN1_OBJECT *, type, A0),
    AROS_LDA(ASN1_TYPE *, value, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_ALGOR *,OSSL_CMP_ATAV_get0_algId,
    AROS_LDA(const OSSL_CMP_ATAV *, atav, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ASN1_OBJECT *,OSSL_CMP_ATAV_get0_type,
    AROS_LDA(const OSSL_CMP_ATAV *, itav, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ASN1_TYPE *,OSSL_CMP_ATAV_get0_value,
    AROS_LDA(const OSSL_CMP_ATAV *, itav, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,OSSL_CMP_ATAV_get_rsaKeyLen,
    AROS_LDA(const OSSL_CMP_ATAV *, atav, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(OSSL_CMP_ATAV *,OSSL_CMP_ATAV_new_algId,
    AROS_LDA(const X509_ALGOR *, alg, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(OSSL_CMP_ATAV *,OSSL_CMP_ATAV_new_rsaKeyLen,
    AROS_LDA(int, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_CMP_ATAV_push1,
    AROS_LDA(OSSL_CMP_ATAVS **, sk_p, A0),
    AROS_LDA(const OSSL_CMP_ATAV *, atav, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void,OSSL_CMP_ATAV_set0,
    AROS_LDA(OSSL_CMP_ATAV *, itav, A0),
    AROS_LDA(ASN1_OBJECT *, type, A1),
    AROS_LDA(ASN1_TYPE *, value, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_CMP_CRLSTATUS *,OSSL_CMP_CRLSTATUS_create,
    AROS_LDA(const X509_CRL *, crl, A0),
    AROS_LDA(const X509 *, cert, A1),
    AROS_LDA(int, only_DN, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_CMP_CRLSTATUS_free,
    AROS_LDA(OSSL_CMP_CRLSTATUS *, crlstatus, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int,OSSL_CMP_CRLSTATUS_get0,
    AROS_LDA(const OSSL_CMP_CRLSTATUS *, crlstatus, A0),
    AROS_LDA(DIST_POINT_NAME **, dpn, A1),
    AROS_LDA(GENERAL_NAMES **, issuer, A2),
    AROS_LDA(ASN1_TIME **, thisUpdate, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_CMP_CRLSTATUS *,OSSL_CMP_CRLSTATUS_new1,
    AROS_LDA(const DIST_POINT_NAME *, dpn, A0),
    AROS_LDA(const GENERAL_NAMES *, issuer, A1),
    AROS_LDA(const ASN1_TIME *, thisUpdate, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_CMP_CTX_free,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(STACK_OF(OSSL_CMP_ITAV) *,OSSL_CMP_CTX_get0_geninfo_ITAVs,
    AROS_LDA(const OSSL_CMP_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(OSSL_LIB_CTX *,OSSL_CMP_CTX_get0_libctx,
    AROS_LDA(const OSSL_CMP_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509 *,OSSL_CMP_CTX_get0_newCert,
    AROS_LDA(const OSSL_CMP_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(EVP_PKEY *,OSSL_CMP_CTX_get0_newPkey,
    AROS_LDA(const OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(int, priv, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char *,OSSL_CMP_CTX_get0_propq,
    AROS_LDA(const OSSL_CMP_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(OSSL_CMP_PKIFREETEXT *,OSSL_CMP_CTX_get0_statusString,
    AROS_LDA(const OSSL_CMP_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_STORE *,OSSL_CMP_CTX_get0_trustedStore,
    AROS_LDA(const OSSL_CMP_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(STACK_OF(X509) *,OSSL_CMP_CTX_get0_untrusted,
    AROS_LDA(const OSSL_CMP_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509 *,OSSL_CMP_CTX_get0_validatedSrvCert,
    AROS_LDA(const OSSL_CMP_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(STACK_OF(X509) *,OSSL_CMP_CTX_get1_caPubs,
    AROS_LDA(const OSSL_CMP_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(STACK_OF(X509) *,OSSL_CMP_CTX_get1_extraCertsIn,
    AROS_LDA(const OSSL_CMP_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(STACK_OF(X509) *,OSSL_CMP_CTX_get1_newChain,
    AROS_LDA(const OSSL_CMP_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void *,OSSL_CMP_CTX_get_certConf_cb_arg,
    AROS_LDA(const OSSL_CMP_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,OSSL_CMP_CTX_get_failInfoCode,
    AROS_LDA(const OSSL_CMP_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void *,OSSL_CMP_CTX_get_http_cb_arg,
    AROS_LDA(const OSSL_CMP_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_CMP_CTX_get_option,
    AROS_LDA(const OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(int, opt, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,OSSL_CMP_CTX_get_status,
    AROS_LDA(const OSSL_CMP_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void *,OSSL_CMP_CTX_get_transfer_cb_arg,
    AROS_LDA(const OSSL_CMP_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(OSSL_CMP_CTX *,OSSL_CMP_CTX_new,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, propq, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_CMP_CTX_print_errors,
    AROS_LDA(const OSSL_CMP_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_CMP_CTX_push0_geninfo_ITAV,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(OSSL_CMP_ITAV *, itav, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_CMP_CTX_push0_genm_ITAV,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(OSSL_CMP_ITAV *, itav, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_CMP_CTX_push0_policy,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(POLICYINFO *, pinfo, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_CMP_CTX_push1_subjectAltName,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(const GENERAL_NAME *, name, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,OSSL_CMP_CTX_reinit,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,OSSL_CMP_CTX_reqExtensions_have_SAN,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,OSSL_CMP_CTX_reset_geninfo_ITAVs,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(OSSL_CMP_MSG *,OSSL_CMP_CTX_server_perform,
    AROS_LDA(OSSL_CMP_CTX *, client_ctx, A0),
    AROS_LDA(const OSSL_CMP_MSG *, req, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,OSSL_CMP_CTX_set0_newPkey,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(int, priv, D0),
    AROS_LDA(EVP_PKEY *, pkey, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_CMP_CTX_set0_reqExtensions,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(X509_EXTENSIONS *, exts, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_CMP_CTX_set0_trustedStore,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(X509_STORE *, store, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_CMP_CTX_set1_cert,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(X509 *, cert, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_CMP_CTX_set1_expected_sender,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(const X509_NAME *, name, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_CMP_CTX_set1_issuer,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(const X509_NAME *, name, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_CMP_CTX_set1_no_proxy,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(const char *, names, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_CMP_CTX_set1_oldCert,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(X509 *, cert, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_CMP_CTX_set1_p10CSR,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(const X509_REQ *, csr, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_CMP_CTX_set1_pkey,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(EVP_PKEY *, pkey, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_CMP_CTX_set1_proxy,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(const char *, name, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_CMP_CTX_set1_recipient,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(const X509_NAME *, name, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,OSSL_CMP_CTX_set1_referenceValue,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(const unsigned char *, ref, A1),
    AROS_LDA(int, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,OSSL_CMP_CTX_set1_secretValue,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(const unsigned char *, sec, A1),
    AROS_LDA(const int, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_CMP_CTX_set1_senderNonce,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(const ASN1_OCTET_STRING *, nonce, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_CMP_CTX_set1_serialNumber,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(const ASN1_INTEGER *, sn, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_CMP_CTX_set1_server,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(const char *, address, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_CMP_CTX_set1_serverPath,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(const char *, path, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_CMP_CTX_set1_srvCert,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(X509 *, cert, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_CMP_CTX_set1_subjectName,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(const X509_NAME *, name, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_CMP_CTX_set1_transactionID,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(const ASN1_OCTET_STRING *, id, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_CMP_CTX_set_certConf_cb,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(OSSL_CMP_certConf_cb_t, cb, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_CMP_CTX_set_certConf_cb_arg,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(void *, arg, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_CMP_CTX_set_http_cb,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(OSSL_HTTP_bio_cb_t, cb, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_CMP_CTX_set_http_cb_arg,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(void *, arg, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_CMP_CTX_set_log_cb,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(OSSL_CMP_log_cb_t, cb, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,OSSL_CMP_CTX_set_option,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(int, opt, D0),
    AROS_LDA(int, val, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_CMP_CTX_set_serverPort,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(int, port, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_CMP_CTX_set_transfer_cb,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(OSSL_CMP_transfer_cb_t, cb, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_CMP_CTX_set_transfer_cb_arg,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(void *, arg, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_CRMF_MSG *,OSSL_CMP_CTX_setup_CRM,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(int, for_KUR, D0),
    AROS_LDA(int, rid, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(char *,OSSL_CMP_CTX_snprint_PKIStatus,
    AROS_LDA(const OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(char *, buf, A1),
    AROS_LDA(size_t, bufsize, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(STACK_OF(OSSL_CMP_ITAV) *,OSSL_CMP_HDR_get0_geninfo_ITAVs,
    AROS_LDA(const OSSL_CMP_PKIHEADER *, hdr, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ASN1_OCTET_STRING *,OSSL_CMP_HDR_get0_recipNonce,
    AROS_LDA(const OSSL_CMP_PKIHEADER *, hdr, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ASN1_OCTET_STRING *,OSSL_CMP_HDR_get0_transactionID,
    AROS_LDA(const OSSL_CMP_PKIHEADER *, hdr, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(OSSL_CMP_ITAV *,OSSL_CMP_ITAV_create,
    AROS_LDA(ASN1_OBJECT *, type, A0),
    AROS_LDA(ASN1_TYPE *, value, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(OSSL_CMP_ITAV *,OSSL_CMP_ITAV_dup,
    AROS_LDA(const OSSL_CMP_ITAV *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_CMP_ITAV_free,
    AROS_LDA(OSSL_CMP_ITAV *, itav, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_CMP_ITAV_get0_rootCaCert,
    AROS_LDA(const OSSL_CMP_ITAV *, itav, A0),
    AROS_LDA(X509 **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int,OSSL_CMP_ITAV_get0_rootCaKeyUpdate,
    AROS_LDA(const OSSL_CMP_ITAV *, itav, A0),
    AROS_LDA(X509 **, newWithNew, A1),
    AROS_LDA(X509 **, newWithOld, A2),
    AROS_LDA(X509 **, oldWithNew, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ASN1_OBJECT *,OSSL_CMP_ITAV_get0_type,
    AROS_LDA(const OSSL_CMP_ITAV *, itav, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ASN1_TYPE *,OSSL_CMP_ITAV_get0_value,
    AROS_LDA(const OSSL_CMP_ITAV *, itav, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,OSSL_CMP_ITAV_get1_certReqTemplate,
    AROS_LDA(const OSSL_CMP_ITAV *, itav, A0),
    AROS_LDA(OSSL_CRMF_CERTTEMPLATE **, certTemplate, A1),
    AROS_LDA(OSSL_CMP_ATAVS **, keySpec, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(OSSL_CMP_ITAV *,OSSL_CMP_ITAV_new0_certReqTemplate,
    AROS_LDA(OSSL_CRMF_CERTTEMPLATE *, certTemplate, A0),
    AROS_LDA(OSSL_CMP_ATAVS *, keySpec, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(OSSL_CMP_ITAV *,OSSL_CMP_ITAV_new_crls,
    AROS_LDA(const X509_CRL *, crls, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(OSSL_CMP_ITAV *,OSSL_CMP_ITAV_new_rootCaCert,
    AROS_LDA(const X509 *, rootCaCert, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_CMP_ITAV *,OSSL_CMP_ITAV_new_rootCaKeyUpdate,
    AROS_LDA(const X509 *, newWithNew, A0),
    AROS_LDA(const X509 *, newWithOld, A1),
    AROS_LDA(const X509 *, oldWithNew, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void,OSSL_CMP_ITAV_set0,
    AROS_LDA(OSSL_CMP_ITAV *, itav, A0),
    AROS_LDA(ASN1_OBJECT *, type, A1),
    AROS_LDA(ASN1_TYPE *, value, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(OSSL_CMP_MSG *,OSSL_CMP_MSG_dup,
    AROS_LDA(const OSSL_CMP_MSG *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_CMP_MSG_free,
    AROS_LDA(OSSL_CMP_MSG *, msg, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_PUBKEY *,OSSL_CMP_MSG_get0_certreq_publickey,
    AROS_LDA(const OSSL_CMP_MSG *, msg, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(OSSL_CMP_PKIHEADER *,OSSL_CMP_MSG_get0_header,
    AROS_LDA(const OSSL_CMP_MSG *, msg, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,OSSL_CMP_MSG_get_bodytype,
    AROS_LDA(const OSSL_CMP_MSG *, msg, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(OSSL_CMP_MSG *,OSSL_CMP_MSG_http_perform,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(const OSSL_CMP_MSG *, req, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM *,OSSL_CMP_MSG_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_CMP_MSG *,OSSL_CMP_MSG_read,
    AROS_LDA(const char *, file, A0),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A1),
    AROS_LDA(const char *, propq, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_CMP_MSG_update_recipNonce,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(OSSL_CMP_MSG *, msg, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_CMP_MSG_update_transactionID,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(OSSL_CMP_MSG *, msg, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_CMP_MSG_write,
    AROS_LDA(const char *, file, A0),
    AROS_LDA(const OSSL_CMP_MSG *, msg, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_CMP_PKIHEADER_free,
    AROS_LDA(OSSL_CMP_PKIHEADER *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM *,OSSL_CMP_PKIHEADER_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OSSL_CMP_PKIHEADER *,OSSL_CMP_PKIHEADER_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(OSSL_CMP_PKISI *,OSSL_CMP_PKISI_dup,
    AROS_LDA(const OSSL_CMP_PKISI *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_CMP_PKISI_free,
    AROS_LDA(OSSL_CMP_PKISI *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM *,OSSL_CMP_PKISI_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OSSL_CMP_PKISI *,OSSL_CMP_PKISI_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM *,OSSL_CMP_PKISTATUS_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_CMP_SRV_CTX_free,
    AROS_LDA(OSSL_CMP_SRV_CTX *, srv_ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(OSSL_CMP_CTX *,OSSL_CMP_SRV_CTX_get0_cmp_ctx,
    AROS_LDA(const OSSL_CMP_SRV_CTX *, srv_ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void *,OSSL_CMP_SRV_CTX_get0_custom_ctx,
    AROS_LDA(const OSSL_CMP_SRV_CTX *, srv_ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD8(int,OSSL_CMP_SRV_CTX_init,
    AROS_LDA(OSSL_CMP_SRV_CTX *, srv_ctx, A0),
    AROS_LDA(void *, custom_ctx, A1),
    AROS_LDA(OSSL_CMP_SRV_cert_request_cb_t, process_cert_request, A2),
    AROS_LDA(OSSL_CMP_SRV_rr_cb_t, process_rr, A3),
    AROS_LDA(OSSL_CMP_SRV_genm_cb_t, process_genm, D0),
    AROS_LDA(OSSL_CMP_SRV_error_cb_t, process_error, D1),
    AROS_LDA(OSSL_CMP_SRV_certConf_cb_t, process_certConf, D2),
    AROS_LDA(OSSL_CMP_SRV_pollReq_cb_t, process_pollReq, D3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,OSSL_CMP_SRV_CTX_init_trans,
    AROS_LDA(OSSL_CMP_SRV_CTX *, srv_ctx, A0),
    AROS_LDA(OSSL_CMP_SRV_delayed_delivery_cb_t, delay, A1),
    AROS_LDA(OSSL_CMP_SRV_clean_transaction_cb_t, clean, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(OSSL_CMP_SRV_CTX *,OSSL_CMP_SRV_CTX_new,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, propq, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_CMP_SRV_CTX_set_accept_raverified,
    AROS_LDA(OSSL_CMP_SRV_CTX *, srv_ctx, A0),
    AROS_LDA(int, val, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_CMP_SRV_CTX_set_accept_unprotected,
    AROS_LDA(OSSL_CMP_SRV_CTX *, srv_ctx, A0),
    AROS_LDA(int, val, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_CMP_SRV_CTX_set_grant_implicit_confirm,
    AROS_LDA(OSSL_CMP_SRV_CTX *, srv_ctx, A0),
    AROS_LDA(int, val, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_CMP_SRV_CTX_set_send_unprotected_errors,
    AROS_LDA(OSSL_CMP_SRV_CTX *, srv_ctx, A0),
    AROS_LDA(int, val, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(OSSL_CMP_MSG *,OSSL_CMP_SRV_process_request,
    AROS_LDA(OSSL_CMP_SRV_CTX *, srv_ctx, A0),
    AROS_LDA(const OSSL_CMP_MSG *, req, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_CMP_PKISI *,OSSL_CMP_STATUSINFO_new,
    AROS_LDA(int, status, D0),
    AROS_LDA(int, fail_info, D1),
    AROS_LDA(const char *, text, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int,OSSL_CMP_certConf_cb,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(X509 *, cert, A1),
    AROS_LDA(int, fail_info, D0),
    AROS_LDA(const char **, text, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(STACK_OF(OSSL_CMP_ITAV) *,OSSL_CMP_exec_GENM_ses,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,OSSL_CMP_exec_RR_ses,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(X509 *,OSSL_CMP_exec_certreq,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(int, req_type, D0),
    AROS_LDA(const OSSL_CRMF_MSG *, crm, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,OSSL_CMP_get1_certReqTemplate,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(OSSL_CRMF_CERTTEMPLATE **, certTemplate, A1),
    AROS_LDA(OSSL_CMP_ATAVS **, keySpec, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int,OSSL_CMP_get1_crlUpdate,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(const X509 *, crlcert, A1),
    AROS_LDA(const X509_CRL *, last_crl, A2),
    AROS_LDA(X509_CRL **, crl, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int,OSSL_CMP_get1_rootCaKeyUpdate,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(const X509 *, oldWithOld, A1),
    AROS_LDA(X509 **, newWithNew, A2),
    AROS_LDA(X509 **, newWithOld, A3),
    AROS_LDA(X509 **, oldWithNew, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(void,OSSL_CMP_log_close,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(int,OSSL_CMP_log_open,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_CMP_print_errors_cb,
    AROS_LDA(OSSL_CMP_log_cb_t, log_fn, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int,OSSL_CMP_print_to_bio,
    AROS_LDA(BIO *, bio, A0),
    AROS_LDA(const char *, component, A1),
    AROS_LDA(const char *, file, A2),
    AROS_LDA(int, line, D0),
    AROS_LDA(OSSL_CMP_severity, level, D1),
    AROS_LDA(const char *, msg, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(char *,OSSL_CMP_snprint_PKIStatusInfo,
    AROS_LDA(const OSSL_CMP_PKISI *, statusInfo, A0),
    AROS_LDA(char *, buf, A1),
    AROS_LDA(size_t, bufsize, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int,OSSL_CMP_try_certreq,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(int, req_type, D0),
    AROS_LDA(const OSSL_CRMF_MSG *, crm, A1),
    AROS_LDA(int *, checkAfter, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,OSSL_CMP_validate_cert_path,
    AROS_LDA(const OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(X509_STORE *, trusted_store, A1),
    AROS_LDA(X509 *, cert, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_CMP_validate_msg,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(const OSSL_CMP_MSG *, msg, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(OSSL_CRMF_ATTRIBUTETYPEANDVALUE *,OSSL_CRMF_ATTRIBUTETYPEANDVALUE_dup,
    AROS_LDA(const OSSL_CRMF_ATTRIBUTETYPEANDVALUE *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_CRMF_ATTRIBUTETYPEANDVALUE_free,
    AROS_LDA(OSSL_CRMF_ATTRIBUTETYPEANDVALUE *, v, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(OSSL_CRMF_CERTID *,OSSL_CRMF_CERTID_dup,
    AROS_LDA(const OSSL_CRMF_CERTID *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_CRMF_CERTID_free,
    AROS_LDA(OSSL_CRMF_CERTID *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(OSSL_CRMF_CERTID *,OSSL_CRMF_CERTID_gen,
    AROS_LDA(const X509_NAME *, issuer, A0),
    AROS_LDA(const ASN1_INTEGER *, serial, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const X509_NAME *,OSSL_CRMF_CERTID_get0_issuer,
    AROS_LDA(const OSSL_CRMF_CERTID *, cid, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const ASN1_INTEGER *,OSSL_CRMF_CERTID_get0_serialNumber,
    AROS_LDA(const OSSL_CRMF_CERTID *, cid, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM *,OSSL_CRMF_CERTID_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OSSL_CRMF_CERTID *,OSSL_CRMF_CERTID_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(OSSL_CRMF_CERTTEMPLATE *,OSSL_CRMF_CERTTEMPLATE_dup,
    AROS_LDA(const OSSL_CRMF_CERTTEMPLATE *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int,OSSL_CRMF_CERTTEMPLATE_fill,
    AROS_LDA(OSSL_CRMF_CERTTEMPLATE *, tmpl, A0),
    AROS_LDA(EVP_PKEY *, pubkey, A1),
    AROS_LDA(const X509_NAME *, subject, A2),
    AROS_LDA(const X509_NAME *, issuer, A3),
    AROS_LDA(const ASN1_INTEGER *, serial, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_CRMF_CERTTEMPLATE_free,
    AROS_LDA(OSSL_CRMF_CERTTEMPLATE *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_EXTENSIONS *,OSSL_CRMF_CERTTEMPLATE_get0_extensions,
    AROS_LDA(const OSSL_CRMF_CERTTEMPLATE *, tmpl, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const X509_NAME *,OSSL_CRMF_CERTTEMPLATE_get0_issuer,
    AROS_LDA(const OSSL_CRMF_CERTTEMPLATE *, tmpl, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_PUBKEY *,OSSL_CRMF_CERTTEMPLATE_get0_publicKey,
    AROS_LDA(const OSSL_CRMF_CERTTEMPLATE *, tmpl, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const ASN1_INTEGER *,OSSL_CRMF_CERTTEMPLATE_get0_serialNumber,
    AROS_LDA(const OSSL_CRMF_CERTTEMPLATE *, tmpl, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const X509_NAME *,OSSL_CRMF_CERTTEMPLATE_get0_subject,
    AROS_LDA(const OSSL_CRMF_CERTTEMPLATE *, tmpl, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM *,OSSL_CRMF_CERTTEMPLATE_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OSSL_CRMF_CERTTEMPLATE *,OSSL_CRMF_CERTTEMPLATE_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_CRMF_ENCRYPTEDKEY_free,
    AROS_LDA(OSSL_CRMF_ENCRYPTEDKEY *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(X509 *,OSSL_CRMF_ENCRYPTEDKEY_get1_encCert,
    AROS_LDA(const OSSL_CRMF_ENCRYPTEDKEY *, ecert, A0),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A1),
    AROS_LDA(const char *, propq, A2),
    AROS_LDA(EVP_PKEY *, pkey, A3),
    AROS_LDA(unsigned int, flags, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(OSSL_CRMF_ENCRYPTEDKEY *,OSSL_CRMF_ENCRYPTEDKEY_init_envdata,
    AROS_LDA(CMS_EnvelopedData *, envdata, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM *,OSSL_CRMF_ENCRYPTEDKEY_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OSSL_CRMF_ENCRYPTEDKEY *,OSSL_CRMF_ENCRYPTEDKEY_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(unsigned char *,OSSL_CRMF_ENCRYPTEDVALUE_decrypt,
    AROS_LDA(const OSSL_CRMF_ENCRYPTEDVALUE *, enc, A0),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A1),
    AROS_LDA(const char *, propq, A2),
    AROS_LDA(EVP_PKEY *, pkey, A3),
    AROS_LDA(int *, outlen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_CRMF_ENCRYPTEDVALUE_free,
    AROS_LDA(OSSL_CRMF_ENCRYPTEDVALUE *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(X509 *,OSSL_CRMF_ENCRYPTEDVALUE_get1_encCert,
    AROS_LDA(const OSSL_CRMF_ENCRYPTEDVALUE *, ecert, A0),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A1),
    AROS_LDA(const char *, propq, A2),
    AROS_LDA(EVP_PKEY *, pkey, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM *,OSSL_CRMF_ENCRYPTEDVALUE_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OSSL_CRMF_ENCRYPTEDVALUE *,OSSL_CRMF_ENCRYPTEDVALUE_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_CRMF_MSGS_free,
    AROS_LDA(OSSL_CRMF_MSGS *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM *,OSSL_CRMF_MSGS_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OSSL_CRMF_MSGS *,OSSL_CRMF_MSGS_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int,OSSL_CRMF_MSGS_verify_popo,
    AROS_LDA(const OSSL_CRMF_MSGS *, reqs, A0),
    AROS_LDA(int, rid, D0),
    AROS_LDA(int, acceptRAVerified, D1),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A1),
    AROS_LDA(const char *, propq, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_CRMF_MSG_PKIPublicationInfo_push0_SinglePubInfo,
    AROS_LDA(OSSL_CRMF_PKIPUBLICATIONINFO *, pi, A0),
    AROS_LDA(OSSL_CRMF_SINGLEPUBINFO *, spi, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_CRMF_MSG_centralkeygen_requested,
    AROS_LDA(const OSSL_CRMF_MSG *, crm, A0),
    AROS_LDA(const X509_REQ *, p10cr, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int,OSSL_CRMF_MSG_create_popo,
    AROS_LDA(int, meth, D0),
    AROS_LDA(OSSL_CRMF_MSG *, crm, A0),
    AROS_LDA(EVP_PKEY *, pkey, A1),
    AROS_LDA(const EVP_MD *, digest, A2),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A3),
    AROS_LDA(const char *, propq, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(OSSL_CRMF_MSG *,OSSL_CRMF_MSG_dup,
    AROS_LDA(const OSSL_CRMF_MSG *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_CRMF_MSG_free,
    AROS_LDA(OSSL_CRMF_MSG *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ASN1_UTF8STRING *,OSSL_CRMF_MSG_get0_regCtrl_authenticator,
    AROS_LDA(const OSSL_CRMF_MSG *, msg, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(OSSL_CRMF_CERTID *,OSSL_CRMF_MSG_get0_regCtrl_oldCertID,
    AROS_LDA(const OSSL_CRMF_MSG *, msg, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(OSSL_CRMF_PKIPUBLICATIONINFO *,OSSL_CRMF_MSG_get0_regCtrl_pkiPublicationInfo,
    AROS_LDA(const OSSL_CRMF_MSG *, msg, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_PUBKEY *,OSSL_CRMF_MSG_get0_regCtrl_protocolEncrKey,
    AROS_LDA(const OSSL_CRMF_MSG *, msg, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ASN1_UTF8STRING *,OSSL_CRMF_MSG_get0_regCtrl_regToken,
    AROS_LDA(const OSSL_CRMF_MSG *, msg, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(OSSL_CRMF_CERTREQUEST *,OSSL_CRMF_MSG_get0_regInfo_certReq,
    AROS_LDA(const OSSL_CRMF_MSG *, msg, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ASN1_UTF8STRING *,OSSL_CRMF_MSG_get0_regInfo_utf8Pairs,
    AROS_LDA(const OSSL_CRMF_MSG *, msg, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(OSSL_CRMF_CERTTEMPLATE *,OSSL_CRMF_MSG_get0_tmpl,
    AROS_LDA(const OSSL_CRMF_MSG *, crm, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,OSSL_CRMF_MSG_get_certReqId,
    AROS_LDA(const OSSL_CRMF_MSG *, crm, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM *,OSSL_CRMF_MSG_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OSSL_CRMF_MSG *,OSSL_CRMF_MSG_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_CRMF_MSG_push0_extension,
    AROS_LDA(OSSL_CRMF_MSG *, crm, A0),
    AROS_LDA(X509_EXTENSION *, ext, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,OSSL_CRMF_MSG_set0_SinglePubInfo,
    AROS_LDA(OSSL_CRMF_SINGLEPUBINFO *, spi, A0),
    AROS_LDA(int, method, D0),
    AROS_LDA(GENERAL_NAME *, nm, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_CRMF_MSG_set0_extensions,
    AROS_LDA(OSSL_CRMF_MSG *, crm, A0),
    AROS_LDA(X509_EXTENSIONS *, exts, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,OSSL_CRMF_MSG_set0_validity,
    AROS_LDA(OSSL_CRMF_MSG *, crm, A0),
    AROS_LDA(ASN1_TIME *, notBefore, A1),
    AROS_LDA(ASN1_TIME *, notAfter, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_CRMF_MSG_set1_regCtrl_authenticator,
    AROS_LDA(OSSL_CRMF_MSG *, msg, A0),
    AROS_LDA(const ASN1_UTF8STRING *, auth, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_CRMF_MSG_set1_regCtrl_oldCertID,
    AROS_LDA(OSSL_CRMF_MSG *, msg, A0),
    AROS_LDA(const OSSL_CRMF_CERTID *, cid, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_CRMF_MSG_set1_regCtrl_pkiPublicationInfo,
    AROS_LDA(OSSL_CRMF_MSG *, msg, A0),
    AROS_LDA(const OSSL_CRMF_PKIPUBLICATIONINFO *, pi, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_CRMF_MSG_set1_regCtrl_protocolEncrKey,
    AROS_LDA(OSSL_CRMF_MSG *, msg, A0),
    AROS_LDA(const X509_PUBKEY *, pubkey, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_CRMF_MSG_set1_regCtrl_regToken,
    AROS_LDA(OSSL_CRMF_MSG *, msg, A0),
    AROS_LDA(const ASN1_UTF8STRING *, tok, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_CRMF_MSG_set1_regInfo_certReq,
    AROS_LDA(OSSL_CRMF_MSG *, msg, A0),
    AROS_LDA(const OSSL_CRMF_CERTREQUEST *, cr, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_CRMF_MSG_set1_regInfo_utf8Pairs,
    AROS_LDA(OSSL_CRMF_MSG *, msg, A0),
    AROS_LDA(const ASN1_UTF8STRING *, utf8pairs, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_CRMF_MSG_set_PKIPublicationInfo_action,
    AROS_LDA(OSSL_CRMF_PKIPUBLICATIONINFO *, pi, A0),
    AROS_LDA(int, action, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_CRMF_MSG_set_certReqId,
    AROS_LDA(OSSL_CRMF_MSG *, crm, A0),
    AROS_LDA(int, rid, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_CRMF_PBMPARAMETER_free,
    AROS_LDA(OSSL_CRMF_PBMPARAMETER *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM *,OSSL_CRMF_PBMPARAMETER_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OSSL_CRMF_PBMPARAMETER *,OSSL_CRMF_PBMPARAMETER_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_CRMF_PKIPUBLICATIONINFO_free,
    AROS_LDA(OSSL_CRMF_PKIPUBLICATIONINFO *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM *,OSSL_CRMF_PKIPUBLICATIONINFO_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OSSL_CRMF_PKIPUBLICATIONINFO *,OSSL_CRMF_PKIPUBLICATIONINFO_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_CRMF_SINGLEPUBINFO_free,
    AROS_LDA(OSSL_CRMF_SINGLEPUBINFO *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM *,OSSL_CRMF_SINGLEPUBINFO_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OSSL_CRMF_SINGLEPUBINFO *,OSSL_CRMF_SINGLEPUBINFO_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD9(int,OSSL_CRMF_pbm_new,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, propq, A1),
    AROS_LDA(const OSSL_CRMF_PBMPARAMETER *, pbmp, A2),
    AROS_LDA(const unsigned char *, msg, A3),
    AROS_LDA(size_t, msglen, D0),
    AROS_LDA(const unsigned char *, sec, D1),
    AROS_LDA(size_t, seclen, D2),
    AROS_LDA(unsigned char **, mac, D3),
    AROS_LDA(size_t *, maclen, D4),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(OSSL_CRMF_PBMPARAMETER *,OSSL_CRMF_pbmp_new,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(size_t, slen, D0),
    AROS_LDA(int, owfnid, D1),
    AROS_LDA(size_t, itercnt, D2),
    AROS_LDA(int, macnid, D3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_DAY_TIME_BAND_free,
    AROS_LDA(OSSL_DAY_TIME_BAND *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM *,OSSL_DAY_TIME_BAND_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OSSL_DAY_TIME_BAND *,OSSL_DAY_TIME_BAND_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_DAY_TIME_free,
    AROS_LDA(OSSL_DAY_TIME *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM *,OSSL_DAY_TIME_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OSSL_DAY_TIME *,OSSL_DAY_TIME_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_DECODER_CTX_add_decoder,
    AROS_LDA(OSSL_DECODER_CTX *, ctx, A0),
    AROS_LDA(OSSL_DECODER *, decoder, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,OSSL_DECODER_CTX_add_extra,
    AROS_LDA(OSSL_DECODER_CTX *, ctx, A0),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A1),
    AROS_LDA(const char *, propq, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_DECODER_CTX_free,
    AROS_LDA(OSSL_DECODER_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(OSSL_DECODER_CLEANUP *,OSSL_DECODER_CTX_get_cleanup,
    AROS_LDA(OSSL_DECODER_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(OSSL_DECODER_CONSTRUCT *,OSSL_DECODER_CTX_get_construct,
    AROS_LDA(OSSL_DECODER_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void *,OSSL_DECODER_CTX_get_construct_data,
    AROS_LDA(OSSL_DECODER_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,OSSL_DECODER_CTX_get_num_decoders,
    AROS_LDA(OSSL_DECODER_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OSSL_DECODER_CTX *,OSSL_DECODER_CTX_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(OSSL_DECODER_CTX *,OSSL_DECODER_CTX_new_for_pkey,
    AROS_LDA(EVP_PKEY **, pkey, A0),
    AROS_LDA(const char *, input_type, A1),
    AROS_LDA(const char *, input_struct, A2),
    AROS_LDA(const char *, keytype, A3),
    AROS_LDA(int, selection, D0),
    AROS_LDA(OSSL_LIB_CTX *, libctx, D1),
    AROS_LDA(const char *, propquery, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_DECODER_CTX_set_cleanup,
    AROS_LDA(OSSL_DECODER_CTX *, ctx, A0),
    AROS_LDA(OSSL_DECODER_CLEANUP *, cleanup, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_DECODER_CTX_set_construct,
    AROS_LDA(OSSL_DECODER_CTX *, ctx, A0),
    AROS_LDA(OSSL_DECODER_CONSTRUCT *, construct, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_DECODER_CTX_set_construct_data,
    AROS_LDA(OSSL_DECODER_CTX *, ctx, A0),
    AROS_LDA(void *, construct_data, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_DECODER_CTX_set_input_structure,
    AROS_LDA(OSSL_DECODER_CTX *, ctx, A0),
    AROS_LDA(const char *, input_structure, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_DECODER_CTX_set_input_type,
    AROS_LDA(OSSL_DECODER_CTX *, ctx, A0),
    AROS_LDA(const char *, input_type, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_DECODER_CTX_set_params,
    AROS_LDA(OSSL_DECODER_CTX *, ctx, A0),
    AROS_LDA(const OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,OSSL_DECODER_CTX_set_passphrase,
    AROS_LDA(OSSL_DECODER_CTX *, ctx, A0),
    AROS_LDA(const unsigned char *, kstr, A1),
    AROS_LDA(size_t, klen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,OSSL_DECODER_CTX_set_passphrase_cb,
    AROS_LDA(OSSL_DECODER_CTX *, ctx, A0),
    AROS_LDA(OSSL_PASSPHRASE_CALLBACK *, cb, A1),
    AROS_LDA(void *, cbarg, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,OSSL_DECODER_CTX_set_passphrase_ui,
    AROS_LDA(OSSL_DECODER_CTX *, ctx, A0),
    AROS_LDA(const UI_METHOD *, ui_method, A1),
    AROS_LDA(void *, ui_data, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,OSSL_DECODER_CTX_set_pem_password_cb,
    AROS_LDA(OSSL_DECODER_CTX *, ctx, A0),
    AROS_LDA(pem_password_cb *, cb, A1),
    AROS_LDA(void *, cbarg, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_DECODER_CTX_set_selection,
    AROS_LDA(OSSL_DECODER_CTX *, ctx, A0),
    AROS_LDA(int, selection, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(OSSL_DECODER *,OSSL_DECODER_INSTANCE_get_decoder,
    AROS_LDA(OSSL_DECODER_INSTANCE *, decoder_inst, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void *,OSSL_DECODER_INSTANCE_get_decoder_ctx,
    AROS_LDA(OSSL_DECODER_INSTANCE *, decoder_inst, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(const char *,OSSL_DECODER_INSTANCE_get_input_structure,
    AROS_LDA(OSSL_DECODER_INSTANCE *, decoder_inst, A0),
    AROS_LDA(int *, was_set, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char *,OSSL_DECODER_INSTANCE_get_input_type,
    AROS_LDA(OSSL_DECODER_INSTANCE *, decoder_inst, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void,OSSL_DECODER_do_all_provided,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(void *, arg, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int,OSSL_DECODER_export,
    AROS_LDA(OSSL_DECODER_INSTANCE *, decoder_inst, A0),
    AROS_LDA(void *, reference, A1),
    AROS_LDA(size_t, reference_sz, D0),
    AROS_LDA(OSSL_CALLBACK *, export_cb, A2),
    AROS_LDA(void *, export_cbarg, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_DECODER *,OSSL_DECODER_fetch,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, name, A1),
    AROS_LDA(const char *, properties, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_DECODER_free,
    AROS_LDA(OSSL_DECODER *, encoder, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_DECODER_from_bio,
    AROS_LDA(OSSL_DECODER_CTX *, ctx, A0),
    AROS_LDA(BIO *, in, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,OSSL_DECODER_from_data,
    AROS_LDA(OSSL_DECODER_CTX *, ctx, A0),
    AROS_LDA(const unsigned char **, pdata, A1),
    AROS_LDA(size_t *, pdata_len, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char *,OSSL_DECODER_get0_description,
    AROS_LDA(const OSSL_DECODER *, decoder, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char *,OSSL_DECODER_get0_name,
    AROS_LDA(const OSSL_DECODER *, decoder, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char *,OSSL_DECODER_get0_properties,
    AROS_LDA(const OSSL_DECODER *, encoder, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PROVIDER *,OSSL_DECODER_get0_provider,
    AROS_LDA(const OSSL_DECODER *, encoder, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_DECODER_get_params,
    AROS_LDA(OSSL_DECODER *, decoder, A0),
    AROS_LDA(OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PARAM *,OSSL_DECODER_gettable_params,
    AROS_LDA(OSSL_DECODER *, decoder, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_DECODER_is_a,
    AROS_LDA(const OSSL_DECODER *, encoder, A0),
    AROS_LDA(const char *, name, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_DECODER_names_do_all,
    AROS_LDA(const OSSL_DECODER *, encoder, A0),
    AROS_LDA(void *, data, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PARAM *,OSSL_DECODER_settable_ctx_params,
    AROS_LDA(OSSL_DECODER *, encoder, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,OSSL_DECODER_up_ref,
    AROS_LDA(OSSL_DECODER *, encoder, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_ENCODER_CTX_add_encoder,
    AROS_LDA(OSSL_ENCODER_CTX *, ctx, A0),
    AROS_LDA(OSSL_ENCODER *, encoder, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,OSSL_ENCODER_CTX_add_extra,
    AROS_LDA(OSSL_ENCODER_CTX *, ctx, A0),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A1),
    AROS_LDA(const char *, propq, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_ENCODER_CTX_free,
    AROS_LDA(OSSL_ENCODER_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,OSSL_ENCODER_CTX_get_num_encoders,
    AROS_LDA(OSSL_ENCODER_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OSSL_ENCODER_CTX *,OSSL_ENCODER_CTX_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(OSSL_ENCODER_CTX *,OSSL_ENCODER_CTX_new_for_pkey,
    AROS_LDA(const EVP_PKEY *, pkey, A0),
    AROS_LDA(int, selection, D0),
    AROS_LDA(const char *, output_type, A1),
    AROS_LDA(const char *, output_struct, A2),
    AROS_LDA(const char *, propquery, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,OSSL_ENCODER_CTX_set_cipher,
    AROS_LDA(OSSL_ENCODER_CTX *, ctx, A0),
    AROS_LDA(const char *, cipher_name, A1),
    AROS_LDA(const char *, propquery, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_ENCODER_CTX_set_cleanup,
    AROS_LDA(OSSL_ENCODER_CTX *, ctx, A0),
    AROS_LDA(OSSL_ENCODER_CLEANUP *, cleanup, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_ENCODER_CTX_set_construct,
    AROS_LDA(OSSL_ENCODER_CTX *, ctx, A0),
    AROS_LDA(OSSL_ENCODER_CONSTRUCT *, construct, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_ENCODER_CTX_set_construct_data,
    AROS_LDA(OSSL_ENCODER_CTX *, ctx, A0),
    AROS_LDA(void *, construct_data, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_ENCODER_CTX_set_output_structure,
    AROS_LDA(OSSL_ENCODER_CTX *, ctx, A0),
    AROS_LDA(const char *, output_structure, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_ENCODER_CTX_set_output_type,
    AROS_LDA(OSSL_ENCODER_CTX *, ctx, A0),
    AROS_LDA(const char *, output_type, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_ENCODER_CTX_set_params,
    AROS_LDA(OSSL_ENCODER_CTX *, ctx, A0),
    AROS_LDA(const OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,OSSL_ENCODER_CTX_set_passphrase,
    AROS_LDA(OSSL_ENCODER_CTX *, ctx, A0),
    AROS_LDA(const unsigned char *, kstr, A1),
    AROS_LDA(size_t, klen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,OSSL_ENCODER_CTX_set_passphrase_cb,
    AROS_LDA(OSSL_ENCODER_CTX *, ctx, A0),
    AROS_LDA(OSSL_PASSPHRASE_CALLBACK *, cb, A1),
    AROS_LDA(void *, cbarg, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,OSSL_ENCODER_CTX_set_passphrase_ui,
    AROS_LDA(OSSL_ENCODER_CTX *, ctx, A0),
    AROS_LDA(const UI_METHOD *, ui_method, A1),
    AROS_LDA(void *, ui_data, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,OSSL_ENCODER_CTX_set_pem_password_cb,
    AROS_LDA(OSSL_ENCODER_CTX *, ctx, A0),
    AROS_LDA(pem_password_cb *, cb, A1),
    AROS_LDA(void *, cbarg, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_ENCODER_CTX_set_selection,
    AROS_LDA(OSSL_ENCODER_CTX *, ctx, A0),
    AROS_LDA(int, selection, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(OSSL_ENCODER *,OSSL_ENCODER_INSTANCE_get_encoder,
    AROS_LDA(OSSL_ENCODER_INSTANCE *, encoder_inst, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void *,OSSL_ENCODER_INSTANCE_get_encoder_ctx,
    AROS_LDA(OSSL_ENCODER_INSTANCE *, encoder_inst, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char *,OSSL_ENCODER_INSTANCE_get_output_structure,
    AROS_LDA(OSSL_ENCODER_INSTANCE *, encoder_inst, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char *,OSSL_ENCODER_INSTANCE_get_output_type,
    AROS_LDA(OSSL_ENCODER_INSTANCE *, encoder_inst, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void,OSSL_ENCODER_do_all_provided,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(void *, arg, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_ENCODER *,OSSL_ENCODER_fetch,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, name, A1),
    AROS_LDA(const char *, properties, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_ENCODER_free,
    AROS_LDA(OSSL_ENCODER *, encoder, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char *,OSSL_ENCODER_get0_description,
    AROS_LDA(const OSSL_ENCODER *, kdf, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char *,OSSL_ENCODER_get0_name,
    AROS_LDA(const OSSL_ENCODER *, kdf, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char *,OSSL_ENCODER_get0_properties,
    AROS_LDA(const OSSL_ENCODER *, encoder, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PROVIDER *,OSSL_ENCODER_get0_provider,
    AROS_LDA(const OSSL_ENCODER *, encoder, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_ENCODER_get_params,
    AROS_LDA(OSSL_ENCODER *, encoder, A0),
    AROS_LDA(OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PARAM *,OSSL_ENCODER_gettable_params,
    AROS_LDA(OSSL_ENCODER *, encoder, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_ENCODER_is_a,
    AROS_LDA(const OSSL_ENCODER *, encoder, A0),
    AROS_LDA(const char *, name, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_ENCODER_names_do_all,
    AROS_LDA(const OSSL_ENCODER *, encoder, A0),
    AROS_LDA(void *, data, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PARAM *,OSSL_ENCODER_settable_ctx_params,
    AROS_LDA(OSSL_ENCODER *, encoder, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_ENCODER_to_bio,
    AROS_LDA(OSSL_ENCODER_CTX *, ctx, A0),
    AROS_LDA(BIO *, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,OSSL_ENCODER_to_data,
    AROS_LDA(OSSL_ENCODER_CTX *, ctx, A0),
    AROS_LDA(unsigned char **, pdata, A1),
    AROS_LDA(size_t *, pdata_len, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,OSSL_ENCODER_up_ref,
    AROS_LDA(OSSL_ENCODER *, encoder, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_ERR_STATE_free,
    AROS_LDA(ERR_STATE *, es, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(ERR_STATE *,OSSL_ERR_STATE_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_ERR_STATE_restore,
    AROS_LDA(const ERR_STATE *, es, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_ERR_STATE_save,
    AROS_LDA(ERR_STATE *, es, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_ERR_STATE_save_to_mark,
    AROS_LDA(ERR_STATE *, es, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,OSSL_GENERAL_NAMES_print,
    AROS_LDA(BIO *, out, A0),
    AROS_LDA(GENERAL_NAMES *, gens, A1),
    AROS_LDA(int, indent, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_HASH_free,
    AROS_LDA(OSSL_HASH *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM *,OSSL_HASH_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OSSL_HASH *,OSSL_HASH_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_HPKE_CTX_free,
    AROS_LDA(OSSL_HPKE_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_HPKE_CTX_get_seq,
    AROS_LDA(OSSL_HPKE_CTX *, ctx, A0),
    AROS_LDA(uint64_t *, seq, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(OSSL_HPKE_CTX *,OSSL_HPKE_CTX_new_amiga,
    AROS_LDA(int, mode, D0),
    AROS_LDA(OSSL_HPKE_SUITE *, suite, A0),
    AROS_LDA(int, role, D1),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A1),
    AROS_LDA(const char *, propq, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_HPKE_CTX_set1_authpriv,
    AROS_LDA(OSSL_HPKE_CTX *, ctx, A0),
    AROS_LDA(EVP_PKEY *, priv, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,OSSL_HPKE_CTX_set1_authpub,
    AROS_LDA(OSSL_HPKE_CTX *, ctx, A0),
    AROS_LDA(const unsigned char *, pub, A1),
    AROS_LDA(size_t, publen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,OSSL_HPKE_CTX_set1_ikme,
    AROS_LDA(OSSL_HPKE_CTX *, ctx, A0),
    AROS_LDA(const unsigned char *, ikme, A1),
    AROS_LDA(size_t, ikmelen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int,OSSL_HPKE_CTX_set1_psk,
    AROS_LDA(OSSL_HPKE_CTX *, ctx, A0),
    AROS_LDA(const char *, pskid, A1),
    AROS_LDA(const unsigned char *, psk, A2),
    AROS_LDA(size_t, psklen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_HPKE_CTX_set_seq,
    AROS_LDA(OSSL_HPKE_CTX *, ctx, A0),
    AROS_LDA(uint64_t, seq, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int,OSSL_HPKE_decap,
    AROS_LDA(OSSL_HPKE_CTX *, ctx, A0),
    AROS_LDA(const unsigned char *, enc, A1),
    AROS_LDA(size_t, enclen, D0),
    AROS_LDA(EVP_PKEY *, recippriv, A2),
    AROS_LDA(const unsigned char *, info, A3),
    AROS_LDA(size_t, infolen, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(int,OSSL_HPKE_encap,
    AROS_LDA(OSSL_HPKE_CTX *, ctx, A0),
    AROS_LDA(unsigned char *, enc, A1),
    AROS_LDA(size_t *, enclen, A2),
    AROS_LDA(const unsigned char *, pub, A3),
    AROS_LDA(size_t, publen, D0),
    AROS_LDA(const unsigned char *, info, D1),
    AROS_LDA(size_t, infolen, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int,OSSL_HPKE_export,
    AROS_LDA(OSSL_HPKE_CTX *, ctx, A0),
    AROS_LDA(unsigned char *, secret, A1),
    AROS_LDA(size_t, secretlen, D0),
    AROS_LDA(const unsigned char *, label, A2),
    AROS_LDA(size_t, labellen, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(size_t,OSSL_HPKE_get_ciphertext_size_amiga,
    AROS_LDA(OSSL_HPKE_SUITE *, suite, A0),
    AROS_LDA(size_t, clearlen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD8(int,OSSL_HPKE_get_grease_value,
    AROS_LDA(const OSSL_HPKE_SUITE *, suite_in, A0),
    AROS_LDA(OSSL_HPKE_SUITE *, suite, A1),
    AROS_LDA(unsigned char *, enc, A2),
    AROS_LDA(size_t *, enclen, A3),
    AROS_LDA(unsigned char *, ct, D0),
    AROS_LDA(size_t, ctlen, D1),
    AROS_LDA(OSSL_LIB_CTX *, libctx, D2),
    AROS_LDA(const char *, propq, D3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(size_t,OSSL_HPKE_get_public_encap_size_amiga,
    AROS_LDA(OSSL_HPKE_SUITE *, suite, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(size_t,OSSL_HPKE_get_recommended_ikmelen_amiga,
    AROS_LDA(OSSL_HPKE_SUITE *, suite, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD8(int,OSSL_HPKE_keygen_amiga,
    AROS_LDA(OSSL_HPKE_SUITE *, suite, A0),
    AROS_LDA(unsigned char *, pub, A1),
    AROS_LDA(size_t *, publen, A2),
    AROS_LDA(EVP_PKEY **, priv, A3),
    AROS_LDA(const unsigned char *, ikm, D0),
    AROS_LDA(size_t, ikmlen, D1),
    AROS_LDA(OSSL_LIB_CTX *, libctx, D2),
    AROS_LDA(const char *, propq, D3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(int,OSSL_HPKE_open,
    AROS_LDA(OSSL_HPKE_CTX *, ctx, A0),
    AROS_LDA(unsigned char *, pt, A1),
    AROS_LDA(size_t *, ptlen, A2),
    AROS_LDA(const unsigned char *, aad, A3),
    AROS_LDA(size_t, aadlen, D0),
    AROS_LDA(const unsigned char *, ct, D1),
    AROS_LDA(size_t, ctlen, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(int,OSSL_HPKE_seal,
    AROS_LDA(OSSL_HPKE_CTX *, ctx, A0),
    AROS_LDA(unsigned char *, ct, A1),
    AROS_LDA(size_t *, ctlen, A2),
    AROS_LDA(const unsigned char *, aad, A3),
    AROS_LDA(size_t, aadlen, D0),
    AROS_LDA(const unsigned char *, pt, D1),
    AROS_LDA(size_t, ptlen, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_HPKE_str2suite,
    AROS_LDA(const char *, str, A0),
    AROS_LDA(OSSL_HPKE_SUITE *, suite, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,OSSL_HPKE_suite_check_amiga,
    AROS_LDA(OSSL_HPKE_SUITE *, suite, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(size_t,OSSL_HTTP_REQ_CTX_get_resp_len,
    AROS_LDA(const OSSL_HTTP_REQ_CTX *, rctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int,OSSL_HTTP_REQ_CTX_set_expected,
    AROS_LDA(OSSL_HTTP_REQ_CTX *, rctx, A0),
    AROS_LDA(const char *, content_type, A1),
    AROS_LDA(int, asn1, D0),
    AROS_LDA(int, timeout, D1),
    AROS_LDA(int, keep_alive, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void,OSSL_HTTP_REQ_CTX_set_max_response_hdr_lines,
    AROS_LDA(OSSL_HTTP_REQ_CTX *, rctx, A0),
    AROS_LDA(size_t, count, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(const char *,OSSL_HTTP_adapt_proxy,
    AROS_LDA(const char *, proxy, A0),
    AROS_LDA(const char *, no_proxy, A1),
    AROS_LDA(const char *, server, A2),
    AROS_LDA(int, use_ssl, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_HTTP_close,
    AROS_LDA(OSSL_HTTP_REQ_CTX *, rctx, A0),
    AROS_LDA(int, ok, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(BIO *,OSSL_HTTP_exchange,
    AROS_LDA(OSSL_HTTP_REQ_CTX *, rctx, A0),
    AROS_LDA(char **, redirection_url, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(BIO *,OSSL_HTTP_get_amiga_1,
    AROS_LDA(const char *, url, A0),
    AROS_LDA(const char *, proxy, A1),
    AROS_LDA(const char *, no_proxy, A2),
    AROS_LDA(BIO *, bio, D1),
    AROS_LDA(BIO *, rbio, D2),
    AROS_LDA(OSSL_HTTP_bio_cb_t, bio_update_fn, A3),
    AROS_LDA(void *, moreargs, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,OSSL_HTTP_is_alive,
    AROS_LDA(const OSSL_HTTP_REQ_CTX *, rctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD11(OSSL_HTTP_REQ_CTX *,OSSL_HTTP_open,
    AROS_LDA(const char *, server, A0),
    AROS_LDA(const char *, port, A1),
    AROS_LDA(const char *, proxy, A2),
    AROS_LDA(const char *, no_proxy, A3),
    AROS_LDA(int, use_ssl, D0),
    AROS_LDA(BIO *, bio, D1),
    AROS_LDA(BIO *, rbio, D2),
    AROS_LDA(OSSL_HTTP_bio_cb_t, bio_update_fn, D3),
    AROS_LDA(void *, arg, D4),
    AROS_LDA(int, buf_size, D5),
    AROS_LDA(int, overall_timeout, D6),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD8(int,OSSL_HTTP_proxy_connect,
    AROS_LDA(BIO *, bio, A0),
    AROS_LDA(const char *, server, A1),
    AROS_LDA(const char *, port, A2),
    AROS_LDA(const char *, proxyuser, A3),
    AROS_LDA(const char *, proxypass, D0),
    AROS_LDA(int, timeout, D1),
    AROS_LDA(BIO *, bio_err, D2),
    AROS_LDA(const char *, prog, D3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD11(BIO *,OSSL_HTTP_transfer_amiga_1,
    AROS_LDA(OSSL_HTTP_REQ_CTX **, prctx, A0),
    AROS_LDA(const char *, server, A1),
    AROS_LDA(const char *, port, A2),
    AROS_LDA(const char *, path, D1),
    AROS_LDA(int, use_ssl, D2),
    AROS_LDA(const char *, proxy, D3),
    AROS_LDA(const char *, no_proxy, D4),
    AROS_LDA(BIO *, bio, D5),
    AROS_LDA(BIO *, rbio, D6),
    AROS_LDA(OSSL_HTTP_bio_cb_t, bio_update_fn, A3),
    AROS_LDA(void *, moreargs, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_IETF_ATTR_SYNTAX_VALUE_free,
    AROS_LDA(OSSL_IETF_ATTR_SYNTAX_VALUE *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM *,OSSL_IETF_ATTR_SYNTAX_VALUE_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OSSL_IETF_ATTR_SYNTAX_VALUE *,OSSL_IETF_ATTR_SYNTAX_VALUE_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,OSSL_IETF_ATTR_SYNTAX_add1_value,
    AROS_LDA(OSSL_IETF_ATTR_SYNTAX *, a, A0),
    AROS_LDA(int, type, D0),
    AROS_LDA(void *, data, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_IETF_ATTR_SYNTAX_free,
    AROS_LDA(OSSL_IETF_ATTR_SYNTAX *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const GENERAL_NAMES *,OSSL_IETF_ATTR_SYNTAX_get0_policyAuthority,
    AROS_LDA(const OSSL_IETF_ATTR_SYNTAX *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void *,OSSL_IETF_ATTR_SYNTAX_get0_value,
    AROS_LDA(const OSSL_IETF_ATTR_SYNTAX *, a, A0),
    AROS_LDA(int, ind, D0),
    AROS_LDA(int *, type, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,OSSL_IETF_ATTR_SYNTAX_get_value_num,
    AROS_LDA(const OSSL_IETF_ATTR_SYNTAX *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM *,OSSL_IETF_ATTR_SYNTAX_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OSSL_IETF_ATTR_SYNTAX *,OSSL_IETF_ATTR_SYNTAX_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,OSSL_IETF_ATTR_SYNTAX_print,
    AROS_LDA(BIO *, bp, A0),
    AROS_LDA(OSSL_IETF_ATTR_SYNTAX *, a, A1),
    AROS_LDA(int, indent, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void,OSSL_IETF_ATTR_SYNTAX_set0_policyAuthority,
    AROS_LDA(OSSL_IETF_ATTR_SYNTAX *, a, A0),
    AROS_LDA(GENERAL_NAMES *, names, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void,OSSL_INDICATOR_get_callback,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(OSSL_INDICATOR_CALLBACK **, cb, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void,OSSL_INDICATOR_set_callback,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(OSSL_INDICATOR_CALLBACK *, cb, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_INFO_SYNTAX_POINTER_free,
    AROS_LDA(OSSL_INFO_SYNTAX_POINTER *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM *,OSSL_INFO_SYNTAX_POINTER_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OSSL_INFO_SYNTAX_POINTER *,OSSL_INFO_SYNTAX_POINTER_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_INFO_SYNTAX_free,
    AROS_LDA(OSSL_INFO_SYNTAX *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM *,OSSL_INFO_SYNTAX_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OSSL_INFO_SYNTAX *,OSSL_INFO_SYNTAX_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_ISSUER_SERIAL_free,
    AROS_LDA(OSSL_ISSUER_SERIAL *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const X509_NAME *,OSSL_ISSUER_SERIAL_get0_issuer,
    AROS_LDA(const OSSL_ISSUER_SERIAL *, isss, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const ASN1_BIT_STRING *,OSSL_ISSUER_SERIAL_get0_issuerUID,
    AROS_LDA(const OSSL_ISSUER_SERIAL *, isss, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const ASN1_INTEGER *,OSSL_ISSUER_SERIAL_get0_serial,
    AROS_LDA(const OSSL_ISSUER_SERIAL *, isss, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OSSL_ISSUER_SERIAL *,OSSL_ISSUER_SERIAL_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_ISSUER_SERIAL_set1_issuer,
    AROS_LDA(OSSL_ISSUER_SERIAL *, isss, A0),
    AROS_LDA(const X509_NAME *, issuer, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_ISSUER_SERIAL_set1_issuerUID,
    AROS_LDA(OSSL_ISSUER_SERIAL *, isss, A0),
    AROS_LDA(const ASN1_BIT_STRING *, uid, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_ISSUER_SERIAL_set1_serial,
    AROS_LDA(OSSL_ISSUER_SERIAL *, isss, A0),
    AROS_LDA(const ASN1_INTEGER *, serial, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OSSL_LIB_CTX *,OSSL_LIB_CTX_get0_global_default,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,OSSL_LIB_CTX_get_conf_diagnostics,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void *,OSSL_LIB_CTX_get_data,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    AROS_LDA(int, index, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_LIB_CTX_load_config,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    AROS_LDA(const char *, config_file, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(OSSL_LIB_CTX *,OSSL_LIB_CTX_new_child,
    AROS_LDA(const OSSL_CORE_HANDLE *, handle, A0),
    AROS_LDA(const OSSL_DISPATCH *, in, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(OSSL_LIB_CTX *,OSSL_LIB_CTX_new_from_dispatch,
    AROS_LDA(const OSSL_CORE_HANDLE *, handle, A0),
    AROS_LDA(const OSSL_DISPATCH *, in, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(OSSL_LIB_CTX *,OSSL_LIB_CTX_set0_default,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void,OSSL_LIB_CTX_set_conf_diagnostics,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    AROS_LDA(int, value, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_NAMED_DAY_free,
    AROS_LDA(OSSL_NAMED_DAY *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM *,OSSL_NAMED_DAY_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OSSL_NAMED_DAY *,OSSL_NAMED_DAY_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_OBJECT_DIGEST_INFO_free,
    AROS_LDA(OSSL_OBJECT_DIGEST_INFO *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void,OSSL_OBJECT_DIGEST_INFO_get0_digest,
    AROS_LDA(const OSSL_OBJECT_DIGEST_INFO *, o, A0),
    AROS_LDA(int *, digestedObjectType, A1),
    AROS_LDA(const X509_ALGOR **, digestAlgorithm, A2),
    AROS_LDA(const ASN1_BIT_STRING **, digest, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OSSL_OBJECT_DIGEST_INFO *,OSSL_OBJECT_DIGEST_INFO_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int,OSSL_OBJECT_DIGEST_INFO_set1_digest,
    AROS_LDA(OSSL_OBJECT_DIGEST_INFO *, o, A0),
    AROS_LDA(int, digestedObjectType, D0),
    AROS_LDA(X509_ALGOR *, digestAlgorithm, A1),
    AROS_LDA(ASN1_BIT_STRING *, digest, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_PARAM_BLD_free,
    AROS_LDA(OSSL_PARAM_BLD *, bld, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OSSL_PARAM_BLD *,OSSL_PARAM_BLD_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,OSSL_PARAM_BLD_push_BN,
    AROS_LDA(OSSL_PARAM_BLD *, bld, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(const BIGNUM *, bn, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int,OSSL_PARAM_BLD_push_BN_pad,
    AROS_LDA(OSSL_PARAM_BLD *, bld, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(const BIGNUM *, bn, A2),
    AROS_LDA(size_t, sz, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,OSSL_PARAM_BLD_push_double,
    AROS_LDA(OSSL_PARAM_BLD *, bld, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(double, val, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,OSSL_PARAM_BLD_push_int,
    AROS_LDA(OSSL_PARAM_BLD *, bld, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(int, val, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,OSSL_PARAM_BLD_push_int32,
    AROS_LDA(OSSL_PARAM_BLD *, bld, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(int32_t, val, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,OSSL_PARAM_BLD_push_int64,
    AROS_LDA(OSSL_PARAM_BLD *, bld, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(int64_t, val, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,OSSL_PARAM_BLD_push_long,
    AROS_LDA(OSSL_PARAM_BLD *, bld, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(long int, val, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int,OSSL_PARAM_BLD_push_octet_ptr,
    AROS_LDA(OSSL_PARAM_BLD *, bld, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(void *, buf, A2),
    AROS_LDA(size_t, bsize, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int,OSSL_PARAM_BLD_push_octet_string,
    AROS_LDA(OSSL_PARAM_BLD *, bld, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(const void *, buf, A2),
    AROS_LDA(size_t, bsize, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,OSSL_PARAM_BLD_push_size_t,
    AROS_LDA(OSSL_PARAM_BLD *, bld, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(size_t, val, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,OSSL_PARAM_BLD_push_time_t,
    AROS_LDA(OSSL_PARAM_BLD *, bld, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(time_t, val, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,OSSL_PARAM_BLD_push_uint,
    AROS_LDA(OSSL_PARAM_BLD *, bld, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(unsigned int, val, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,OSSL_PARAM_BLD_push_uint32,
    AROS_LDA(OSSL_PARAM_BLD *, bld, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(uint32_t, val, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,OSSL_PARAM_BLD_push_uint64,
    AROS_LDA(OSSL_PARAM_BLD *, bld, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(uint64_t, val, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,OSSL_PARAM_BLD_push_ulong,
    AROS_LDA(OSSL_PARAM_BLD *, bld, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(unsigned long int, val, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int,OSSL_PARAM_BLD_push_utf8_ptr,
    AROS_LDA(OSSL_PARAM_BLD *, bld, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(char *, buf, A2),
    AROS_LDA(size_t, bsize, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int,OSSL_PARAM_BLD_push_utf8_string,
    AROS_LDA(OSSL_PARAM_BLD *, bld, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(const char *, buf, A2),
    AROS_LDA(size_t, bsize, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(OSSL_PARAM *,OSSL_PARAM_BLD_to_param,
    AROS_LDA(OSSL_PARAM_BLD *, bld, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int,OSSL_PARAM_allocate_from_text,
    AROS_LDA(OSSL_PARAM *, to, A0),
    AROS_LDA(const OSSL_PARAM *, paramdefs, A1),
    AROS_LDA(const char *, key, A2),
    AROS_LDA(const char *, value, A3),
    AROS_LDA(size_t, value_n, D0),
    AROS_LDA(int *, found, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void,OSSL_PARAM_construct_BN_amiga,
    AROS_LDA(OSSL_PARAM *, result, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(unsigned char *, buf, A2),
    AROS_LDA(size_t, bsize, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void,OSSL_PARAM_construct_double_amiga,
    AROS_LDA(OSSL_PARAM *, result, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(double *, buf, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_PARAM_construct_end_amiga,
    AROS_LDA(OSSL_PARAM *, result, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void,OSSL_PARAM_construct_int32_amiga,
    AROS_LDA(OSSL_PARAM *, result, A1),
    AROS_LDA(const char *, key, A2),
    AROS_LDA(int32_t *, buf, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void,OSSL_PARAM_construct_int64_amiga,
    AROS_LDA(OSSL_PARAM *, result, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(int64_t *, buf, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void,OSSL_PARAM_construct_int_amiga,
    AROS_LDA(OSSL_PARAM *, result, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(int *, buf, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void,OSSL_PARAM_construct_long_amiga,
    AROS_LDA(OSSL_PARAM *, result, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(long int *, buf, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void,OSSL_PARAM_construct_octet_ptr_amiga,
    AROS_LDA(OSSL_PARAM *, result, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(void **, buf, A2),
    AROS_LDA(size_t, bsize, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void,OSSL_PARAM_construct_octet_string_amiga,
    AROS_LDA(OSSL_PARAM *, result, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(void *, buf, A2),
    AROS_LDA(size_t, bsize, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void,OSSL_PARAM_construct_size_t_amiga,
    AROS_LDA(OSSL_PARAM *, result, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(size_t *, buf, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void,OSSL_PARAM_construct_time_t_amiga,
    AROS_LDA(OSSL_PARAM *, result, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(time_t *, buf, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void,OSSL_PARAM_construct_uint32_amiga,
    AROS_LDA(OSSL_PARAM *, result, A1),
    AROS_LDA(const char *, key, A2),
    AROS_LDA(uint32_t *, buf, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void,OSSL_PARAM_construct_uint64_amiga,
    AROS_LDA(OSSL_PARAM *, result, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(uint64_t *, buf, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void,OSSL_PARAM_construct_uint_amiga,
    AROS_LDA(OSSL_PARAM *, result, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(unsigned int *, buf, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void,OSSL_PARAM_construct_ulong_amiga,
    AROS_LDA(OSSL_PARAM *, result, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(unsigned long int *, buf, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void,OSSL_PARAM_construct_utf8_ptr_amiga,
    AROS_LDA(OSSL_PARAM *, result, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(char **, buf, A2),
    AROS_LDA(size_t, bsize, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void,OSSL_PARAM_construct_utf8_string_amiga,
    AROS_LDA(OSSL_PARAM *, result, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(char *, buf, A2),
    AROS_LDA(size_t, bsize, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(OSSL_PARAM *,OSSL_PARAM_dup,
    AROS_LDA(const OSSL_PARAM *, p, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_PARAM_free,
    AROS_LDA(OSSL_PARAM *, p, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_PARAM_get_BN,
    AROS_LDA(const OSSL_PARAM *, p, A0),
    AROS_LDA(BIGNUM **, val, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_PARAM_get_double,
    AROS_LDA(const OSSL_PARAM *, p, A0),
    AROS_LDA(double *, val, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_PARAM_get_int,
    AROS_LDA(const OSSL_PARAM *, p, A0),
    AROS_LDA(int *, val, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_PARAM_get_int32,
    AROS_LDA(const OSSL_PARAM *, p, A0),
    AROS_LDA(int32_t *, val, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_PARAM_get_int64,
    AROS_LDA(const OSSL_PARAM *, p, A0),
    AROS_LDA(int64_t *, val, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_PARAM_get_long,
    AROS_LDA(const OSSL_PARAM *, p, A0),
    AROS_LDA(long int *, val, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,OSSL_PARAM_get_octet_ptr,
    AROS_LDA(const OSSL_PARAM *, p, A0),
    AROS_LDA(const void **, val, A1),
    AROS_LDA(size_t *, used_len, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int,OSSL_PARAM_get_octet_string,
    AROS_LDA(const OSSL_PARAM *, p, A0),
    AROS_LDA(void **, val, A1),
    AROS_LDA(size_t, max_len, D0),
    AROS_LDA(size_t *, used_len, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,OSSL_PARAM_get_octet_string_ptr,
    AROS_LDA(const OSSL_PARAM *, p, A0),
    AROS_LDA(const void **, val, A1),
    AROS_LDA(size_t *, used_len, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_PARAM_get_size_t,
    AROS_LDA(const OSSL_PARAM *, p, A0),
    AROS_LDA(size_t *, val, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_PARAM_get_time_t,
    AROS_LDA(const OSSL_PARAM *, p, A0),
    AROS_LDA(time_t *, val, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_PARAM_get_uint,
    AROS_LDA(const OSSL_PARAM *, p, A0),
    AROS_LDA(unsigned int *, val, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_PARAM_get_uint32,
    AROS_LDA(const OSSL_PARAM *, p, A0),
    AROS_LDA(uint32_t *, val, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_PARAM_get_uint64,
    AROS_LDA(const OSSL_PARAM *, p, A0),
    AROS_LDA(uint64_t *, val, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_PARAM_get_ulong,
    AROS_LDA(const OSSL_PARAM *, p, A0),
    AROS_LDA(unsigned long int *, val, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_PARAM_get_utf8_ptr,
    AROS_LDA(const OSSL_PARAM *, p, A0),
    AROS_LDA(const char **, val, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,OSSL_PARAM_get_utf8_string,
    AROS_LDA(const OSSL_PARAM *, p, A0),
    AROS_LDA(char **, val, A1),
    AROS_LDA(size_t, max_len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_PARAM_get_utf8_string_ptr,
    AROS_LDA(const OSSL_PARAM *, p, A0),
    AROS_LDA(const char **, val, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(OSSL_PARAM *,OSSL_PARAM_locate,
    AROS_LDA(OSSL_PARAM *, p, A0),
    AROS_LDA(const char *, key, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(const OSSL_PARAM *,OSSL_PARAM_locate_const,
    AROS_LDA(const OSSL_PARAM *, p, A0),
    AROS_LDA(const char *, key, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(OSSL_PARAM *,OSSL_PARAM_merge,
    AROS_LDA(const OSSL_PARAM *, p1, A0),
    AROS_LDA(const OSSL_PARAM *, p2, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,OSSL_PARAM_modified,
    AROS_LDA(const OSSL_PARAM *, p, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,OSSL_PARAM_print_to_bio,
    AROS_LDA(const OSSL_PARAM *, params, A0),
    AROS_LDA(BIO *, bio, A1),
    AROS_LDA(int, print_values, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_PARAM_set_BN,
    AROS_LDA(OSSL_PARAM *, p, A0),
    AROS_LDA(const BIGNUM *, val, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_PARAM_set_all_unmodified,
    AROS_LDA(OSSL_PARAM *, p, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_PARAM_set_double,
    AROS_LDA(OSSL_PARAM *, p, A0),
    AROS_LDA(double, val, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_PARAM_set_int,
    AROS_LDA(OSSL_PARAM *, p, A0),
    AROS_LDA(int, val, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_PARAM_set_int32,
    AROS_LDA(OSSL_PARAM *, p, A0),
    AROS_LDA(int32_t, val, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_PARAM_set_int64,
    AROS_LDA(OSSL_PARAM *, p, A0),
    AROS_LDA(int64_t, val, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_PARAM_set_long,
    AROS_LDA(OSSL_PARAM *, p, A0),
    AROS_LDA(long int, val, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,OSSL_PARAM_set_octet_ptr,
    AROS_LDA(OSSL_PARAM *, p, A0),
    AROS_LDA(const void *, val, A1),
    AROS_LDA(size_t, used_len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,OSSL_PARAM_set_octet_string,
    AROS_LDA(OSSL_PARAM *, p, A0),
    AROS_LDA(const void *, val, A1),
    AROS_LDA(size_t, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_PARAM_set_size_t,
    AROS_LDA(OSSL_PARAM *, p, A0),
    AROS_LDA(size_t, val, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_PARAM_set_time_t,
    AROS_LDA(OSSL_PARAM *, p, A0),
    AROS_LDA(time_t, val, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_PARAM_set_uint,
    AROS_LDA(OSSL_PARAM *, p, A0),
    AROS_LDA(unsigned int, val, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_PARAM_set_uint32,
    AROS_LDA(OSSL_PARAM *, p, A0),
    AROS_LDA(uint32_t, val, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_PARAM_set_uint64,
    AROS_LDA(OSSL_PARAM *, p, A0),
    AROS_LDA(uint64_t, val, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_PARAM_set_ulong,
    AROS_LDA(OSSL_PARAM *, p, A0),
    AROS_LDA(unsigned long int, val, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_PARAM_set_utf8_ptr,
    AROS_LDA(OSSL_PARAM *, p, A0),
    AROS_LDA(const char *, val, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_PARAM_set_utf8_string,
    AROS_LDA(OSSL_PARAM *, p, A0),
    AROS_LDA(const char *, val, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_PRIVILEGE_POLICY_ID_free,
    AROS_LDA(OSSL_PRIVILEGE_POLICY_ID *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM *,OSSL_PRIVILEGE_POLICY_ID_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OSSL_PRIVILEGE_POLICY_ID *,OSSL_PRIVILEGE_POLICY_ID_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,OSSL_PROVIDER_add_builtin,
    AROS_LDA(OSSL_LIB_CTX *, a, A0),
    AROS_LDA(const char *, name, A1),
    AROS_LDA(OSSL_provider_init_fn *, init_fn, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,OSSL_PROVIDER_add_conf_parameter,
    AROS_LDA(OSSL_PROVIDER *, prov, A0),
    AROS_LDA(const char *, name, A1),
    AROS_LDA(const char *, value, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_PROVIDER_available,
    AROS_LDA(OSSL_LIB_CTX *, a, A0),
    AROS_LDA(const char *, name, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,OSSL_PROVIDER_conf_get_bool,
    AROS_LDA(const OSSL_PROVIDER *, prov, A0),
    AROS_LDA(const char *, name, A1),
    AROS_LDA(int, defval, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_PROVIDER_do_all,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    AROS_LDA(void *, cbdata, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char *,OSSL_PROVIDER_get0_default_search_path,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_DISPATCH *,OSSL_PROVIDER_get0_dispatch,
    AROS_LDA(const OSSL_PROVIDER *, prov, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char *,OSSL_PROVIDER_get0_name,
    AROS_LDA(const OSSL_PROVIDER *, prov, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void *,OSSL_PROVIDER_get0_provider_ctx,
    AROS_LDA(const OSSL_PROVIDER *, prov, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int,OSSL_PROVIDER_get_capabilities,
    AROS_LDA(const OSSL_PROVIDER *, prov, A0),
    AROS_LDA(const char *, capability, A1),
    AROS_LDA(OSSL_CALLBACK *, cb, A2),
    AROS_LDA(void *, arg, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_PROVIDER_get_conf_parameters,
    AROS_LDA(const OSSL_PROVIDER *, prov, A0),
    AROS_LDA(OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_PROVIDER_get_params,
    AROS_LDA(const OSSL_PROVIDER *, prov, A0),
    AROS_LDA(OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PARAM *,OSSL_PROVIDER_gettable_params,
    AROS_LDA(const OSSL_PROVIDER *, prov, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(OSSL_PROVIDER *,OSSL_PROVIDER_load,
    AROS_LDA(OSSL_LIB_CTX *, a, A0),
    AROS_LDA(const char *, name, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_PROVIDER *,OSSL_PROVIDER_load_ex,
    AROS_LDA(OSSL_LIB_CTX *, a, A0),
    AROS_LDA(const char *, name, A1),
    AROS_LDA(OSSL_PARAM *, params, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(const OSSL_ALGORITHM *,OSSL_PROVIDER_query_operation,
    AROS_LDA(const OSSL_PROVIDER *, prov, A0),
    AROS_LDA(int, operation_id, D0),
    AROS_LDA(int *, no_cache, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,OSSL_PROVIDER_self_test,
    AROS_LDA(const OSSL_PROVIDER *, prov, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_PROVIDER_set_default_search_path,
    AROS_LDA(OSSL_LIB_CTX *, a, A0),
    AROS_LDA(const char *, path, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_PROVIDER *,OSSL_PROVIDER_try_load,
    AROS_LDA(OSSL_LIB_CTX *, a, A0),
    AROS_LDA(const char *, name, A1),
    AROS_LDA(int, retain_fallbacks, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(OSSL_PROVIDER *,OSSL_PROVIDER_try_load_ex,
    AROS_LDA(OSSL_LIB_CTX *, a, A0),
    AROS_LDA(const char *, name, A1),
    AROS_LDA(OSSL_PARAM *, params, A2),
    AROS_LDA(int, retain_fallbacks, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,OSSL_PROVIDER_unload,
    AROS_LDA(OSSL_PROVIDER *, prov, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void,OSSL_PROVIDER_unquery_operation,
    AROS_LDA(const OSSL_PROVIDER *, prov, A0),
    AROS_LDA(int, operation_id, D0),
    AROS_LDA(const OSSL_ALGORITHM *, algs, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const SSL_METHOD *,OSSL_QUIC_client_method,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const SSL_METHOD *,OSSL_QUIC_client_thread_method,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const SSL_METHOD *,OSSL_QUIC_server_method,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_ROLE_SPEC_CERT_ID_SYNTAX_free,
    AROS_LDA(OSSL_ROLE_SPEC_CERT_ID_SYNTAX *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM *,OSSL_ROLE_SPEC_CERT_ID_SYNTAX_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OSSL_ROLE_SPEC_CERT_ID_SYNTAX *,OSSL_ROLE_SPEC_CERT_ID_SYNTAX_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_ROLE_SPEC_CERT_ID_free,
    AROS_LDA(OSSL_ROLE_SPEC_CERT_ID *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM *,OSSL_ROLE_SPEC_CERT_ID_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OSSL_ROLE_SPEC_CERT_ID *,OSSL_ROLE_SPEC_CERT_ID_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_SELF_TEST_free,
    AROS_LDA(OSSL_SELF_TEST *, st, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void,OSSL_SELF_TEST_get_callback,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(OSSL_CALLBACK **, cb, A1),
    AROS_LDA(void **, cbarg, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(OSSL_SELF_TEST *,OSSL_SELF_TEST_new,
    AROS_LDA(OSSL_CALLBACK *, cb, A0),
    AROS_LDA(void *, cbarg, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void,OSSL_SELF_TEST_onbegin,
    AROS_LDA(OSSL_SELF_TEST *, st, A0),
    AROS_LDA(const char *, type, A1),
    AROS_LDA(const char *, desc, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_SELF_TEST_oncorrupt_byte,
    AROS_LDA(OSSL_SELF_TEST *, st, A0),
    AROS_LDA(unsigned char *, bytes, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void,OSSL_SELF_TEST_onend,
    AROS_LDA(OSSL_SELF_TEST *, st, A0),
    AROS_LDA(int, ret, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void,OSSL_SELF_TEST_set_callback,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(OSSL_CALLBACK *, cb, A1),
    AROS_LDA(void *, cbarg, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(EVP_PKEY *,OSSL_STORE_INFO_get0_PUBKEY,
    AROS_LDA(const OSSL_STORE_INFO *, info, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void *,OSSL_STORE_INFO_get0_data,
    AROS_LDA(int, type, D0),
    AROS_LDA(const OSSL_STORE_INFO *, info, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(EVP_PKEY *,OSSL_STORE_INFO_get1_PUBKEY,
    AROS_LDA(const OSSL_STORE_INFO *, info, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(OSSL_STORE_INFO *,OSSL_STORE_INFO_new,
    AROS_LDA(int, type, D0),
    AROS_LDA(void *, data, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(OSSL_STORE_INFO *,OSSL_STORE_INFO_new_PUBKEY,
    AROS_LDA(EVP_PKEY *, pubkey, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void,OSSL_STORE_LOADER_do_all_provided,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(void *, arg, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_STORE_LOADER *,OSSL_STORE_LOADER_fetch,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, scheme, A1),
    AROS_LDA(const char *, properties, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char *,OSSL_STORE_LOADER_get0_description,
    AROS_LDA(const OSSL_STORE_LOADER *, loader, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char *,OSSL_STORE_LOADER_get0_properties,
    AROS_LDA(const OSSL_STORE_LOADER *, loader, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_PROVIDER *,OSSL_STORE_LOADER_get0_provider,
    AROS_LDA(const OSSL_STORE_LOADER *, loader, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_STORE_LOADER_is_a,
    AROS_LDA(const OSSL_STORE_LOADER *, loader, A0),
    AROS_LDA(const char *, scheme, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_STORE_LOADER_names_do_all,
    AROS_LDA(const OSSL_STORE_LOADER *, loader, A0),
    AROS_LDA(void *, data, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_STORE_LOADER_set_attach,
    AROS_LDA(OSSL_STORE_LOADER *, loader, A0),
    AROS_LDA(OSSL_STORE_attach_fn, attach_function, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_STORE_LOADER_set_open_ex,
    AROS_LDA(OSSL_STORE_LOADER *, loader, A0),
    AROS_LDA(OSSL_STORE_open_ex_fn, open_ex_function, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,OSSL_STORE_LOADER_up_ref,
    AROS_LDA(OSSL_STORE_LOADER *, loader, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD9(OSSL_STORE_CTX *,OSSL_STORE_attach,
    AROS_LDA(BIO *, bio, A0),
    AROS_LDA(const char *, scheme, A1),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A2),
    AROS_LDA(const char *, propq, A3),
    AROS_LDA(const UI_METHOD *, ui_method, D0),
    AROS_LDA(void *, ui_data, D1),
    AROS_LDA(const OSSL_PARAM *, params, D2),
    AROS_LDA(OSSL_STORE_post_process_info_fn, post_process, D3),
    AROS_LDA(void *, post_process_data, D4),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int,OSSL_STORE_delete,
    AROS_LDA(const char *, uri, A0),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A1),
    AROS_LDA(const char *, propq, A2),
    AROS_LDA(const UI_METHOD *, ui_method, A3),
    AROS_LDA(void *, ui_data, D0),
    AROS_LDA(const OSSL_PARAM *, params, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD8(OSSL_STORE_CTX *,OSSL_STORE_open_ex,
    AROS_LDA(const char *, uri, A0),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A1),
    AROS_LDA(const char *, propq, A2),
    AROS_LDA(const UI_METHOD *, ui_method, A3),
    AROS_LDA(void *, ui_data, D0),
    AROS_LDA(const OSSL_PARAM *, params, D1),
    AROS_LDA(OSSL_STORE_post_process_info_fn, post_process, D2),
    AROS_LDA(void *, post_process_data, D3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_TARGETING_INFORMATION_free,
    AROS_LDA(OSSL_TARGETING_INFORMATION *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM *,OSSL_TARGETING_INFORMATION_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OSSL_TARGETING_INFORMATION *,OSSL_TARGETING_INFORMATION_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_TARGETS_free,
    AROS_LDA(OSSL_TARGETS *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM *,OSSL_TARGETS_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OSSL_TARGETS *,OSSL_TARGETS_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_TARGET_free,
    AROS_LDA(OSSL_TARGET *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM *,OSSL_TARGET_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OSSL_TARGET *,OSSL_TARGET_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_TIME_PERIOD_free,
    AROS_LDA(OSSL_TIME_PERIOD *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM *,OSSL_TIME_PERIOD_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OSSL_TIME_PERIOD *,OSSL_TIME_PERIOD_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_TIME_SPEC_ABSOLUTE_free,
    AROS_LDA(OSSL_TIME_SPEC_ABSOLUTE *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM *,OSSL_TIME_SPEC_ABSOLUTE_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OSSL_TIME_SPEC_ABSOLUTE *,OSSL_TIME_SPEC_ABSOLUTE_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_TIME_SPEC_DAY_free,
    AROS_LDA(OSSL_TIME_SPEC_DAY *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM *,OSSL_TIME_SPEC_DAY_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OSSL_TIME_SPEC_DAY *,OSSL_TIME_SPEC_DAY_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_TIME_SPEC_MONTH_free,
    AROS_LDA(OSSL_TIME_SPEC_MONTH *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM *,OSSL_TIME_SPEC_MONTH_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OSSL_TIME_SPEC_MONTH *,OSSL_TIME_SPEC_MONTH_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_TIME_SPEC_TIME_free,
    AROS_LDA(OSSL_TIME_SPEC_TIME *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM *,OSSL_TIME_SPEC_TIME_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OSSL_TIME_SPEC_TIME *,OSSL_TIME_SPEC_TIME_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_TIME_SPEC_WEEKS_free,
    AROS_LDA(OSSL_TIME_SPEC_WEEKS *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM *,OSSL_TIME_SPEC_WEEKS_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OSSL_TIME_SPEC_WEEKS *,OSSL_TIME_SPEC_WEEKS_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_TIME_SPEC_X_DAY_OF_free,
    AROS_LDA(OSSL_TIME_SPEC_X_DAY_OF *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM *,OSSL_TIME_SPEC_X_DAY_OF_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OSSL_TIME_SPEC_X_DAY_OF *,OSSL_TIME_SPEC_X_DAY_OF_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_TIME_SPEC_free,
    AROS_LDA(OSSL_TIME_SPEC *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM *,OSSL_TIME_SPEC_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OSSL_TIME_SPEC *,OSSL_TIME_SPEC_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_USER_NOTICE_SYNTAX_free,
    AROS_LDA(OSSL_USER_NOTICE_SYNTAX *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM *,OSSL_USER_NOTICE_SYNTAX_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(OSSL_USER_NOTICE_SYNTAX *,OSSL_USER_NOTICE_SYNTAX_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(uint64_t,OSSL_get_max_threads,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(uint32_t,OSSL_get_thread_support_flags,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD9(int,OSSL_parse_url,
    AROS_LDA(const char *, url, A0),
    AROS_LDA(char **, pscheme, A1),
    AROS_LDA(char **, puser, A2),
    AROS_LDA(char **, phost, A3),
    AROS_LDA(char **, pport, D0),
    AROS_LDA(int *, pport_num, D1),
    AROS_LDA(char **, ppath, D2),
    AROS_LDA(char **, pquery, D3),
    AROS_LDA(char **, pfrag, D4),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,OSSL_set_max_threads,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    AROS_LDA(uint64_t, max_threads, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,OSSL_sleep,
    AROS_LDA(uint64_t, millis, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,OSSL_trace_enabled,
    AROS_LDA(int, category, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(BIO *,OSSL_trace_begin,
    AROS_LDA(int, category, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void,OSSL_trace_end,
    AROS_LDA(int, category, D0),
    AROS_LDA(BIO *, channel, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int,OSSL_trace_string,
    AROS_LDA(BIO *, out, A0),
    AROS_LDA(int, text, D0),
    AROS_LDA(int, full, D1),
    AROS_LDA(const unsigned char *, data, A1),
    AROS_LDA(size_t, size, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,PBMAC1PARAM_free,
    AROS_LDA(PBMAC1PARAM *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM *,PBMAC1PARAM_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(PBMAC1PARAM *,PBMAC1PARAM_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(PBKDF2PARAM *,PBMAC1_get1_pbkdf2_param,
    AROS_LDA(const X509_ALGOR *, macalg, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(EVP_PKEY *,PEM_read_bio_PUBKEY_ex,
    AROS_LDA(BIO *, out, A0),
    AROS_LDA(EVP_PKEY **, x, A1),
    AROS_LDA(pem_password_cb *, cb, A2),
    AROS_LDA(void *, u, A3),
    AROS_LDA(OSSL_LIB_CTX *, libctx, D0),
    AROS_LDA(const char *, propq, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(EVP_PKEY *,PEM_read_bio_Parameters_ex,
    AROS_LDA(BIO *, bp, A0),
    AROS_LDA(EVP_PKEY **, x, A1),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A2),
    AROS_LDA(const char *, propq, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(EVP_PKEY *,PEM_read_bio_PrivateKey_ex,
    AROS_LDA(BIO *, out, A0),
    AROS_LDA(EVP_PKEY **, x, A1),
    AROS_LDA(pem_password_cb *, cb, A2),
    AROS_LDA(void *, u, A3),
    AROS_LDA(OSSL_LIB_CTX *, libctx, D0),
    AROS_LDA(const char *, propq, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(X509_ACERT *,PEM_read_bio_X509_ACERT,
    AROS_LDA(BIO *, out, A0),
    AROS_LDA(X509_ACERT **, x, A1),
    AROS_LDA(pem_password_cb *, cb, A2),
    AROS_LDA(void *, u, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(X509_PUBKEY *,PEM_read_bio_X509_PUBKEY,
    AROS_LDA(BIO *, out, A0),
    AROS_LDA(X509_PUBKEY **, x, A1),
    AROS_LDA(pem_password_cb *, cb, A2),
    AROS_LDA(void *, u, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int,PEM_write_bio_PUBKEY_ex,
    AROS_LDA(BIO *, out, A0),
    AROS_LDA(const EVP_PKEY *, x, A1),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A2),
    AROS_LDA(const char *, propq, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD9(int,PEM_write_bio_PrivateKey_ex,
    AROS_LDA(BIO *, out, A0),
    AROS_LDA(const EVP_PKEY *, x, A1),
    AROS_LDA(const EVP_CIPHER *, enc, A2),
    AROS_LDA(const unsigned char *, kstr, A3),
    AROS_LDA(int, klen, D0),
    AROS_LDA(pem_password_cb *, cb, D1),
    AROS_LDA(void *, u, D2),
    AROS_LDA(OSSL_LIB_CTX *, libctx, D3),
    AROS_LDA(const char *, propq, D4),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,PEM_write_bio_X509_ACERT,
    AROS_LDA(BIO *, out, A0),
    AROS_LDA(const X509_ACERT *, x, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,PEM_write_bio_X509_PUBKEY,
    AROS_LDA(BIO *, out, A0),
    AROS_LDA(const X509_PUBKEY *, x, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD9(int,PKCS12_PBE_keyivgen_ex,
    AROS_LDA(EVP_CIPHER_CTX *, ctx, A0),
    AROS_LDA(const char *, pass, A1),
    AROS_LDA(int, passlen, D0),
    AROS_LDA(ASN1_TYPE *, param, A2),
    AROS_LDA(const EVP_CIPHER *, cipher, A3),
    AROS_LDA(const EVP_MD *, md_type, D1),
    AROS_LDA(int, en_de, D2),
    AROS_LDA(OSSL_LIB_CTX *, libctx, D3),
    AROS_LDA(const char *, propq, D4),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD9(PKCS12_SAFEBAG *,PKCS12_SAFEBAG_create_pkcs8_encrypt_ex,
    AROS_LDA(int, pbe_nid, D0),
    AROS_LDA(const char *, pass, A0),
    AROS_LDA(int, passlen, D1),
    AROS_LDA(unsigned char *, salt, A1),
    AROS_LDA(int, saltlen, D2),
    AROS_LDA(int, iter, D3),
    AROS_LDA(PKCS8_PRIV_KEY_INFO *, p8inf, A2),
    AROS_LDA(OSSL_LIB_CTX *, ctx, A3),
    AROS_LDA(const char *, propq, D4),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(PKCS12_SAFEBAG *,PKCS12_SAFEBAG_create_secret,
    AROS_LDA(int, type, D0),
    AROS_LDA(int, vtype, D1),
    AROS_LDA(const unsigned char *, value, A0),
    AROS_LDA(int, len, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const ASN1_TYPE *,PKCS12_SAFEBAG_get0_bag_obj,
    AROS_LDA(const PKCS12_SAFEBAG *, bag, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const ASN1_OBJECT *,PKCS12_SAFEBAG_get0_bag_type,
    AROS_LDA(const PKCS12_SAFEBAG *, bag, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(X509 *,PKCS12_SAFEBAG_get1_cert_ex,
    AROS_LDA(const PKCS12_SAFEBAG *, bag, A0),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A1),
    AROS_LDA(const char *, propq, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(X509_CRL *,PKCS12_SAFEBAG_get1_crl_ex,
    AROS_LDA(const PKCS12_SAFEBAG *, bag, A0),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A1),
    AROS_LDA(const char *, propq, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int,PKCS12_add1_attr_by_NID,
    AROS_LDA(PKCS12_SAFEBAG *, bag, A0),
    AROS_LDA(int, nid, D0),
    AROS_LDA(int, type, D1),
    AROS_LDA(const unsigned char *, bytes, A1),
    AROS_LDA(int, len, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int,PKCS12_add1_attr_by_txt,
    AROS_LDA(PKCS12_SAFEBAG *, bag, A0),
    AROS_LDA(const char *, attrname, A1),
    AROS_LDA(int, type, D0),
    AROS_LDA(const unsigned char *, bytes, A2),
    AROS_LDA(int, len, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(void *,PKCS12_create_ex2_amiga_2,
    AROS_LDA(int, iter, D0),
    AROS_LDA(int, mac_iter, D1),
    AROS_LDA(int, keytype, D2),
    AROS_LDA(OSSL_LIB_CTX *, ctx, A1),
    AROS_LDA(const char *, propq, A2),
    AROS_LDA(PKCS12_create_cb *, cb, A3),
    AROS_LDA(void *, cbarg, D3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(PKCS8_PRIV_KEY_INFO *,PKCS12_decrypt_skey_ex,
    AROS_LDA(const PKCS12_SAFEBAG *, bag, A0),
    AROS_LDA(const char *, pass, A1),
    AROS_LDA(int, passlen, D0),
    AROS_LDA(OSSL_LIB_CTX *, ctx, A2),
    AROS_LDA(const char *, propq, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(PKCS12 *,PKCS12_init_ex,
    AROS_LDA(int, mode, D0),
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    AROS_LDA(const char *, propq, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD8(void *,PKCS12_item_decrypt_d2i_ex,
    AROS_LDA(const X509_ALGOR *, algor, A0),
    AROS_LDA(const ASN1_ITEM *, it, A1),
    AROS_LDA(const char *, pass, A2),
    AROS_LDA(int, passlen, D0),
    AROS_LDA(const ASN1_OCTET_STRING *, oct, A3),
    AROS_LDA(int, zbuf, D1),
    AROS_LDA(OSSL_LIB_CTX *, libctx, D2),
    AROS_LDA(const char *, propq, D3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD8(ASN1_OCTET_STRING *,PKCS12_item_i2d_encrypt_ex,
    AROS_LDA(X509_ALGOR *, algor, A0),
    AROS_LDA(const ASN1_ITEM *, it, A1),
    AROS_LDA(const char *, pass, A2),
    AROS_LDA(int, passlen, D0),
    AROS_LDA(void *, obj, A3),
    AROS_LDA(int, zbuf, D1),
    AROS_LDA(OSSL_LIB_CTX *, ctx, D2),
    AROS_LDA(const char *, propq, D3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD11(int,PKCS12_key_gen_asc_ex,
    AROS_LDA(const char *, pass, A0),
    AROS_LDA(int, passlen, D0),
    AROS_LDA(unsigned char *, salt, A1),
    AROS_LDA(int, saltlen, D1),
    AROS_LDA(int, id, D2),
    AROS_LDA(int, iter, D3),
    AROS_LDA(int, n, D4),
    AROS_LDA(unsigned char *, out, A2),
    AROS_LDA(const EVP_MD *, md_type, A3),
    AROS_LDA(OSSL_LIB_CTX *, ctx, D5),
    AROS_LDA(const char *, propq, D6),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD11(int,PKCS12_key_gen_uni_ex,
    AROS_LDA(unsigned char *, pass, A0),
    AROS_LDA(int, passlen, D0),
    AROS_LDA(unsigned char *, salt, A1),
    AROS_LDA(int, saltlen, D1),
    AROS_LDA(int, id, D2),
    AROS_LDA(int, iter, D3),
    AROS_LDA(int, n, D4),
    AROS_LDA(unsigned char *, out, A2),
    AROS_LDA(const EVP_MD *, md_type, A3),
    AROS_LDA(OSSL_LIB_CTX *, ctx, D5),
    AROS_LDA(const char *, propq, D6),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD11(int,PKCS12_key_gen_utf8_ex,
    AROS_LDA(const char *, pass, A0),
    AROS_LDA(int, passlen, D0),
    AROS_LDA(unsigned char *, salt, A1),
    AROS_LDA(int, saltlen, D1),
    AROS_LDA(int, id, D2),
    AROS_LDA(int, iter, D3),
    AROS_LDA(int, n, D4),
    AROS_LDA(unsigned char *, out, A2),
    AROS_LDA(const EVP_MD *, md_type, A3),
    AROS_LDA(OSSL_LIB_CTX *, ctx, D5),
    AROS_LDA(const char *, propq, D6),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD10(unsigned char *,PKCS12_pbe_crypt_ex,
    AROS_LDA(const X509_ALGOR *, algor, A0),
    AROS_LDA(const char *, pass, A1),
    AROS_LDA(int, passlen, D0),
    AROS_LDA(const unsigned char *, in, A2),
    AROS_LDA(int, inlen, D1),
    AROS_LDA(unsigned char **, data, A3),
    AROS_LDA(int *, datalen, D2),
    AROS_LDA(int, en_de, D3),
    AROS_LDA(OSSL_LIB_CTX *, libctx, D4),
    AROS_LDA(const char *, propq, D5),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD8(int,PKCS12_set_pbmac1_pbkdf2,
    AROS_LDA(PKCS12 *, p12, A0),
    AROS_LDA(const char *, pass, A1),
    AROS_LDA(int, passlen, D0),
    AROS_LDA(unsigned char *, salt, A2),
    AROS_LDA(int, saltlen, D1),
    AROS_LDA(int, iter, D2),
    AROS_LDA(const EVP_MD *, md_type, A3),
    AROS_LDA(const char *, prf_md_name, D3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD9(int,PKCS5_PBE_keyivgen_ex,
    AROS_LDA(EVP_CIPHER_CTX *, cctx, A0),
    AROS_LDA(const char *, pass, A1),
    AROS_LDA(int, passlen, D0),
    AROS_LDA(ASN1_TYPE *, param, A2),
    AROS_LDA(const EVP_CIPHER *, cipher, A3),
    AROS_LDA(const EVP_MD *, md, D1),
    AROS_LDA(int, en_de, D2),
    AROS_LDA(OSSL_LIB_CTX *, libctx, D3),
    AROS_LDA(const char *, propq, D4),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(X509_ALGOR *,PKCS5_pbe2_set_iv_ex,
    AROS_LDA(const EVP_CIPHER *, cipher, A0),
    AROS_LDA(int, iter, D0),
    AROS_LDA(unsigned char *, salt, A1),
    AROS_LDA(int, saltlen, D1),
    AROS_LDA(unsigned char *, aiv, A2),
    AROS_LDA(int, prf_nid, D2),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int,PKCS5_pbe_set0_algor_ex,
    AROS_LDA(X509_ALGOR *, algor, A0),
    AROS_LDA(int, alg, D0),
    AROS_LDA(int, iter, D1),
    AROS_LDA(const unsigned char *, salt, A1),
    AROS_LDA(int, saltlen, D2),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(X509_ALGOR *,PKCS5_pbe_set_ex,
    AROS_LDA(int, alg, D0),
    AROS_LDA(int, iter, D1),
    AROS_LDA(const unsigned char *, salt, A0),
    AROS_LDA(int, saltlen, D2),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(X509_ALGOR *,PKCS5_pbkdf2_set_ex,
    AROS_LDA(int, iter, D0),
    AROS_LDA(unsigned char *, salt, A0),
    AROS_LDA(int, saltlen, D1),
    AROS_LDA(int, prf_nid, D2),
    AROS_LDA(int, keylen, D3),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD9(int,PKCS5_v2_PBE_keyivgen_ex,
    AROS_LDA(EVP_CIPHER_CTX *, ctx, A0),
    AROS_LDA(const char *, pass, A1),
    AROS_LDA(int, passlen, D0),
    AROS_LDA(ASN1_TYPE *, param, A2),
    AROS_LDA(const EVP_CIPHER *, cipher, A3),
    AROS_LDA(const EVP_MD *, md, D1),
    AROS_LDA(int, en_de, D2),
    AROS_LDA(OSSL_LIB_CTX *, libctx, D3),
    AROS_LDA(const char *, propq, D4),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD9(int,PKCS5_v2_scrypt_keyivgen_ex,
    AROS_LDA(EVP_CIPHER_CTX *, ctx, A0),
    AROS_LDA(const char *, pass, A1),
    AROS_LDA(int, passlen, D0),
    AROS_LDA(ASN1_TYPE *, param, A2),
    AROS_LDA(const EVP_CIPHER *, c, A3),
    AROS_LDA(const EVP_MD *, md, D1),
    AROS_LDA(int, en_de, D2),
    AROS_LDA(OSSL_LIB_CTX *, libctx, D3),
    AROS_LDA(const char *, propq, D4),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ASN1_OCTET_STRING *,PKCS7_get_octet_string,
    AROS_LDA(PKCS7 *, p7, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(PKCS7 *,PKCS7_new_ex,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, propq, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,PKCS7_type_is_other,
    AROS_LDA(PKCS7 *, p7, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(PKCS8_PRIV_KEY_INFO *,PKCS8_decrypt_ex,
    AROS_LDA(const X509_SIG *, p8, A0),
    AROS_LDA(const char *, pass, A1),
    AROS_LDA(int, passlen, D0),
    AROS_LDA(OSSL_LIB_CTX *, ctx, A2),
    AROS_LDA(const char *, propq, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD10(X509_SIG *,PKCS8_encrypt_ex,
    AROS_LDA(int, pbe_nid, D0),
    AROS_LDA(const EVP_CIPHER *, cipher, A0),
    AROS_LDA(const char *, pass, A1),
    AROS_LDA(int, passlen, D1),
    AROS_LDA(unsigned char *, salt, A2),
    AROS_LDA(int, saltlen, D2),
    AROS_LDA(int, iter, D3),
    AROS_LDA(PKCS8_PRIV_KEY_INFO *, p8, A3),
    AROS_LDA(OSSL_LIB_CTX *, ctx, D4),
    AROS_LDA(const char *, propq, D5),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,PKCS8_pkey_add1_attr,
    AROS_LDA(PKCS8_PRIV_KEY_INFO *, p8, A0),
    AROS_LDA(X509_ATTRIBUTE *, attr, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int,PKCS8_pkey_add1_attr_by_OBJ,
    AROS_LDA(PKCS8_PRIV_KEY_INFO *, p8, A0),
    AROS_LDA(const ASN1_OBJECT *, obj, A1),
    AROS_LDA(int, type, D0),
    AROS_LDA(const unsigned char *, bytes, A2),
    AROS_LDA(int, len, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(X509_SIG *,PKCS8_set0_pbe_ex,
    AROS_LDA(const char *, pass, A0),
    AROS_LDA(int, passlen, D0),
    AROS_LDA(PKCS8_PRIV_KEY_INFO *, p8inf, A1),
    AROS_LDA(X509_ALGOR *, pbe, A2),
    AROS_LDA(OSSL_LIB_CTX *, ctx, A3),
    AROS_LDA(const char *, propq, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int,RAND_bytes_ex,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    AROS_LDA(unsigned char *, buf, A1),
    AROS_LDA(size_t, num, D0),
    AROS_LDA(unsigned int, strength, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(EVP_RAND_CTX *,RAND_get0_primary,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(EVP_RAND_CTX *,RAND_get0_private,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(EVP_RAND_CTX *,RAND_get0_public,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int,RAND_priv_bytes_ex,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    AROS_LDA(unsigned char *, buf, A1),
    AROS_LDA(size_t, num, D0),
    AROS_LDA(unsigned int, strength, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,RAND_set0_private,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    AROS_LDA(EVP_RAND_CTX *, rand, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,RAND_set0_public,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    AROS_LDA(EVP_RAND_CTX *, rand, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,RAND_set1_random_provider,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    AROS_LDA(OSSL_PROVIDER *, p, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int,RAND_set_DRBG_type,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    AROS_LDA(const char *, drbg, A1),
    AROS_LDA(const char *, propq, A2),
    AROS_LDA(const char *, cipher, A3),
    AROS_LDA(const char *, digest, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,RAND_set_seed_source_type,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    AROS_LDA(const char *, seed, A1),
    AROS_LDA(const char *, propq, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(RSA_PSS_PARAMS *,RSA_PSS_PARAMS_dup,
    AROS_LDA(const RSA_PSS_PARAMS *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(ASN1_VALUE *,SMIME_read_ASN1_ex,
    AROS_LDA(BIO *, bio, A0),
    AROS_LDA(int, flags, D0),
    AROS_LDA(BIO **, bcont, A1),
    AROS_LDA(const ASN1_ITEM *, it, A2),
    AROS_LDA(ASN1_VALUE **, x, A3),
    AROS_LDA(OSSL_LIB_CTX *, libctx, D1),
    AROS_LDA(const char *, propq, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(CMS_ContentInfo *,SMIME_read_CMS_ex,
    AROS_LDA(BIO *, bio, A0),
    AROS_LDA(int, flags, D0),
    AROS_LDA(BIO **, bcont, A1),
    AROS_LDA(CMS_ContentInfo **, ci, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(PKCS7 *,SMIME_read_PKCS7_ex,
    AROS_LDA(BIO *, bio, A0),
    AROS_LDA(BIO **, bcont, A1),
    AROS_LDA(PKCS7 **, p7, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(BIGNUM *,SRP_Calc_B_ex,
    AROS_LDA(const BIGNUM *, b, A0),
    AROS_LDA(const BIGNUM *, N, A1),
    AROS_LDA(const BIGNUM *, g, A2),
    AROS_LDA(const BIGNUM *, v, A3),
    AROS_LDA(OSSL_LIB_CTX *, libctx, D0),
    AROS_LDA(const char *, propq, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD8(BIGNUM *,SRP_Calc_client_key_ex,
    AROS_LDA(const BIGNUM *, N, A0),
    AROS_LDA(const BIGNUM *, B, A1),
    AROS_LDA(const BIGNUM *, g, A2),
    AROS_LDA(const BIGNUM *, x, A3),
    AROS_LDA(const BIGNUM *, a, D0),
    AROS_LDA(const BIGNUM *, u, D1),
    AROS_LDA(OSSL_LIB_CTX *, libctx, D2),
    AROS_LDA(const char *, propq, D3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(BIGNUM *,SRP_Calc_u_ex,
    AROS_LDA(const BIGNUM *, A, A0),
    AROS_LDA(const BIGNUM *, B, A1),
    AROS_LDA(const BIGNUM *, N, A2),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A3),
    AROS_LDA(const char *, propq, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(BIGNUM *,SRP_Calc_x_ex,
    AROS_LDA(const BIGNUM *, s, A0),
    AROS_LDA(const char *, user, A1),
    AROS_LDA(const char *, pass, A2),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A3),
    AROS_LDA(const char *, propq, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD8(int,SRP_create_verifier_BN_ex,
    AROS_LDA(const char *, user, A0),
    AROS_LDA(const char *, pass, A1),
    AROS_LDA(BIGNUM **, salt, A2),
    AROS_LDA(BIGNUM **, verifier, A3),
    AROS_LDA(const BIGNUM *, N, D0),
    AROS_LDA(const BIGNUM *, g, D1),
    AROS_LDA(OSSL_LIB_CTX *, libctx, D2),
    AROS_LDA(const char *, propq, D3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD8(char *,SRP_create_verifier_ex,
    AROS_LDA(const char *, user, A0),
    AROS_LDA(const char *, pass, A1),
    AROS_LDA(char **, salt, A2),
    AROS_LDA(char **, verifier, A3),
    AROS_LDA(const char *, N, D0),
    AROS_LDA(const char *, g, D1),
    AROS_LDA(OSSL_LIB_CTX *, libctx, D2),
    AROS_LDA(const char *, propq, D3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,SSL_CTX_compress_certs,
    AROS_LDA(SSL_CTX *, ctx, A0),
    AROS_LDA(int, alg, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void,SSL_CTX_flush_sessions_ex,
    AROS_LDA(SSL_CTX *, ctx, A0),
    AROS_LDA(time_t, tm, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,SSL_CTX_get0_client_cert_type,
    AROS_LDA(const SSL_CTX *, ctx, A0),
    AROS_LDA(unsigned char **, t, A1),
    AROS_LDA(size_t *, len, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,SSL_CTX_get0_server_cert_type,
    AROS_LDA(const SSL_CTX *, s, A0),
    AROS_LDA(unsigned char **, t, A1),
    AROS_LDA(size_t *, len, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(size_t,SSL_CTX_get1_compressed_cert,
    AROS_LDA(SSL_CTX *, ctx, A0),
    AROS_LDA(int, alg, D0),
    AROS_LDA(unsigned char **, data, A1),
    AROS_LDA(size_t *, orig_len, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,SSL_CTX_get_domain_flags,
    AROS_LDA(const SSL_CTX *, ctx, A0),
    AROS_LDA(uint64_t *, domain_flags, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,SSL_CTX_set1_cert_comp_preference,
    AROS_LDA(SSL_CTX *, ctx, A0),
    AROS_LDA(int *, algs, A1),
    AROS_LDA(size_t, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,SSL_CTX_set1_client_cert_type,
    AROS_LDA(SSL_CTX *, ctx, A0),
    AROS_LDA(const unsigned char *, val, A1),
    AROS_LDA(size_t, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int,SSL_CTX_set1_compressed_cert,
    AROS_LDA(SSL_CTX *, ctx, A0),
    AROS_LDA(int, algorithm, D0),
    AROS_LDA(unsigned char *, comp_data, A1),
    AROS_LDA(size_t, comp_length, D1),
    AROS_LDA(size_t, orig_length, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,SSL_CTX_set1_server_cert_type,
    AROS_LDA(SSL_CTX *, ctx, A0),
    AROS_LDA(const unsigned char *, val, A1),
    AROS_LDA(size_t, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,SSL_CTX_set_block_padding_ex,
    AROS_LDA(SSL_CTX *, ctx, A0),
    AROS_LDA(size_t, app_block_size, D0),
    AROS_LDA(size_t, hs_block_size, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,SSL_CTX_set_domain_flags,
    AROS_LDA(SSL_CTX *, ctx, A0),
    AROS_LDA(uint64_t, domain_flags, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void,SSL_CTX_set_new_pending_conn_cb,
    AROS_LDA(SSL_CTX *, c, A0),
    AROS_LDA(SSL_new_pending_conn_cb_fn, cb, A1),
    AROS_LDA(void *, arg, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(EVP_PKEY *,SSL_SESSION_get0_peer_rpk,
    AROS_LDA(SSL_SESSION *, s, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(time_t,SSL_SESSION_get_time_ex,
    AROS_LDA(const SSL_SESSION *, s, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(time_t,SSL_SESSION_set_time_ex,
    AROS_LDA(SSL_SESSION *, s, A0),
    AROS_LDA(time_t, t, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(SSL *,SSL_accept_connection,
    AROS_LDA(SSL *, ssl, A0),
    AROS_LDA(uint64_t, flags, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(SSL *,SSL_accept_stream,
    AROS_LDA(SSL *, s, A0),
    AROS_LDA(uint64_t, flags, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,SSL_add_expected_rpk,
    AROS_LDA(SSL *, s, A0),
    AROS_LDA(EVP_PKEY *, rpk, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,SSL_client_hello_get_extension_order,
    AROS_LDA(SSL *, s, A0),
    AROS_LDA(uint16_t *, exts, A1),
    AROS_LDA(size_t *, num_exts, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,SSL_compress_certs,
    AROS_LDA(SSL *, ssl, A0),
    AROS_LDA(int, alg, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,SSL_get0_client_cert_type,
    AROS_LDA(const SSL *, s, A0),
    AROS_LDA(unsigned char **, t, A1),
    AROS_LDA(size_t *, len, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(SSL *,SSL_get0_connection,
    AROS_LDA(SSL *, s, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(SSL *,SSL_get0_domain,
    AROS_LDA(SSL *, s, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const char *,SSL_get0_group_name,
    AROS_LDA(SSL *, s, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(SSL *,SSL_get0_listener,
    AROS_LDA(SSL *, s, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(EVP_PKEY *,SSL_get0_peer_rpk,
    AROS_LDA(const SSL *, s, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,SSL_get0_server_cert_type,
    AROS_LDA(const SSL *, s, A0),
    AROS_LDA(unsigned char **, t, A1),
    AROS_LDA(size_t *, len, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(char *,SSL_get1_builtin_sigalgs,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(size_t,SSL_get1_compressed_cert,
    AROS_LDA(SSL *, ssl, A0),
    AROS_LDA(int, alg, D0),
    AROS_LDA(unsigned char **, data, A1),
    AROS_LDA(size_t *, orig_len, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(size_t,SSL_get_accept_connection_queue_len,
    AROS_LDA(SSL *, ssl, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(size_t,SSL_get_accept_stream_queue_len,
    AROS_LDA(SSL *, s, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,SSL_get_blocking_mode,
    AROS_LDA(SSL *, s, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,SSL_get_conn_close_info,
    AROS_LDA(SSL *, ssl, A0),
    AROS_LDA(SSL_CONN_CLOSE_INFO *, info, A1),
    AROS_LDA(size_t, info_len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,SSL_get_domain_flags,
    AROS_LDA(const SSL *, ssl, A0),
    AROS_LDA(uint64_t *, domain_flags, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,SSL_get_event_timeout,
    AROS_LDA(SSL *, s, A0),
    AROS_LDA(struct timeval *, tv, A1),
    AROS_LDA(int *, is_infinite, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,SSL_get_handshake_rtt,
    AROS_LDA(const SSL *, s, A0),
    AROS_LDA(uint64_t *, rtt, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,SSL_get_negotiated_client_cert_type,
    AROS_LDA(const SSL *, s, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,SSL_get_negotiated_server_cert_type,
    AROS_LDA(const SSL *, s, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,SSL_get_rpoll_descriptor,
    AROS_LDA(SSL *, s, A0),
    AROS_LDA(BIO_POLL_DESCRIPTOR *, desc, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(uint64_t,SSL_get_stream_id,
    AROS_LDA(SSL *, s, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,SSL_get_stream_read_error_code,
    AROS_LDA(SSL *, ssl, A0),
    AROS_LDA(uint64_t *, app_error_code, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,SSL_get_stream_read_state,
    AROS_LDA(SSL *, ssl, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,SSL_get_stream_type,
    AROS_LDA(SSL *, s, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,SSL_get_stream_write_error_code,
    AROS_LDA(SSL *, ssl, A0),
    AROS_LDA(uint64_t *, app_error_code, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,SSL_get_stream_write_state,
    AROS_LDA(SSL *, ssl, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int,SSL_get_value_uint,
    AROS_LDA(SSL *, s, A0),
    AROS_LDA(uint32_t, class_, D0),
    AROS_LDA(uint32_t, id, D1),
    AROS_LDA(uint64_t *, v, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,SSL_get_wpoll_descriptor,
    AROS_LDA(SSL *, s, A0),
    AROS_LDA(BIO_POLL_DESCRIPTOR *, desc, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,SSL_handle_events,
    AROS_LDA(SSL *, s, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int,SSL_inject_net_dgram,
    AROS_LDA(SSL *, s, A0),
    AROS_LDA(const unsigned char *, buf, A1),
    AROS_LDA(size_t, buf_len, D0),
    AROS_LDA(const BIO_ADDR *, peer, A2),
    AROS_LDA(const BIO_ADDR *, local, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,SSL_is_connection,
    AROS_LDA(SSL *, s, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,SSL_is_domain,
    AROS_LDA(SSL *, s, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,SSL_is_listener,
    AROS_LDA(SSL *, ssl, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,SSL_is_quic,
    AROS_LDA(const SSL *, s, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,SSL_is_stream_local,
    AROS_LDA(SSL *, s, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,SSL_is_tls,
    AROS_LDA(const SSL *, s, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,SSL_listen,
    AROS_LDA(SSL *, ssl, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,SSL_net_read_desired,
    AROS_LDA(SSL *, s, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,SSL_net_write_desired,
    AROS_LDA(SSL *, s, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(SSL *,SSL_new_domain,
    AROS_LDA(SSL_CTX *, ctx, A0),
    AROS_LDA(uint64_t, flags, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(SSL *,SSL_new_from_listener,
    AROS_LDA(SSL *, ssl, A0),
    AROS_LDA(uint64_t, flags, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(SSL *,SSL_new_listener,
    AROS_LDA(SSL_CTX *, ctx, A0),
    AROS_LDA(uint64_t, flags, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(SSL *,SSL_new_listener_from,
    AROS_LDA(SSL *, ssl, A0),
    AROS_LDA(uint64_t, flags, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(SSL *,SSL_new_stream,
    AROS_LDA(SSL *, s, A0),
    AROS_LDA(uint64_t, flags, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int,SSL_poll,
    AROS_LDA(SSL_POLL_ITEM *, items, A0),
    AROS_LDA(size_t, num_items, D0),
    AROS_LDA(size_t, stride, D1),
    AROS_LDA(const struct timeval *, timeout, A1),
    AROS_LDA(uint64_t, flags, D2),
    AROS_LDA(size_t *, result_count, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,SSL_set1_cert_comp_preference,
    AROS_LDA(SSL *, ssl, A0),
    AROS_LDA(int *, algs, A1),
    AROS_LDA(size_t, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,SSL_set1_client_cert_type,
    AROS_LDA(SSL *, s, A0),
    AROS_LDA(const unsigned char *, val, A1),
    AROS_LDA(size_t, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int,SSL_set1_compressed_cert,
    AROS_LDA(SSL *, ssl, A0),
    AROS_LDA(int, algorithm, D0),
    AROS_LDA(unsigned char *, comp_data, A1),
    AROS_LDA(size_t, comp_length, D1),
    AROS_LDA(size_t, orig_length, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,SSL_set1_initial_peer_addr,
    AROS_LDA(SSL *, s, A0),
    AROS_LDA(const BIO_ADDR *, peer_addr, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,SSL_set1_server_cert_type,
    AROS_LDA(SSL *, s, A0),
    AROS_LDA(const unsigned char *, val, A1),
    AROS_LDA(size_t, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,SSL_set_block_padding_ex,
    AROS_LDA(SSL *, ssl, A0),
    AROS_LDA(size_t, app_block_size, D0),
    AROS_LDA(size_t, hs_block_size, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,SSL_set_blocking_mode,
    AROS_LDA(SSL *, s, A0),
    AROS_LDA(int, blocking, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,SSL_set_default_stream_mode,
    AROS_LDA(SSL *, s, A0),
    AROS_LDA(uint32_t, mode, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,SSL_set_incoming_stream_policy,
    AROS_LDA(SSL *, s, A0),
    AROS_LDA(int, policy, D2),
    AROS_LDA(uint64_t, aec, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,SSL_set_quic_tls_cbs,
    AROS_LDA(SSL *, s, A0),
    AROS_LDA(const OSSL_DISPATCH *, qtdis, A1),
    AROS_LDA(void *, arg, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,SSL_set_quic_tls_early_data_enabled,
    AROS_LDA(SSL *, s, A0),
    AROS_LDA(int, enabled, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,SSL_set_quic_tls_transport_params,
    AROS_LDA(SSL *, s, A0),
    AROS_LDA(const unsigned char *, params, A1),
    AROS_LDA(size_t, params_len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int,SSL_set_value_uint,
    AROS_LDA(SSL *, s, A0),
    AROS_LDA(uint32_t, class_, D0),
    AROS_LDA(uint32_t, id, D1),
    AROS_LDA(uint64_t, v, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int,SSL_shutdown_ex,
    AROS_LDA(SSL *, ssl, A0),
    AROS_LDA(uint64_t, flags, D0),
    AROS_LDA(const SSL_SHUTDOWN_EX_ARGS *, args, A1),
    AROS_LDA(size_t, args_len, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,SSL_stream_conclude,
    AROS_LDA(SSL *, ssl, A0),
    AROS_LDA(uint64_t, flags, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,SSL_stream_reset,
    AROS_LDA(SSL *, ssl, A0),
    AROS_LDA(const SSL_STREAM_RESET_ARGS *, args, A1),
    AROS_LDA(size_t, args_len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int,SSL_write_ex2,
    AROS_LDA(SSL *, s, A0),
    AROS_LDA(const void *, buf, A1),
    AROS_LDA(size_t, num, D2),
    AROS_LDA(uint64_t, flags, D0),
    AROS_LDA(size_t *, written, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(TS_RESP_CTX *,TS_RESP_CTX_new_ex,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, propq, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,TS_VERIFY_CTX_set0_data,
    AROS_LDA(TS_VERIFY_CTX *, ctx, A0),
    AROS_LDA(BIO *, b, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,TS_VERIFY_CTX_set0_imprint,
    AROS_LDA(TS_VERIFY_CTX *, ctx, A0),
    AROS_LDA(unsigned char *, hexstr, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,TS_VERIFY_CTX_set0_store,
    AROS_LDA(TS_VERIFY_CTX *, ctx, A0),
    AROS_LDA(X509_STORE *, s, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,X509V3_set_issuer_pkey,
    AROS_LDA(X509V3_CTX *, ctx, A0),
    AROS_LDA(EVP_PKEY *, pkey, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,X509_ACERT_INFO_free,
    AROS_LDA(X509_ACERT_INFO *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM *,X509_ACERT_INFO_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(X509_ACERT_INFO *,X509_ACERT_INFO_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,X509_ACERT_ISSUER_V2FORM_free,
    AROS_LDA(X509_ACERT_ISSUER_V2FORM *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(X509_ACERT_ISSUER_V2FORM *,X509_ACERT_ISSUER_V2FORM_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,X509_ACERT_add1_attr,
    AROS_LDA(X509_ACERT *, x, A0),
    AROS_LDA(X509_ATTRIBUTE *, attr, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int,X509_ACERT_add1_attr_by_NID,
    AROS_LDA(X509_ACERT *, x, A0),
    AROS_LDA(int, nid, D0),
    AROS_LDA(int, type, D1),
    AROS_LDA(const void *, bytes, A1),
    AROS_LDA(int, len, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int,X509_ACERT_add1_attr_by_OBJ,
    AROS_LDA(X509_ACERT *, x, A0),
    AROS_LDA(const ASN1_OBJECT *, obj, A1),
    AROS_LDA(int, type, D0),
    AROS_LDA(const void *, bytes, A2),
    AROS_LDA(int, len, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int,X509_ACERT_add1_attr_by_txt,
    AROS_LDA(X509_ACERT *, x, A0),
    AROS_LDA(const char *, attrname, A1),
    AROS_LDA(int, type, D0),
    AROS_LDA(const unsigned char *, bytes, A2),
    AROS_LDA(int, len, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int,X509_ACERT_add1_ext_i2d,
    AROS_LDA(X509_ACERT *, x, A0),
    AROS_LDA(int, nid, D0),
    AROS_LDA(void *, value, A1),
    AROS_LDA(int, crit, D1),
    AROS_LDA(unsigned long, flags, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,X509_ACERT_add_attr_nconf,
    AROS_LDA(CONF *, conf, A0),
    AROS_LDA(const char *, section, A1),
    AROS_LDA(X509_ACERT *, acert, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(X509_ATTRIBUTE *,X509_ACERT_delete_attr,
    AROS_LDA(X509_ACERT *, x, A0),
    AROS_LDA(int, loc, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_ACERT *,X509_ACERT_dup,
    AROS_LDA(const X509_ACERT *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(void,X509_ACERT_free,
    AROS_LDA(X509_ACERT *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const struct stack_st_X509_EXTENSION *,X509_ACERT_get0_extensions,
    AROS_LDA(const X509_ACERT *, x, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_ISSUER_SERIAL *,X509_ACERT_get0_holder_baseCertId,
    AROS_LDA(const X509_ACERT *, x, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const OSSL_OBJECT_DIGEST_INFO *,X509_ACERT_get0_holder_digest,
    AROS_LDA(const X509_ACERT *, x, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const GENERAL_NAMES *,X509_ACERT_get0_holder_entityName,
    AROS_LDA(const X509_ACERT *, x, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const X509_ALGOR *,X509_ACERT_get0_info_sigalg,
    AROS_LDA(const X509_ACERT *, x, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const X509_NAME *,X509_ACERT_get0_issuerName,
    AROS_LDA(const X509_ACERT *, x, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const ASN1_BIT_STRING *,X509_ACERT_get0_issuerUID,
    AROS_LDA(const X509_ACERT *, x, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const ASN1_TIME *,X509_ACERT_get0_notAfter,
    AROS_LDA(const X509_ACERT *, x, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const ASN1_TIME *,X509_ACERT_get0_notBefore,
    AROS_LDA(const X509_ACERT *, x, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(const ASN1_INTEGER *,X509_ACERT_get0_serialNumber,
    AROS_LDA(const X509_ACERT *, x, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void,X509_ACERT_get0_signature,
    AROS_LDA(const X509_ACERT *, x, A0),
    AROS_LDA(const ASN1_BIT_STRING **, psig, A1),
    AROS_LDA(const X509_ALGOR **, palg, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(X509_ATTRIBUTE *,X509_ACERT_get_attr,
    AROS_LDA(const X509_ACERT *, x, A0),
    AROS_LDA(int, loc, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,X509_ACERT_get_attr_by_NID,
    AROS_LDA(const X509_ACERT *, x, A0),
    AROS_LDA(int, nid, D0),
    AROS_LDA(int, lastpos, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,X509_ACERT_get_attr_by_OBJ,
    AROS_LDA(const X509_ACERT *, x, A0),
    AROS_LDA(const ASN1_OBJECT *, obj, A1),
    AROS_LDA(int, lastpos, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,X509_ACERT_get_attr_count,
    AROS_LDA(const X509_ACERT *, x, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(void *,X509_ACERT_get_ext_d2i,
    AROS_LDA(const X509_ACERT *, x, A0),
    AROS_LDA(int, nid, D0),
    AROS_LDA(int *, crit, A1),
    AROS_LDA(int *, idx, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,X509_ACERT_get_signature_nid,
    AROS_LDA(const X509_ACERT *, x, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(long,X509_ACERT_get_version,
    AROS_LDA(const X509_ACERT *, x, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(const ASN1_ITEM *,X509_ACERT_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(X509_ACERT *,X509_ACERT_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,X509_ACERT_print,
    AROS_LDA(BIO *, bp, A0),
    AROS_LDA(X509_ACERT *, x, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int,X509_ACERT_print_ex,
    AROS_LDA(BIO *, bp, A0),
    AROS_LDA(X509_ACERT *, x, A1),
    AROS_LDA(unsigned long, nmflags, D0),
    AROS_LDA(unsigned long, cflag, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void,X509_ACERT_set0_holder_baseCertId,
    AROS_LDA(X509_ACERT *, x, A0),
    AROS_LDA(OSSL_ISSUER_SERIAL *, isss, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void,X509_ACERT_set0_holder_digest,
    AROS_LDA(X509_ACERT *, x, A0),
    AROS_LDA(OSSL_OBJECT_DIGEST_INFO *, dinfo, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void,X509_ACERT_set0_holder_entityName,
    AROS_LDA(X509_ACERT *, x, A0),
    AROS_LDA(GENERAL_NAMES *, name, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,X509_ACERT_set1_issuerName,
    AROS_LDA(X509_ACERT *, x, A0),
    AROS_LDA(const X509_NAME *, name, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,X509_ACERT_set1_notAfter,
    AROS_LDA(X509_ACERT *, x, A0),
    AROS_LDA(const ASN1_GENERALIZEDTIME *, time, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,X509_ACERT_set1_notBefore,
    AROS_LDA(X509_ACERT *, x, A0),
    AROS_LDA(const ASN1_GENERALIZEDTIME *, time, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,X509_ACERT_set1_serialNumber,
    AROS_LDA(X509_ACERT *, x, A0),
    AROS_LDA(const ASN1_INTEGER *, serial, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,X509_ACERT_set_version,
    AROS_LDA(X509_ACERT *, x, A0),
    AROS_LDA(long, version, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,X509_ACERT_sign,
    AROS_LDA(X509_ACERT *, x, A0),
    AROS_LDA(EVP_PKEY *, pkey, A1),
    AROS_LDA(const EVP_MD *, md, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,X509_ACERT_sign_ctx,
    AROS_LDA(X509_ACERT *, x, A0),
    AROS_LDA(EVP_MD_CTX *, ctx, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,X509_ACERT_verify,
    AROS_LDA(X509_ACERT *, a, A0),
    AROS_LDA(EVP_PKEY *, r, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(X509_CRL *,X509_CRL_new_ex,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, propq, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(int,X509_LOOKUP_by_subject_ex,
    AROS_LDA(X509_LOOKUP *, ctx, A0),
    AROS_LDA(X509_LOOKUP_TYPE, type, D0),
    AROS_LDA(const X509_NAME *, name, A1),
    AROS_LDA(X509_OBJECT *, ret, A2),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A3),
    AROS_LDA(const char *, propq, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(int,X509_LOOKUP_ctrl_ex,
    AROS_LDA(X509_LOOKUP *, ctx, A0),
    AROS_LDA(int, cmd, D0),
    AROS_LDA(const char *, argc, A1),
    AROS_LDA(long, argl, D1),
    AROS_LDA(char **, ret, A2),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A3),
    AROS_LDA(const char *, propq, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(X509_LOOKUP_METHOD *,X509_LOOKUP_store,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(X509_PUBKEY *,X509_PUBKEY_dup,
    AROS_LDA(const X509_PUBKEY *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,X509_PUBKEY_eq,
    AROS_LDA(const X509_PUBKEY *, a, A0),
    AROS_LDA(const X509_PUBKEY *, b, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(X509_PUBKEY *,X509_PUBKEY_new_ex,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, propq, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(void,X509_PUBKEY_set0_public_key,
    AROS_LDA(X509_PUBKEY *, pub, A0),
    AROS_LDA(unsigned char *, penc, A1),
    AROS_LDA(int, penclen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,X509_PURPOSE_get_unused_id,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ASN1_OCTET_STRING *,X509_REQ_get0_distinguishing_id,
    AROS_LDA(X509_REQ *, x, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(X509_REQ *,X509_REQ_new_ex,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, propq, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void,X509_REQ_set0_distinguishing_id,
    AROS_LDA(X509_REQ *, x, A0),
    AROS_LDA(ASN1_OCTET_STRING *, d_id, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int,X509_REQ_verify_ex,
    AROS_LDA(X509_REQ *, a, A0),
    AROS_LDA(EVP_PKEY *, r, A1),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A2),
    AROS_LDA(const char *, propq, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(EVP_PKEY *,X509_STORE_CTX_get0_rpk,
    AROS_LDA(const X509_STORE_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,X509_STORE_CTX_init_rpk,
    AROS_LDA(X509_STORE_CTX *, ctx, A0),
    AROS_LDA(X509_STORE *, trust_store, A1),
    AROS_LDA(EVP_PKEY*, rpk, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(X509_STORE_CTX *,X509_STORE_CTX_new_ex,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, propq, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,X509_STORE_CTX_print_verify_cb,
    AROS_LDA(int, ok, D0),
    AROS_LDA(X509_STORE_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void,X509_STORE_CTX_set0_rpk,
    AROS_LDA(X509_STORE_CTX *, ctx, A0),
    AROS_LDA(EVP_PKEY *, target, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void,X509_STORE_CTX_set_current_reasons,
    AROS_LDA(X509_STORE_CTX *, ctx, A0),
    AROS_LDA(unsigned int, current_reasons, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void,X509_STORE_CTX_set_get_crl,
    AROS_LDA(X509_STORE_CTX *, ctx, A0),
    AROS_LDA(X509_STORE_CTX_get_crl_fn, get_crl, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,X509_STORE_CTX_verify,
    AROS_LDA(X509_STORE_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(STACK_OF(X509) *,X509_STORE_get1_all_certs,
    AROS_LDA(X509_STORE *, xs, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(STACK_OF(X509_OBJECT) *,X509_STORE_get1_objects,
    AROS_LDA(X509_STORE *, xs, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,X509_STORE_load_file,
    AROS_LDA(X509_STORE *, xs, A0),
    AROS_LDA(const char *, file, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int,X509_STORE_load_file_ex,
    AROS_LDA(X509_STORE *, xs, A0),
    AROS_LDA(const char *, file, A1),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A2),
    AROS_LDA(const char *, propq, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int,X509_STORE_load_locations_ex,
    AROS_LDA(X509_STORE *, xs, A0),
    AROS_LDA(const char *, file, A1),
    AROS_LDA(const char *, dir, A2),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A3),
    AROS_LDA(const char *, propq, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,X509_STORE_load_path,
    AROS_LDA(X509_STORE *, xs, A0),
    AROS_LDA(const char *, path, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,X509_STORE_load_store,
    AROS_LDA(X509_STORE *, xs, A0),
    AROS_LDA(const char *, store, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(int,X509_STORE_load_store_ex,
    AROS_LDA(X509_STORE *, xs, A0),
    AROS_LDA(const char *, store, A1),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A2),
    AROS_LDA(const char *, propq, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,X509_STORE_set_default_paths_ex,
    AROS_LDA(X509_STORE *, xs, A0),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A1),
    AROS_LDA(const char *, propq, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(char *,X509_VERIFY_PARAM_get0_email,
    AROS_LDA(X509_VERIFY_PARAM *, param, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(char *,X509_VERIFY_PARAM_get0_host,
    AROS_LDA(X509_VERIFY_PARAM *, param, A0),
    AROS_LDA(int, idx, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(char *,X509_VERIFY_PARAM_get1_ip_asc,
    AROS_LDA(X509_VERIFY_PARAM *, param, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(int,X509_VERIFY_PARAM_get_purpose,
    AROS_LDA(const X509_VERIFY_PARAM *, param, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(int,X509_cmp_timeframe,
    AROS_LDA(const X509_VERIFY_PARAM *, vpm, A0),
    AROS_LDA(const ASN1_TIME *, start, A1),
    AROS_LDA(const ASN1_TIME *, end, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(ASN1_OCTET_STRING *,X509_digest_sig,
    AROS_LDA(const X509 *, cert, A0),
    AROS_LDA(EVP_MD **, md_used, A1),
    AROS_LDA(int *, md_is_fallback, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD1(ASN1_OCTET_STRING *,X509_get0_distinguishing_id,
    AROS_LDA(X509 *, x, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int,X509_load_cert_crl_file_ex,
    AROS_LDA(X509_LOOKUP *, ctx, A0),
    AROS_LDA(const char *, file, A1),
    AROS_LDA(int, type, D0),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A2),
    AROS_LDA(const char *, propq, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(int,X509_load_cert_file_ex,
    AROS_LDA(X509_LOOKUP *, ctx, A0),
    AROS_LDA(const char *, file, A1),
    AROS_LDA(int, type, D0),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A2),
    AROS_LDA(const char *, propq, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(X509 *,X509_new_ex,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, propq, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,X509_self_signed,
    AROS_LDA(X509 *, cert, A0),
    AROS_LDA(int, verify_signature, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(void,X509_set0_distinguishing_id,
    AROS_LDA(X509 *, x, A0),
    AROS_LDA(ASN1_OCTET_STRING *, d_id, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(EVP_PKEY *,b2i_PVK_bio_ex,
    AROS_LDA(BIO *, in, A0),
    AROS_LDA(pem_password_cb *, cb, A1),
    AROS_LDA(void *, u, A2),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A3),
    AROS_LDA(const char *, propq, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(EVP_PKEY *,d2i_AutoPrivateKey_ex,
    AROS_LDA(EVP_PKEY **, a, A0),
    AROS_LDA(const unsigned char **, pp, A1),
    AROS_LDA(long, length, D0),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A2),
    AROS_LDA(const char *, propq, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(ISSUER_SIGN_TOOL *,d2i_ISSUER_SIGN_TOOL,
    AROS_LDA(ISSUER_SIGN_TOOL **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(EVP_PKEY *,d2i_KeyParams,
    AROS_LDA(int, type, D0),
    AROS_LDA(EVP_PKEY **, a, A0),
    AROS_LDA(const unsigned char **, pp, A1),
    AROS_LDA(long, length, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(EVP_PKEY *,d2i_KeyParams_bio,
    AROS_LDA(int, type, D0),
    AROS_LDA(EVP_PKEY **, a, A0),
    AROS_LDA(BIO *, in, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_ALLOWED_ATTRIBUTES_CHOICE *,d2i_OSSL_ALLOWED_ATTRIBUTES_CHOICE,
    AROS_LDA(OSSL_ALLOWED_ATTRIBUTES_CHOICE **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_ALLOWED_ATTRIBUTES_ITEM *,d2i_OSSL_ALLOWED_ATTRIBUTES_ITEM,
    AROS_LDA(OSSL_ALLOWED_ATTRIBUTES_ITEM **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_ALLOWED_ATTRIBUTES_SYNTAX *,d2i_OSSL_ALLOWED_ATTRIBUTES_SYNTAX,
    AROS_LDA(OSSL_ALLOWED_ATTRIBUTES_SYNTAX **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_ATAV *,d2i_OSSL_ATAV,
    AROS_LDA(OSSL_ATAV **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_ATTRIBUTES_SYNTAX *,d2i_OSSL_ATTRIBUTES_SYNTAX,
    AROS_LDA(OSSL_ATTRIBUTES_SYNTAX **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_ATTRIBUTE_DESCRIPTOR *,d2i_OSSL_ATTRIBUTE_DESCRIPTOR,
    AROS_LDA(OSSL_ATTRIBUTE_DESCRIPTOR **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_ATTRIBUTE_MAPPING *,d2i_OSSL_ATTRIBUTE_MAPPING,
    AROS_LDA(OSSL_ATTRIBUTE_MAPPING **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_ATTRIBUTE_MAPPINGS *,d2i_OSSL_ATTRIBUTE_MAPPINGS,
    AROS_LDA(OSSL_ATTRIBUTE_MAPPINGS **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_ATTRIBUTE_TYPE_MAPPING *,d2i_OSSL_ATTRIBUTE_TYPE_MAPPING,
    AROS_LDA(OSSL_ATTRIBUTE_TYPE_MAPPING **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_ATTRIBUTE_VALUE_MAPPING *,d2i_OSSL_ATTRIBUTE_VALUE_MAPPING,
    AROS_LDA(OSSL_ATTRIBUTE_VALUE_MAPPING **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX *,d2i_OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX,
    AROS_LDA(OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_BASIC_ATTR_CONSTRAINTS *,d2i_OSSL_BASIC_ATTR_CONSTRAINTS,
    AROS_LDA(OSSL_BASIC_ATTR_CONSTRAINTS **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_CMP_ATAVS *,d2i_OSSL_CMP_ATAVS,
    AROS_LDA(OSSL_CMP_ATAVS **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_CMP_MSG *,d2i_OSSL_CMP_MSG,
    AROS_LDA(OSSL_CMP_MSG **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(OSSL_CMP_MSG *,d2i_OSSL_CMP_MSG_bio,
    AROS_LDA(BIO *, bio, A0),
    AROS_LDA(OSSL_CMP_MSG **, msg, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_CMP_PKIHEADER *,d2i_OSSL_CMP_PKIHEADER,
    AROS_LDA(OSSL_CMP_PKIHEADER **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_CMP_PKISI *,d2i_OSSL_CMP_PKISI,
    AROS_LDA(OSSL_CMP_PKISI **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_CRMF_CERTID *,d2i_OSSL_CRMF_CERTID,
    AROS_LDA(OSSL_CRMF_CERTID **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_CRMF_CERTTEMPLATE *,d2i_OSSL_CRMF_CERTTEMPLATE,
    AROS_LDA(OSSL_CRMF_CERTTEMPLATE **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_CRMF_ENCRYPTEDKEY *,d2i_OSSL_CRMF_ENCRYPTEDKEY,
    AROS_LDA(OSSL_CRMF_ENCRYPTEDKEY **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_CRMF_ENCRYPTEDVALUE *,d2i_OSSL_CRMF_ENCRYPTEDVALUE,
    AROS_LDA(OSSL_CRMF_ENCRYPTEDVALUE **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_CRMF_MSG *,d2i_OSSL_CRMF_MSG,
    AROS_LDA(OSSL_CRMF_MSG **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_CRMF_MSGS *,d2i_OSSL_CRMF_MSGS,
    AROS_LDA(OSSL_CRMF_MSGS **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_CRMF_PBMPARAMETER *,d2i_OSSL_CRMF_PBMPARAMETER,
    AROS_LDA(OSSL_CRMF_PBMPARAMETER **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_CRMF_PKIPUBLICATIONINFO *,d2i_OSSL_CRMF_PKIPUBLICATIONINFO,
    AROS_LDA(OSSL_CRMF_PKIPUBLICATIONINFO **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_CRMF_SINGLEPUBINFO *,d2i_OSSL_CRMF_SINGLEPUBINFO,
    AROS_LDA(OSSL_CRMF_SINGLEPUBINFO **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_DAY_TIME *,d2i_OSSL_DAY_TIME,
    AROS_LDA(OSSL_DAY_TIME **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_DAY_TIME_BAND *,d2i_OSSL_DAY_TIME_BAND,
    AROS_LDA(OSSL_DAY_TIME_BAND **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_HASH *,d2i_OSSL_HASH,
    AROS_LDA(OSSL_HASH **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_IETF_ATTR_SYNTAX *,d2i_OSSL_IETF_ATTR_SYNTAX,
    AROS_LDA(OSSL_IETF_ATTR_SYNTAX **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_INFO_SYNTAX *,d2i_OSSL_INFO_SYNTAX,
    AROS_LDA(OSSL_INFO_SYNTAX **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_INFO_SYNTAX_POINTER *,d2i_OSSL_INFO_SYNTAX_POINTER,
    AROS_LDA(OSSL_INFO_SYNTAX_POINTER **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_NAMED_DAY *,d2i_OSSL_NAMED_DAY,
    AROS_LDA(OSSL_NAMED_DAY **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_PRIVILEGE_POLICY_ID *,d2i_OSSL_PRIVILEGE_POLICY_ID,
    AROS_LDA(OSSL_PRIVILEGE_POLICY_ID **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_ROLE_SPEC_CERT_ID *,d2i_OSSL_ROLE_SPEC_CERT_ID,
    AROS_LDA(OSSL_ROLE_SPEC_CERT_ID **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_ROLE_SPEC_CERT_ID_SYNTAX *,d2i_OSSL_ROLE_SPEC_CERT_ID_SYNTAX,
    AROS_LDA(OSSL_ROLE_SPEC_CERT_ID_SYNTAX **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_TARGET *,d2i_OSSL_TARGET,
    AROS_LDA(OSSL_TARGET **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_TARGETING_INFORMATION *,d2i_OSSL_TARGETING_INFORMATION,
    AROS_LDA(OSSL_TARGETING_INFORMATION **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_TARGETS *,d2i_OSSL_TARGETS,
    AROS_LDA(OSSL_TARGETS **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_TIME_PERIOD *,d2i_OSSL_TIME_PERIOD,
    AROS_LDA(OSSL_TIME_PERIOD **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_TIME_SPEC *,d2i_OSSL_TIME_SPEC,
    AROS_LDA(OSSL_TIME_SPEC **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_TIME_SPEC_ABSOLUTE *,d2i_OSSL_TIME_SPEC_ABSOLUTE,
    AROS_LDA(OSSL_TIME_SPEC_ABSOLUTE **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_TIME_SPEC_DAY *,d2i_OSSL_TIME_SPEC_DAY,
    AROS_LDA(OSSL_TIME_SPEC_DAY **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_TIME_SPEC_MONTH *,d2i_OSSL_TIME_SPEC_MONTH,
    AROS_LDA(OSSL_TIME_SPEC_MONTH **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_TIME_SPEC_TIME *,d2i_OSSL_TIME_SPEC_TIME,
    AROS_LDA(OSSL_TIME_SPEC_TIME **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_TIME_SPEC_WEEKS *,d2i_OSSL_TIME_SPEC_WEEKS,
    AROS_LDA(OSSL_TIME_SPEC_WEEKS **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_TIME_SPEC_X_DAY_OF *,d2i_OSSL_TIME_SPEC_X_DAY_OF,
    AROS_LDA(OSSL_TIME_SPEC_X_DAY_OF **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(OSSL_USER_NOTICE_SYNTAX *,d2i_OSSL_USER_NOTICE_SYNTAX,
    AROS_LDA(OSSL_USER_NOTICE_SYNTAX **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(PBMAC1PARAM *,d2i_PBMAC1PARAM,
    AROS_LDA(PBMAC1PARAM **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(EVP_PKEY *,d2i_PUBKEY_ex,
    AROS_LDA(EVP_PKEY **, a, A0),
    AROS_LDA(const unsigned char **, pp, A1),
    AROS_LDA(long, length, D0),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A2),
    AROS_LDA(const char *, propq, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(EVP_PKEY *,d2i_PUBKEY_ex_bio,
    AROS_LDA(BIO *, bp, A0),
    AROS_LDA(EVP_PKEY **, a, A1),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A2),
    AROS_LDA(const char *, propq, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD6(EVP_PKEY *,d2i_PrivateKey_ex,
    AROS_LDA(int, type, D0),
    AROS_LDA(EVP_PKEY **, a, A0),
    AROS_LDA(const unsigned char **, pp, A1),
    AROS_LDA(long, length, D1),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A2),
    AROS_LDA(const char *, propq, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD4(EVP_PKEY *,d2i_PrivateKey_ex_bio,
    AROS_LDA(BIO *, bp, A0),
    AROS_LDA(EVP_PKEY **, a, A1),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A2),
    AROS_LDA(const char *, propq, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD5(SSL_SESSION *,d2i_SSL_SESSION_ex,
    AROS_LDA(SSL_SESSION **, a, A0),
    AROS_LDA(const unsigned char **, pp, A1),
    AROS_LDA(long, length, D0),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A2),
    AROS_LDA(const char *, propq, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(X509_ACERT *,d2i_X509_ACERT,
    AROS_LDA(X509_ACERT **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(X509_ACERT *,d2i_X509_ACERT_bio,
    AROS_LDA(BIO *, bp, A0),
    AROS_LDA(X509_ACERT **, acert, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(X509_PUBKEY *,d2i_X509_PUBKEY_bio,
    AROS_LDA(BIO *, bp, A0),
    AROS_LDA(X509_PUBKEY **, xpk, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD7(int,i2b_PVK_bio_ex,
    AROS_LDA(BIO *, out, A0),
    AROS_LDA(const EVP_PKEY *, pk, A1),
    AROS_LDA(int, enclevel, D0),
    AROS_LDA(pem_password_cb *, cb, A2),
    AROS_LDA(void *, u, A3),
    AROS_LDA(OSSL_LIB_CTX *, libctx, D1),
    AROS_LDA(const char *, propq, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,i2d_ISSUER_SIGN_TOOL,
    AROS_LDA(const ISSUER_SIGN_TOOL *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,i2d_KeyParams,
    AROS_LDA(const EVP_PKEY *, a, A0),
    AROS_LDA(unsigned char **, pp, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,i2d_KeyParams_bio,
    AROS_LDA(BIO *, bp, A0),
    AROS_LDA(const EVP_PKEY *, pkey, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,i2d_OSSL_ALLOWED_ATTRIBUTES_CHOICE,
    AROS_LDA(const OSSL_ALLOWED_ATTRIBUTES_CHOICE *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,i2d_OSSL_ALLOWED_ATTRIBUTES_ITEM,
    AROS_LDA(const OSSL_ALLOWED_ATTRIBUTES_ITEM *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,i2d_OSSL_ALLOWED_ATTRIBUTES_SYNTAX,
    AROS_LDA(const OSSL_ALLOWED_ATTRIBUTES_SYNTAX *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,i2d_OSSL_ATAV,
    AROS_LDA(const OSSL_ATAV *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,i2d_OSSL_ATTRIBUTES_SYNTAX,
    AROS_LDA(const OSSL_ATTRIBUTES_SYNTAX *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,i2d_OSSL_ATTRIBUTE_DESCRIPTOR,
    AROS_LDA(const OSSL_ATTRIBUTE_DESCRIPTOR *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,i2d_OSSL_ATTRIBUTE_MAPPING,
    AROS_LDA(const OSSL_ATTRIBUTE_MAPPING *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,i2d_OSSL_ATTRIBUTE_MAPPINGS,
    AROS_LDA(const OSSL_ATTRIBUTE_MAPPINGS *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,i2d_OSSL_ATTRIBUTE_TYPE_MAPPING,
    AROS_LDA(const OSSL_ATTRIBUTE_TYPE_MAPPING *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,i2d_OSSL_ATTRIBUTE_VALUE_MAPPING,
    AROS_LDA(const OSSL_ATTRIBUTE_VALUE_MAPPING *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,i2d_OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX,
    AROS_LDA(const OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,i2d_OSSL_BASIC_ATTR_CONSTRAINTS,
    AROS_LDA(const OSSL_BASIC_ATTR_CONSTRAINTS *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,i2d_OSSL_CMP_ATAVS,
    AROS_LDA(const OSSL_CMP_ATAVS *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,i2d_OSSL_CMP_MSG,
    AROS_LDA(const OSSL_CMP_MSG *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,i2d_OSSL_CMP_MSG_bio,
    AROS_LDA(BIO *, bio, A0),
    AROS_LDA(const OSSL_CMP_MSG *, msg, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,i2d_OSSL_CMP_PKIHEADER,
    AROS_LDA(const OSSL_CMP_PKIHEADER *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,i2d_OSSL_CMP_PKISI,
    AROS_LDA(const OSSL_CMP_PKISI *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,i2d_OSSL_CRMF_CERTID,
    AROS_LDA(const OSSL_CRMF_CERTID *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,i2d_OSSL_CRMF_CERTTEMPLATE,
    AROS_LDA(const OSSL_CRMF_CERTTEMPLATE *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,i2d_OSSL_CRMF_ENCRYPTEDKEY,
    AROS_LDA(const OSSL_CRMF_ENCRYPTEDKEY *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,i2d_OSSL_CRMF_ENCRYPTEDVALUE,
    AROS_LDA(const OSSL_CRMF_ENCRYPTEDVALUE *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,i2d_OSSL_CRMF_MSG,
    AROS_LDA(const OSSL_CRMF_MSG *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,i2d_OSSL_CRMF_MSGS,
    AROS_LDA(const OSSL_CRMF_MSGS *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,i2d_OSSL_CRMF_PBMPARAMETER,
    AROS_LDA(const OSSL_CRMF_PBMPARAMETER *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,i2d_OSSL_CRMF_PKIPUBLICATIONINFO,
    AROS_LDA(const OSSL_CRMF_PKIPUBLICATIONINFO *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,i2d_OSSL_CRMF_SINGLEPUBINFO,
    AROS_LDA(const OSSL_CRMF_SINGLEPUBINFO *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,i2d_OSSL_DAY_TIME,
    AROS_LDA(const OSSL_DAY_TIME *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,i2d_OSSL_DAY_TIME_BAND,
    AROS_LDA(const OSSL_DAY_TIME_BAND *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,i2d_OSSL_HASH,
    AROS_LDA(const OSSL_HASH *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,i2d_OSSL_IETF_ATTR_SYNTAX,
    AROS_LDA(const OSSL_IETF_ATTR_SYNTAX *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,i2d_OSSL_INFO_SYNTAX,
    AROS_LDA(const OSSL_INFO_SYNTAX *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,i2d_OSSL_INFO_SYNTAX_POINTER,
    AROS_LDA(const OSSL_INFO_SYNTAX_POINTER *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,i2d_OSSL_NAMED_DAY,
    AROS_LDA(const OSSL_NAMED_DAY *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,i2d_OSSL_PRIVILEGE_POLICY_ID,
    AROS_LDA(const OSSL_PRIVILEGE_POLICY_ID *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,i2d_OSSL_ROLE_SPEC_CERT_ID,
    AROS_LDA(const OSSL_ROLE_SPEC_CERT_ID *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,i2d_OSSL_ROLE_SPEC_CERT_ID_SYNTAX,
    AROS_LDA(const OSSL_ROLE_SPEC_CERT_ID_SYNTAX *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,i2d_OSSL_TARGET,
    AROS_LDA(const OSSL_TARGET *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,i2d_OSSL_TARGETING_INFORMATION,
    AROS_LDA(const OSSL_TARGETING_INFORMATION *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,i2d_OSSL_TARGETS,
    AROS_LDA(const OSSL_TARGETS *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,i2d_OSSL_TIME_PERIOD,
    AROS_LDA(const OSSL_TIME_PERIOD *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,i2d_OSSL_TIME_SPEC,
    AROS_LDA(const OSSL_TIME_SPEC *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,i2d_OSSL_TIME_SPEC_ABSOLUTE,
    AROS_LDA(const OSSL_TIME_SPEC_ABSOLUTE *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,i2d_OSSL_TIME_SPEC_DAY,
    AROS_LDA(const OSSL_TIME_SPEC_DAY *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,i2d_OSSL_TIME_SPEC_MONTH,
    AROS_LDA(const OSSL_TIME_SPEC_MONTH *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,i2d_OSSL_TIME_SPEC_TIME,
    AROS_LDA(const OSSL_TIME_SPEC_TIME *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,i2d_OSSL_TIME_SPEC_WEEKS,
    AROS_LDA(const OSSL_TIME_SPEC_WEEKS *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,i2d_OSSL_TIME_SPEC_X_DAY_OF,
    AROS_LDA(const OSSL_TIME_SPEC_X_DAY_OF *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,i2d_OSSL_USER_NOTICE_SYNTAX,
    AROS_LDA(const OSSL_USER_NOTICE_SYNTAX *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,i2d_PBMAC1PARAM,
    AROS_LDA(const PBMAC1PARAM *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,i2d_X509_ACERT,
    AROS_LDA(const X509_ACERT *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,i2d_X509_ACERT_bio,
    AROS_LDA(BIO *, bp, A0),
    AROS_LDA(const X509_ACERT *, acert, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(int,i2d_X509_PUBKEY_bio,
    AROS_LDA(BIO *, bp, A0),
    AROS_LDA(const X509_PUBKEY *, xpk, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD2(char *,i2s_ASN1_UTF8STRING,
    AROS_LDA(X509V3_EXT_METHOD *, method, A0),
    AROS_LDA(ASN1_UTF8STRING *, utf8, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD3(ASN1_UTF8STRING *,s2i_ASN1_UTF8STRING,
    AROS_LDA(X509V3_EXT_METHOD *, method, A0),
    AROS_LDA(X509V3_CTX *, ctx, A1),
    AROS_LDA(const char *, str, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(APTR,BIO_meth_get_recvmmsg,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(APTR,BIO_meth_get_sendmmsg,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(APTR,CMS_ReceiptRequest_create0_ex,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(APTR,CMS_SignedData_verify,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(APTR,CMS_encrypt_ex,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(APTR,CMS_sign_ex,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(APTR,OSSL_CMP_CTX_build_cert_chain,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(APTR,OSSL_CMP_CTX_set1_extraCertsOut,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(APTR,OSSL_CMP_CTX_set1_untrusted,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(APTR,OSSL_CMP_ITAV_get0_caCerts,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(APTR,OSSL_CMP_ITAV_get0_certProfile,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(APTR,OSSL_CMP_ITAV_get0_crlStatusList,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(APTR,OSSL_CMP_ITAV_get0_crls,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(APTR,OSSL_CMP_ITAV_new0_certProfile,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(APTR,OSSL_CMP_ITAV_new0_crlStatusList,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(APTR,OSSL_CMP_ITAV_new_caCerts,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(APTR,OSSL_CMP_ITAV_push0_stack_item,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(APTR,OSSL_CMP_get1_caCerts,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(APTR,OSSL_CRMF_ENCRYPTEDKEY_get1_pkey,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(APTR,OSSL_ESS_check_signing_certs,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(APTR,OSSL_ESS_signing_cert_new_init,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(APTR,OSSL_ESS_signing_cert_v2_new_init,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(APTR,OSSL_HTTP_get_amiga_2,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(APTR,OSSL_HTTP_set1_request,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(APTR,OSSL_HTTP_transfer_amiga_2,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(APTR,OSSL_STACK_OF_X509_free,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(APTR,PEM_X509_INFO_read_bio_ex,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(APTR,PKCS12_SAFEBAG_set0_attrs,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(APTR,PKCS12_add_key_ex,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(APTR,PKCS12_add_safe_ex,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(APTR,PKCS12_add_safes_ex,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(APTR,PKCS12_add_secret,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(APTR,PKCS12_create_ex,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(APTR,PKCS12_create_ex2_amiga_1,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(APTR,PKCS12_pack_p7encdata_ex,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(APTR,PKCS7_encrypt_ex,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(APTR,PKCS7_sign_ex,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(APTR,SMIME_write_ASN1_ex,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(APTR,TS_VERIFY_CTX_set0_certs,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(APTR,X509_add_cert,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(APTR,X509_add_certs,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(APTR,X509_build_chain,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

AROS_LD0(APTR,X509v3_add_extensions,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);

#endif
