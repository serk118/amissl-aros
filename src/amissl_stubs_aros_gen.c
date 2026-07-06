/* Auto-generated AROS EXT library stubs */
#include <exec/types.h>
#include <dos/dos.h>
#include <amissl/amissl.h>

ASN1_GENERALIZEDTIME * LIB_ASN1_GENERALIZEDTIME_dup(struct Library * _base, const ASN1_GENERALIZEDTIME * a);

AROS_LH1(ASN1_GENERALIZEDTIME *,ASN1_GENERALIZEDTIME_dup,
    AROS_LDA(const ASN1_GENERALIZEDTIME *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(ASN1_GENERALIZEDTIME_dup, a);
    AROS_LIBFUNC_EXIT
}

ASN1_TIME * LIB_ASN1_TIME_dup(struct Library * _base, const ASN1_TIME * a);

AROS_LH1(ASN1_TIME *,ASN1_TIME_dup,
    AROS_LDA(const ASN1_TIME *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(ASN1_TIME_dup, a);
    AROS_LIBFUNC_EXIT
}

int LIB_ASN1_TIME_print_ex(struct Library * _base, BIO * bp, const ASN1_TIME * tm, unsigned long flags);

AROS_LH3(int,ASN1_TIME_print_ex,
    AROS_LDA(BIO *, bp, A0),
    AROS_LDA(const ASN1_TIME *, tm, A1),
    AROS_LDA(unsigned long, flags, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(ASN1_TIME_print_ex, bp, tm, flags);
    AROS_LIBFUNC_EXIT
}

ASN1_UTCTIME * LIB_ASN1_UTCTIME_dup(struct Library * _base, const ASN1_UTCTIME * a);

AROS_LH1(ASN1_UTCTIME *,ASN1_UTCTIME_dup,
    AROS_LDA(const ASN1_UTCTIME *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(ASN1_UTCTIME_dup, a);
    AROS_LIBFUNC_EXIT
}

void * LIB_ASN1_item_d2i_bio_ex(struct Library * _base, const ASN1_ITEM * it, BIO * in, void * pval, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH5(void *,ASN1_item_d2i_bio_ex,
    AROS_LDA(const ASN1_ITEM *, it, A0),
    AROS_LDA(BIO *, in, A1),
    AROS_LDA(void *, pval, A2),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A3),
    AROS_LDA(const char *, propq, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(ASN1_item_d2i_bio_ex, it, in, pval, libctx, propq);
    AROS_LIBFUNC_EXIT
}

ASN1_VALUE * LIB_ASN1_item_d2i_ex(struct Library * _base, ASN1_VALUE ** val, const unsigned char ** in, long len, const ASN1_ITEM * it, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH6(ASN1_VALUE *,ASN1_item_d2i_ex,
    AROS_LDA(ASN1_VALUE **, val, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    AROS_LDA(const ASN1_ITEM *, it, A2),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A3),
    AROS_LDA(const char *, propq, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(ASN1_item_d2i_ex, val, in, len, it, libctx, propq);
    AROS_LIBFUNC_EXIT
}

BIO * LIB_ASN1_item_i2d_mem_bio(struct Library * _base, const ASN1_ITEM * it, const ASN1_VALUE * val);

AROS_LH2(BIO *,ASN1_item_i2d_mem_bio,
    AROS_LDA(const ASN1_ITEM *, it, A0),
    AROS_LDA(const ASN1_VALUE *, val, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(ASN1_item_i2d_mem_bio, it, val);
    AROS_LIBFUNC_EXIT
}

ASN1_VALUE * LIB_ASN1_item_new_ex(struct Library * _base, const ASN1_ITEM * it, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH3(ASN1_VALUE *,ASN1_item_new_ex,
    AROS_LDA(const ASN1_ITEM *, it, A0),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A1),
    AROS_LDA(const char *, propq, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(ASN1_item_new_ex, it, libctx, propq);
    AROS_LIBFUNC_EXIT
}

int LIB_ASN1_item_sign_ex(struct Library * _base, const ASN1_ITEM * it, X509_ALGOR * algor1, X509_ALGOR * algor2, ASN1_BIT_STRING * signature, const void * data, const ASN1_OCTET_STRING * id, EVP_PKEY * pkey, const EVP_MD * md, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH10(int,ASN1_item_sign_ex,
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
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(ASN1_item_sign_ex, it, algor1, algor2, signature, data, id, pkey, md, libctx, propq);
    AROS_LIBFUNC_EXIT
}

void * LIB_ASN1_item_unpack_ex(struct Library * _base, const ASN1_STRING * oct, const ASN1_ITEM * it, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH4(void *,ASN1_item_unpack_ex,
    AROS_LDA(const ASN1_STRING *, oct, A0),
    AROS_LDA(const ASN1_ITEM *, it, A1),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A2),
    AROS_LDA(const char *, propq, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(ASN1_item_unpack_ex, oct, it, libctx, propq);
    AROS_LIBFUNC_EXIT
}

int LIB_ASN1_item_verify_ctx(struct Library * _base, const ASN1_ITEM * it, const X509_ALGOR * alg, const ASN1_BIT_STRING * signature, const void * data, EVP_MD_CTX * ctx);

AROS_LH5(int,ASN1_item_verify_ctx,
    AROS_LDA(const ASN1_ITEM *, it, A0),
    AROS_LDA(const X509_ALGOR *, alg, A1),
    AROS_LDA(const ASN1_BIT_STRING *, signature, A2),
    AROS_LDA(const void *, data, A3),
    AROS_LDA(EVP_MD_CTX *, ctx, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(ASN1_item_verify_ctx, it, alg, signature, data, ctx);
    AROS_LIBFUNC_EXIT
}

int LIB_ASN1_item_verify_ex(struct Library * _base, const ASN1_ITEM * it, const X509_ALGOR * alg, const ASN1_BIT_STRING * signature, const void * data, const ASN1_OCTET_STRING * id, EVP_PKEY * pkey, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH8(int,ASN1_item_verify_ex,
    AROS_LDA(const ASN1_ITEM *, it, A0),
    AROS_LDA(const X509_ALGOR *, alg, A1),
    AROS_LDA(const ASN1_BIT_STRING *, signature, A2),
    AROS_LDA(const void *, data, A3),
    AROS_LDA(const ASN1_OCTET_STRING *, id, D0),
    AROS_LDA(EVP_PKEY *, pkey, D1),
    AROS_LDA(OSSL_LIB_CTX *, libctx, D2),
    AROS_LDA(const char *, propq, D3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(ASN1_item_verify_ex, it, alg, signature, data, id, pkey, libctx, propq);
    AROS_LIBFUNC_EXIT
}

void LIB_ASYNC_get_mem_functions(struct Library * _base, ASYNC_stack_alloc_fn * alloc_fn, ASYNC_stack_free_fn * free_fn);

AROS_LH2(void,ASYNC_get_mem_functions,
    AROS_LDA(ASYNC_stack_alloc_fn *, alloc_fn, A0),
    AROS_LDA(ASYNC_stack_free_fn *, free_fn, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(ASYNC_get_mem_functions, alloc_fn, free_fn);
    AROS_LIBFUNC_EXIT
}

int LIB_ASYNC_set_mem_functions(struct Library * _base, ASYNC_stack_alloc_fn alloc_fn, ASYNC_stack_free_fn free_fn);

AROS_LH2(int,ASYNC_set_mem_functions,
    AROS_LDA(ASYNC_stack_alloc_fn, alloc_fn, A0),
    AROS_LDA(ASYNC_stack_free_fn, free_fn, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(ASYNC_set_mem_functions, alloc_fn, free_fn);
    AROS_LIBFUNC_EXIT
}

int LIB_BIO_ADDR_copy(struct Library * _base, BIO_ADDR * dst, const BIO_ADDR * src);

AROS_LH2(int,BIO_ADDR_copy,
    AROS_LDA(BIO_ADDR *, dst, A0),
    AROS_LDA(const BIO_ADDR *, src, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(BIO_ADDR_copy, dst, src);
    AROS_LIBFUNC_EXIT
}

BIO_ADDR * LIB_BIO_ADDR_dup(struct Library * _base, const BIO_ADDR * ap);

AROS_LH1(BIO_ADDR *,BIO_ADDR_dup,
    AROS_LDA(const BIO_ADDR *, ap, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(BIO_ADDR_dup, ap);
    AROS_LIBFUNC_EXIT
}

long LIB_BIO_debug_callback_ex(struct Library * _base, BIO * bio, int oper, const char * argp, size_t len, int argi, long argl, int ret, size_t * processed);

AROS_LH8(long,BIO_debug_callback_ex,
    AROS_LDA(BIO *, bio, A0),
    AROS_LDA(int, oper, D0),
    AROS_LDA(const char *, argp, A1),
    AROS_LDA(size_t, len, D1),
    AROS_LDA(int, argi, D2),
    AROS_LDA(long, argl, D3),
    AROS_LDA(int, ret, D4),
    AROS_LDA(size_t *, processed, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(BIO_debug_callback_ex, bio, oper, argp, len, argi, argl, ret, processed);
    AROS_LIBFUNC_EXIT
}

int LIB_BIO_do_connect_retry(struct Library * _base, BIO * bio, int timeout, int nap_milliseconds);

AROS_LH3(int,BIO_do_connect_retry,
    AROS_LDA(BIO *, bio, A0),
    AROS_LDA(int, timeout, D0),
    AROS_LDA(int, nap_milliseconds, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(BIO_do_connect_retry, bio, timeout, nap_milliseconds);
    AROS_LIBFUNC_EXIT
}

int LIB_BIO_err_is_non_fatal(struct Library * _base, unsigned int errcode);

AROS_LH1(int,BIO_err_is_non_fatal,
    AROS_LDA(unsigned int, errcode, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(BIO_err_is_non_fatal, errcode);
    AROS_LIBFUNC_EXIT
}

const BIO_METHOD * LIB_BIO_f_brotli(struct Library * _base);

AROS_LH0(const BIO_METHOD *,BIO_f_brotli,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(BIO_f_brotli);
    AROS_LIBFUNC_EXIT
}

const BIO_METHOD * LIB_BIO_f_prefix(struct Library * _base);

AROS_LH0(const BIO_METHOD *,BIO_f_prefix,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(BIO_f_prefix);
    AROS_LIBFUNC_EXIT
}

const BIO_METHOD * LIB_BIO_f_readbuffer(struct Library * _base);

AROS_LH0(const BIO_METHOD *,BIO_f_readbuffer,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(BIO_f_readbuffer);
    AROS_LIBFUNC_EXIT
}

const BIO_METHOD * LIB_BIO_f_zlib(struct Library * _base);

AROS_LH0(const BIO_METHOD *,BIO_f_zlib,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(BIO_f_zlib);
    AROS_LIBFUNC_EXIT
}

const BIO_METHOD * LIB_BIO_f_zstd(struct Library * _base);

AROS_LH0(const BIO_METHOD *,BIO_f_zstd,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(BIO_f_zstd);
    AROS_LIBFUNC_EXIT
}

int LIB_BIO_get_line(struct Library * _base, BIO * bio, char * buf, int size);

AROS_LH3(int,BIO_get_line,
    AROS_LDA(BIO *, bio, A0),
    AROS_LDA(char *, buf, A1),
    AROS_LDA(int, size, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(BIO_get_line, bio, buf, size);
    AROS_LIBFUNC_EXIT
}

int LIB_BIO_get_rpoll_descriptor(struct Library * _base, BIO * b, BIO_POLL_DESCRIPTOR * desc);

AROS_LH2(int,BIO_get_rpoll_descriptor,
    AROS_LDA(BIO *, b, A0),
    AROS_LDA(BIO_POLL_DESCRIPTOR *, desc, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(BIO_get_rpoll_descriptor, b, desc);
    AROS_LIBFUNC_EXIT
}

int LIB_BIO_get_wpoll_descriptor(struct Library * _base, BIO * b, BIO_POLL_DESCRIPTOR * desc);

AROS_LH2(int,BIO_get_wpoll_descriptor,
    AROS_LDA(BIO *, b, A0),
    AROS_LDA(BIO_POLL_DESCRIPTOR *, desc, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(BIO_get_wpoll_descriptor, b, desc);
    AROS_LIBFUNC_EXIT
}

int LIB_BIO_meth_set_recvmmsg(struct Library * _base, BIO_METHOD * biom);

AROS_LH1(int,BIO_meth_set_recvmmsg,
    AROS_LDA(BIO_METHOD *, biom, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(BIO_meth_set_recvmmsg, biom);
    AROS_LIBFUNC_EXIT
}

int LIB_BIO_meth_set_sendmmsg(struct Library * _base, BIO_METHOD * biom);

AROS_LH1(int,BIO_meth_set_sendmmsg,
    AROS_LDA(BIO_METHOD *, biom, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(BIO_meth_set_sendmmsg, biom);
    AROS_LIBFUNC_EXIT
}

int LIB_BIO_new_bio_dgram_pair(struct Library * _base, BIO ** bio1, size_t writebuf1, BIO ** bio2, size_t writebuf2);

AROS_LH4(int,BIO_new_bio_dgram_pair,
    AROS_LDA(BIO **, bio1, A0),
    AROS_LDA(size_t, writebuf1, D0),
    AROS_LDA(BIO **, bio2, A1),
    AROS_LDA(size_t, writebuf2, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(BIO_new_bio_dgram_pair, bio1, writebuf1, bio2, writebuf2);
    AROS_LIBFUNC_EXIT
}

BIO * LIB_BIO_new_ex(struct Library * _base, OSSL_LIB_CTX * libctx, const BIO_METHOD * method);

AROS_LH2(BIO *,BIO_new_ex,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const BIO_METHOD *, method, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(BIO_new_ex, libctx, method);
    AROS_LIBFUNC_EXIT
}

BIO * LIB_BIO_new_from_core_bio(struct Library * _base, OSSL_LIB_CTX * libctx, OSSL_CORE_BIO * corebio);

AROS_LH2(BIO *,BIO_new_from_core_bio,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(OSSL_CORE_BIO *, corebio, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(BIO_new_from_core_bio, libctx, corebio);
    AROS_LIBFUNC_EXIT
}

int LIB_BIO_recvmmsg(struct Library * _base, BIO * b, BIO_MSG * msg, size_t stride, size_t num_msg, uint64_t flags, size_t * msgs_processed);

AROS_LH6(int,BIO_recvmmsg,
    AROS_LDA(BIO *, b, A0),
    AROS_LDA(BIO_MSG *, msg, A1),
    AROS_LDA(size_t, stride, D0),
    AROS_LDA(size_t, num_msg, D1),
    AROS_LDA(uint64_t, flags, D2),
    AROS_LDA(size_t *, msgs_processed, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(BIO_recvmmsg, b, msg, stride, num_msg, flags, msgs_processed);
    AROS_LIBFUNC_EXIT
}

const BIO_METHOD * LIB_BIO_s_core(struct Library * _base);

AROS_LH0(const BIO_METHOD *,BIO_s_core,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(BIO_s_core);
    AROS_LIBFUNC_EXIT
}

const BIO_METHOD * LIB_BIO_s_dgram_mem(struct Library * _base);

AROS_LH0(const BIO_METHOD *,BIO_s_dgram_mem,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(BIO_s_dgram_mem);
    AROS_LIBFUNC_EXIT
}

const BIO_METHOD * LIB_BIO_s_dgram_pair(struct Library * _base);

AROS_LH0(const BIO_METHOD *,BIO_s_dgram_pair,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(BIO_s_dgram_pair);
    AROS_LIBFUNC_EXIT
}

int LIB_BIO_sendmmsg(struct Library * _base, BIO * b, BIO_MSG * msg, size_t stride, size_t num_msg, uint64_t flags, size_t * msgs_processed);

AROS_LH6(int,BIO_sendmmsg,
    AROS_LDA(BIO *, b, A0),
    AROS_LDA(BIO_MSG *, msg, A1),
    AROS_LDA(size_t, stride, D0),
    AROS_LDA(size_t, num_msg, D1),
    AROS_LDA(uint64_t, flags, D2),
    AROS_LDA(size_t *, msgs_processed, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(BIO_sendmmsg, b, msg, stride, num_msg, flags, msgs_processed);
    AROS_LIBFUNC_EXIT
}

int LIB_BIO_socket_wait(struct Library * _base, int fd, int for_read, time_t max_time);

AROS_LH3(int,BIO_socket_wait,
    AROS_LDA(int, fd, D0),
    AROS_LDA(int, for_read, D1),
    AROS_LDA(time_t, max_time, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(BIO_socket_wait, fd, for_read, max_time);
    AROS_LIBFUNC_EXIT
}

int LIB_BIO_wait(struct Library * _base, BIO * bio, time_t max_time, unsigned int nap_milliseconds);

AROS_LH3(int,BIO_wait,
    AROS_LDA(BIO *, bio, A0),
    AROS_LDA(time_t, max_time, D0),
    AROS_LDA(unsigned int, nap_milliseconds, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(BIO_wait, bio, max_time, nap_milliseconds);
    AROS_LIBFUNC_EXIT
}

BN_CTX * LIB_BN_CTX_new_ex(struct Library * _base, OSSL_LIB_CTX * ctx);

AROS_LH1(BN_CTX *,BN_CTX_new_ex,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(BN_CTX_new_ex, ctx);
    AROS_LIBFUNC_EXIT
}

BN_CTX * LIB_BN_CTX_secure_new_ex(struct Library * _base, OSSL_LIB_CTX * ctx);

AROS_LH1(BN_CTX *,BN_CTX_secure_new_ex,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(BN_CTX_secure_new_ex, ctx);
    AROS_LIBFUNC_EXIT
}

int LIB_BN_are_coprime(struct Library * _base, BIGNUM * a, const BIGNUM * b, BN_CTX * ctx);

AROS_LH3(int,BN_are_coprime,
    AROS_LDA(BIGNUM *, a, A0),
    AROS_LDA(const BIGNUM *, b, A1),
    AROS_LDA(BN_CTX *, ctx, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(BN_are_coprime, a, b, ctx);
    AROS_LIBFUNC_EXIT
}

int LIB_BN_check_prime(struct Library * _base, const BIGNUM * p, BN_CTX * ctx, BN_GENCB * cb);

AROS_LH3(int,BN_check_prime,
    AROS_LDA(const BIGNUM *, p, A0),
    AROS_LDA(BN_CTX *, ctx, A1),
    AROS_LDA(BN_GENCB *, cb, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(BN_check_prime, p, ctx, cb);
    AROS_LIBFUNC_EXIT
}

int LIB_BN_generate_prime_ex2(struct Library * _base, BIGNUM * ret, int bits, int safe, const BIGNUM * add, const BIGNUM * rem, BN_GENCB * cb, BN_CTX * ctx);

AROS_LH7(int,BN_generate_prime_ex2,
    AROS_LDA(BIGNUM *, ret, A0),
    AROS_LDA(int, bits, D0),
    AROS_LDA(int, safe, D1),
    AROS_LDA(const BIGNUM *, add, A1),
    AROS_LDA(const BIGNUM *, rem, A2),
    AROS_LDA(BN_GENCB *, cb, A3),
    AROS_LDA(BN_CTX *, ctx, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(BN_generate_prime_ex2, ret, bits, safe, add, rem, cb, ctx);
    AROS_LIBFUNC_EXIT
}

int LIB_BN_mod_exp_mont_consttime_x2(struct Library * _base, BIGNUM * rr1, const BIGNUM * a1, const BIGNUM * p1, const BIGNUM * m1, BN_MONT_CTX * in_mont1, BIGNUM * rr2, const BIGNUM * a2, const BIGNUM * p2, const BIGNUM * m2, BN_MONT_CTX * in_mont2, BN_CTX * ctx);

AROS_LH11(int,BN_mod_exp_mont_consttime_x2,
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
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(BN_mod_exp_mont_consttime_x2, rr1, a1, p1, m1, in_mont1, rr2, a2, p2, m2, in_mont2, ctx);
    AROS_LIBFUNC_EXIT
}

int LIB_BN_priv_rand_ex(struct Library * _base, BIGNUM * rnd, int bits, int top, int bottom, unsigned int strength, BN_CTX * ctx);

AROS_LH6(int,BN_priv_rand_ex,
    AROS_LDA(BIGNUM *, rnd, A0),
    AROS_LDA(int, bits, D0),
    AROS_LDA(int, top, D1),
    AROS_LDA(int, bottom, D2),
    AROS_LDA(unsigned int, strength, D3),
    AROS_LDA(BN_CTX *, ctx, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(BN_priv_rand_ex, rnd, bits, top, bottom, strength, ctx);
    AROS_LIBFUNC_EXIT
}

int LIB_BN_priv_rand_range_ex(struct Library * _base, BIGNUM * r, const BIGNUM * range, unsigned int strength, BN_CTX * ctx);

AROS_LH4(int,BN_priv_rand_range_ex,
    AROS_LDA(BIGNUM *, r, A0),
    AROS_LDA(const BIGNUM *, range, A1),
    AROS_LDA(unsigned int, strength, D0),
    AROS_LDA(BN_CTX *, ctx, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(BN_priv_rand_range_ex, r, range, strength, ctx);
    AROS_LIBFUNC_EXIT
}

int LIB_BN_rand_ex(struct Library * _base, BIGNUM * rnd, int bits, int top, int bottom, unsigned int strength, BN_CTX * ctx);

AROS_LH6(int,BN_rand_ex,
    AROS_LDA(BIGNUM *, rnd, A0),
    AROS_LDA(int, bits, D0),
    AROS_LDA(int, top, D1),
    AROS_LDA(int, bottom, D2),
    AROS_LDA(unsigned int, strength, D3),
    AROS_LDA(BN_CTX *, ctx, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(BN_rand_ex, rnd, bits, top, bottom, strength, ctx);
    AROS_LIBFUNC_EXIT
}

int LIB_BN_rand_range_ex(struct Library * _base, BIGNUM * r, const BIGNUM * range, unsigned int strength, BN_CTX * ctx);

AROS_LH4(int,BN_rand_range_ex,
    AROS_LDA(BIGNUM *, r, A0),
    AROS_LDA(const BIGNUM *, range, A1),
    AROS_LDA(unsigned int, strength, D0),
    AROS_LDA(BN_CTX *, ctx, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(BN_rand_range_ex, r, range, strength, ctx);
    AROS_LIBFUNC_EXIT
}

BIGNUM * LIB_BN_signed_bin2bn(struct Library * _base, const unsigned char * s, int len, BIGNUM * ret);

AROS_LH3(BIGNUM *,BN_signed_bin2bn,
    AROS_LDA(const unsigned char *, s, A0),
    AROS_LDA(int, len, D0),
    AROS_LDA(BIGNUM *, ret, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(BN_signed_bin2bn, s, len, ret);
    AROS_LIBFUNC_EXIT
}

int LIB_BN_signed_bn2bin(struct Library * _base, const BIGNUM * a, unsigned char * to, int tolen);

AROS_LH3(int,BN_signed_bn2bin,
    AROS_LDA(const BIGNUM *, a, A0),
    AROS_LDA(unsigned char *, to, A1),
    AROS_LDA(int, tolen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(BN_signed_bn2bin, a, to, tolen);
    AROS_LIBFUNC_EXIT
}

int LIB_BN_signed_bn2lebin(struct Library * _base, const BIGNUM * a, unsigned char * to, int tolen);

AROS_LH3(int,BN_signed_bn2lebin,
    AROS_LDA(const BIGNUM *, a, A0),
    AROS_LDA(unsigned char *, to, A1),
    AROS_LDA(int, tolen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(BN_signed_bn2lebin, a, to, tolen);
    AROS_LIBFUNC_EXIT
}

int LIB_BN_signed_bn2native(struct Library * _base, const BIGNUM * a, unsigned char * to, int tolen);

AROS_LH3(int,BN_signed_bn2native,
    AROS_LDA(const BIGNUM *, a, A0),
    AROS_LDA(unsigned char *, to, A1),
    AROS_LDA(int, tolen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(BN_signed_bn2native, a, to, tolen);
    AROS_LIBFUNC_EXIT
}

BIGNUM * LIB_BN_signed_lebin2bn(struct Library * _base, const unsigned char * s, int len, BIGNUM * ret);

AROS_LH3(BIGNUM *,BN_signed_lebin2bn,
    AROS_LDA(const unsigned char *, s, A0),
    AROS_LDA(int, len, D0),
    AROS_LDA(BIGNUM *, ret, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(BN_signed_lebin2bn, s, len, ret);
    AROS_LIBFUNC_EXIT
}

BIGNUM * LIB_BN_signed_native2bn(struct Library * _base, const unsigned char * s, int len, BIGNUM * ret);

AROS_LH3(BIGNUM *,BN_signed_native2bn,
    AROS_LDA(const unsigned char *, s, A0),
    AROS_LDA(int, len, D0),
    AROS_LDA(BIGNUM *, ret, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(BN_signed_native2bn, s, len, ret);
    AROS_LIBFUNC_EXIT
}

CMS_ContentInfo * LIB_CMS_AuthEnvelopedData_create(struct Library * _base, const EVP_CIPHER * cipher);

AROS_LH1(CMS_ContentInfo *,CMS_AuthEnvelopedData_create,
    AROS_LDA(const EVP_CIPHER *, cipher, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(CMS_AuthEnvelopedData_create, cipher);
    AROS_LIBFUNC_EXIT
}

CMS_ContentInfo * LIB_CMS_AuthEnvelopedData_create_ex(struct Library * _base, const EVP_CIPHER * cipher, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH3(CMS_ContentInfo *,CMS_AuthEnvelopedData_create_ex,
    AROS_LDA(const EVP_CIPHER *, cipher, A0),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A1),
    AROS_LDA(const char *, propq, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(CMS_AuthEnvelopedData_create_ex, cipher, libctx, propq);
    AROS_LIBFUNC_EXIT
}

CMS_ContentInfo * LIB_CMS_ContentInfo_new_ex(struct Library * _base, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH2(CMS_ContentInfo *,CMS_ContentInfo_new_ex,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, propq, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(CMS_ContentInfo_new_ex, libctx, propq);
    AROS_LIBFUNC_EXIT
}

CMS_ContentInfo * LIB_CMS_EncryptedData_encrypt_ex(struct Library * _base, BIO * in, const EVP_CIPHER * cipher, const unsigned char * key, size_t keylen, unsigned int flags, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH7(CMS_ContentInfo *,CMS_EncryptedData_encrypt_ex,
    AROS_LDA(BIO *, in, A0),
    AROS_LDA(const EVP_CIPHER *, cipher, A1),
    AROS_LDA(const unsigned char *, key, A2),
    AROS_LDA(size_t, keylen, D0),
    AROS_LDA(unsigned int, flags, D1),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A3),
    AROS_LDA(const char *, propq, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(CMS_EncryptedData_encrypt_ex, in, cipher, key, keylen, flags, libctx, propq);
    AROS_LIBFUNC_EXIT
}

CMS_ContentInfo * LIB_CMS_EnvelopedData_create_ex(struct Library * _base, const EVP_CIPHER * cipher, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH3(CMS_ContentInfo *,CMS_EnvelopedData_create_ex,
    AROS_LDA(const EVP_CIPHER *, cipher, A0),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A1),
    AROS_LDA(const char *, propq, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(CMS_EnvelopedData_create_ex, cipher, libctx, propq);
    AROS_LIBFUNC_EXIT
}

BIO * LIB_CMS_EnvelopedData_decrypt(struct Library * _base, CMS_EnvelopedData * env, BIO * detached_data, EVP_PKEY * pkey, X509 * cert, ASN1_OCTET_STRING * secret, unsigned int flags, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH8(BIO *,CMS_EnvelopedData_decrypt,
    AROS_LDA(CMS_EnvelopedData *, env, A0),
    AROS_LDA(BIO *, detached_data, A1),
    AROS_LDA(EVP_PKEY *, pkey, A2),
    AROS_LDA(X509 *, cert, A3),
    AROS_LDA(ASN1_OCTET_STRING *, secret, D0),
    AROS_LDA(unsigned int, flags, D1),
    AROS_LDA(OSSL_LIB_CTX *, libctx, D2),
    AROS_LDA(const char *, propq, D3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(CMS_EnvelopedData_decrypt, env, detached_data, pkey, cert, secret, flags, libctx, propq);
    AROS_LIBFUNC_EXIT
}

CMS_EnvelopedData * LIB_CMS_EnvelopedData_dup(struct Library * _base, const CMS_EnvelopedData * a);

AROS_LH1(CMS_EnvelopedData *,CMS_EnvelopedData_dup,
    AROS_LDA(const CMS_EnvelopedData *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(CMS_EnvelopedData_dup, a);
    AROS_LIBFUNC_EXIT
}

const ASN1_ITEM * LIB_CMS_EnvelopedData_it(struct Library * _base);

AROS_LH0(const ASN1_ITEM *,CMS_EnvelopedData_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(CMS_EnvelopedData_it);
    AROS_LIBFUNC_EXIT
}

int LIB_CMS_RecipientInfo_kari_set0_pkey_and_peer(struct Library * _base, CMS_RecipientInfo * ri, EVP_PKEY * pk, X509 * peer);

AROS_LH3(int,CMS_RecipientInfo_kari_set0_pkey_and_peer,
    AROS_LDA(CMS_RecipientInfo *, ri, A0),
    AROS_LDA(EVP_PKEY *, pk, A1),
    AROS_LDA(X509 *, peer, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(CMS_RecipientInfo_kari_set0_pkey_and_peer, ri, pk, peer);
    AROS_LIBFUNC_EXIT
}

void LIB_CMS_SignedData_free(struct Library * _base, CMS_SignedData * a);

AROS_LH1(void,CMS_SignedData_free,
    AROS_LDA(CMS_SignedData *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(CMS_SignedData_free, a);
    AROS_LIBFUNC_EXIT
}

CMS_SignedData * LIB_CMS_SignedData_new(struct Library * _base);

AROS_LH0(CMS_SignedData *,CMS_SignedData_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(CMS_SignedData_new);
    AROS_LIBFUNC_EXIT
}

CMS_RecipientInfo * LIB_CMS_add1_recipient(struct Library * _base, CMS_ContentInfo * cms, X509 * recip, EVP_PKEY * originatorPrivKey, X509 * originator, unsigned int flags);

AROS_LH5(CMS_RecipientInfo *,CMS_add1_recipient,
    AROS_LDA(CMS_ContentInfo *, cms, A0),
    AROS_LDA(X509 *, recip, A1),
    AROS_LDA(EVP_PKEY *, originatorPrivKey, A2),
    AROS_LDA(X509 *, originator, A3),
    AROS_LDA(unsigned int, flags, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(CMS_add1_recipient, cms, recip, originatorPrivKey, originator, flags);
    AROS_LIBFUNC_EXIT
}

CMS_ContentInfo * LIB_CMS_data_create_ex(struct Library * _base, BIO * in, unsigned int flags, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH4(CMS_ContentInfo *,CMS_data_create_ex,
    AROS_LDA(BIO *, in, A0),
    AROS_LDA(unsigned int, flags, D0),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A1),
    AROS_LDA(const char *, propq, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(CMS_data_create_ex, in, flags, libctx, propq);
    AROS_LIBFUNC_EXIT
}

int LIB_CMS_decrypt_set1_pkey_and_peer(struct Library * _base, CMS_ContentInfo * cms, EVP_PKEY * pk, X509 * cert, X509 * peer);

AROS_LH4(int,CMS_decrypt_set1_pkey_and_peer,
    AROS_LDA(CMS_ContentInfo *, cms, A0),
    AROS_LDA(EVP_PKEY *, pk, A1),
    AROS_LDA(X509 *, cert, A2),
    AROS_LDA(X509 *, peer, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(CMS_decrypt_set1_pkey_and_peer, cms, pk, cert, peer);
    AROS_LIBFUNC_EXIT
}

CMS_ContentInfo * LIB_CMS_digest_create_ex(struct Library * _base, BIO * in, const EVP_MD * md, unsigned int flags, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH5(CMS_ContentInfo *,CMS_digest_create_ex,
    AROS_LDA(BIO *, in, A0),
    AROS_LDA(const EVP_MD *, md, A1),
    AROS_LDA(unsigned int, flags, D0),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A2),
    AROS_LDA(const char *, propq, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(CMS_digest_create_ex, in, md, flags, libctx, propq);
    AROS_LIBFUNC_EXIT
}

int LIB_CMS_final_digest(struct Library * _base, CMS_ContentInfo * cms, const unsigned char * md, unsigned int mdlen, BIO * dcont, unsigned int flags);

AROS_LH5(int,CMS_final_digest,
    AROS_LDA(CMS_ContentInfo *, cms, A0),
    AROS_LDA(const unsigned char *, md, A1),
    AROS_LDA(unsigned int, mdlen, D0),
    AROS_LDA(BIO *, dcont, A2),
    AROS_LDA(unsigned int, flags, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(CMS_final_digest, cms, md, mdlen, dcont, flags);
    AROS_LIBFUNC_EXIT
}

COMP_METHOD * LIB_COMP_brotli(struct Library * _base);

AROS_LH0(COMP_METHOD *,COMP_brotli,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(COMP_brotli);
    AROS_LIBFUNC_EXIT
}

COMP_METHOD * LIB_COMP_brotli_oneshot(struct Library * _base);

AROS_LH0(COMP_METHOD *,COMP_brotli_oneshot,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(COMP_brotli_oneshot);
    AROS_LIBFUNC_EXIT
}

COMP_METHOD * LIB_COMP_zlib_oneshot(struct Library * _base);

AROS_LH0(COMP_METHOD *,COMP_zlib_oneshot,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(COMP_zlib_oneshot);
    AROS_LIBFUNC_EXIT
}

COMP_METHOD * LIB_COMP_zstd(struct Library * _base);

AROS_LH0(COMP_METHOD *,COMP_zstd,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(COMP_zstd);
    AROS_LIBFUNC_EXIT
}

COMP_METHOD * LIB_COMP_zstd_oneshot(struct Library * _base);

AROS_LH0(COMP_METHOD *,COMP_zstd_oneshot,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(COMP_zstd_oneshot);
    AROS_LIBFUNC_EXIT
}

int LIB_CONF_modules_load_file_ex(struct Library * _base, OSSL_LIB_CTX * libctx, const char * filename, const char * appname, unsigned long flags);

AROS_LH4(int,CONF_modules_load_file_ex,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, filename, A1),
    AROS_LDA(const char *, appname, A2),
    AROS_LDA(unsigned long, flags, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(CONF_modules_load_file_ex, libctx, filename, appname, flags);
    AROS_LIBFUNC_EXIT
}

void * LIB_CRYPTO_aligned_alloc(struct Library * _base, size_t num, size_t align, void ** freeptr, const char * file, int line);

AROS_LH5(void *,CRYPTO_aligned_alloc,
    AROS_LDA(size_t, num, D0),
    AROS_LDA(size_t, align, D1),
    AROS_LDA(void **, freeptr, A0),
    AROS_LDA(const char *, file, A1),
    AROS_LDA(int, line, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(CRYPTO_aligned_alloc, num, align, freeptr, file, line);
    AROS_LIBFUNC_EXIT
}

int LIB_CRYPTO_atomic_add64(struct Library * _base, uint64_t * val, uint64_t op, uint64_t * ret, CRYPTO_RWLOCK * lock);

AROS_LH4(int,CRYPTO_atomic_add64,
    AROS_LDA(uint64_t *, val, A0),
    AROS_LDA(uint64_t, op, D0),
    AROS_LDA(uint64_t *, ret, A1),
    AROS_LDA(CRYPTO_RWLOCK *, lock, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(CRYPTO_atomic_add64, val, op, ret, lock);
    AROS_LIBFUNC_EXIT
}

int LIB_CRYPTO_atomic_and(struct Library * _base, uint64_t * val, uint64_t op, uint64_t * ret, CRYPTO_RWLOCK * lock);

AROS_LH4(int,CRYPTO_atomic_and,
    AROS_LDA(uint64_t *, val, A0),
    AROS_LDA(uint64_t, op, D0),
    AROS_LDA(uint64_t *, ret, A1),
    AROS_LDA(CRYPTO_RWLOCK *, lock, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(CRYPTO_atomic_and, val, op, ret, lock);
    AROS_LIBFUNC_EXIT
}

int LIB_CRYPTO_atomic_load(struct Library * _base, uint64_t * val, uint64_t * ret, CRYPTO_RWLOCK * lock);

AROS_LH3(int,CRYPTO_atomic_load,
    AROS_LDA(uint64_t *, val, A0),
    AROS_LDA(uint64_t *, ret, A1),
    AROS_LDA(CRYPTO_RWLOCK *, lock, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(CRYPTO_atomic_load, val, ret, lock);
    AROS_LIBFUNC_EXIT
}

int LIB_CRYPTO_atomic_load_int(struct Library * _base, int * val, int * ret, CRYPTO_RWLOCK * lock);

AROS_LH3(int,CRYPTO_atomic_load_int,
    AROS_LDA(int *, val, A0),
    AROS_LDA(int *, ret, A1),
    AROS_LDA(CRYPTO_RWLOCK *, lock, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(CRYPTO_atomic_load_int, val, ret, lock);
    AROS_LIBFUNC_EXIT
}

int LIB_CRYPTO_atomic_or(struct Library * _base, uint64_t * val, uint64_t op, uint64_t * ret, CRYPTO_RWLOCK * lock);

AROS_LH4(int,CRYPTO_atomic_or,
    AROS_LDA(uint64_t *, val, A0),
    AROS_LDA(uint64_t, op, D0),
    AROS_LDA(uint64_t *, ret, A1),
    AROS_LDA(CRYPTO_RWLOCK *, lock, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(CRYPTO_atomic_or, val, op, ret, lock);
    AROS_LIBFUNC_EXIT
}

int LIB_CRYPTO_atomic_store(struct Library * _base, uint64_t * dst, uint64_t val, CRYPTO_RWLOCK * lock);

AROS_LH3(int,CRYPTO_atomic_store,
    AROS_LDA(uint64_t *, dst, A0),
    AROS_LDA(uint64_t, val, D0),
    AROS_LDA(CRYPTO_RWLOCK *, lock, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(CRYPTO_atomic_store, dst, val, lock);
    AROS_LIBFUNC_EXIT
}

CTLOG_STORE * LIB_CTLOG_STORE_new_ex(struct Library * _base, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH2(CTLOG_STORE *,CTLOG_STORE_new_ex,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, propq, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(CTLOG_STORE_new_ex, libctx, propq);
    AROS_LIBFUNC_EXIT
}

CTLOG * LIB_CTLOG_new_ex(struct Library * _base, EVP_PKEY * public_key, const char * name, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH4(CTLOG *,CTLOG_new_ex,
    AROS_LDA(EVP_PKEY *, public_key, A0),
    AROS_LDA(const char *, name, A1),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A2),
    AROS_LDA(const char *, propq, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(CTLOG_new_ex, public_key, name, libctx, propq);
    AROS_LIBFUNC_EXIT
}

int LIB_CTLOG_new_from_base64_ex(struct Library * _base, CTLOG ** ct_log, const char * pkey_base64, const char * name, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH5(int,CTLOG_new_from_base64_ex,
    AROS_LDA(CTLOG **, ct_log, A0),
    AROS_LDA(const char *, pkey_base64, A1),
    AROS_LDA(const char *, name, A2),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A3),
    AROS_LDA(const char *, propq, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(CTLOG_new_from_base64_ex, ct_log, pkey_base64, name, libctx, propq);
    AROS_LIBFUNC_EXIT
}

CT_POLICY_EVAL_CTX * LIB_CT_POLICY_EVAL_CTX_new_ex(struct Library * _base, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH2(CT_POLICY_EVAL_CTX *,CT_POLICY_EVAL_CTX_new_ex,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, propq, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(CT_POLICY_EVAL_CTX_new_ex, libctx, propq);
    AROS_LIBFUNC_EXIT
}

DIST_POINT_NAME * LIB_DIST_POINT_NAME_dup(struct Library * _base, const DIST_POINT_NAME * a);

AROS_LH1(DIST_POINT_NAME *,DIST_POINT_NAME_dup,
    AROS_LDA(const DIST_POINT_NAME *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(DIST_POINT_NAME_dup, a);
    AROS_LIBFUNC_EXIT
}

int LIB_EC_GROUP_check_named_curve(struct Library * _base, const EC_GROUP * group, int nist_only, BN_CTX * ctx);

AROS_LH3(int,EC_GROUP_check_named_curve,
    AROS_LDA(const EC_GROUP *, group, A0),
    AROS_LDA(int, nist_only, D0),
    AROS_LDA(BN_CTX *, ctx, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EC_GROUP_check_named_curve, group, nist_only, ctx);
    AROS_LIBFUNC_EXIT
}

int LIB_EC_GROUP_get_field_type(struct Library * _base, const EC_GROUP * group);

AROS_LH1(int,EC_GROUP_get_field_type,
    AROS_LDA(const EC_GROUP *, group, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EC_GROUP_get_field_type, group);
    AROS_LIBFUNC_EXIT
}

EC_GROUP * LIB_EC_GROUP_new_by_curve_name_ex(struct Library * _base, OSSL_LIB_CTX * libctx, const char * propq, int nid);

AROS_LH3(EC_GROUP *,EC_GROUP_new_by_curve_name_ex,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, propq, A1),
    AROS_LDA(int, nid, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EC_GROUP_new_by_curve_name_ex, libctx, propq, nid);
    AROS_LIBFUNC_EXIT
}

EC_GROUP * LIB_EC_GROUP_new_from_params(struct Library * _base, const OSSL_PARAM * params, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH3(EC_GROUP *,EC_GROUP_new_from_params,
    AROS_LDA(const OSSL_PARAM *, params, A0),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A1),
    AROS_LDA(const char *, propq, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EC_GROUP_new_from_params, params, libctx, propq);
    AROS_LIBFUNC_EXIT
}

OSSL_PARAM * LIB_EC_GROUP_to_params(struct Library * _base, const EC_GROUP * group, OSSL_LIB_CTX * libctx, const char * propq, BN_CTX * bnctx);

AROS_LH4(OSSL_PARAM *,EC_GROUP_to_params,
    AROS_LDA(const EC_GROUP *, group, A0),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A1),
    AROS_LDA(const char *, propq, A2),
    AROS_LDA(BN_CTX *, bnctx, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EC_GROUP_to_params, group, libctx, propq, bnctx);
    AROS_LIBFUNC_EXIT
}

EC_KEY * LIB_EC_KEY_new_by_curve_name_ex(struct Library * _base, OSSL_LIB_CTX * ctx, const char * propq, int nid);

AROS_LH3(EC_KEY *,EC_KEY_new_by_curve_name_ex,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    AROS_LDA(const char *, propq, A1),
    AROS_LDA(int, nid, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EC_KEY_new_by_curve_name_ex, ctx, propq, nid);
    AROS_LIBFUNC_EXIT
}

EC_KEY * LIB_EC_KEY_new_ex(struct Library * _base, OSSL_LIB_CTX * ctx, const char * propq);

AROS_LH2(EC_KEY *,EC_KEY_new_ex,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    AROS_LDA(const char *, propq, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EC_KEY_new_ex, ctx, propq);
    AROS_LIBFUNC_EXIT
}

void LIB_ERR_add_error_mem_bio(struct Library * _base, const char * sep, BIO * bio);

AROS_LH2(void,ERR_add_error_mem_bio,
    AROS_LDA(const char *, sep, A0),
    AROS_LDA(BIO *, bio, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(ERR_add_error_mem_bio, sep, bio);
    AROS_LIBFUNC_EXIT
}

void LIB_ERR_add_error_txt(struct Library * _base, const char * sepr, const char * txt);

AROS_LH2(void,ERR_add_error_txt,
    AROS_LDA(const char *, sepr, A0),
    AROS_LDA(const char *, txt, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(ERR_add_error_txt, sepr, txt);
    AROS_LIBFUNC_EXIT
}

int LIB_ERR_count_to_mark(struct Library * _base);

AROS_LH0(int,ERR_count_to_mark,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(ERR_count_to_mark);
    AROS_LIBFUNC_EXIT
}

unsigned long LIB_ERR_get_error_all(struct Library * _base, const char ** file, int * line, const char ** func, const char ** data, int * flags);

AROS_LH5(unsigned long,ERR_get_error_all,
    AROS_LDA(const char **, file, A0),
    AROS_LDA(int *, line, A1),
    AROS_LDA(const char **, func, A2),
    AROS_LDA(const char **, data, A3),
    AROS_LDA(int *, flags, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(ERR_get_error_all, file, line, func, data, flags);
    AROS_LIBFUNC_EXIT
}

void LIB_ERR_new(struct Library * _base);

AROS_LH0(void,ERR_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC_NP(ERR_new);
    AROS_LIBFUNC_EXIT
}

unsigned long LIB_ERR_peek_error_all(struct Library * _base, const char ** file, int * line, const char ** func, const char ** data, int * flags);

AROS_LH5(unsigned long,ERR_peek_error_all,
    AROS_LDA(const char **, file, A0),
    AROS_LDA(int *, line, A1),
    AROS_LDA(const char **, func, A2),
    AROS_LDA(const char **, data, A3),
    AROS_LDA(int *, flags, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(ERR_peek_error_all, file, line, func, data, flags);
    AROS_LIBFUNC_EXIT
}

unsigned long LIB_ERR_peek_error_data(struct Library * _base, const char ** data, int * flags);

AROS_LH2(unsigned long,ERR_peek_error_data,
    AROS_LDA(const char **, data, A0),
    AROS_LDA(int *, flags, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(ERR_peek_error_data, data, flags);
    AROS_LIBFUNC_EXIT
}

unsigned long LIB_ERR_peek_error_func(struct Library * _base, const char ** func);

AROS_LH1(unsigned long,ERR_peek_error_func,
    AROS_LDA(const char **, func, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(ERR_peek_error_func, func);
    AROS_LIBFUNC_EXIT
}

unsigned long LIB_ERR_peek_last_error_all(struct Library * _base, const char ** file, int * line, const char ** func, const char ** data, int * flags);

AROS_LH5(unsigned long,ERR_peek_last_error_all,
    AROS_LDA(const char **, file, A0),
    AROS_LDA(int *, line, A1),
    AROS_LDA(const char **, func, A2),
    AROS_LDA(const char **, data, A3),
    AROS_LDA(int *, flags, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(ERR_peek_last_error_all, file, line, func, data, flags);
    AROS_LIBFUNC_EXIT
}

unsigned long LIB_ERR_peek_last_error_data(struct Library * _base, const char ** data, int * flags);

AROS_LH2(unsigned long,ERR_peek_last_error_data,
    AROS_LDA(const char **, data, A0),
    AROS_LDA(int *, flags, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(ERR_peek_last_error_data, data, flags);
    AROS_LIBFUNC_EXIT
}

unsigned long LIB_ERR_peek_last_error_func(struct Library * _base, const char ** func);

AROS_LH1(unsigned long,ERR_peek_last_error_func,
    AROS_LDA(const char **, func, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(ERR_peek_last_error_func, func);
    AROS_LIBFUNC_EXIT
}

int LIB_ERR_pop(struct Library * _base);

AROS_LH0(int,ERR_pop,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(ERR_pop);
    AROS_LIBFUNC_EXIT
}

void LIB_ERR_set_debug(struct Library * _base, const char * file, int line, const char * func);

AROS_LH3(void,ERR_set_debug,
    AROS_LDA(const char *, file, A0),
    AROS_LDA(int, line, D0),
    AROS_LDA(const char *, func, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(ERR_set_debug, file, line, func);
    AROS_LIBFUNC_EXIT
}

void LIB_ERR_vset_error(struct Library * _base, int lib, int reason, const char * fmt, long * args);

AROS_LH4(void,ERR_vset_error,
    AROS_LDA(int, lib, D0),
    AROS_LDA(int, reason, D1),
    AROS_LDA(const char *, fmt, A0),
    AROS_LDA(long *, args, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(ERR_vset_error, lib, reason, fmt, args);
    AROS_LIBFUNC_EXIT
}

const ASN1_ITEM * LIB_ESS_SIGNING_CERT_V2_it(struct Library * _base);

AROS_LH0(const ASN1_ITEM *,ESS_SIGNING_CERT_V2_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(ESS_SIGNING_CERT_V2_it);
    AROS_LIBFUNC_EXIT
}

const ASN1_ITEM * LIB_ESS_SIGNING_CERT_it(struct Library * _base);

AROS_LH0(const ASN1_ITEM *,ESS_SIGNING_CERT_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(ESS_SIGNING_CERT_it);
    AROS_LIBFUNC_EXIT
}

void LIB_EVP_ASYM_CIPHER_do_all_provided(struct Library * _base, OSSL_LIB_CTX * libctx, void * arg);

AROS_LH2(void,EVP_ASYM_CIPHER_do_all_provided,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(void *, arg, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(EVP_ASYM_CIPHER_do_all_provided, libctx, arg);
    AROS_LIBFUNC_EXIT
}

EVP_ASYM_CIPHER * LIB_EVP_ASYM_CIPHER_fetch(struct Library * _base, OSSL_LIB_CTX * ctx, const char * algorithm, const char * properties);

AROS_LH3(EVP_ASYM_CIPHER *,EVP_ASYM_CIPHER_fetch,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    AROS_LDA(const char *, algorithm, A1),
    AROS_LDA(const char *, properties, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_ASYM_CIPHER_fetch, ctx, algorithm, properties);
    AROS_LIBFUNC_EXIT
}

void LIB_EVP_ASYM_CIPHER_free(struct Library * _base, EVP_ASYM_CIPHER * cipher);

AROS_LH1(void,EVP_ASYM_CIPHER_free,
    AROS_LDA(EVP_ASYM_CIPHER *, cipher, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(EVP_ASYM_CIPHER_free, cipher);
    AROS_LIBFUNC_EXIT
}

const char * LIB_EVP_ASYM_CIPHER_get0_description(struct Library * _base, const EVP_ASYM_CIPHER * cipher);

AROS_LH1(const char *,EVP_ASYM_CIPHER_get0_description,
    AROS_LDA(const EVP_ASYM_CIPHER *, cipher, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_ASYM_CIPHER_get0_description, cipher);
    AROS_LIBFUNC_EXIT
}

const char * LIB_EVP_ASYM_CIPHER_get0_name(struct Library * _base, const EVP_ASYM_CIPHER * cipher);

AROS_LH1(const char *,EVP_ASYM_CIPHER_get0_name,
    AROS_LDA(const EVP_ASYM_CIPHER *, cipher, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_ASYM_CIPHER_get0_name, cipher);
    AROS_LIBFUNC_EXIT
}

OSSL_PROVIDER * LIB_EVP_ASYM_CIPHER_get0_provider(struct Library * _base, const EVP_ASYM_CIPHER * cipher);

AROS_LH1(OSSL_PROVIDER *,EVP_ASYM_CIPHER_get0_provider,
    AROS_LDA(const EVP_ASYM_CIPHER *, cipher, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_ASYM_CIPHER_get0_provider, cipher);
    AROS_LIBFUNC_EXIT
}

const OSSL_PARAM * LIB_EVP_ASYM_CIPHER_gettable_ctx_params(struct Library * _base, const EVP_ASYM_CIPHER * ciph);

AROS_LH1(const OSSL_PARAM *,EVP_ASYM_CIPHER_gettable_ctx_params,
    AROS_LDA(const EVP_ASYM_CIPHER *, ciph, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_ASYM_CIPHER_gettable_ctx_params, ciph);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_ASYM_CIPHER_is_a(struct Library * _base, const EVP_ASYM_CIPHER * cipher, const char * name);

AROS_LH2(int,EVP_ASYM_CIPHER_is_a,
    AROS_LDA(const EVP_ASYM_CIPHER *, cipher, A0),
    AROS_LDA(const char *, name, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_ASYM_CIPHER_is_a, cipher, name);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_ASYM_CIPHER_names_do_all(struct Library * _base, const EVP_ASYM_CIPHER * cipher, void * data);

AROS_LH2(int,EVP_ASYM_CIPHER_names_do_all,
    AROS_LDA(const EVP_ASYM_CIPHER *, cipher, A0),
    AROS_LDA(void *, data, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_ASYM_CIPHER_names_do_all, cipher, data);
    AROS_LIBFUNC_EXIT
}

const OSSL_PARAM * LIB_EVP_ASYM_CIPHER_settable_ctx_params(struct Library * _base, const EVP_ASYM_CIPHER * ciph);

AROS_LH1(const OSSL_PARAM *,EVP_ASYM_CIPHER_settable_ctx_params,
    AROS_LDA(const EVP_ASYM_CIPHER *, ciph, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_ASYM_CIPHER_settable_ctx_params, ciph);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_ASYM_CIPHER_up_ref(struct Library * _base, EVP_ASYM_CIPHER * cipher);

AROS_LH1(int,EVP_ASYM_CIPHER_up_ref,
    AROS_LDA(EVP_ASYM_CIPHER *, cipher, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_ASYM_CIPHER_up_ref, cipher);
    AROS_LIBFUNC_EXIT
}

EVP_CIPHER_CTX * LIB_EVP_CIPHER_CTX_dup(struct Library * _base, const EVP_CIPHER_CTX * in);

AROS_LH1(EVP_CIPHER_CTX *,EVP_CIPHER_CTX_dup,
    AROS_LDA(const EVP_CIPHER_CTX *, in, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_CIPHER_CTX_dup, in);
    AROS_LIBFUNC_EXIT
}

const EVP_CIPHER * LIB_EVP_CIPHER_CTX_get0_cipher(struct Library * _base, const EVP_CIPHER_CTX * ctx);

AROS_LH1(const EVP_CIPHER *,EVP_CIPHER_CTX_get0_cipher,
    AROS_LDA(const EVP_CIPHER_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_CIPHER_CTX_get0_cipher, ctx);
    AROS_LIBFUNC_EXIT
}

EVP_CIPHER * LIB_EVP_CIPHER_CTX_get1_cipher(struct Library * _base, EVP_CIPHER_CTX * ctx);

AROS_LH1(EVP_CIPHER *,EVP_CIPHER_CTX_get1_cipher,
    AROS_LDA(EVP_CIPHER_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_CIPHER_CTX_get1_cipher, ctx);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_CIPHER_CTX_get_algor(struct Library * _base, EVP_CIPHER_CTX * ctx, X509_ALGOR ** alg);

AROS_LH2(int,EVP_CIPHER_CTX_get_algor,
    AROS_LDA(EVP_CIPHER_CTX *, ctx, A0),
    AROS_LDA(X509_ALGOR **, alg, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_CIPHER_CTX_get_algor, ctx, alg);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_CIPHER_CTX_get_algor_params(struct Library * _base, EVP_CIPHER_CTX * ctx, X509_ALGOR * alg);

AROS_LH2(int,EVP_CIPHER_CTX_get_algor_params,
    AROS_LDA(EVP_CIPHER_CTX *, ctx, A0),
    AROS_LDA(X509_ALGOR *, alg, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_CIPHER_CTX_get_algor_params, ctx, alg);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_CIPHER_CTX_get_original_iv(struct Library * _base, EVP_CIPHER_CTX * ctx, void * buf, size_t len);

AROS_LH3(int,EVP_CIPHER_CTX_get_original_iv,
    AROS_LDA(EVP_CIPHER_CTX *, ctx, A0),
    AROS_LDA(void *, buf, A1),
    AROS_LDA(size_t, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_CIPHER_CTX_get_original_iv, ctx, buf, len);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_CIPHER_CTX_get_params(struct Library * _base, EVP_CIPHER_CTX * ctx, OSSL_PARAM * params);

AROS_LH2(int,EVP_CIPHER_CTX_get_params,
    AROS_LDA(EVP_CIPHER_CTX *, ctx, A0),
    AROS_LDA(OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_CIPHER_CTX_get_params, ctx, params);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_CIPHER_CTX_get_tag_length(struct Library * _base, const EVP_CIPHER_CTX * ctx);

AROS_LH1(int,EVP_CIPHER_CTX_get_tag_length,
    AROS_LDA(const EVP_CIPHER_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_CIPHER_CTX_get_tag_length, ctx);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_CIPHER_CTX_get_updated_iv(struct Library * _base, EVP_CIPHER_CTX * ctx, void * buf, size_t len);

AROS_LH3(int,EVP_CIPHER_CTX_get_updated_iv,
    AROS_LDA(EVP_CIPHER_CTX *, ctx, A0),
    AROS_LDA(void *, buf, A1),
    AROS_LDA(size_t, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_CIPHER_CTX_get_updated_iv, ctx, buf, len);
    AROS_LIBFUNC_EXIT
}

const OSSL_PARAM * LIB_EVP_CIPHER_CTX_gettable_params(struct Library * _base, EVP_CIPHER_CTX * ctx);

AROS_LH1(const OSSL_PARAM *,EVP_CIPHER_CTX_gettable_params,
    AROS_LDA(EVP_CIPHER_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_CIPHER_CTX_gettable_params, ctx);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_CIPHER_CTX_set_algor_params(struct Library * _base, EVP_CIPHER_CTX * ctx, const X509_ALGOR * alg);

AROS_LH2(int,EVP_CIPHER_CTX_set_algor_params,
    AROS_LDA(EVP_CIPHER_CTX *, ctx, A0),
    AROS_LDA(const X509_ALGOR *, alg, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_CIPHER_CTX_set_algor_params, ctx, alg);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_CIPHER_CTX_set_params(struct Library * _base, EVP_CIPHER_CTX * ctx, const OSSL_PARAM * params);

AROS_LH2(int,EVP_CIPHER_CTX_set_params,
    AROS_LDA(EVP_CIPHER_CTX *, ctx, A0),
    AROS_LDA(const OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_CIPHER_CTX_set_params, ctx, params);
    AROS_LIBFUNC_EXIT
}

const OSSL_PARAM * LIB_EVP_CIPHER_CTX_settable_params(struct Library * _base, EVP_CIPHER_CTX * ctx);

AROS_LH1(const OSSL_PARAM *,EVP_CIPHER_CTX_settable_params,
    AROS_LDA(EVP_CIPHER_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_CIPHER_CTX_settable_params, ctx);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_CIPHER_can_pipeline(struct Library * _base, const EVP_CIPHER * cipher, int enc);

AROS_LH2(int,EVP_CIPHER_can_pipeline,
    AROS_LDA(const EVP_CIPHER *, cipher, A0),
    AROS_LDA(int, enc, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_CIPHER_can_pipeline, cipher, enc);
    AROS_LIBFUNC_EXIT
}

void LIB_EVP_CIPHER_do_all_provided(struct Library * _base, OSSL_LIB_CTX * libctx, void * arg);

AROS_LH2(void,EVP_CIPHER_do_all_provided,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(void *, arg, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(EVP_CIPHER_do_all_provided, libctx, arg);
    AROS_LIBFUNC_EXIT
}

EVP_CIPHER * LIB_EVP_CIPHER_fetch(struct Library * _base, OSSL_LIB_CTX * ctx, const char * algorithm, const char * properties);

AROS_LH3(EVP_CIPHER *,EVP_CIPHER_fetch,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    AROS_LDA(const char *, algorithm, A1),
    AROS_LDA(const char *, properties, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_CIPHER_fetch, ctx, algorithm, properties);
    AROS_LIBFUNC_EXIT
}

void LIB_EVP_CIPHER_free(struct Library * _base, EVP_CIPHER * cipher);

AROS_LH1(void,EVP_CIPHER_free,
    AROS_LDA(EVP_CIPHER *, cipher, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(EVP_CIPHER_free, cipher);
    AROS_LIBFUNC_EXIT
}

const char * LIB_EVP_CIPHER_get0_description(struct Library * _base, const EVP_CIPHER * cipher);

AROS_LH1(const char *,EVP_CIPHER_get0_description,
    AROS_LDA(const EVP_CIPHER *, cipher, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_CIPHER_get0_description, cipher);
    AROS_LIBFUNC_EXIT
}

const char * LIB_EVP_CIPHER_get0_name(struct Library * _base, const EVP_CIPHER * cipher);

AROS_LH1(const char *,EVP_CIPHER_get0_name,
    AROS_LDA(const EVP_CIPHER *, cipher, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_CIPHER_get0_name, cipher);
    AROS_LIBFUNC_EXIT
}

const OSSL_PROVIDER * LIB_EVP_CIPHER_get0_provider(struct Library * _base, const EVP_CIPHER * cipher);

AROS_LH1(const OSSL_PROVIDER *,EVP_CIPHER_get0_provider,
    AROS_LDA(const EVP_CIPHER *, cipher, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_CIPHER_get0_provider, cipher);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_CIPHER_get_mode(struct Library * _base, const EVP_CIPHER * cipher);

AROS_LH1(int,EVP_CIPHER_get_mode,
    AROS_LDA(const EVP_CIPHER *, cipher, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_CIPHER_get_mode, cipher);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_CIPHER_get_params(struct Library * _base, EVP_CIPHER * cipher, OSSL_PARAM * params);

AROS_LH2(int,EVP_CIPHER_get_params,
    AROS_LDA(EVP_CIPHER *, cipher, A0),
    AROS_LDA(OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_CIPHER_get_params, cipher, params);
    AROS_LIBFUNC_EXIT
}

const OSSL_PARAM * LIB_EVP_CIPHER_gettable_ctx_params(struct Library * _base, const EVP_CIPHER * cipher);

AROS_LH1(const OSSL_PARAM *,EVP_CIPHER_gettable_ctx_params,
    AROS_LDA(const EVP_CIPHER *, cipher, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_CIPHER_gettable_ctx_params, cipher);
    AROS_LIBFUNC_EXIT
}

const OSSL_PARAM * LIB_EVP_CIPHER_gettable_params(struct Library * _base, const EVP_CIPHER * cipher);

AROS_LH1(const OSSL_PARAM *,EVP_CIPHER_gettable_params,
    AROS_LDA(const EVP_CIPHER *, cipher, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_CIPHER_gettable_params, cipher);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_CIPHER_is_a(struct Library * _base, const EVP_CIPHER * cipher, const char * name);

AROS_LH2(int,EVP_CIPHER_is_a,
    AROS_LDA(const EVP_CIPHER *, cipher, A0),
    AROS_LDA(const char *, name, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_CIPHER_is_a, cipher, name);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_CIPHER_names_do_all(struct Library * _base, const EVP_CIPHER * cipher, void * data);

AROS_LH2(int,EVP_CIPHER_names_do_all,
    AROS_LDA(const EVP_CIPHER *, cipher, A0),
    AROS_LDA(void *, data, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_CIPHER_names_do_all, cipher, data);
    AROS_LIBFUNC_EXIT
}

const OSSL_PARAM * LIB_EVP_CIPHER_settable_ctx_params(struct Library * _base, const EVP_CIPHER * cipher);

AROS_LH1(const OSSL_PARAM *,EVP_CIPHER_settable_ctx_params,
    AROS_LDA(const EVP_CIPHER *, cipher, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_CIPHER_settable_ctx_params, cipher);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_CIPHER_up_ref(struct Library * _base, EVP_CIPHER * cipher);

AROS_LH1(int,EVP_CIPHER_up_ref,
    AROS_LDA(EVP_CIPHER *, cipher, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_CIPHER_up_ref, cipher);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_CipherInit_SKEY(struct Library * _base, EVP_CIPHER_CTX * ctx, const EVP_CIPHER * cipher, EVP_SKEY * skey, const unsigned char * iv, size_t iv_len, int enc, const OSSL_PARAM * params);

AROS_LH7(int,EVP_CipherInit_SKEY,
    AROS_LDA(EVP_CIPHER_CTX *, ctx, A0),
    AROS_LDA(const EVP_CIPHER *, cipher, A1),
    AROS_LDA(EVP_SKEY *, skey, A2),
    AROS_LDA(const unsigned char *, iv, A3),
    AROS_LDA(size_t, iv_len, D0),
    AROS_LDA(int, enc, D1),
    AROS_LDA(const OSSL_PARAM *, params, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_CipherInit_SKEY, ctx, cipher, skey, iv, iv_len, enc, params);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_CipherInit_ex2(struct Library * _base, EVP_CIPHER_CTX * ctx, const EVP_CIPHER * cipher, const unsigned char * key, const unsigned char * iv, int enc, const OSSL_PARAM * params);

AROS_LH6(int,EVP_CipherInit_ex2,
    AROS_LDA(EVP_CIPHER_CTX *, ctx, A0),
    AROS_LDA(const EVP_CIPHER *, cipher, A1),
    AROS_LDA(const unsigned char *, key, A2),
    AROS_LDA(const unsigned char *, iv, A3),
    AROS_LDA(int, enc, D0),
    AROS_LDA(const OSSL_PARAM *, params, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_CipherInit_ex2, ctx, cipher, key, iv, enc, params);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_CipherPipelineDecryptInit(struct Library * _base, EVP_CIPHER_CTX * ctx, const EVP_CIPHER * cipher, const unsigned char * key, size_t keylen, size_t numpipes, const unsigned char ** iv, size_t ivlen);

AROS_LH7(int,EVP_CipherPipelineDecryptInit,
    AROS_LDA(EVP_CIPHER_CTX *, ctx, A0),
    AROS_LDA(const EVP_CIPHER *, cipher, A1),
    AROS_LDA(const unsigned char *, key, A2),
    AROS_LDA(size_t, keylen, D0),
    AROS_LDA(size_t, numpipes, D1),
    AROS_LDA(const unsigned char **, iv, A3),
    AROS_LDA(size_t, ivlen, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_CipherPipelineDecryptInit, ctx, cipher, key, keylen, numpipes, iv, ivlen);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_CipherPipelineEncryptInit(struct Library * _base, EVP_CIPHER_CTX * ctx, const EVP_CIPHER * cipher, const unsigned char * key, size_t keylen, size_t numpipes, const unsigned char ** iv, size_t ivlen);

AROS_LH7(int,EVP_CipherPipelineEncryptInit,
    AROS_LDA(EVP_CIPHER_CTX *, ctx, A0),
    AROS_LDA(const EVP_CIPHER *, cipher, A1),
    AROS_LDA(const unsigned char *, key, A2),
    AROS_LDA(size_t, keylen, D0),
    AROS_LDA(size_t, numpipes, D1),
    AROS_LDA(const unsigned char **, iv, A3),
    AROS_LDA(size_t, ivlen, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_CipherPipelineEncryptInit, ctx, cipher, key, keylen, numpipes, iv, ivlen);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_CipherPipelineFinal(struct Library * _base, EVP_CIPHER_CTX * ctx, unsigned char ** outm, size_t * outl, const size_t * outsize);

AROS_LH4(int,EVP_CipherPipelineFinal,
    AROS_LDA(EVP_CIPHER_CTX *, ctx, A0),
    AROS_LDA(unsigned char **, outm, A1),
    AROS_LDA(size_t *, outl, A2),
    AROS_LDA(const size_t *, outsize, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_CipherPipelineFinal, ctx, outm, outl, outsize);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_CipherPipelineUpdate(struct Library * _base, EVP_CIPHER_CTX * ctx, unsigned char ** out, size_t * outl, const size_t * outsize, const unsigned char ** in, const size_t * inl);

AROS_LH6(int,EVP_CipherPipelineUpdate,
    AROS_LDA(EVP_CIPHER_CTX *, ctx, A0),
    AROS_LDA(unsigned char **, out, A1),
    AROS_LDA(size_t *, outl, A2),
    AROS_LDA(const size_t *, outsize, A3),
    AROS_LDA(const unsigned char **, in, D0),
    AROS_LDA(const size_t *, inl, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_CipherPipelineUpdate, ctx, out, outl, outsize, in, inl);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_DecryptInit_ex2(struct Library * _base, EVP_CIPHER_CTX * ctx, const EVP_CIPHER * cipher, const unsigned char * key, const unsigned char * iv, const OSSL_PARAM * params);

AROS_LH5(int,EVP_DecryptInit_ex2,
    AROS_LDA(EVP_CIPHER_CTX *, ctx, A0),
    AROS_LDA(const EVP_CIPHER *, cipher, A1),
    AROS_LDA(const unsigned char *, key, A2),
    AROS_LDA(const unsigned char *, iv, A3),
    AROS_LDA(const OSSL_PARAM *, params, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_DecryptInit_ex2, ctx, cipher, key, iv, params);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_DigestInit_ex2(struct Library * _base, EVP_MD_CTX * ctx, const EVP_MD * type, const OSSL_PARAM * params);

AROS_LH3(int,EVP_DigestInit_ex2,
    AROS_LDA(EVP_MD_CTX *, ctx, A0),
    AROS_LDA(const EVP_MD *, type, A1),
    AROS_LDA(const OSSL_PARAM *, params, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_DigestInit_ex2, ctx, type, params);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_DigestSignInit_ex(struct Library * _base, EVP_MD_CTX * ctx, EVP_PKEY_CTX ** pctx, const char * mdname, OSSL_LIB_CTX * libctx, const char * props, EVP_PKEY * pkey, const OSSL_PARAM * params);

AROS_LH7(int,EVP_DigestSignInit_ex,
    AROS_LDA(EVP_MD_CTX *, ctx, A0),
    AROS_LDA(EVP_PKEY_CTX **, pctx, A1),
    AROS_LDA(const char *, mdname, A2),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A3),
    AROS_LDA(const char *, props, D0),
    AROS_LDA(EVP_PKEY *, pkey, D1),
    AROS_LDA(const OSSL_PARAM *, params, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_DigestSignInit_ex, ctx, pctx, mdname, libctx, props, pkey, params);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_DigestSignUpdate(struct Library * _base, EVP_MD_CTX * ctx, const void * data, size_t dsize);

AROS_LH3(int,EVP_DigestSignUpdate,
    AROS_LDA(EVP_MD_CTX *, ctx, A0),
    AROS_LDA(const void *, data, A1),
    AROS_LDA(size_t, dsize, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_DigestSignUpdate, ctx, data, dsize);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_DigestSqueeze(struct Library * _base, EVP_MD_CTX * ctx, unsigned char * out, size_t outlen);

AROS_LH3(int,EVP_DigestSqueeze,
    AROS_LDA(EVP_MD_CTX *, ctx, A0),
    AROS_LDA(unsigned char *, out, A1),
    AROS_LDA(size_t, outlen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_DigestSqueeze, ctx, out, outlen);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_DigestVerifyInit_ex(struct Library * _base, EVP_MD_CTX * ctx, EVP_PKEY_CTX ** pctx, const char * mdname, OSSL_LIB_CTX * libctx, const char * props, EVP_PKEY * pkey, const OSSL_PARAM * params);

AROS_LH7(int,EVP_DigestVerifyInit_ex,
    AROS_LDA(EVP_MD_CTX *, ctx, A0),
    AROS_LDA(EVP_PKEY_CTX **, pctx, A1),
    AROS_LDA(const char *, mdname, A2),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A3),
    AROS_LDA(const char *, props, D0),
    AROS_LDA(EVP_PKEY *, pkey, D1),
    AROS_LDA(const OSSL_PARAM *, params, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_DigestVerifyInit_ex, ctx, pctx, mdname, libctx, props, pkey, params);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_DigestVerifyUpdate(struct Library * _base, EVP_MD_CTX * ctx, const void * data, size_t dsize);

AROS_LH3(int,EVP_DigestVerifyUpdate,
    AROS_LDA(EVP_MD_CTX *, ctx, A0),
    AROS_LDA(const void *, data, A1),
    AROS_LDA(size_t, dsize, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_DigestVerifyUpdate, ctx, data, dsize);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_EncryptInit_ex2(struct Library * _base, EVP_CIPHER_CTX * ctx, const EVP_CIPHER * cipher, const unsigned char * key, const unsigned char * iv, const OSSL_PARAM * params);

AROS_LH5(int,EVP_EncryptInit_ex2,
    AROS_LDA(EVP_CIPHER_CTX *, ctx, A0),
    AROS_LDA(const EVP_CIPHER *, cipher, A1),
    AROS_LDA(const unsigned char *, key, A2),
    AROS_LDA(const unsigned char *, iv, A3),
    AROS_LDA(const OSSL_PARAM *, params, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_EncryptInit_ex2, ctx, cipher, key, iv, params);
    AROS_LIBFUNC_EXIT
}

EVP_KDF_CTX * LIB_EVP_KDF_CTX_dup(struct Library * _base, const EVP_KDF_CTX * src);

AROS_LH1(EVP_KDF_CTX *,EVP_KDF_CTX_dup,
    AROS_LDA(const EVP_KDF_CTX *, src, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_KDF_CTX_dup, src);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_KDF_CTX_get_params(struct Library * _base, EVP_KDF_CTX * ctx, OSSL_PARAM * params);

AROS_LH2(int,EVP_KDF_CTX_get_params,
    AROS_LDA(EVP_KDF_CTX *, ctx, A0),
    AROS_LDA(OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_KDF_CTX_get_params, ctx, params);
    AROS_LIBFUNC_EXIT
}

const OSSL_PARAM * LIB_EVP_KDF_CTX_gettable_params(struct Library * _base, EVP_KDF_CTX * ctx);

AROS_LH1(const OSSL_PARAM *,EVP_KDF_CTX_gettable_params,
    AROS_LDA(EVP_KDF_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_KDF_CTX_gettable_params, ctx);
    AROS_LIBFUNC_EXIT
}

const EVP_KDF * LIB_EVP_KDF_CTX_kdf(struct Library * _base, EVP_KDF_CTX * ctx);

AROS_LH1(const EVP_KDF *,EVP_KDF_CTX_kdf,
    AROS_LDA(EVP_KDF_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_KDF_CTX_kdf, ctx);
    AROS_LIBFUNC_EXIT
}

EVP_KDF_CTX * LIB_EVP_KDF_CTX_new(struct Library * _base, EVP_KDF * kdf);

AROS_LH1(EVP_KDF_CTX *,EVP_KDF_CTX_new,
    AROS_LDA(EVP_KDF *, kdf, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_KDF_CTX_new, kdf);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_KDF_CTX_set_params(struct Library * _base, EVP_KDF_CTX * ctx, const OSSL_PARAM * params);

AROS_LH2(int,EVP_KDF_CTX_set_params,
    AROS_LDA(EVP_KDF_CTX *, ctx, A0),
    AROS_LDA(const OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_KDF_CTX_set_params, ctx, params);
    AROS_LIBFUNC_EXIT
}

const OSSL_PARAM * LIB_EVP_KDF_CTX_settable_params(struct Library * _base, EVP_KDF_CTX * ctx);

AROS_LH1(const OSSL_PARAM *,EVP_KDF_CTX_settable_params,
    AROS_LDA(EVP_KDF_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_KDF_CTX_settable_params, ctx);
    AROS_LIBFUNC_EXIT
}

void LIB_EVP_KDF_do_all_provided(struct Library * _base, OSSL_LIB_CTX * libctx, void * arg);

AROS_LH2(void,EVP_KDF_do_all_provided,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(void *, arg, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(EVP_KDF_do_all_provided, libctx, arg);
    AROS_LIBFUNC_EXIT
}

EVP_KDF * LIB_EVP_KDF_fetch(struct Library * _base, OSSL_LIB_CTX * libctx, const char * algorithm, const char * properties);

AROS_LH3(EVP_KDF *,EVP_KDF_fetch,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, algorithm, A1),
    AROS_LDA(const char *, properties, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_KDF_fetch, libctx, algorithm, properties);
    AROS_LIBFUNC_EXIT
}

void LIB_EVP_KDF_free(struct Library * _base, EVP_KDF * kdf);

AROS_LH1(void,EVP_KDF_free,
    AROS_LDA(EVP_KDF *, kdf, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(EVP_KDF_free, kdf);
    AROS_LIBFUNC_EXIT
}

const char * LIB_EVP_KDF_get0_description(struct Library * _base, const EVP_KDF * kdf);

AROS_LH1(const char *,EVP_KDF_get0_description,
    AROS_LDA(const EVP_KDF *, kdf, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_KDF_get0_description, kdf);
    AROS_LIBFUNC_EXIT
}

const OSSL_PROVIDER * LIB_EVP_KDF_get0_provider(struct Library * _base, const EVP_KDF * kdf);

AROS_LH1(const OSSL_PROVIDER *,EVP_KDF_get0_provider,
    AROS_LDA(const EVP_KDF *, kdf, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_KDF_get0_provider, kdf);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_KDF_get_params(struct Library * _base, EVP_KDF * kdf, OSSL_PARAM * params);

AROS_LH2(int,EVP_KDF_get_params,
    AROS_LDA(EVP_KDF *, kdf, A0),
    AROS_LDA(OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_KDF_get_params, kdf, params);
    AROS_LIBFUNC_EXIT
}

const OSSL_PARAM * LIB_EVP_KDF_gettable_ctx_params(struct Library * _base, const EVP_KDF * kdf);

AROS_LH1(const OSSL_PARAM *,EVP_KDF_gettable_ctx_params,
    AROS_LDA(const EVP_KDF *, kdf, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_KDF_gettable_ctx_params, kdf);
    AROS_LIBFUNC_EXIT
}

const OSSL_PARAM * LIB_EVP_KDF_gettable_params(struct Library * _base, const EVP_KDF * kdf);

AROS_LH1(const OSSL_PARAM *,EVP_KDF_gettable_params,
    AROS_LDA(const EVP_KDF *, kdf, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_KDF_gettable_params, kdf);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_KDF_is_a(struct Library * _base, const EVP_KDF * kdf, const char * name);

AROS_LH2(int,EVP_KDF_is_a,
    AROS_LDA(const EVP_KDF *, kdf, A0),
    AROS_LDA(const char *, name, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_KDF_is_a, kdf, name);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_KDF_names_do_all(struct Library * _base, const EVP_KDF * kdf, void * data);

AROS_LH2(int,EVP_KDF_names_do_all,
    AROS_LDA(const EVP_KDF *, kdf, A0),
    AROS_LDA(void *, data, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_KDF_names_do_all, kdf, data);
    AROS_LIBFUNC_EXIT
}

const OSSL_PARAM * LIB_EVP_KDF_settable_ctx_params(struct Library * _base, const EVP_KDF * kdf);

AROS_LH1(const OSSL_PARAM *,EVP_KDF_settable_ctx_params,
    AROS_LDA(const EVP_KDF *, kdf, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_KDF_settable_ctx_params, kdf);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_KDF_up_ref(struct Library * _base, EVP_KDF * kdf);

AROS_LH1(int,EVP_KDF_up_ref,
    AROS_LDA(EVP_KDF *, kdf, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_KDF_up_ref, kdf);
    AROS_LIBFUNC_EXIT
}

void LIB_EVP_KEM_do_all_provided(struct Library * _base, OSSL_LIB_CTX * libctx, void * arg);

AROS_LH2(void,EVP_KEM_do_all_provided,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(void *, arg, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(EVP_KEM_do_all_provided, libctx, arg);
    AROS_LIBFUNC_EXIT
}

EVP_KEM * LIB_EVP_KEM_fetch(struct Library * _base, OSSL_LIB_CTX * ctx, const char * algorithm, const char * properties);

AROS_LH3(EVP_KEM *,EVP_KEM_fetch,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    AROS_LDA(const char *, algorithm, A1),
    AROS_LDA(const char *, properties, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_KEM_fetch, ctx, algorithm, properties);
    AROS_LIBFUNC_EXIT
}

void LIB_EVP_KEM_free(struct Library * _base, EVP_KEM * wrap);

AROS_LH1(void,EVP_KEM_free,
    AROS_LDA(EVP_KEM *, wrap, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(EVP_KEM_free, wrap);
    AROS_LIBFUNC_EXIT
}

const char * LIB_EVP_KEM_get0_description(struct Library * _base, const EVP_KEM * wrap);

AROS_LH1(const char *,EVP_KEM_get0_description,
    AROS_LDA(const EVP_KEM *, wrap, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_KEM_get0_description, wrap);
    AROS_LIBFUNC_EXIT
}

const char * LIB_EVP_KEM_get0_name(struct Library * _base, const EVP_KEM * wrap);

AROS_LH1(const char *,EVP_KEM_get0_name,
    AROS_LDA(const EVP_KEM *, wrap, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_KEM_get0_name, wrap);
    AROS_LIBFUNC_EXIT
}

OSSL_PROVIDER * LIB_EVP_KEM_get0_provider(struct Library * _base, const EVP_KEM * wrap);

AROS_LH1(OSSL_PROVIDER *,EVP_KEM_get0_provider,
    AROS_LDA(const EVP_KEM *, wrap, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_KEM_get0_provider, wrap);
    AROS_LIBFUNC_EXIT
}

const OSSL_PARAM * LIB_EVP_KEM_gettable_ctx_params(struct Library * _base, const EVP_KEM * kem);

AROS_LH1(const OSSL_PARAM *,EVP_KEM_gettable_ctx_params,
    AROS_LDA(const EVP_KEM *, kem, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_KEM_gettable_ctx_params, kem);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_KEM_is_a(struct Library * _base, const EVP_KEM * wrap, const char * name);

AROS_LH2(int,EVP_KEM_is_a,
    AROS_LDA(const EVP_KEM *, wrap, A0),
    AROS_LDA(const char *, name, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_KEM_is_a, wrap, name);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_KEM_names_do_all(struct Library * _base, const EVP_KEM * wrap, void * data);

AROS_LH2(int,EVP_KEM_names_do_all,
    AROS_LDA(const EVP_KEM *, wrap, A0),
    AROS_LDA(void *, data, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_KEM_names_do_all, wrap, data);
    AROS_LIBFUNC_EXIT
}

const OSSL_PARAM * LIB_EVP_KEM_settable_ctx_params(struct Library * _base, const EVP_KEM * kem);

AROS_LH1(const OSSL_PARAM *,EVP_KEM_settable_ctx_params,
    AROS_LDA(const EVP_KEM *, kem, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_KEM_settable_ctx_params, kem);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_KEM_up_ref(struct Library * _base, EVP_KEM * wrap);

AROS_LH1(int,EVP_KEM_up_ref,
    AROS_LDA(EVP_KEM *, wrap, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_KEM_up_ref, wrap);
    AROS_LIBFUNC_EXIT
}

void LIB_EVP_KEYEXCH_do_all_provided(struct Library * _base, OSSL_LIB_CTX * libctx, void * data);

AROS_LH2(void,EVP_KEYEXCH_do_all_provided,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(void *, data, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(EVP_KEYEXCH_do_all_provided, libctx, data);
    AROS_LIBFUNC_EXIT
}

EVP_KEYEXCH * LIB_EVP_KEYEXCH_fetch(struct Library * _base, OSSL_LIB_CTX * ctx, const char * algorithm, const char * properties);

AROS_LH3(EVP_KEYEXCH *,EVP_KEYEXCH_fetch,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    AROS_LDA(const char *, algorithm, A1),
    AROS_LDA(const char *, properties, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_KEYEXCH_fetch, ctx, algorithm, properties);
    AROS_LIBFUNC_EXIT
}

void LIB_EVP_KEYEXCH_free(struct Library * _base, EVP_KEYEXCH * exchange);

AROS_LH1(void,EVP_KEYEXCH_free,
    AROS_LDA(EVP_KEYEXCH *, exchange, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(EVP_KEYEXCH_free, exchange);
    AROS_LIBFUNC_EXIT
}

const char * LIB_EVP_KEYEXCH_get0_description(struct Library * _base, const EVP_KEYEXCH * keyexch);

AROS_LH1(const char *,EVP_KEYEXCH_get0_description,
    AROS_LDA(const EVP_KEYEXCH *, keyexch, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_KEYEXCH_get0_description, keyexch);
    AROS_LIBFUNC_EXIT
}

const char * LIB_EVP_KEYEXCH_get0_name(struct Library * _base, const EVP_KEYEXCH * keyexch);

AROS_LH1(const char *,EVP_KEYEXCH_get0_name,
    AROS_LDA(const EVP_KEYEXCH *, keyexch, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_KEYEXCH_get0_name, keyexch);
    AROS_LIBFUNC_EXIT
}

OSSL_PROVIDER * LIB_EVP_KEYEXCH_get0_provider(struct Library * _base, const EVP_KEYEXCH * exchange);

AROS_LH1(OSSL_PROVIDER *,EVP_KEYEXCH_get0_provider,
    AROS_LDA(const EVP_KEYEXCH *, exchange, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_KEYEXCH_get0_provider, exchange);
    AROS_LIBFUNC_EXIT
}

const OSSL_PARAM * LIB_EVP_KEYEXCH_gettable_ctx_params(struct Library * _base, const EVP_KEYEXCH * keyexch);

AROS_LH1(const OSSL_PARAM *,EVP_KEYEXCH_gettable_ctx_params,
    AROS_LDA(const EVP_KEYEXCH *, keyexch, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_KEYEXCH_gettable_ctx_params, keyexch);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_KEYEXCH_is_a(struct Library * _base, const EVP_KEYEXCH * keyexch, const char * name);

AROS_LH2(int,EVP_KEYEXCH_is_a,
    AROS_LDA(const EVP_KEYEXCH *, keyexch, A0),
    AROS_LDA(const char *, name, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_KEYEXCH_is_a, keyexch, name);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_KEYEXCH_names_do_all(struct Library * _base, const EVP_KEYEXCH * keyexch, void * data);

AROS_LH2(int,EVP_KEYEXCH_names_do_all,
    AROS_LDA(const EVP_KEYEXCH *, keyexch, A0),
    AROS_LDA(void *, data, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_KEYEXCH_names_do_all, keyexch, data);
    AROS_LIBFUNC_EXIT
}

const OSSL_PARAM * LIB_EVP_KEYEXCH_settable_ctx_params(struct Library * _base, const EVP_KEYEXCH * keyexch);

AROS_LH1(const OSSL_PARAM *,EVP_KEYEXCH_settable_ctx_params,
    AROS_LDA(const EVP_KEYEXCH *, keyexch, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_KEYEXCH_settable_ctx_params, keyexch);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_KEYEXCH_up_ref(struct Library * _base, EVP_KEYEXCH * exchange);

AROS_LH1(int,EVP_KEYEXCH_up_ref,
    AROS_LDA(EVP_KEYEXCH *, exchange, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_KEYEXCH_up_ref, exchange);
    AROS_LIBFUNC_EXIT
}

void LIB_EVP_KEYMGMT_do_all_provided(struct Library * _base, OSSL_LIB_CTX * libctx, void * arg);

AROS_LH2(void,EVP_KEYMGMT_do_all_provided,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(void *, arg, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(EVP_KEYMGMT_do_all_provided, libctx, arg);
    AROS_LIBFUNC_EXIT
}

EVP_KEYMGMT * LIB_EVP_KEYMGMT_fetch(struct Library * _base, OSSL_LIB_CTX * ctx, const char * algorithm, const char * properties);

AROS_LH3(EVP_KEYMGMT *,EVP_KEYMGMT_fetch,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    AROS_LDA(const char *, algorithm, A1),
    AROS_LDA(const char *, properties, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_KEYMGMT_fetch, ctx, algorithm, properties);
    AROS_LIBFUNC_EXIT
}

void LIB_EVP_KEYMGMT_free(struct Library * _base, EVP_KEYMGMT * keymgmt);

AROS_LH1(void,EVP_KEYMGMT_free,
    AROS_LDA(EVP_KEYMGMT *, keymgmt, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(EVP_KEYMGMT_free, keymgmt);
    AROS_LIBFUNC_EXIT
}

const OSSL_PARAM * LIB_EVP_KEYMGMT_gen_gettable_params(struct Library * _base, const EVP_KEYMGMT * keymgmt);

AROS_LH1(const OSSL_PARAM *,EVP_KEYMGMT_gen_gettable_params,
    AROS_LDA(const EVP_KEYMGMT *, keymgmt, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_KEYMGMT_gen_gettable_params, keymgmt);
    AROS_LIBFUNC_EXIT
}

const OSSL_PARAM * LIB_EVP_KEYMGMT_gen_settable_params(struct Library * _base, const EVP_KEYMGMT * keymgmt);

AROS_LH1(const OSSL_PARAM *,EVP_KEYMGMT_gen_settable_params,
    AROS_LDA(const EVP_KEYMGMT *, keymgmt, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_KEYMGMT_gen_settable_params, keymgmt);
    AROS_LIBFUNC_EXIT
}

const char * LIB_EVP_KEYMGMT_get0_description(struct Library * _base, const EVP_KEYMGMT * keymgmt);

AROS_LH1(const char *,EVP_KEYMGMT_get0_description,
    AROS_LDA(const EVP_KEYMGMT *, keymgmt, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_KEYMGMT_get0_description, keymgmt);
    AROS_LIBFUNC_EXIT
}

const char * LIB_EVP_KEYMGMT_get0_name(struct Library * _base, const EVP_KEYMGMT * keymgmt);

AROS_LH1(const char *,EVP_KEYMGMT_get0_name,
    AROS_LDA(const EVP_KEYMGMT *, keymgmt, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_KEYMGMT_get0_name, keymgmt);
    AROS_LIBFUNC_EXIT
}

const OSSL_PROVIDER * LIB_EVP_KEYMGMT_get0_provider(struct Library * _base, const EVP_KEYMGMT * keymgmt);

AROS_LH1(const OSSL_PROVIDER *,EVP_KEYMGMT_get0_provider,
    AROS_LDA(const EVP_KEYMGMT *, keymgmt, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_KEYMGMT_get0_provider, keymgmt);
    AROS_LIBFUNC_EXIT
}

const OSSL_PARAM * LIB_EVP_KEYMGMT_gettable_params(struct Library * _base, const EVP_KEYMGMT * keymgmt);

AROS_LH1(const OSSL_PARAM *,EVP_KEYMGMT_gettable_params,
    AROS_LDA(const EVP_KEYMGMT *, keymgmt, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_KEYMGMT_gettable_params, keymgmt);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_KEYMGMT_is_a(struct Library * _base, const EVP_KEYMGMT * keymgmt, const char * name);

AROS_LH2(int,EVP_KEYMGMT_is_a,
    AROS_LDA(const EVP_KEYMGMT *, keymgmt, A0),
    AROS_LDA(const char *, name, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_KEYMGMT_is_a, keymgmt, name);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_KEYMGMT_names_do_all(struct Library * _base, const EVP_KEYMGMT * keymgmt, void * data);

AROS_LH2(int,EVP_KEYMGMT_names_do_all,
    AROS_LDA(const EVP_KEYMGMT *, keymgmt, A0),
    AROS_LDA(void *, data, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_KEYMGMT_names_do_all, keymgmt, data);
    AROS_LIBFUNC_EXIT
}

const OSSL_PARAM * LIB_EVP_KEYMGMT_settable_params(struct Library * _base, const EVP_KEYMGMT * keymgmt);

AROS_LH1(const OSSL_PARAM *,EVP_KEYMGMT_settable_params,
    AROS_LDA(const EVP_KEYMGMT *, keymgmt, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_KEYMGMT_settable_params, keymgmt);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_KEYMGMT_up_ref(struct Library * _base, EVP_KEYMGMT * keymgmt);

AROS_LH1(int,EVP_KEYMGMT_up_ref,
    AROS_LDA(EVP_KEYMGMT *, keymgmt, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_KEYMGMT_up_ref, keymgmt);
    AROS_LIBFUNC_EXIT
}

size_t LIB_EVP_MAC_CTX_get_block_size(struct Library * _base, EVP_MAC_CTX * ctx);

AROS_LH1(size_t,EVP_MAC_CTX_get_block_size,
    AROS_LDA(EVP_MAC_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_MAC_CTX_get_block_size, ctx);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_MAC_CTX_get_params(struct Library * _base, EVP_MAC_CTX * ctx, OSSL_PARAM * params);

AROS_LH2(int,EVP_MAC_CTX_get_params,
    AROS_LDA(EVP_MAC_CTX *, ctx, A0),
    AROS_LDA(OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_MAC_CTX_get_params, ctx, params);
    AROS_LIBFUNC_EXIT
}

const OSSL_PARAM * LIB_EVP_MAC_CTX_gettable_params(struct Library * _base, EVP_MAC_CTX * ctx);

AROS_LH1(const OSSL_PARAM *,EVP_MAC_CTX_gettable_params,
    AROS_LDA(EVP_MAC_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_MAC_CTX_gettable_params, ctx);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_MAC_CTX_set_params(struct Library * _base, EVP_MAC_CTX * ctx, const OSSL_PARAM * params);

AROS_LH2(int,EVP_MAC_CTX_set_params,
    AROS_LDA(EVP_MAC_CTX *, ctx, A0),
    AROS_LDA(const OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_MAC_CTX_set_params, ctx, params);
    AROS_LIBFUNC_EXIT
}

const OSSL_PARAM * LIB_EVP_MAC_CTX_settable_params(struct Library * _base, EVP_MAC_CTX * ctx);

AROS_LH1(const OSSL_PARAM *,EVP_MAC_CTX_settable_params,
    AROS_LDA(EVP_MAC_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_MAC_CTX_settable_params, ctx);
    AROS_LIBFUNC_EXIT
}

void LIB_EVP_MAC_do_all_provided(struct Library * _base, OSSL_LIB_CTX * libctx, void * arg);

AROS_LH2(void,EVP_MAC_do_all_provided,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(void *, arg, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(EVP_MAC_do_all_provided, libctx, arg);
    AROS_LIBFUNC_EXIT
}

EVP_MAC * LIB_EVP_MAC_fetch(struct Library * _base, OSSL_LIB_CTX * libctx, const char * algorithm, const char * properties);

AROS_LH3(EVP_MAC *,EVP_MAC_fetch,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, algorithm, A1),
    AROS_LDA(const char *, properties, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_MAC_fetch, libctx, algorithm, properties);
    AROS_LIBFUNC_EXIT
}

void LIB_EVP_MAC_free(struct Library * _base, EVP_MAC * mac);

AROS_LH1(void,EVP_MAC_free,
    AROS_LDA(EVP_MAC *, mac, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(EVP_MAC_free, mac);
    AROS_LIBFUNC_EXIT
}

const char * LIB_EVP_MAC_get0_description(struct Library * _base, const EVP_MAC * mac);

AROS_LH1(const char *,EVP_MAC_get0_description,
    AROS_LDA(const EVP_MAC *, mac, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_MAC_get0_description, mac);
    AROS_LIBFUNC_EXIT
}

const char * LIB_EVP_MAC_get0_name(struct Library * _base, const EVP_MAC * mac);

AROS_LH1(const char *,EVP_MAC_get0_name,
    AROS_LDA(const EVP_MAC *, mac, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_MAC_get0_name, mac);
    AROS_LIBFUNC_EXIT
}

const OSSL_PROVIDER * LIB_EVP_MAC_get0_provider(struct Library * _base, const EVP_MAC * mac);

AROS_LH1(const OSSL_PROVIDER *,EVP_MAC_get0_provider,
    AROS_LDA(const EVP_MAC *, mac, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_MAC_get0_provider, mac);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_MAC_get_params(struct Library * _base, EVP_MAC * mac, OSSL_PARAM * params);

AROS_LH2(int,EVP_MAC_get_params,
    AROS_LDA(EVP_MAC *, mac, A0),
    AROS_LDA(OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_MAC_get_params, mac, params);
    AROS_LIBFUNC_EXIT
}

const OSSL_PARAM * LIB_EVP_MAC_gettable_ctx_params(struct Library * _base, const EVP_MAC * mac);

AROS_LH1(const OSSL_PARAM *,EVP_MAC_gettable_ctx_params,
    AROS_LDA(const EVP_MAC *, mac, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_MAC_gettable_ctx_params, mac);
    AROS_LIBFUNC_EXIT
}

const OSSL_PARAM * LIB_EVP_MAC_gettable_params(struct Library * _base, const EVP_MAC * mac);

AROS_LH1(const OSSL_PARAM *,EVP_MAC_gettable_params,
    AROS_LDA(const EVP_MAC *, mac, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_MAC_gettable_params, mac);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_MAC_init_SKEY(struct Library * _base, EVP_MAC_CTX * ctx, EVP_SKEY * skey, const OSSL_PARAM * params);

AROS_LH3(int,EVP_MAC_init_SKEY,
    AROS_LDA(EVP_MAC_CTX *, ctx, A0),
    AROS_LDA(EVP_SKEY *, skey, A1),
    AROS_LDA(const OSSL_PARAM *, params, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_MAC_init_SKEY, ctx, skey, params);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_MAC_is_a(struct Library * _base, const EVP_MAC * mac, const char * name);

AROS_LH2(int,EVP_MAC_is_a,
    AROS_LDA(const EVP_MAC *, mac, A0),
    AROS_LDA(const char *, name, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_MAC_is_a, mac, name);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_MAC_names_do_all(struct Library * _base, const EVP_MAC * mac, void * data);

AROS_LH2(int,EVP_MAC_names_do_all,
    AROS_LDA(const EVP_MAC *, mac, A0),
    AROS_LDA(void *, data, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_MAC_names_do_all, mac, data);
    AROS_LIBFUNC_EXIT
}

const OSSL_PARAM * LIB_EVP_MAC_settable_ctx_params(struct Library * _base, const EVP_MAC * mac);

AROS_LH1(const OSSL_PARAM *,EVP_MAC_settable_ctx_params,
    AROS_LDA(const EVP_MAC *, mac, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_MAC_settable_ctx_params, mac);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_MAC_up_ref(struct Library * _base, EVP_MAC * mac);

AROS_LH1(int,EVP_MAC_up_ref,
    AROS_LDA(EVP_MAC *, mac, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_MAC_up_ref, mac);
    AROS_LIBFUNC_EXIT
}

EVP_MD_CTX * LIB_EVP_MD_CTX_dup(struct Library * _base, const EVP_MD_CTX * in);

AROS_LH1(EVP_MD_CTX *,EVP_MD_CTX_dup,
    AROS_LDA(const EVP_MD_CTX *, in, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_MD_CTX_dup, in);
    AROS_LIBFUNC_EXIT
}

const EVP_MD * LIB_EVP_MD_CTX_get0_md(struct Library * _base, const EVP_MD_CTX * ctx);

AROS_LH1(const EVP_MD *,EVP_MD_CTX_get0_md,
    AROS_LDA(const EVP_MD_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_MD_CTX_get0_md, ctx);
    AROS_LIBFUNC_EXIT
}

EVP_MD * LIB_EVP_MD_CTX_get1_md(struct Library * _base, EVP_MD_CTX * ctx);

AROS_LH1(EVP_MD *,EVP_MD_CTX_get1_md,
    AROS_LDA(EVP_MD_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_MD_CTX_get1_md, ctx);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_MD_CTX_get_params(struct Library * _base, EVP_MD_CTX * ctx, OSSL_PARAM * params);

AROS_LH2(int,EVP_MD_CTX_get_params,
    AROS_LDA(EVP_MD_CTX *, ctx, A0),
    AROS_LDA(OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_MD_CTX_get_params, ctx, params);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_MD_CTX_get_size_ex(struct Library * _base, const EVP_MD_CTX * ctx);

AROS_LH1(int,EVP_MD_CTX_get_size_ex,
    AROS_LDA(const EVP_MD_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_MD_CTX_get_size_ex, ctx);
    AROS_LIBFUNC_EXIT
}

const OSSL_PARAM * LIB_EVP_MD_CTX_gettable_params(struct Library * _base, EVP_MD_CTX * ctx);

AROS_LH1(const OSSL_PARAM *,EVP_MD_CTX_gettable_params,
    AROS_LDA(EVP_MD_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_MD_CTX_gettable_params, ctx);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_MD_CTX_set_params(struct Library * _base, EVP_MD_CTX * ctx, const OSSL_PARAM * params);

AROS_LH2(int,EVP_MD_CTX_set_params,
    AROS_LDA(EVP_MD_CTX *, ctx, A0),
    AROS_LDA(const OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_MD_CTX_set_params, ctx, params);
    AROS_LIBFUNC_EXIT
}

const OSSL_PARAM * LIB_EVP_MD_CTX_settable_params(struct Library * _base, EVP_MD_CTX * ctx);

AROS_LH1(const OSSL_PARAM *,EVP_MD_CTX_settable_params,
    AROS_LDA(EVP_MD_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_MD_CTX_settable_params, ctx);
    AROS_LIBFUNC_EXIT
}

void LIB_EVP_MD_do_all_provided(struct Library * _base, OSSL_LIB_CTX * libctx, void * arg);

AROS_LH2(void,EVP_MD_do_all_provided,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(void *, arg, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(EVP_MD_do_all_provided, libctx, arg);
    AROS_LIBFUNC_EXIT
}

EVP_MD * LIB_EVP_MD_fetch(struct Library * _base, OSSL_LIB_CTX * ctx, const char * algorithm, const char * properties);

AROS_LH3(EVP_MD *,EVP_MD_fetch,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    AROS_LDA(const char *, algorithm, A1),
    AROS_LDA(const char *, properties, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_MD_fetch, ctx, algorithm, properties);
    AROS_LIBFUNC_EXIT
}

void LIB_EVP_MD_free(struct Library * _base, EVP_MD * md);

AROS_LH1(void,EVP_MD_free,
    AROS_LDA(EVP_MD *, md, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(EVP_MD_free, md);
    AROS_LIBFUNC_EXIT
}

const char * LIB_EVP_MD_get0_description(struct Library * _base, const EVP_MD * md);

AROS_LH1(const char *,EVP_MD_get0_description,
    AROS_LDA(const EVP_MD *, md, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_MD_get0_description, md);
    AROS_LIBFUNC_EXIT
}

const char * LIB_EVP_MD_get0_name(struct Library * _base, const EVP_MD * md);

AROS_LH1(const char *,EVP_MD_get0_name,
    AROS_LDA(const EVP_MD *, md, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_MD_get0_name, md);
    AROS_LIBFUNC_EXIT
}

const OSSL_PROVIDER * LIB_EVP_MD_get0_provider(struct Library * _base, const EVP_MD * md);

AROS_LH1(const OSSL_PROVIDER *,EVP_MD_get0_provider,
    AROS_LDA(const EVP_MD *, md, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_MD_get0_provider, md);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_MD_get_params(struct Library * _base, const EVP_MD * digest, OSSL_PARAM * params);

AROS_LH2(int,EVP_MD_get_params,
    AROS_LDA(const EVP_MD *, digest, A0),
    AROS_LDA(OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_MD_get_params, digest, params);
    AROS_LIBFUNC_EXIT
}

const OSSL_PARAM * LIB_EVP_MD_gettable_ctx_params(struct Library * _base, const EVP_MD * md);

AROS_LH1(const OSSL_PARAM *,EVP_MD_gettable_ctx_params,
    AROS_LDA(const EVP_MD *, md, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_MD_gettable_ctx_params, md);
    AROS_LIBFUNC_EXIT
}

const OSSL_PARAM * LIB_EVP_MD_gettable_params(struct Library * _base, const EVP_MD * digest);

AROS_LH1(const OSSL_PARAM *,EVP_MD_gettable_params,
    AROS_LDA(const EVP_MD *, digest, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_MD_gettable_params, digest);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_MD_is_a(struct Library * _base, const EVP_MD * md, const char * name);

AROS_LH2(int,EVP_MD_is_a,
    AROS_LDA(const EVP_MD *, md, A0),
    AROS_LDA(const char *, name, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_MD_is_a, md, name);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_MD_names_do_all(struct Library * _base, const EVP_MD * md, void * data);

AROS_LH2(int,EVP_MD_names_do_all,
    AROS_LDA(const EVP_MD *, md, A0),
    AROS_LDA(void *, data, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_MD_names_do_all, md, data);
    AROS_LIBFUNC_EXIT
}

const OSSL_PARAM * LIB_EVP_MD_settable_ctx_params(struct Library * _base, const EVP_MD * md);

AROS_LH1(const OSSL_PARAM *,EVP_MD_settable_ctx_params,
    AROS_LDA(const EVP_MD *, md, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_MD_settable_ctx_params, md);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_MD_up_ref(struct Library * _base, EVP_MD * md);

AROS_LH1(int,EVP_MD_up_ref,
    AROS_LDA(EVP_MD *, md, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_MD_up_ref, md);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_MD_xof(struct Library * _base, const EVP_MD * md);

AROS_LH1(int,EVP_MD_xof,
    AROS_LDA(const EVP_MD *, md, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_MD_xof, md);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PBE_CipherInit_ex(struct Library * _base, ASN1_OBJECT * pbe_obj, const char * pass, int passlen, ASN1_TYPE * param, EVP_CIPHER_CTX * ctx, int en_de, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH8(int,EVP_PBE_CipherInit_ex,
    AROS_LDA(ASN1_OBJECT *, pbe_obj, A0),
    AROS_LDA(const char *, pass, A1),
    AROS_LDA(int, passlen, D0),
    AROS_LDA(ASN1_TYPE *, param, A2),
    AROS_LDA(EVP_CIPHER_CTX *, ctx, A3),
    AROS_LDA(int, en_de, D1),
    AROS_LDA(OSSL_LIB_CTX *, libctx, D2),
    AROS_LDA(const char *, propq, D3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PBE_CipherInit_ex, pbe_obj, pass, passlen, param, ctx, en_de, libctx, propq);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PBE_find_ex(struct Library * _base, int type, int pbe_nid, int * pcnid, int * pmnid, EVP_PBE_KEYGEN ** pkeygen, EVP_PBE_KEYGEN_EX ** pkeygen_ex);

AROS_LH6(int,EVP_PBE_find_ex,
    AROS_LDA(int, type, D0),
    AROS_LDA(int, pbe_nid, D1),
    AROS_LDA(int *, pcnid, A0),
    AROS_LDA(int *, pmnid, A1),
    AROS_LDA(EVP_PBE_KEYGEN **, pkeygen, A2),
    AROS_LDA(EVP_PBE_KEYGEN_EX **, pkeygen_ex, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PBE_find_ex, type, pbe_nid, pcnid, pmnid, pkeygen, pkeygen_ex);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PBE_scrypt_amiga_1(struct Library * _base, const char * pass, size_t passlen, const unsigned char * salt, uint64_t N, uint64_t r, uint64_t p, uint64_t maxmem, void * moreargs);

AROS_LH8(int,EVP_PBE_scrypt_amiga_1,
    AROS_LDA(const char *, pass, A0),
    AROS_LDA(size_t, passlen, A1),
    AROS_LDA(const unsigned char *, salt, A2),
    AROS_LDA(uint64_t, N, D0),
    AROS_LDA(uint64_t, r, D2),
    AROS_LDA(uint64_t, p, D4),
    AROS_LDA(uint64_t, maxmem, D6),
    AROS_LDA(void *, moreargs, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PBE_scrypt_amiga_1, pass, passlen, salt, N, r, p, maxmem, moreargs);
    AROS_LIBFUNC_EXIT
}

void * LIB_EVP_PBE_scrypt_amiga_2(struct Library * _base, size_t saltlen, unsigned char * key, size_t keylen);

AROS_LH3(void *,EVP_PBE_scrypt_amiga_2,
    AROS_LDA(size_t, saltlen, D0),
    AROS_LDA(unsigned char *, key, A0),
    AROS_LDA(size_t, keylen, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PBE_scrypt_amiga_2, saltlen, key, keylen);
    AROS_LIBFUNC_EXIT
}

void * LIB_EVP_PBE_scrypt_ex_amiga_2(struct Library * _base, size_t saltlen, unsigned char * key, size_t keylen, OSSL_LIB_CTX * ctx, const char * propq);

AROS_LH5(void *,EVP_PBE_scrypt_ex_amiga_2,
    AROS_LDA(size_t, saltlen, D0),
    AROS_LDA(unsigned char *, key, A0),
    AROS_LDA(size_t, keylen, D1),
    AROS_LDA(OSSL_LIB_CTX *, ctx, A1),
    AROS_LDA(const char *, propq, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PBE_scrypt_ex_amiga_2, saltlen, key, keylen, ctx, propq);
    AROS_LIBFUNC_EXIT
}

EVP_PKEY * LIB_EVP_PKCS82PKEY_ex(struct Library * _base, const PKCS8_PRIV_KEY_INFO * p8, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH3(EVP_PKEY *,EVP_PKCS82PKEY_ex,
    AROS_LDA(const PKCS8_PRIV_KEY_INFO *, p8, A0),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A1),
    AROS_LDA(const char *, propq, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKCS82PKEY_ex, p8, libctx, propq);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_add1_hkdf_info(struct Library * _base, EVP_PKEY_CTX * ctx, const unsigned char * info, int infolen);

AROS_LH3(int,EVP_PKEY_CTX_add1_hkdf_info,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const unsigned char *, info, A1),
    AROS_LDA(int, infolen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_add1_hkdf_info, ctx, info, infolen);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_add1_tls1_prf_seed(struct Library * _base, EVP_PKEY_CTX * pctx, const unsigned char * seed, int seedlen);

AROS_LH3(int,EVP_PKEY_CTX_add1_tls1_prf_seed,
    AROS_LDA(EVP_PKEY_CTX *, pctx, A0),
    AROS_LDA(const unsigned char *, seed, A1),
    AROS_LDA(int, seedlen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_add1_tls1_prf_seed, pctx, seed, seedlen);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_get0_dh_kdf_oid(struct Library * _base, EVP_PKEY_CTX * ctx, ASN1_OBJECT ** oid);

AROS_LH2(int,EVP_PKEY_CTX_get0_dh_kdf_oid,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(ASN1_OBJECT **, oid, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_get0_dh_kdf_oid, ctx, oid);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_get0_dh_kdf_ukm(struct Library * _base, EVP_PKEY_CTX * ctx, unsigned char ** ukm);

AROS_LH2(int,EVP_PKEY_CTX_get0_dh_kdf_ukm,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(unsigned char **, ukm, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_get0_dh_kdf_ukm, ctx, ukm);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_get0_ecdh_kdf_ukm(struct Library * _base, EVP_PKEY_CTX * ctx, unsigned char ** ukm);

AROS_LH2(int,EVP_PKEY_CTX_get0_ecdh_kdf_ukm,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(unsigned char **, ukm, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_get0_ecdh_kdf_ukm, ctx, ukm);
    AROS_LIBFUNC_EXIT
}

OSSL_LIB_CTX * LIB_EVP_PKEY_CTX_get0_libctx(struct Library * _base, EVP_PKEY_CTX * ctx);

AROS_LH1(OSSL_LIB_CTX *,EVP_PKEY_CTX_get0_libctx,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_get0_libctx, ctx);
    AROS_LIBFUNC_EXIT
}

const char * LIB_EVP_PKEY_CTX_get0_propq(struct Library * _base, const EVP_PKEY_CTX * ctx);

AROS_LH1(const char *,EVP_PKEY_CTX_get0_propq,
    AROS_LDA(const EVP_PKEY_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_get0_propq, ctx);
    AROS_LIBFUNC_EXIT
}

const OSSL_PROVIDER * LIB_EVP_PKEY_CTX_get0_provider(struct Library * _base, const EVP_PKEY_CTX * ctx);

AROS_LH1(const OSSL_PROVIDER *,EVP_PKEY_CTX_get0_provider,
    AROS_LDA(const EVP_PKEY_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_get0_provider, ctx);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_get0_rsa_oaep_label(struct Library * _base, EVP_PKEY_CTX * ctx, unsigned char ** label);

AROS_LH2(int,EVP_PKEY_CTX_get0_rsa_oaep_label,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(unsigned char **, label, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_get0_rsa_oaep_label, ctx, label);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_get1_id(struct Library * _base, EVP_PKEY_CTX * ctx, void * id);

AROS_LH2(int,EVP_PKEY_CTX_get1_id,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(void *, id, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_get1_id, ctx, id);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_get1_id_len(struct Library * _base, EVP_PKEY_CTX * ctx, size_t * id_len);

AROS_LH2(int,EVP_PKEY_CTX_get1_id_len,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(size_t *, id_len, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_get1_id_len, ctx, id_len);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_get_algor(struct Library * _base, EVP_PKEY_CTX * ctx, X509_ALGOR ** alg);

AROS_LH2(int,EVP_PKEY_CTX_get_algor,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(X509_ALGOR **, alg, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_get_algor, ctx, alg);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_get_algor_params(struct Library * _base, EVP_PKEY_CTX * ctx, X509_ALGOR * alg);

AROS_LH2(int,EVP_PKEY_CTX_get_algor_params,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(X509_ALGOR *, alg, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_get_algor_params, ctx, alg);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_get_dh_kdf_md(struct Library * _base, EVP_PKEY_CTX * ctx, const EVP_MD ** md);

AROS_LH2(int,EVP_PKEY_CTX_get_dh_kdf_md,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const EVP_MD **, md, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_get_dh_kdf_md, ctx, md);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_get_dh_kdf_outlen(struct Library * _base, EVP_PKEY_CTX * ctx, int * len);

AROS_LH2(int,EVP_PKEY_CTX_get_dh_kdf_outlen,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int *, len, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_get_dh_kdf_outlen, ctx, len);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_get_dh_kdf_type(struct Library * _base, EVP_PKEY_CTX * ctx);

AROS_LH1(int,EVP_PKEY_CTX_get_dh_kdf_type,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_get_dh_kdf_type, ctx);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_get_ecdh_cofactor_mode(struct Library * _base, EVP_PKEY_CTX * ctx);

AROS_LH1(int,EVP_PKEY_CTX_get_ecdh_cofactor_mode,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_get_ecdh_cofactor_mode, ctx);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_get_ecdh_kdf_md(struct Library * _base, EVP_PKEY_CTX * ctx, const EVP_MD ** md);

AROS_LH2(int,EVP_PKEY_CTX_get_ecdh_kdf_md,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const EVP_MD **, md, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_get_ecdh_kdf_md, ctx, md);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_get_ecdh_kdf_outlen(struct Library * _base, EVP_PKEY_CTX * ctx, int * len);

AROS_LH2(int,EVP_PKEY_CTX_get_ecdh_kdf_outlen,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int *, len, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_get_ecdh_kdf_outlen, ctx, len);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_get_ecdh_kdf_type(struct Library * _base, EVP_PKEY_CTX * ctx);

AROS_LH1(int,EVP_PKEY_CTX_get_ecdh_kdf_type,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_get_ecdh_kdf_type, ctx);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_get_group_name(struct Library * _base, EVP_PKEY_CTX * ctx, char * name, size_t namelen);

AROS_LH3(int,EVP_PKEY_CTX_get_group_name,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(char *, name, A1),
    AROS_LDA(size_t, namelen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_get_group_name, ctx, name, namelen);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_get_params(struct Library * _base, EVP_PKEY_CTX * ctx, OSSL_PARAM * params);

AROS_LH2(int,EVP_PKEY_CTX_get_params,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_get_params, ctx, params);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_get_rsa_mgf1_md(struct Library * _base, EVP_PKEY_CTX * ctx, const EVP_MD ** md);

AROS_LH2(int,EVP_PKEY_CTX_get_rsa_mgf1_md,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const EVP_MD **, md, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_get_rsa_mgf1_md, ctx, md);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_get_rsa_mgf1_md_name(struct Library * _base, EVP_PKEY_CTX * ctx, char * name, size_t namelen);

AROS_LH3(int,EVP_PKEY_CTX_get_rsa_mgf1_md_name,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(char *, name, A1),
    AROS_LDA(size_t, namelen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_get_rsa_mgf1_md_name, ctx, name, namelen);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_get_rsa_oaep_md(struct Library * _base, EVP_PKEY_CTX * ctx, const EVP_MD ** md);

AROS_LH2(int,EVP_PKEY_CTX_get_rsa_oaep_md,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const EVP_MD **, md, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_get_rsa_oaep_md, ctx, md);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_get_rsa_oaep_md_name(struct Library * _base, EVP_PKEY_CTX * ctx, char * name, size_t namelen);

AROS_LH3(int,EVP_PKEY_CTX_get_rsa_oaep_md_name,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(char *, name, A1),
    AROS_LDA(size_t, namelen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_get_rsa_oaep_md_name, ctx, name, namelen);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_get_rsa_padding(struct Library * _base, EVP_PKEY_CTX * ctx, int * pad_mode);

AROS_LH2(int,EVP_PKEY_CTX_get_rsa_padding,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int *, pad_mode, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_get_rsa_padding, ctx, pad_mode);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_get_rsa_pss_saltlen(struct Library * _base, EVP_PKEY_CTX * ctx, int * saltlen);

AROS_LH2(int,EVP_PKEY_CTX_get_rsa_pss_saltlen,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int *, saltlen, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_get_rsa_pss_saltlen, ctx, saltlen);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_get_signature_md(struct Library * _base, EVP_PKEY_CTX * ctx, const EVP_MD ** md);

AROS_LH2(int,EVP_PKEY_CTX_get_signature_md,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const EVP_MD **, md, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_get_signature_md, ctx, md);
    AROS_LIBFUNC_EXIT
}

const OSSL_PARAM * LIB_EVP_PKEY_CTX_gettable_params(struct Library * _base, const EVP_PKEY_CTX * ctx);

AROS_LH1(const OSSL_PARAM *,EVP_PKEY_CTX_gettable_params,
    AROS_LDA(const EVP_PKEY_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_gettable_params, ctx);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_is_a(struct Library * _base, EVP_PKEY_CTX * ctx, const char * keytype);

AROS_LH2(int,EVP_PKEY_CTX_is_a,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const char *, keytype, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_is_a, ctx, keytype);
    AROS_LIBFUNC_EXIT
}

EVP_PKEY_CTX * LIB_EVP_PKEY_CTX_new_from_name(struct Library * _base, OSSL_LIB_CTX * libctx, const char * name, const char * propquery);

AROS_LH3(EVP_PKEY_CTX *,EVP_PKEY_CTX_new_from_name,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, name, A1),
    AROS_LDA(const char *, propquery, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_new_from_name, libctx, name, propquery);
    AROS_LIBFUNC_EXIT
}

EVP_PKEY_CTX * LIB_EVP_PKEY_CTX_new_from_pkey(struct Library * _base, OSSL_LIB_CTX * libctx, EVP_PKEY * pkey, const char * propquery);

AROS_LH3(EVP_PKEY_CTX *,EVP_PKEY_CTX_new_from_pkey,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(EVP_PKEY *, pkey, A1),
    AROS_LDA(const char *, propquery, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_new_from_pkey, libctx, pkey, propquery);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set0_dh_kdf_oid(struct Library * _base, EVP_PKEY_CTX * ctx, ASN1_OBJECT * oid);

AROS_LH2(int,EVP_PKEY_CTX_set0_dh_kdf_oid,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(ASN1_OBJECT *, oid, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set0_dh_kdf_oid, ctx, oid);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set0_dh_kdf_ukm(struct Library * _base, EVP_PKEY_CTX * ctx, unsigned char * ukm, int len);

AROS_LH3(int,EVP_PKEY_CTX_set0_dh_kdf_ukm,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(unsigned char *, ukm, A1),
    AROS_LDA(int, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set0_dh_kdf_ukm, ctx, ukm, len);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set0_ecdh_kdf_ukm(struct Library * _base, EVP_PKEY_CTX * ctx, unsigned char * ukm, int len);

AROS_LH3(int,EVP_PKEY_CTX_set0_ecdh_kdf_ukm,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(unsigned char *, ukm, A1),
    AROS_LDA(int, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set0_ecdh_kdf_ukm, ctx, ukm, len);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set0_rsa_oaep_label(struct Library * _base, EVP_PKEY_CTX * ctx, void * label, int llen);

AROS_LH3(int,EVP_PKEY_CTX_set0_rsa_oaep_label,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(void *, label, A1),
    AROS_LDA(int, llen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set0_rsa_oaep_label, ctx, label, llen);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set1_hkdf_key(struct Library * _base, EVP_PKEY_CTX * ctx, const unsigned char * key, int keylen);

AROS_LH3(int,EVP_PKEY_CTX_set1_hkdf_key,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const unsigned char *, key, A1),
    AROS_LDA(int, keylen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set1_hkdf_key, ctx, key, keylen);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set1_hkdf_salt(struct Library * _base, EVP_PKEY_CTX * ctx, const unsigned char * salt, int saltlen);

AROS_LH3(int,EVP_PKEY_CTX_set1_hkdf_salt,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const unsigned char *, salt, A1),
    AROS_LDA(int, saltlen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set1_hkdf_salt, ctx, salt, saltlen);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set1_id(struct Library * _base, EVP_PKEY_CTX * ctx, const void * id, int len);

AROS_LH3(int,EVP_PKEY_CTX_set1_id,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const void *, id, A1),
    AROS_LDA(int, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set1_id, ctx, id, len);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set1_pbe_pass(struct Library * _base, EVP_PKEY_CTX * ctx, const char * pass, int passlen);

AROS_LH3(int,EVP_PKEY_CTX_set1_pbe_pass,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const char *, pass, A1),
    AROS_LDA(int, passlen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set1_pbe_pass, ctx, pass, passlen);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set1_rsa_keygen_pubexp(struct Library * _base, EVP_PKEY_CTX * ctx, BIGNUM * pubexp);

AROS_LH2(int,EVP_PKEY_CTX_set1_rsa_keygen_pubexp,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(BIGNUM *, pubexp, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set1_rsa_keygen_pubexp, ctx, pubexp);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set1_scrypt_salt(struct Library * _base, EVP_PKEY_CTX * ctx, const unsigned char * salt, int saltlen);

AROS_LH3(int,EVP_PKEY_CTX_set1_scrypt_salt,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const unsigned char *, salt, A1),
    AROS_LDA(int, saltlen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set1_scrypt_salt, ctx, salt, saltlen);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set1_tls1_prf_secret(struct Library * _base, EVP_PKEY_CTX * pctx, const unsigned char * sec, int seclen);

AROS_LH3(int,EVP_PKEY_CTX_set1_tls1_prf_secret,
    AROS_LDA(EVP_PKEY_CTX *, pctx, A0),
    AROS_LDA(const unsigned char *, sec, A1),
    AROS_LDA(int, seclen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set1_tls1_prf_secret, pctx, sec, seclen);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set_algor_params(struct Library * _base, EVP_PKEY_CTX * ctx, const X509_ALGOR * alg);

AROS_LH2(int,EVP_PKEY_CTX_set_algor_params,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const X509_ALGOR *, alg, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set_algor_params, ctx, alg);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set_dh_kdf_md(struct Library * _base, EVP_PKEY_CTX * ctx, const EVP_MD * md);

AROS_LH2(int,EVP_PKEY_CTX_set_dh_kdf_md,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const EVP_MD *, md, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set_dh_kdf_md, ctx, md);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set_dh_kdf_outlen(struct Library * _base, EVP_PKEY_CTX * ctx, int len);

AROS_LH2(int,EVP_PKEY_CTX_set_dh_kdf_outlen,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set_dh_kdf_outlen, ctx, len);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set_dh_kdf_type(struct Library * _base, EVP_PKEY_CTX * ctx, int kdf);

AROS_LH2(int,EVP_PKEY_CTX_set_dh_kdf_type,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int, kdf, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set_dh_kdf_type, ctx, kdf);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set_dh_nid(struct Library * _base, EVP_PKEY_CTX * ctx, int nid);

AROS_LH2(int,EVP_PKEY_CTX_set_dh_nid,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int, nid, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set_dh_nid, ctx, nid);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set_dh_pad(struct Library * _base, EVP_PKEY_CTX * ctx, int pad);

AROS_LH2(int,EVP_PKEY_CTX_set_dh_pad,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int, pad, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set_dh_pad, ctx, pad);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set_dh_paramgen_generator(struct Library * _base, EVP_PKEY_CTX * ctx, int gen);

AROS_LH2(int,EVP_PKEY_CTX_set_dh_paramgen_generator,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int, gen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set_dh_paramgen_generator, ctx, gen);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set_dh_paramgen_gindex(struct Library * _base, EVP_PKEY_CTX * ctx, int gindex);

AROS_LH2(int,EVP_PKEY_CTX_set_dh_paramgen_gindex,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int, gindex, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set_dh_paramgen_gindex, ctx, gindex);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set_dh_paramgen_prime_len(struct Library * _base, EVP_PKEY_CTX * ctx, int pbits);

AROS_LH2(int,EVP_PKEY_CTX_set_dh_paramgen_prime_len,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int, pbits, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set_dh_paramgen_prime_len, ctx, pbits);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set_dh_paramgen_seed(struct Library * _base, EVP_PKEY_CTX * ctx, const unsigned char * seed, size_t seedlen);

AROS_LH3(int,EVP_PKEY_CTX_set_dh_paramgen_seed,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const unsigned char *, seed, A1),
    AROS_LDA(size_t, seedlen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set_dh_paramgen_seed, ctx, seed, seedlen);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set_dh_paramgen_subprime_len(struct Library * _base, EVP_PKEY_CTX * ctx, int qlen);

AROS_LH2(int,EVP_PKEY_CTX_set_dh_paramgen_subprime_len,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int, qlen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set_dh_paramgen_subprime_len, ctx, qlen);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set_dh_paramgen_type(struct Library * _base, EVP_PKEY_CTX * ctx, int typ);

AROS_LH2(int,EVP_PKEY_CTX_set_dh_paramgen_type,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int, typ, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set_dh_paramgen_type, ctx, typ);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set_dh_rfc5114(struct Library * _base, EVP_PKEY_CTX * ctx, int gen);

AROS_LH2(int,EVP_PKEY_CTX_set_dh_rfc5114,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int, gen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set_dh_rfc5114, ctx, gen);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set_dhx_rfc5114(struct Library * _base, EVP_PKEY_CTX * ctx, int gen);

AROS_LH2(int,EVP_PKEY_CTX_set_dhx_rfc5114,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int, gen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set_dhx_rfc5114, ctx, gen);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set_dsa_paramgen_bits(struct Library * _base, EVP_PKEY_CTX * ctx, int nbits);

AROS_LH2(int,EVP_PKEY_CTX_set_dsa_paramgen_bits,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int, nbits, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set_dsa_paramgen_bits, ctx, nbits);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set_dsa_paramgen_gindex(struct Library * _base, EVP_PKEY_CTX * ctx, int gindex);

AROS_LH2(int,EVP_PKEY_CTX_set_dsa_paramgen_gindex,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int, gindex, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set_dsa_paramgen_gindex, ctx, gindex);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set_dsa_paramgen_md(struct Library * _base, EVP_PKEY_CTX * ctx, const EVP_MD * md);

AROS_LH2(int,EVP_PKEY_CTX_set_dsa_paramgen_md,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const EVP_MD *, md, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set_dsa_paramgen_md, ctx, md);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set_dsa_paramgen_md_props(struct Library * _base, EVP_PKEY_CTX * ctx, const char * md_name, const char * md_properties);

AROS_LH3(int,EVP_PKEY_CTX_set_dsa_paramgen_md_props,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const char *, md_name, A1),
    AROS_LDA(const char *, md_properties, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set_dsa_paramgen_md_props, ctx, md_name, md_properties);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set_dsa_paramgen_q_bits(struct Library * _base, EVP_PKEY_CTX * ctx, int qbits);

AROS_LH2(int,EVP_PKEY_CTX_set_dsa_paramgen_q_bits,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int, qbits, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set_dsa_paramgen_q_bits, ctx, qbits);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set_dsa_paramgen_seed(struct Library * _base, EVP_PKEY_CTX * ctx, const unsigned char * seed, size_t seedlen);

AROS_LH3(int,EVP_PKEY_CTX_set_dsa_paramgen_seed,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const unsigned char *, seed, A1),
    AROS_LDA(size_t, seedlen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set_dsa_paramgen_seed, ctx, seed, seedlen);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set_dsa_paramgen_type(struct Library * _base, EVP_PKEY_CTX * ctx, const char * name);

AROS_LH2(int,EVP_PKEY_CTX_set_dsa_paramgen_type,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const char *, name, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set_dsa_paramgen_type, ctx, name);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set_ec_param_enc(struct Library * _base, EVP_PKEY_CTX * ctx, int param_enc);

AROS_LH2(int,EVP_PKEY_CTX_set_ec_param_enc,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int, param_enc, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set_ec_param_enc, ctx, param_enc);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set_ec_paramgen_curve_nid(struct Library * _base, EVP_PKEY_CTX * ctx, int nid);

AROS_LH2(int,EVP_PKEY_CTX_set_ec_paramgen_curve_nid,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int, nid, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set_ec_paramgen_curve_nid, ctx, nid);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set_ecdh_cofactor_mode(struct Library * _base, EVP_PKEY_CTX * ctx, int cofactor_mode);

AROS_LH2(int,EVP_PKEY_CTX_set_ecdh_cofactor_mode,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int, cofactor_mode, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set_ecdh_cofactor_mode, ctx, cofactor_mode);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set_ecdh_kdf_md(struct Library * _base, EVP_PKEY_CTX * ctx, const EVP_MD * md);

AROS_LH2(int,EVP_PKEY_CTX_set_ecdh_kdf_md,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const EVP_MD *, md, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set_ecdh_kdf_md, ctx, md);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set_ecdh_kdf_outlen(struct Library * _base, EVP_PKEY_CTX * ctx, int len);

AROS_LH2(int,EVP_PKEY_CTX_set_ecdh_kdf_outlen,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set_ecdh_kdf_outlen, ctx, len);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set_ecdh_kdf_type(struct Library * _base, EVP_PKEY_CTX * ctx, int kdf);

AROS_LH2(int,EVP_PKEY_CTX_set_ecdh_kdf_type,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int, kdf, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set_ecdh_kdf_type, ctx, kdf);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set_group_name(struct Library * _base, EVP_PKEY_CTX * ctx, const char * name);

AROS_LH2(int,EVP_PKEY_CTX_set_group_name,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const char *, name, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set_group_name, ctx, name);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set_hkdf_md(struct Library * _base, EVP_PKEY_CTX * ctx, const EVP_MD * md);

AROS_LH2(int,EVP_PKEY_CTX_set_hkdf_md,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const EVP_MD *, md, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set_hkdf_md, ctx, md);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set_hkdf_mode(struct Library * _base, EVP_PKEY_CTX * ctx, int mode);

AROS_LH2(int,EVP_PKEY_CTX_set_hkdf_mode,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int, mode, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set_hkdf_mode, ctx, mode);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set_kem_op(struct Library * _base, EVP_PKEY_CTX * ctx, const char * op);

AROS_LH2(int,EVP_PKEY_CTX_set_kem_op,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const char *, op, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set_kem_op, ctx, op);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set_mac_key(struct Library * _base, EVP_PKEY_CTX * ctx, const unsigned char * key, int keylen);

AROS_LH3(int,EVP_PKEY_CTX_set_mac_key,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const unsigned char *, key, A1),
    AROS_LDA(int, keylen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set_mac_key, ctx, key, keylen);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set_params(struct Library * _base, EVP_PKEY_CTX * ctx, const OSSL_PARAM * params);

AROS_LH2(int,EVP_PKEY_CTX_set_params,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set_params, ctx, params);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set_rsa_keygen_bits(struct Library * _base, EVP_PKEY_CTX * ctx, int bits);

AROS_LH2(int,EVP_PKEY_CTX_set_rsa_keygen_bits,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int, bits, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set_rsa_keygen_bits, ctx, bits);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set_rsa_keygen_primes(struct Library * _base, EVP_PKEY_CTX * ctx, int primes);

AROS_LH2(int,EVP_PKEY_CTX_set_rsa_keygen_primes,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int, primes, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set_rsa_keygen_primes, ctx, primes);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set_rsa_keygen_pubexp(struct Library * _base, EVP_PKEY_CTX * ctx, BIGNUM * pubexp);

AROS_LH2(int,EVP_PKEY_CTX_set_rsa_keygen_pubexp,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(BIGNUM *, pubexp, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set_rsa_keygen_pubexp, ctx, pubexp);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set_rsa_mgf1_md(struct Library * _base, EVP_PKEY_CTX * ctx, const EVP_MD * md);

AROS_LH2(int,EVP_PKEY_CTX_set_rsa_mgf1_md,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const EVP_MD *, md, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set_rsa_mgf1_md, ctx, md);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set_rsa_mgf1_md_name(struct Library * _base, EVP_PKEY_CTX * ctx, const char * mdname, const char * mdprops);

AROS_LH3(int,EVP_PKEY_CTX_set_rsa_mgf1_md_name,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const char *, mdname, A1),
    AROS_LDA(const char *, mdprops, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set_rsa_mgf1_md_name, ctx, mdname, mdprops);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set_rsa_oaep_md(struct Library * _base, EVP_PKEY_CTX * ctx, const EVP_MD * md);

AROS_LH2(int,EVP_PKEY_CTX_set_rsa_oaep_md,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const EVP_MD *, md, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set_rsa_oaep_md, ctx, md);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set_rsa_oaep_md_name(struct Library * _base, EVP_PKEY_CTX * ctx, const char * mdname, const char * mdprops);

AROS_LH3(int,EVP_PKEY_CTX_set_rsa_oaep_md_name,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const char *, mdname, A1),
    AROS_LDA(const char *, mdprops, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set_rsa_oaep_md_name, ctx, mdname, mdprops);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set_rsa_padding(struct Library * _base, EVP_PKEY_CTX * ctx, int pad_mode);

AROS_LH2(int,EVP_PKEY_CTX_set_rsa_padding,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int, pad_mode, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set_rsa_padding, ctx, pad_mode);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set_rsa_pss_keygen_md(struct Library * _base, EVP_PKEY_CTX * ctx, const EVP_MD * md);

AROS_LH2(int,EVP_PKEY_CTX_set_rsa_pss_keygen_md,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const EVP_MD *, md, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set_rsa_pss_keygen_md, ctx, md);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set_rsa_pss_keygen_md_name(struct Library * _base, EVP_PKEY_CTX * ctx, const char * mdname, const char * mdprops);

AROS_LH3(int,EVP_PKEY_CTX_set_rsa_pss_keygen_md_name,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const char *, mdname, A1),
    AROS_LDA(const char *, mdprops, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set_rsa_pss_keygen_md_name, ctx, mdname, mdprops);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set_rsa_pss_keygen_mgf1_md(struct Library * _base, EVP_PKEY_CTX * ctx, const EVP_MD * md);

AROS_LH2(int,EVP_PKEY_CTX_set_rsa_pss_keygen_mgf1_md,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const EVP_MD *, md, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set_rsa_pss_keygen_mgf1_md, ctx, md);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set_rsa_pss_keygen_mgf1_md_name(struct Library * _base, EVP_PKEY_CTX * ctx, const char * mdname);

AROS_LH2(int,EVP_PKEY_CTX_set_rsa_pss_keygen_mgf1_md_name,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const char *, mdname, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set_rsa_pss_keygen_mgf1_md_name, ctx, mdname);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set_rsa_pss_keygen_saltlen(struct Library * _base, EVP_PKEY_CTX * ctx, int saltlen);

AROS_LH2(int,EVP_PKEY_CTX_set_rsa_pss_keygen_saltlen,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int, saltlen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set_rsa_pss_keygen_saltlen, ctx, saltlen);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set_rsa_pss_saltlen(struct Library * _base, EVP_PKEY_CTX * ctx, int saltlen);

AROS_LH2(int,EVP_PKEY_CTX_set_rsa_pss_saltlen,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int, saltlen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set_rsa_pss_saltlen, ctx, saltlen);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set_scrypt_N(struct Library * _base, EVP_PKEY_CTX * ctx, uint64_t n);

AROS_LH2(int,EVP_PKEY_CTX_set_scrypt_N,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(uint64_t, n, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set_scrypt_N, ctx, n);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set_scrypt_maxmem_bytes(struct Library * _base, EVP_PKEY_CTX * ctx, uint64_t maxmem_bytes);

AROS_LH2(int,EVP_PKEY_CTX_set_scrypt_maxmem_bytes,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(uint64_t, maxmem_bytes, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set_scrypt_maxmem_bytes, ctx, maxmem_bytes);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set_scrypt_p(struct Library * _base, EVP_PKEY_CTX * ctx, uint64_t p);

AROS_LH2(int,EVP_PKEY_CTX_set_scrypt_p,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(uint64_t, p, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set_scrypt_p, ctx, p);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set_scrypt_r(struct Library * _base, EVP_PKEY_CTX * ctx, uint64_t r);

AROS_LH2(int,EVP_PKEY_CTX_set_scrypt_r,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(uint64_t, r, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set_scrypt_r, ctx, r);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set_signature(struct Library * _base, EVP_PKEY_CTX * pctx, const unsigned char * sig, size_t siglen);

AROS_LH3(int,EVP_PKEY_CTX_set_signature,
    AROS_LDA(EVP_PKEY_CTX *, pctx, A0),
    AROS_LDA(const unsigned char *, sig, A1),
    AROS_LDA(size_t, siglen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set_signature, pctx, sig, siglen);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set_signature_md(struct Library * _base, EVP_PKEY_CTX * ctx, const EVP_MD * md);

AROS_LH2(int,EVP_PKEY_CTX_set_signature_md,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const EVP_MD *, md, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set_signature_md, ctx, md);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_CTX_set_tls1_prf_md(struct Library * _base, EVP_PKEY_CTX * ctx, const EVP_MD * md);

AROS_LH2(int,EVP_PKEY_CTX_set_tls1_prf_md,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const EVP_MD *, md, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_set_tls1_prf_md, ctx, md);
    AROS_LIBFUNC_EXIT
}

const OSSL_PARAM * LIB_EVP_PKEY_CTX_settable_params(struct Library * _base, const EVP_PKEY_CTX * ctx);

AROS_LH1(const OSSL_PARAM *,EVP_PKEY_CTX_settable_params,
    AROS_LDA(const EVP_PKEY_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_CTX_settable_params, ctx);
    AROS_LIBFUNC_EXIT
}

EVP_PKEY * LIB_EVP_PKEY_Q_vkeygen(struct Library * _base, OSSL_LIB_CTX * libctx, const char * propq, const char * type, long * args);

AROS_LH4(EVP_PKEY *,EVP_PKEY_Q_vkeygen,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, propq, A1),
    AROS_LDA(const char *, type, A2),
    AROS_LDA(long *, args, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_Q_vkeygen, libctx, propq, type, args);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_auth_decapsulate_init(struct Library * _base, EVP_PKEY_CTX * ctx, EVP_PKEY * authpub, const OSSL_PARAM * params);

AROS_LH3(int,EVP_PKEY_auth_decapsulate_init,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(EVP_PKEY *, authpub, A1),
    AROS_LDA(const OSSL_PARAM *, params, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_auth_decapsulate_init, ctx, authpub, params);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_auth_encapsulate_init(struct Library * _base, EVP_PKEY_CTX * ctx, EVP_PKEY * authpriv, const OSSL_PARAM * params);

AROS_LH3(int,EVP_PKEY_auth_encapsulate_init,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(EVP_PKEY *, authpriv, A1),
    AROS_LDA(const OSSL_PARAM *, params, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_auth_encapsulate_init, ctx, authpriv, params);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_can_sign(struct Library * _base, const EVP_PKEY * pkey);

AROS_LH1(int,EVP_PKEY_can_sign,
    AROS_LDA(const EVP_PKEY *, pkey, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_can_sign, pkey);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_decapsulate(struct Library * _base, EVP_PKEY_CTX * ctx, unsigned char * unwrapped, size_t * unwrappedlen, const unsigned char * wrapped, size_t wrappedlen);

AROS_LH5(int,EVP_PKEY_decapsulate,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(unsigned char *, unwrapped, A1),
    AROS_LDA(size_t *, unwrappedlen, A2),
    AROS_LDA(const unsigned char *, wrapped, A3),
    AROS_LDA(size_t, wrappedlen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_decapsulate, ctx, unwrapped, unwrappedlen, wrapped, wrappedlen);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_decapsulate_init(struct Library * _base, EVP_PKEY_CTX * ctx, const OSSL_PARAM * params);

AROS_LH2(int,EVP_PKEY_decapsulate_init,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_decapsulate_init, ctx, params);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_decrypt_init_ex(struct Library * _base, EVP_PKEY_CTX * ctx, const OSSL_PARAM * params);

AROS_LH2(int,EVP_PKEY_decrypt_init_ex,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_decrypt_init_ex, ctx, params);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_derive_init_ex(struct Library * _base, EVP_PKEY_CTX * ctx, const OSSL_PARAM * params);

AROS_LH2(int,EVP_PKEY_derive_init_ex,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_derive_init_ex, ctx, params);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_derive_set_peer_ex(struct Library * _base, EVP_PKEY_CTX * ctx, EVP_PKEY * peer, int validate_peer);

AROS_LH3(int,EVP_PKEY_derive_set_peer_ex,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(EVP_PKEY *, peer, A1),
    AROS_LDA(int, validate_peer, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_derive_set_peer_ex, ctx, peer, validate_peer);
    AROS_LIBFUNC_EXIT
}

EVP_PKEY * LIB_EVP_PKEY_dup(struct Library * _base, EVP_PKEY * pkey);

AROS_LH1(EVP_PKEY *,EVP_PKEY_dup,
    AROS_LDA(EVP_PKEY *, pkey, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_dup, pkey);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_encapsulate(struct Library * _base, EVP_PKEY_CTX * ctx, unsigned char * wrappedkey, size_t * wrappedkeylen, unsigned char * genkey, size_t * genkeylen);

AROS_LH5(int,EVP_PKEY_encapsulate,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(unsigned char *, wrappedkey, A1),
    AROS_LDA(size_t *, wrappedkeylen, A2),
    AROS_LDA(unsigned char *, genkey, A3),
    AROS_LDA(size_t *, genkeylen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_encapsulate, ctx, wrappedkey, wrappedkeylen, genkey, genkeylen);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_encapsulate_init(struct Library * _base, EVP_PKEY_CTX * ctx, const OSSL_PARAM * params);

AROS_LH2(int,EVP_PKEY_encapsulate_init,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_encapsulate_init, ctx, params);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_encrypt_init_ex(struct Library * _base, EVP_PKEY_CTX * ctx, const OSSL_PARAM * params);

AROS_LH2(int,EVP_PKEY_encrypt_init_ex,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_encrypt_init_ex, ctx, params);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_eq(struct Library * _base, const EVP_PKEY * a, const EVP_PKEY * b);

AROS_LH2(int,EVP_PKEY_eq,
    AROS_LDA(const EVP_PKEY *, a, A0),
    AROS_LDA(const EVP_PKEY *, b, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_eq, a, b);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_export(struct Library * _base, const EVP_PKEY * pkey, int selection, OSSL_CALLBACK * export_cb, void * export_cbarg);

AROS_LH4(int,EVP_PKEY_export,
    AROS_LDA(const EVP_PKEY *, pkey, A0),
    AROS_LDA(int, selection, D0),
    AROS_LDA(OSSL_CALLBACK *, export_cb, A1),
    AROS_LDA(void *, export_cbarg, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_export, pkey, selection, export_cb, export_cbarg);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_fromdata(struct Library * _base, EVP_PKEY_CTX * ctx, EVP_PKEY ** ppkey, int selection, OSSL_PARAM * params);

AROS_LH4(int,EVP_PKEY_fromdata,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(EVP_PKEY **, ppkey, A1),
    AROS_LDA(int, selection, D0),
    AROS_LDA(OSSL_PARAM *, params, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_fromdata, ctx, ppkey, selection, params);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_fromdata_init(struct Library * _base, EVP_PKEY_CTX * ctx);

AROS_LH1(int,EVP_PKEY_fromdata_init,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_fromdata_init, ctx);
    AROS_LIBFUNC_EXIT
}

const OSSL_PARAM * LIB_EVP_PKEY_fromdata_settable(struct Library * _base, EVP_PKEY_CTX * ctx, int selection);

AROS_LH2(const OSSL_PARAM *,EVP_PKEY_fromdata_settable,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(int, selection, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_fromdata_settable, ctx, selection);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_generate(struct Library * _base, EVP_PKEY_CTX * ctx, EVP_PKEY ** ppkey);

AROS_LH2(int,EVP_PKEY_generate,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(EVP_PKEY **, ppkey, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_generate, ctx, ppkey);
    AROS_LIBFUNC_EXIT
}

const char * LIB_EVP_PKEY_get0_description(struct Library * _base, const EVP_PKEY * pkey);

AROS_LH1(const char *,EVP_PKEY_get0_description,
    AROS_LDA(const EVP_PKEY *, pkey, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_get0_description, pkey);
    AROS_LIBFUNC_EXIT
}

const OSSL_PROVIDER * LIB_EVP_PKEY_get0_provider(struct Library * _base, const EVP_PKEY * key);

AROS_LH1(const OSSL_PROVIDER *,EVP_PKEY_get0_provider,
    AROS_LDA(const EVP_PKEY *, key, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_get0_provider, key);
    AROS_LIBFUNC_EXIT
}

const char * LIB_EVP_PKEY_get0_type_name(struct Library * _base, const EVP_PKEY * key);

AROS_LH1(const char *,EVP_PKEY_get0_type_name,
    AROS_LDA(const EVP_PKEY *, key, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_get0_type_name, key);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_get_bn_param(struct Library * _base, const EVP_PKEY * pkey, const char * key_name, BIGNUM ** bn);

AROS_LH3(int,EVP_PKEY_get_bn_param,
    AROS_LDA(const EVP_PKEY *, pkey, A0),
    AROS_LDA(const char *, key_name, A1),
    AROS_LDA(BIGNUM **, bn, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_get_bn_param, pkey, key_name, bn);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_get_default_digest_name(struct Library * _base, EVP_PKEY * pkey, char * mdname, size_t mdname_sz);

AROS_LH3(int,EVP_PKEY_get_default_digest_name,
    AROS_LDA(EVP_PKEY *, pkey, A0),
    AROS_LDA(char *, mdname, A1),
    AROS_LDA(size_t, mdname_sz, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_get_default_digest_name, pkey, mdname, mdname_sz);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_get_ec_point_conv_form(struct Library * _base, const EVP_PKEY * pkey);

AROS_LH1(int,EVP_PKEY_get_ec_point_conv_form,
    AROS_LDA(const EVP_PKEY *, pkey, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_get_ec_point_conv_form, pkey);
    AROS_LIBFUNC_EXIT
}

void * LIB_EVP_PKEY_get_ex_data(struct Library * _base, const EVP_PKEY * key, int idx);

AROS_LH2(void *,EVP_PKEY_get_ex_data,
    AROS_LDA(const EVP_PKEY *, key, A0),
    AROS_LDA(int, idx, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_get_ex_data, key, idx);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_get_field_type(struct Library * _base, const EVP_PKEY * pkey);

AROS_LH1(int,EVP_PKEY_get_field_type,
    AROS_LDA(const EVP_PKEY *, pkey, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_get_field_type, pkey);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_get_group_name(struct Library * _base, const EVP_PKEY * pkey, char * name, size_t name_sz, size_t * gname_len);

AROS_LH4(int,EVP_PKEY_get_group_name,
    AROS_LDA(const EVP_PKEY *, pkey, A0),
    AROS_LDA(char *, name, A1),
    AROS_LDA(size_t, name_sz, D0),
    AROS_LDA(size_t *, gname_len, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_get_group_name, pkey, name, name_sz, gname_len);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_get_int_param(struct Library * _base, const EVP_PKEY * pkey, const char * key_name, int * out);

AROS_LH3(int,EVP_PKEY_get_int_param,
    AROS_LDA(const EVP_PKEY *, pkey, A0),
    AROS_LDA(const char *, key_name, A1),
    AROS_LDA(int *, out, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_get_int_param, pkey, key_name, out);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_get_octet_string_param(struct Library * _base, const EVP_PKEY * pkey, const char * key_name, unsigned char * buf, size_t max_buf_sz, size_t * out_sz);

AROS_LH5(int,EVP_PKEY_get_octet_string_param,
    AROS_LDA(const EVP_PKEY *, pkey, A0),
    AROS_LDA(const char *, key_name, A1),
    AROS_LDA(unsigned char *, buf, A2),
    AROS_LDA(size_t, max_buf_sz, D0),
    AROS_LDA(size_t *, out_sz, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_get_octet_string_param, pkey, key_name, buf, max_buf_sz, out_sz);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_get_params(struct Library * _base, const EVP_PKEY * pkey, OSSL_PARAM * params);

AROS_LH2(int,EVP_PKEY_get_params,
    AROS_LDA(const EVP_PKEY *, pkey, A0),
    AROS_LDA(OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_get_params, pkey, params);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_get_size_t_param(struct Library * _base, const EVP_PKEY * pkey, const char * key_name, size_t * out);

AROS_LH3(int,EVP_PKEY_get_size_t_param,
    AROS_LDA(const EVP_PKEY *, pkey, A0),
    AROS_LDA(const char *, key_name, A1),
    AROS_LDA(size_t *, out, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_get_size_t_param, pkey, key_name, out);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_get_utf8_string_param(struct Library * _base, const EVP_PKEY * pkey, const char * key_name, char * str, size_t max_buf_sz, size_t * out_sz);

AROS_LH5(int,EVP_PKEY_get_utf8_string_param,
    AROS_LDA(const EVP_PKEY *, pkey, A0),
    AROS_LDA(const char *, key_name, A1),
    AROS_LDA(char *, str, A2),
    AROS_LDA(size_t, max_buf_sz, D0),
    AROS_LDA(size_t *, out_sz, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_get_utf8_string_param, pkey, key_name, str, max_buf_sz, out_sz);
    AROS_LIBFUNC_EXIT
}

const OSSL_PARAM * LIB_EVP_PKEY_gettable_params(struct Library * _base, const EVP_PKEY * pkey);

AROS_LH1(const OSSL_PARAM *,EVP_PKEY_gettable_params,
    AROS_LDA(const EVP_PKEY *, pkey, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_gettable_params, pkey);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_is_a(struct Library * _base, const EVP_PKEY * pkey, const char * name);

AROS_LH2(int,EVP_PKEY_is_a,
    AROS_LDA(const EVP_PKEY *, pkey, A0),
    AROS_LDA(const char *, name, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_is_a, pkey, name);
    AROS_LIBFUNC_EXIT
}

EVP_PKEY * LIB_EVP_PKEY_new_raw_private_key_ex(struct Library * _base, OSSL_LIB_CTX * libctx, const char * keytype, const char * propq, const unsigned char * priv, size_t len);

AROS_LH5(EVP_PKEY *,EVP_PKEY_new_raw_private_key_ex,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, keytype, A1),
    AROS_LDA(const char *, propq, A2),
    AROS_LDA(const unsigned char *, priv, A3),
    AROS_LDA(size_t, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_new_raw_private_key_ex, libctx, keytype, propq, priv, len);
    AROS_LIBFUNC_EXIT
}

EVP_PKEY * LIB_EVP_PKEY_new_raw_public_key_ex(struct Library * _base, OSSL_LIB_CTX * libctx, const char * keytype, const char * propq, const unsigned char * pub, size_t len);

AROS_LH5(EVP_PKEY *,EVP_PKEY_new_raw_public_key_ex,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, keytype, A1),
    AROS_LDA(const char *, propq, A2),
    AROS_LDA(const unsigned char *, pub, A3),
    AROS_LDA(size_t, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_new_raw_public_key_ex, libctx, keytype, propq, pub, len);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_pairwise_check(struct Library * _base, EVP_PKEY_CTX * ctx);

AROS_LH1(int,EVP_PKEY_pairwise_check,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_pairwise_check, ctx);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_param_check_quick(struct Library * _base, EVP_PKEY_CTX * ctx);

AROS_LH1(int,EVP_PKEY_param_check_quick,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_param_check_quick, ctx);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_parameters_eq(struct Library * _base, const EVP_PKEY * a, const EVP_PKEY * b);

AROS_LH2(int,EVP_PKEY_parameters_eq,
    AROS_LDA(const EVP_PKEY *, a, A0),
    AROS_LDA(const EVP_PKEY *, b, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_parameters_eq, a, b);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_private_check(struct Library * _base, EVP_PKEY_CTX * ctx);

AROS_LH1(int,EVP_PKEY_private_check,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_private_check, ctx);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_public_check_quick(struct Library * _base, EVP_PKEY_CTX * ctx);

AROS_LH1(int,EVP_PKEY_public_check_quick,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_public_check_quick, ctx);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_set_bn_param(struct Library * _base, EVP_PKEY * pkey, const char * key_name, const BIGNUM * bn);

AROS_LH3(int,EVP_PKEY_set_bn_param,
    AROS_LDA(EVP_PKEY *, pkey, A0),
    AROS_LDA(const char *, key_name, A1),
    AROS_LDA(const BIGNUM *, bn, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_set_bn_param, pkey, key_name, bn);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_set_ex_data(struct Library * _base, EVP_PKEY * key, int idx, void * arg);

AROS_LH3(int,EVP_PKEY_set_ex_data,
    AROS_LDA(EVP_PKEY *, key, A0),
    AROS_LDA(int, idx, D0),
    AROS_LDA(void *, arg, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_set_ex_data, key, idx, arg);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_set_int_param(struct Library * _base, EVP_PKEY * pkey, const char * key_name, int in);

AROS_LH3(int,EVP_PKEY_set_int_param,
    AROS_LDA(EVP_PKEY *, pkey, A0),
    AROS_LDA(const char *, key_name, A1),
    AROS_LDA(int, in, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_set_int_param, pkey, key_name, in);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_set_octet_string_param(struct Library * _base, EVP_PKEY * pkey, const char * key_name, const unsigned char * buf, size_t bsize);

AROS_LH4(int,EVP_PKEY_set_octet_string_param,
    AROS_LDA(EVP_PKEY *, pkey, A0),
    AROS_LDA(const char *, key_name, A1),
    AROS_LDA(const unsigned char *, buf, A2),
    AROS_LDA(size_t, bsize, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_set_octet_string_param, pkey, key_name, buf, bsize);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_set_params(struct Library * _base, EVP_PKEY * pkey, OSSL_PARAM * params);

AROS_LH2(int,EVP_PKEY_set_params,
    AROS_LDA(EVP_PKEY *, pkey, A0),
    AROS_LDA(OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_set_params, pkey, params);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_set_size_t_param(struct Library * _base, EVP_PKEY * pkey, const char * key_name, size_t in);

AROS_LH3(int,EVP_PKEY_set_size_t_param,
    AROS_LDA(EVP_PKEY *, pkey, A0),
    AROS_LDA(const char *, key_name, A1),
    AROS_LDA(size_t, in, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_set_size_t_param, pkey, key_name, in);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_set_type_by_keymgmt(struct Library * _base, EVP_PKEY * pkey, EVP_KEYMGMT * keymgmt);

AROS_LH2(int,EVP_PKEY_set_type_by_keymgmt,
    AROS_LDA(EVP_PKEY *, pkey, A0),
    AROS_LDA(EVP_KEYMGMT *, keymgmt, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_set_type_by_keymgmt, pkey, keymgmt);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_set_utf8_string_param(struct Library * _base, EVP_PKEY * pkey, const char * key_name, const char * str);

AROS_LH3(int,EVP_PKEY_set_utf8_string_param,
    AROS_LDA(EVP_PKEY *, pkey, A0),
    AROS_LDA(const char *, key_name, A1),
    AROS_LDA(const char *, str, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_set_utf8_string_param, pkey, key_name, str);
    AROS_LIBFUNC_EXIT
}

const OSSL_PARAM * LIB_EVP_PKEY_settable_params(struct Library * _base, const EVP_PKEY * pkey);

AROS_LH1(const OSSL_PARAM *,EVP_PKEY_settable_params,
    AROS_LDA(const EVP_PKEY *, pkey, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_settable_params, pkey);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_sign_init_ex(struct Library * _base, EVP_PKEY_CTX * ctx, const OSSL_PARAM * params);

AROS_LH2(int,EVP_PKEY_sign_init_ex,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_sign_init_ex, ctx, params);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_sign_init_ex2(struct Library * _base, EVP_PKEY_CTX * ctx, EVP_SIGNATURE * algo, const OSSL_PARAM * params);

AROS_LH3(int,EVP_PKEY_sign_init_ex2,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(EVP_SIGNATURE *, algo, A1),
    AROS_LDA(const OSSL_PARAM *, params, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_sign_init_ex2, ctx, algo, params);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_sign_message_final(struct Library * _base, EVP_PKEY_CTX * ctx, unsigned char * sig, size_t * siglen);

AROS_LH3(int,EVP_PKEY_sign_message_final,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(unsigned char *, sig, A1),
    AROS_LDA(size_t *, siglen, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_sign_message_final, ctx, sig, siglen);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_sign_message_init(struct Library * _base, EVP_PKEY_CTX * ctx, EVP_SIGNATURE * algo, const OSSL_PARAM * params);

AROS_LH3(int,EVP_PKEY_sign_message_init,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(EVP_SIGNATURE *, algo, A1),
    AROS_LDA(const OSSL_PARAM *, params, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_sign_message_init, ctx, algo, params);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_sign_message_update(struct Library * _base, EVP_PKEY_CTX * ctx, const unsigned char * in, size_t inlen);

AROS_LH3(int,EVP_PKEY_sign_message_update,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const unsigned char *, in, A1),
    AROS_LDA(size_t, inlen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_sign_message_update, ctx, in, inlen);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_todata(struct Library * _base, const EVP_PKEY * pkey, int selection, OSSL_PARAM ** params);

AROS_LH3(int,EVP_PKEY_todata,
    AROS_LDA(const EVP_PKEY *, pkey, A0),
    AROS_LDA(int, selection, D0),
    AROS_LDA(OSSL_PARAM **, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_todata, pkey, selection, params);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_type_names_do_all(struct Library * _base, const EVP_PKEY * pkey, void * data);

AROS_LH2(int,EVP_PKEY_type_names_do_all,
    AROS_LDA(const EVP_PKEY *, pkey, A0),
    AROS_LDA(void *, data, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_type_names_do_all, pkey, data);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_verify_init_ex(struct Library * _base, EVP_PKEY_CTX * ctx, const OSSL_PARAM * params);

AROS_LH2(int,EVP_PKEY_verify_init_ex,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_verify_init_ex, ctx, params);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_verify_init_ex2(struct Library * _base, EVP_PKEY_CTX * ctx, EVP_SIGNATURE * algo, const OSSL_PARAM * params);

AROS_LH3(int,EVP_PKEY_verify_init_ex2,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(EVP_SIGNATURE *, algo, A1),
    AROS_LDA(const OSSL_PARAM *, params, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_verify_init_ex2, ctx, algo, params);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_verify_message_final(struct Library * _base, EVP_PKEY_CTX * ctx);

AROS_LH1(int,EVP_PKEY_verify_message_final,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_verify_message_final, ctx);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_verify_message_init(struct Library * _base, EVP_PKEY_CTX * ctx, EVP_SIGNATURE * algo, const OSSL_PARAM * params);

AROS_LH3(int,EVP_PKEY_verify_message_init,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(EVP_SIGNATURE *, algo, A1),
    AROS_LDA(const OSSL_PARAM *, params, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_verify_message_init, ctx, algo, params);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_verify_message_update(struct Library * _base, EVP_PKEY_CTX * ctx, const unsigned char * in, size_t inlen);

AROS_LH3(int,EVP_PKEY_verify_message_update,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const unsigned char *, in, A1),
    AROS_LDA(size_t, inlen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_verify_message_update, ctx, in, inlen);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_verify_recover_init_ex(struct Library * _base, EVP_PKEY_CTX * ctx, const OSSL_PARAM * params);

AROS_LH2(int,EVP_PKEY_verify_recover_init_ex,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(const OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_verify_recover_init_ex, ctx, params);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_PKEY_verify_recover_init_ex2(struct Library * _base, EVP_PKEY_CTX * ctx, EVP_SIGNATURE * algo, const OSSL_PARAM * params);

AROS_LH3(int,EVP_PKEY_verify_recover_init_ex2,
    AROS_LDA(EVP_PKEY_CTX *, ctx, A0),
    AROS_LDA(EVP_SIGNATURE *, algo, A1),
    AROS_LDA(const OSSL_PARAM *, params, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_PKEY_verify_recover_init_ex2, ctx, algo, params);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_Q_digest(struct Library * _base, OSSL_LIB_CTX * libctx, const char * name, const char * propq, const void * data, size_t datalen, unsigned char * md, size_t * mdlen);

AROS_LH7(int,EVP_Q_digest,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, name, A1),
    AROS_LDA(const char *, propq, A2),
    AROS_LDA(const void *, data, A3),
    AROS_LDA(size_t, datalen, D0),
    AROS_LDA(unsigned char *, md, D1),
    AROS_LDA(size_t *, mdlen, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_Q_digest, libctx, name, propq, data, datalen, md, mdlen);
    AROS_LIBFUNC_EXIT
}

void LIB_EVP_RAND_CTX_free(struct Library * _base, EVP_RAND_CTX * ctx);

AROS_LH1(void,EVP_RAND_CTX_free,
    AROS_LDA(EVP_RAND_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(EVP_RAND_CTX_free, ctx);
    AROS_LIBFUNC_EXIT
}

EVP_RAND * LIB_EVP_RAND_CTX_get0_rand(struct Library * _base, EVP_RAND_CTX * ctx);

AROS_LH1(EVP_RAND *,EVP_RAND_CTX_get0_rand,
    AROS_LDA(EVP_RAND_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_RAND_CTX_get0_rand, ctx);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_RAND_CTX_get_params(struct Library * _base, EVP_RAND_CTX * ctx, OSSL_PARAM * params);

AROS_LH2(int,EVP_RAND_CTX_get_params,
    AROS_LDA(EVP_RAND_CTX *, ctx, A0),
    AROS_LDA(OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_RAND_CTX_get_params, ctx, params);
    AROS_LIBFUNC_EXIT
}

const OSSL_PARAM * LIB_EVP_RAND_CTX_gettable_params(struct Library * _base, EVP_RAND_CTX * ctx);

AROS_LH1(const OSSL_PARAM *,EVP_RAND_CTX_gettable_params,
    AROS_LDA(EVP_RAND_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_RAND_CTX_gettable_params, ctx);
    AROS_LIBFUNC_EXIT
}

EVP_RAND_CTX * LIB_EVP_RAND_CTX_new(struct Library * _base, EVP_RAND * rand, EVP_RAND_CTX * parent);

AROS_LH2(EVP_RAND_CTX *,EVP_RAND_CTX_new,
    AROS_LDA(EVP_RAND *, rand, A0),
    AROS_LDA(EVP_RAND_CTX *, parent, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_RAND_CTX_new, rand, parent);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_RAND_CTX_set_params(struct Library * _base, EVP_RAND_CTX * ctx, const OSSL_PARAM * params);

AROS_LH2(int,EVP_RAND_CTX_set_params,
    AROS_LDA(EVP_RAND_CTX *, ctx, A0),
    AROS_LDA(const OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_RAND_CTX_set_params, ctx, params);
    AROS_LIBFUNC_EXIT
}

const OSSL_PARAM * LIB_EVP_RAND_CTX_settable_params(struct Library * _base, EVP_RAND_CTX * ctx);

AROS_LH1(const OSSL_PARAM *,EVP_RAND_CTX_settable_params,
    AROS_LDA(EVP_RAND_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_RAND_CTX_settable_params, ctx);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_RAND_CTX_up_ref(struct Library * _base, EVP_RAND_CTX * ctx);

AROS_LH1(int,EVP_RAND_CTX_up_ref,
    AROS_LDA(EVP_RAND_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_RAND_CTX_up_ref, ctx);
    AROS_LIBFUNC_EXIT
}

void LIB_EVP_RAND_do_all_provided(struct Library * _base, OSSL_LIB_CTX * libctx, void * arg);

AROS_LH2(void,EVP_RAND_do_all_provided,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(void *, arg, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(EVP_RAND_do_all_provided, libctx, arg);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_RAND_enable_locking(struct Library * _base, EVP_RAND_CTX * ctx);

AROS_LH1(int,EVP_RAND_enable_locking,
    AROS_LDA(EVP_RAND_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_RAND_enable_locking, ctx);
    AROS_LIBFUNC_EXIT
}

EVP_RAND * LIB_EVP_RAND_fetch(struct Library * _base, OSSL_LIB_CTX * libctx, const char * algorithm, const char * properties);

AROS_LH3(EVP_RAND *,EVP_RAND_fetch,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, algorithm, A1),
    AROS_LDA(const char *, properties, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_RAND_fetch, libctx, algorithm, properties);
    AROS_LIBFUNC_EXIT
}

void LIB_EVP_RAND_free(struct Library * _base, EVP_RAND * rand);

AROS_LH1(void,EVP_RAND_free,
    AROS_LDA(EVP_RAND *, rand, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(EVP_RAND_free, rand);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_RAND_generate(struct Library * _base, EVP_RAND_CTX * ctx, unsigned char * out, size_t outlen, unsigned int strength, int prediction_resistance, const unsigned char * addin, size_t addin_len);

AROS_LH7(int,EVP_RAND_generate,
    AROS_LDA(EVP_RAND_CTX *, ctx, A0),
    AROS_LDA(unsigned char *, out, A1),
    AROS_LDA(size_t, outlen, D0),
    AROS_LDA(unsigned int, strength, D1),
    AROS_LDA(int, prediction_resistance, D2),
    AROS_LDA(const unsigned char *, addin, A2),
    AROS_LDA(size_t, addin_len, D3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_RAND_generate, ctx, out, outlen, strength, prediction_resistance, addin, addin_len);
    AROS_LIBFUNC_EXIT
}

const char * LIB_EVP_RAND_get0_description(struct Library * _base, const EVP_RAND * md);

AROS_LH1(const char *,EVP_RAND_get0_description,
    AROS_LDA(const EVP_RAND *, md, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_RAND_get0_description, md);
    AROS_LIBFUNC_EXIT
}

const char * LIB_EVP_RAND_get0_name(struct Library * _base, const EVP_RAND * rand);

AROS_LH1(const char *,EVP_RAND_get0_name,
    AROS_LDA(const EVP_RAND *, rand, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_RAND_get0_name, rand);
    AROS_LIBFUNC_EXIT
}

const OSSL_PROVIDER * LIB_EVP_RAND_get0_provider(struct Library * _base, const EVP_RAND * rand);

AROS_LH1(const OSSL_PROVIDER *,EVP_RAND_get0_provider,
    AROS_LDA(const EVP_RAND *, rand, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_RAND_get0_provider, rand);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_RAND_get_params(struct Library * _base, EVP_RAND * rand, OSSL_PARAM * params);

AROS_LH2(int,EVP_RAND_get_params,
    AROS_LDA(EVP_RAND *, rand, A0),
    AROS_LDA(OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_RAND_get_params, rand, params);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_RAND_get_state(struct Library * _base, EVP_RAND_CTX * ctx);

AROS_LH1(int,EVP_RAND_get_state,
    AROS_LDA(EVP_RAND_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_RAND_get_state, ctx);
    AROS_LIBFUNC_EXIT
}

unsigned int LIB_EVP_RAND_get_strength(struct Library * _base, EVP_RAND_CTX * ctx);

AROS_LH1(unsigned int,EVP_RAND_get_strength,
    AROS_LDA(EVP_RAND_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_RAND_get_strength, ctx);
    AROS_LIBFUNC_EXIT
}

const OSSL_PARAM * LIB_EVP_RAND_gettable_ctx_params(struct Library * _base, const EVP_RAND * rand);

AROS_LH1(const OSSL_PARAM *,EVP_RAND_gettable_ctx_params,
    AROS_LDA(const EVP_RAND *, rand, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_RAND_gettable_ctx_params, rand);
    AROS_LIBFUNC_EXIT
}

const OSSL_PARAM * LIB_EVP_RAND_gettable_params(struct Library * _base, const EVP_RAND * rand);

AROS_LH1(const OSSL_PARAM *,EVP_RAND_gettable_params,
    AROS_LDA(const EVP_RAND *, rand, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_RAND_gettable_params, rand);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_RAND_instantiate(struct Library * _base, EVP_RAND_CTX * ctx, unsigned int strength, int prediction_resistance, const unsigned char * pstr, size_t pstr_len, const OSSL_PARAM * params);

AROS_LH6(int,EVP_RAND_instantiate,
    AROS_LDA(EVP_RAND_CTX *, ctx, A0),
    AROS_LDA(unsigned int, strength, D0),
    AROS_LDA(int, prediction_resistance, D1),
    AROS_LDA(const unsigned char *, pstr, A1),
    AROS_LDA(size_t, pstr_len, D2),
    AROS_LDA(const OSSL_PARAM *, params, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_RAND_instantiate, ctx, strength, prediction_resistance, pstr, pstr_len, params);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_RAND_is_a(struct Library * _base, const EVP_RAND * rand, const char * name);

AROS_LH2(int,EVP_RAND_is_a,
    AROS_LDA(const EVP_RAND *, rand, A0),
    AROS_LDA(const char *, name, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_RAND_is_a, rand, name);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_RAND_names_do_all(struct Library * _base, const EVP_RAND * rand, void * data);

AROS_LH2(int,EVP_RAND_names_do_all,
    AROS_LDA(const EVP_RAND *, rand, A0),
    AROS_LDA(void *, data, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_RAND_names_do_all, rand, data);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_RAND_nonce(struct Library * _base, EVP_RAND_CTX * ctx, unsigned char * out, size_t outlen);

AROS_LH3(int,EVP_RAND_nonce,
    AROS_LDA(EVP_RAND_CTX *, ctx, A0),
    AROS_LDA(unsigned char *, out, A1),
    AROS_LDA(size_t, outlen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_RAND_nonce, ctx, out, outlen);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_RAND_reseed(struct Library * _base, EVP_RAND_CTX * ctx, int prediction_resistance, const unsigned char * ent, size_t ent_len, const unsigned char * addin, size_t addin_len);

AROS_LH6(int,EVP_RAND_reseed,
    AROS_LDA(EVP_RAND_CTX *, ctx, A0),
    AROS_LDA(int, prediction_resistance, D0),
    AROS_LDA(const unsigned char *, ent, A1),
    AROS_LDA(size_t, ent_len, D1),
    AROS_LDA(const unsigned char *, addin, A2),
    AROS_LDA(size_t, addin_len, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_RAND_reseed, ctx, prediction_resistance, ent, ent_len, addin, addin_len);
    AROS_LIBFUNC_EXIT
}

const OSSL_PARAM * LIB_EVP_RAND_settable_ctx_params(struct Library * _base, const EVP_RAND * rand);

AROS_LH1(const OSSL_PARAM *,EVP_RAND_settable_ctx_params,
    AROS_LDA(const EVP_RAND *, rand, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_RAND_settable_ctx_params, rand);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_RAND_uninstantiate(struct Library * _base, EVP_RAND_CTX * ctx);

AROS_LH1(int,EVP_RAND_uninstantiate,
    AROS_LDA(EVP_RAND_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_RAND_uninstantiate, ctx);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_RAND_up_ref(struct Library * _base, EVP_RAND * rand);

AROS_LH1(int,EVP_RAND_up_ref,
    AROS_LDA(EVP_RAND *, rand, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_RAND_up_ref, rand);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_RAND_verify_zeroization(struct Library * _base, EVP_RAND_CTX * ctx);

AROS_LH1(int,EVP_RAND_verify_zeroization,
    AROS_LDA(EVP_RAND_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_RAND_verify_zeroization, ctx);
    AROS_LIBFUNC_EXIT
}

void LIB_EVP_SIGNATURE_do_all_provided(struct Library * _base, OSSL_LIB_CTX * libctx, void * data);

AROS_LH2(void,EVP_SIGNATURE_do_all_provided,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(void *, data, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(EVP_SIGNATURE_do_all_provided, libctx, data);
    AROS_LIBFUNC_EXIT
}

EVP_SIGNATURE * LIB_EVP_SIGNATURE_fetch(struct Library * _base, OSSL_LIB_CTX * ctx, const char * algorithm, const char * properties);

AROS_LH3(EVP_SIGNATURE *,EVP_SIGNATURE_fetch,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    AROS_LDA(const char *, algorithm, A1),
    AROS_LDA(const char *, properties, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_SIGNATURE_fetch, ctx, algorithm, properties);
    AROS_LIBFUNC_EXIT
}

void LIB_EVP_SIGNATURE_free(struct Library * _base, EVP_SIGNATURE * signature);

AROS_LH1(void,EVP_SIGNATURE_free,
    AROS_LDA(EVP_SIGNATURE *, signature, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(EVP_SIGNATURE_free, signature);
    AROS_LIBFUNC_EXIT
}

const char * LIB_EVP_SIGNATURE_get0_description(struct Library * _base, const EVP_SIGNATURE * signature);

AROS_LH1(const char *,EVP_SIGNATURE_get0_description,
    AROS_LDA(const EVP_SIGNATURE *, signature, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_SIGNATURE_get0_description, signature);
    AROS_LIBFUNC_EXIT
}

const char * LIB_EVP_SIGNATURE_get0_name(struct Library * _base, const EVP_SIGNATURE * signature);

AROS_LH1(const char *,EVP_SIGNATURE_get0_name,
    AROS_LDA(const EVP_SIGNATURE *, signature, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_SIGNATURE_get0_name, signature);
    AROS_LIBFUNC_EXIT
}

OSSL_PROVIDER * LIB_EVP_SIGNATURE_get0_provider(struct Library * _base, const EVP_SIGNATURE * signature);

AROS_LH1(OSSL_PROVIDER *,EVP_SIGNATURE_get0_provider,
    AROS_LDA(const EVP_SIGNATURE *, signature, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_SIGNATURE_get0_provider, signature);
    AROS_LIBFUNC_EXIT
}

const OSSL_PARAM * LIB_EVP_SIGNATURE_gettable_ctx_params(struct Library * _base, const EVP_SIGNATURE * sig);

AROS_LH1(const OSSL_PARAM *,EVP_SIGNATURE_gettable_ctx_params,
    AROS_LDA(const EVP_SIGNATURE *, sig, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_SIGNATURE_gettable_ctx_params, sig);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_SIGNATURE_is_a(struct Library * _base, const EVP_SIGNATURE * signature, const char * name);

AROS_LH2(int,EVP_SIGNATURE_is_a,
    AROS_LDA(const EVP_SIGNATURE *, signature, A0),
    AROS_LDA(const char *, name, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_SIGNATURE_is_a, signature, name);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_SIGNATURE_names_do_all(struct Library * _base, const EVP_SIGNATURE * signature, void * data);

AROS_LH2(int,EVP_SIGNATURE_names_do_all,
    AROS_LDA(const EVP_SIGNATURE *, signature, A0),
    AROS_LDA(void *, data, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_SIGNATURE_names_do_all, signature, data);
    AROS_LIBFUNC_EXIT
}

const OSSL_PARAM * LIB_EVP_SIGNATURE_settable_ctx_params(struct Library * _base, const EVP_SIGNATURE * sig);

AROS_LH1(const OSSL_PARAM *,EVP_SIGNATURE_settable_ctx_params,
    AROS_LDA(const EVP_SIGNATURE *, sig, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_SIGNATURE_settable_ctx_params, sig);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_SIGNATURE_up_ref(struct Library * _base, EVP_SIGNATURE * signature);

AROS_LH1(int,EVP_SIGNATURE_up_ref,
    AROS_LDA(EVP_SIGNATURE *, signature, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_SIGNATURE_up_ref, signature);
    AROS_LIBFUNC_EXIT
}

void LIB_EVP_SKEYMGMT_do_all_provided(struct Library * _base, OSSL_LIB_CTX * libctx, void * arg);

AROS_LH2(void,EVP_SKEYMGMT_do_all_provided,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(void *, arg, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(EVP_SKEYMGMT_do_all_provided, libctx, arg);
    AROS_LIBFUNC_EXIT
}

EVP_SKEYMGMT * LIB_EVP_SKEYMGMT_fetch(struct Library * _base, OSSL_LIB_CTX * ctx, const char * algorithm, const char * properties);

AROS_LH3(EVP_SKEYMGMT *,EVP_SKEYMGMT_fetch,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    AROS_LDA(const char *, algorithm, A1),
    AROS_LDA(const char *, properties, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_SKEYMGMT_fetch, ctx, algorithm, properties);
    AROS_LIBFUNC_EXIT
}

void LIB_EVP_SKEYMGMT_free(struct Library * _base, EVP_SKEYMGMT * keymgmt);

AROS_LH1(void,EVP_SKEYMGMT_free,
    AROS_LDA(EVP_SKEYMGMT *, keymgmt, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(EVP_SKEYMGMT_free, keymgmt);
    AROS_LIBFUNC_EXIT
}

const char * LIB_EVP_SKEYMGMT_get0_description(struct Library * _base, const EVP_SKEYMGMT * keymgmt);

AROS_LH1(const char *,EVP_SKEYMGMT_get0_description,
    AROS_LDA(const EVP_SKEYMGMT *, keymgmt, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_SKEYMGMT_get0_description, keymgmt);
    AROS_LIBFUNC_EXIT
}

const OSSL_PARAM * LIB_EVP_SKEYMGMT_get0_gen_settable_params(struct Library * _base, const EVP_SKEYMGMT * skeymgmt);

AROS_LH1(const OSSL_PARAM *,EVP_SKEYMGMT_get0_gen_settable_params,
    AROS_LDA(const EVP_SKEYMGMT *, skeymgmt, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_SKEYMGMT_get0_gen_settable_params, skeymgmt);
    AROS_LIBFUNC_EXIT
}

const OSSL_PARAM * LIB_EVP_SKEYMGMT_get0_imp_settable_params(struct Library * _base, const EVP_SKEYMGMT * skeymgmt);

AROS_LH1(const OSSL_PARAM *,EVP_SKEYMGMT_get0_imp_settable_params,
    AROS_LDA(const EVP_SKEYMGMT *, skeymgmt, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_SKEYMGMT_get0_imp_settable_params, skeymgmt);
    AROS_LIBFUNC_EXIT
}

const char * LIB_EVP_SKEYMGMT_get0_name(struct Library * _base, const EVP_SKEYMGMT * keymgmt);

AROS_LH1(const char *,EVP_SKEYMGMT_get0_name,
    AROS_LDA(const EVP_SKEYMGMT *, keymgmt, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_SKEYMGMT_get0_name, keymgmt);
    AROS_LIBFUNC_EXIT
}

const OSSL_PROVIDER * LIB_EVP_SKEYMGMT_get0_provider(struct Library * _base, const EVP_SKEYMGMT * keymgmt);

AROS_LH1(const OSSL_PROVIDER *,EVP_SKEYMGMT_get0_provider,
    AROS_LDA(const EVP_SKEYMGMT *, keymgmt, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_SKEYMGMT_get0_provider, keymgmt);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_SKEYMGMT_is_a(struct Library * _base, const EVP_SKEYMGMT * keymgmt, const char * name);

AROS_LH2(int,EVP_SKEYMGMT_is_a,
    AROS_LDA(const EVP_SKEYMGMT *, keymgmt, A0),
    AROS_LDA(const char *, name, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_SKEYMGMT_is_a, keymgmt, name);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_SKEYMGMT_names_do_all(struct Library * _base, const EVP_SKEYMGMT * keymgmt, void * data);

AROS_LH2(int,EVP_SKEYMGMT_names_do_all,
    AROS_LDA(const EVP_SKEYMGMT *, keymgmt, A0),
    AROS_LDA(void *, data, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_SKEYMGMT_names_do_all, keymgmt, data);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_SKEYMGMT_up_ref(struct Library * _base, EVP_SKEYMGMT * keymgmt);

AROS_LH1(int,EVP_SKEYMGMT_up_ref,
    AROS_LDA(EVP_SKEYMGMT *, keymgmt, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_SKEYMGMT_up_ref, keymgmt);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_SKEY_export(struct Library * _base, const EVP_SKEY * skey, int selection, OSSL_CALLBACK * export_cb, void * export_cbarg);

AROS_LH4(int,EVP_SKEY_export,
    AROS_LDA(const EVP_SKEY *, skey, A0),
    AROS_LDA(int, selection, D0),
    AROS_LDA(OSSL_CALLBACK *, export_cb, A1),
    AROS_LDA(void *, export_cbarg, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_SKEY_export, skey, selection, export_cb, export_cbarg);
    AROS_LIBFUNC_EXIT
}

void LIB_EVP_SKEY_free(struct Library * _base, EVP_SKEY * skey);

AROS_LH1(void,EVP_SKEY_free,
    AROS_LDA(EVP_SKEY *, skey, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(EVP_SKEY_free, skey);
    AROS_LIBFUNC_EXIT
}

EVP_SKEY * LIB_EVP_SKEY_generate(struct Library * _base, OSSL_LIB_CTX * libctx, const char * skeymgmtname, const char * propquery, const OSSL_PARAM * params);

AROS_LH4(EVP_SKEY *,EVP_SKEY_generate,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, skeymgmtname, A1),
    AROS_LDA(const char *, propquery, A2),
    AROS_LDA(const OSSL_PARAM *, params, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_SKEY_generate, libctx, skeymgmtname, propquery, params);
    AROS_LIBFUNC_EXIT
}

const char * LIB_EVP_SKEY_get0_key_id(struct Library * _base, const EVP_SKEY * skey);

AROS_LH1(const char *,EVP_SKEY_get0_key_id,
    AROS_LDA(const EVP_SKEY *, skey, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_SKEY_get0_key_id, skey);
    AROS_LIBFUNC_EXIT
}

const char * LIB_EVP_SKEY_get0_provider_name(struct Library * _base, const EVP_SKEY * skey);

AROS_LH1(const char *,EVP_SKEY_get0_provider_name,
    AROS_LDA(const EVP_SKEY *, skey, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_SKEY_get0_provider_name, skey);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_SKEY_get0_raw_key(struct Library * _base, const EVP_SKEY * skey, const unsigned char ** key, size_t * len);

AROS_LH3(int,EVP_SKEY_get0_raw_key,
    AROS_LDA(const EVP_SKEY *, skey, A0),
    AROS_LDA(const unsigned char **, key, A1),
    AROS_LDA(size_t *, len, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_SKEY_get0_raw_key, skey, key, len);
    AROS_LIBFUNC_EXIT
}

const char * LIB_EVP_SKEY_get0_skeymgmt_name(struct Library * _base, const EVP_SKEY * skey);

AROS_LH1(const char *,EVP_SKEY_get0_skeymgmt_name,
    AROS_LDA(const EVP_SKEY *, skey, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_SKEY_get0_skeymgmt_name, skey);
    AROS_LIBFUNC_EXIT
}

EVP_SKEY * LIB_EVP_SKEY_import(struct Library * _base, OSSL_LIB_CTX * libctx, const char * skeymgmtname, const char * propquery, int selection, const OSSL_PARAM * params);

AROS_LH5(EVP_SKEY *,EVP_SKEY_import,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, skeymgmtname, A1),
    AROS_LDA(const char *, propquery, A2),
    AROS_LDA(int, selection, D0),
    AROS_LDA(const OSSL_PARAM *, params, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_SKEY_import, libctx, skeymgmtname, propquery, selection, params);
    AROS_LIBFUNC_EXIT
}

EVP_SKEY * LIB_EVP_SKEY_import_raw_key(struct Library * _base, OSSL_LIB_CTX * libctx, const char * skeymgmtname, unsigned char * key, size_t keylen, const char * propquery);

AROS_LH5(EVP_SKEY *,EVP_SKEY_import_raw_key,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, skeymgmtname, A1),
    AROS_LDA(unsigned char *, key, A2),
    AROS_LDA(size_t, keylen, D0),
    AROS_LDA(const char *, propquery, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_SKEY_import_raw_key, libctx, skeymgmtname, key, keylen, propquery);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_SKEY_is_a(struct Library * _base, const EVP_SKEY * skey, const char * name);

AROS_LH2(int,EVP_SKEY_is_a,
    AROS_LDA(const EVP_SKEY *, skey, A0),
    AROS_LDA(const char *, name, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_SKEY_is_a, skey, name);
    AROS_LIBFUNC_EXIT
}

EVP_SKEY * LIB_EVP_SKEY_to_provider(struct Library * _base, EVP_SKEY * skey, OSSL_LIB_CTX * libctx, OSSL_PROVIDER * prov, const char * propquery);

AROS_LH4(EVP_SKEY *,EVP_SKEY_to_provider,
    AROS_LDA(EVP_SKEY *, skey, A0),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A1),
    AROS_LDA(OSSL_PROVIDER *, prov, A2),
    AROS_LDA(const char *, propquery, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_SKEY_to_provider, skey, libctx, prov, propquery);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_SKEY_up_ref(struct Library * _base, EVP_SKEY * skey);

AROS_LH1(int,EVP_SKEY_up_ref,
    AROS_LDA(EVP_SKEY *, skey, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_SKEY_up_ref, skey);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_SignFinal_ex(struct Library * _base, EVP_MD_CTX * ctx, unsigned char * md, unsigned int * s, EVP_PKEY * pkey, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH6(int,EVP_SignFinal_ex,
    AROS_LDA(EVP_MD_CTX *, ctx, A0),
    AROS_LDA(unsigned char *, md, A1),
    AROS_LDA(unsigned int *, s, A2),
    AROS_LDA(EVP_PKEY *, pkey, A3),
    AROS_LDA(OSSL_LIB_CTX *, libctx, D0),
    AROS_LDA(const char *, propq, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_SignFinal_ex, ctx, md, s, pkey, libctx, propq);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_VerifyFinal_ex(struct Library * _base, EVP_MD_CTX * ctx, const unsigned char * sigbuf, unsigned int siglen, EVP_PKEY * pkey, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH6(int,EVP_VerifyFinal_ex,
    AROS_LDA(EVP_MD_CTX *, ctx, A0),
    AROS_LDA(const unsigned char *, sigbuf, A1),
    AROS_LDA(unsigned int, siglen, D0),
    AROS_LDA(EVP_PKEY *, pkey, A2),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A3),
    AROS_LDA(const char *, propq, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_VerifyFinal_ex, ctx, sigbuf, siglen, pkey, libctx, propq);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_default_properties_enable_fips(struct Library * _base, OSSL_LIB_CTX * libctx, int enable);

AROS_LH2(int,EVP_default_properties_enable_fips,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(int, enable, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_default_properties_enable_fips, libctx, enable);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_default_properties_is_fips_enabled(struct Library * _base, OSSL_LIB_CTX * libctx);

AROS_LH1(int,EVP_default_properties_is_fips_enabled,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_default_properties_is_fips_enabled, libctx);
    AROS_LIBFUNC_EXIT
}

char * LIB_EVP_get1_default_properties(struct Library * _base, OSSL_LIB_CTX * libctx);

AROS_LH1(char *,EVP_get1_default_properties,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_get1_default_properties, libctx);
    AROS_LIBFUNC_EXIT
}

int LIB_EVP_set_default_properties(struct Library * _base, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH2(int,EVP_set_default_properties,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, propq, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(EVP_set_default_properties, libctx, propq);
    AROS_LIBFUNC_EXIT
}

int LIB_GENERAL_NAME_set1_X509_NAME(struct Library * _base, GENERAL_NAME ** tgt, const X509_NAME * src);

AROS_LH2(int,GENERAL_NAME_set1_X509_NAME,
    AROS_LDA(GENERAL_NAME **, tgt, A0),
    AROS_LDA(const X509_NAME *, src, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(GENERAL_NAME_set1_X509_NAME, tgt, src);
    AROS_LIBFUNC_EXIT
}

void LIB_ISSUER_SIGN_TOOL_free(struct Library * _base, ISSUER_SIGN_TOOL * a);

AROS_LH1(void,ISSUER_SIGN_TOOL_free,
    AROS_LDA(ISSUER_SIGN_TOOL *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(ISSUER_SIGN_TOOL_free, a);
    AROS_LIBFUNC_EXIT
}

const ASN1_ITEM * LIB_ISSUER_SIGN_TOOL_it(struct Library * _base);

AROS_LH0(const ASN1_ITEM *,ISSUER_SIGN_TOOL_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(ISSUER_SIGN_TOOL_it);
    AROS_LIBFUNC_EXIT
}

ISSUER_SIGN_TOOL * LIB_ISSUER_SIGN_TOOL_new(struct Library * _base);

AROS_LH0(ISSUER_SIGN_TOOL *,ISSUER_SIGN_TOOL_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(ISSUER_SIGN_TOOL_new);
    AROS_LIBFUNC_EXIT
}

OSSL_LIB_CTX * LIB_NCONF_get0_libctx(struct Library * _base, const CONF * conf);

AROS_LH1(OSSL_LIB_CTX *,NCONF_get0_libctx,
    AROS_LDA(const CONF *, conf, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(NCONF_get0_libctx, conf);
    AROS_LIBFUNC_EXIT
}

STACK_OF(OPENSSL_CSTRING) * LIB_NCONF_get_section_names(struct Library * _base, const CONF * conf);

AROS_LH1(STACK_OF(OPENSSL_CSTRING) *,NCONF_get_section_names,
    AROS_LDA(const CONF *, conf, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(NCONF_get_section_names, conf);
    AROS_LIBFUNC_EXIT
}

CONF * LIB_NCONF_new_ex(struct Library * _base, OSSL_LIB_CTX * libctx, CONF_METHOD * meth);

AROS_LH2(CONF *,NCONF_new_ex,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(CONF_METHOD *, meth, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(NCONF_new_ex, libctx, meth);
    AROS_LIBFUNC_EXIT
}

int LIB_OCSP_RESPID_match_ex(struct Library * _base, OCSP_RESPID * respid, X509 * cert, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH4(int,OCSP_RESPID_match_ex,
    AROS_LDA(OCSP_RESPID *, respid, A0),
    AROS_LDA(X509 *, cert, A1),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A2),
    AROS_LDA(const char *, propq, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OCSP_RESPID_match_ex, respid, cert, libctx, propq);
    AROS_LIBFUNC_EXIT
}

int LIB_OCSP_RESPID_set_by_key_ex(struct Library * _base, OCSP_RESPID * respid, X509 * cert, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH4(int,OCSP_RESPID_set_by_key_ex,
    AROS_LDA(OCSP_RESPID *, respid, A0),
    AROS_LDA(X509 *, cert, A1),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A2),
    AROS_LDA(const char *, propq, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OCSP_RESPID_set_by_key_ex, respid, cert, libctx, propq);
    AROS_LIBFUNC_EXIT
}

void LIB_OPENSSL_LH_doall_arg_thunk(struct Library * _base, OPENSSL_LHASH * lh, OPENSSL_LH_DOALL_FUNCARG_THUNK daaw, OPENSSL_LH_DOALL_FUNCARG fn, void * arg);

AROS_LH4(void,OPENSSL_LH_doall_arg_thunk,
    AROS_LDA(OPENSSL_LHASH *, lh, A0),
    AROS_LDA(OPENSSL_LH_DOALL_FUNCARG_THUNK, daaw, D0),
    AROS_LDA(OPENSSL_LH_DOALL_FUNCARG, fn, D1),
    AROS_LDA(void *, arg, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OPENSSL_LH_doall_arg_thunk, lh, daaw, fn, arg);
    AROS_LIBFUNC_EXIT
}

OPENSSL_LHASH * LIB_OPENSSL_LH_set_thunks(struct Library * _base, OPENSSL_LHASH * lh, OPENSSL_LH_HASHFUNCTHUNK hw, OPENSSL_LH_COMPFUNCTHUNK cw, OPENSSL_LH_DOALL_FUNC_THUNK daw, OPENSSL_LH_DOALL_FUNCARG_THUNK daaw);

AROS_LH5(OPENSSL_LHASH *,OPENSSL_LH_set_thunks,
    AROS_LDA(OPENSSL_LHASH *, lh, A0),
    AROS_LDA(OPENSSL_LH_HASHFUNCTHUNK, hw, A1),
    AROS_LDA(OPENSSL_LH_COMPFUNCTHUNK, cw, A2),
    AROS_LDA(OPENSSL_LH_DOALL_FUNC_THUNK, daw, A3),
    AROS_LDA(OPENSSL_LH_DOALL_FUNCARG_THUNK, daaw, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OPENSSL_LH_set_thunks, lh, hw, cw, daw, daaw);
    AROS_LIBFUNC_EXIT
}

int LIB_OPENSSL_buf2hexstr_ex(struct Library * _base, char * str, size_t str_n, size_t * strlength, const unsigned char * buf, size_t buflen, const char sep);

AROS_LH6(int,OPENSSL_buf2hexstr_ex,
    AROS_LDA(char *, str, A0),
    AROS_LDA(size_t, str_n, D0),
    AROS_LDA(size_t *, strlength, A1),
    AROS_LDA(const unsigned char *, buf, A2),
    AROS_LDA(size_t, buflen, D1),
    AROS_LDA(const char, sep, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OPENSSL_buf2hexstr_ex, str, str_n, strlength, buf, buflen, sep);
    AROS_LIBFUNC_EXIT
}

int LIB_OPENSSL_hexstr2buf_ex(struct Library * _base, unsigned char * buf, size_t buf_n, size_t * buflen, const char * str, const char sep);

AROS_LH5(int,OPENSSL_hexstr2buf_ex,
    AROS_LDA(unsigned char *, buf, A0),
    AROS_LDA(size_t, buf_n, D0),
    AROS_LDA(size_t *, buflen, A1),
    AROS_LDA(const char *, str, A2),
    AROS_LDA(const char, sep, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OPENSSL_hexstr2buf_ex, buf, buf_n, buflen, str, sep);
    AROS_LIBFUNC_EXIT
}

const char * LIB_OPENSSL_info(struct Library * _base, int type);

AROS_LH1(const char *,OPENSSL_info,
    AROS_LDA(int, type, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OPENSSL_info, type);
    AROS_LIBFUNC_EXIT
}

int LIB_OPENSSL_sk_find_all(struct Library * _base, OPENSSL_STACK * st, const void * data, int * pnum);

AROS_LH3(int,OPENSSL_sk_find_all,
    AROS_LDA(OPENSSL_STACK *, st, A0),
    AROS_LDA(const void *, data, A1),
    AROS_LDA(int *, pnum, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OPENSSL_sk_find_all, st, data, pnum);
    AROS_LIBFUNC_EXIT
}

int LIB_OPENSSL_strcasecmp(struct Library * _base, const char * s1, const char * s2);

AROS_LH2(int,OPENSSL_strcasecmp,
    AROS_LDA(const char *, s1, A0),
    AROS_LDA(const char *, s2, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OPENSSL_strcasecmp, s1, s2);
    AROS_LIBFUNC_EXIT
}

int LIB_OPENSSL_strncasecmp(struct Library * _base, const char * s1, const char * s2, size_t n);

AROS_LH3(int,OPENSSL_strncasecmp,
    AROS_LDA(const char *, s1, A0),
    AROS_LDA(const char *, s2, A1),
    AROS_LDA(size_t, n, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OPENSSL_strncasecmp, s1, s2, n);
    AROS_LIBFUNC_EXIT
}

int LIB_OPENSSL_strtoul(struct Library * _base, const char * str, char ** endptr, int base, unsigned long * num);

AROS_LH4(int,OPENSSL_strtoul,
    AROS_LDA(const char *, str, A0),
    AROS_LDA(char **, endptr, A1),
    AROS_LDA(int, base, D0),
    AROS_LDA(unsigned long *, num, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OPENSSL_strtoul, str, endptr, base, num);
    AROS_LIBFUNC_EXIT
}

void LIB_OPENSSL_thread_stop_ex(struct Library * _base, OSSL_LIB_CTX * ctx);

AROS_LH1(void,OPENSSL_thread_stop_ex,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OPENSSL_thread_stop_ex, ctx);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_ALLOWED_ATTRIBUTES_CHOICE_free(struct Library * _base, OSSL_ALLOWED_ATTRIBUTES_CHOICE * a);

AROS_LH1(void,OSSL_ALLOWED_ATTRIBUTES_CHOICE_free,
    AROS_LDA(OSSL_ALLOWED_ATTRIBUTES_CHOICE *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_ALLOWED_ATTRIBUTES_CHOICE_free, a);
    AROS_LIBFUNC_EXIT
}

const ASN1_ITEM * LIB_OSSL_ALLOWED_ATTRIBUTES_CHOICE_it(struct Library * _base);

AROS_LH0(const ASN1_ITEM *,OSSL_ALLOWED_ATTRIBUTES_CHOICE_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_ALLOWED_ATTRIBUTES_CHOICE_it);
    AROS_LIBFUNC_EXIT
}

OSSL_ALLOWED_ATTRIBUTES_CHOICE * LIB_OSSL_ALLOWED_ATTRIBUTES_CHOICE_new(struct Library * _base);

AROS_LH0(OSSL_ALLOWED_ATTRIBUTES_CHOICE *,OSSL_ALLOWED_ATTRIBUTES_CHOICE_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_ALLOWED_ATTRIBUTES_CHOICE_new);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_ALLOWED_ATTRIBUTES_ITEM_free(struct Library * _base, OSSL_ALLOWED_ATTRIBUTES_ITEM * a);

AROS_LH1(void,OSSL_ALLOWED_ATTRIBUTES_ITEM_free,
    AROS_LDA(OSSL_ALLOWED_ATTRIBUTES_ITEM *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_ALLOWED_ATTRIBUTES_ITEM_free, a);
    AROS_LIBFUNC_EXIT
}

const ASN1_ITEM * LIB_OSSL_ALLOWED_ATTRIBUTES_ITEM_it(struct Library * _base);

AROS_LH0(const ASN1_ITEM *,OSSL_ALLOWED_ATTRIBUTES_ITEM_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_ALLOWED_ATTRIBUTES_ITEM_it);
    AROS_LIBFUNC_EXIT
}

OSSL_ALLOWED_ATTRIBUTES_ITEM * LIB_OSSL_ALLOWED_ATTRIBUTES_ITEM_new(struct Library * _base);

AROS_LH0(OSSL_ALLOWED_ATTRIBUTES_ITEM *,OSSL_ALLOWED_ATTRIBUTES_ITEM_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_ALLOWED_ATTRIBUTES_ITEM_new);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_ALLOWED_ATTRIBUTES_SYNTAX_free(struct Library * _base, OSSL_ALLOWED_ATTRIBUTES_SYNTAX * a);

AROS_LH1(void,OSSL_ALLOWED_ATTRIBUTES_SYNTAX_free,
    AROS_LDA(OSSL_ALLOWED_ATTRIBUTES_SYNTAX *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_ALLOWED_ATTRIBUTES_SYNTAX_free, a);
    AROS_LIBFUNC_EXIT
}

const ASN1_ITEM * LIB_OSSL_ALLOWED_ATTRIBUTES_SYNTAX_it(struct Library * _base);

AROS_LH0(const ASN1_ITEM *,OSSL_ALLOWED_ATTRIBUTES_SYNTAX_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_ALLOWED_ATTRIBUTES_SYNTAX_it);
    AROS_LIBFUNC_EXIT
}

OSSL_ALLOWED_ATTRIBUTES_SYNTAX * LIB_OSSL_ALLOWED_ATTRIBUTES_SYNTAX_new(struct Library * _base);

AROS_LH0(OSSL_ALLOWED_ATTRIBUTES_SYNTAX *,OSSL_ALLOWED_ATTRIBUTES_SYNTAX_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_ALLOWED_ATTRIBUTES_SYNTAX_new);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_ATAV_free(struct Library * _base, OSSL_ATAV * a);

AROS_LH1(void,OSSL_ATAV_free,
    AROS_LDA(OSSL_ATAV *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_ATAV_free, a);
    AROS_LIBFUNC_EXIT
}

const ASN1_ITEM * LIB_OSSL_ATAV_it(struct Library * _base);

AROS_LH0(const ASN1_ITEM *,OSSL_ATAV_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_ATAV_it);
    AROS_LIBFUNC_EXIT
}

OSSL_ATAV * LIB_OSSL_ATAV_new(struct Library * _base);

AROS_LH0(OSSL_ATAV *,OSSL_ATAV_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_ATAV_new);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_ATTRIBUTES_SYNTAX_free(struct Library * _base, OSSL_ATTRIBUTES_SYNTAX * a);

AROS_LH1(void,OSSL_ATTRIBUTES_SYNTAX_free,
    AROS_LDA(OSSL_ATTRIBUTES_SYNTAX *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_ATTRIBUTES_SYNTAX_free, a);
    AROS_LIBFUNC_EXIT
}

const ASN1_ITEM * LIB_OSSL_ATTRIBUTES_SYNTAX_it(struct Library * _base);

AROS_LH0(const ASN1_ITEM *,OSSL_ATTRIBUTES_SYNTAX_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_ATTRIBUTES_SYNTAX_it);
    AROS_LIBFUNC_EXIT
}

OSSL_ATTRIBUTES_SYNTAX * LIB_OSSL_ATTRIBUTES_SYNTAX_new(struct Library * _base);

AROS_LH0(OSSL_ATTRIBUTES_SYNTAX *,OSSL_ATTRIBUTES_SYNTAX_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_ATTRIBUTES_SYNTAX_new);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_ATTRIBUTE_DESCRIPTOR_free(struct Library * _base, OSSL_ATTRIBUTE_DESCRIPTOR * a);

AROS_LH1(void,OSSL_ATTRIBUTE_DESCRIPTOR_free,
    AROS_LDA(OSSL_ATTRIBUTE_DESCRIPTOR *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_ATTRIBUTE_DESCRIPTOR_free, a);
    AROS_LIBFUNC_EXIT
}

const ASN1_ITEM * LIB_OSSL_ATTRIBUTE_DESCRIPTOR_it(struct Library * _base);

AROS_LH0(const ASN1_ITEM *,OSSL_ATTRIBUTE_DESCRIPTOR_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_ATTRIBUTE_DESCRIPTOR_it);
    AROS_LIBFUNC_EXIT
}

OSSL_ATTRIBUTE_DESCRIPTOR * LIB_OSSL_ATTRIBUTE_DESCRIPTOR_new(struct Library * _base);

AROS_LH0(OSSL_ATTRIBUTE_DESCRIPTOR *,OSSL_ATTRIBUTE_DESCRIPTOR_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_ATTRIBUTE_DESCRIPTOR_new);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_ATTRIBUTE_MAPPINGS_free(struct Library * _base, OSSL_ATTRIBUTE_MAPPINGS * a);

AROS_LH1(void,OSSL_ATTRIBUTE_MAPPINGS_free,
    AROS_LDA(OSSL_ATTRIBUTE_MAPPINGS *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_ATTRIBUTE_MAPPINGS_free, a);
    AROS_LIBFUNC_EXIT
}

const ASN1_ITEM * LIB_OSSL_ATTRIBUTE_MAPPINGS_it(struct Library * _base);

AROS_LH0(const ASN1_ITEM *,OSSL_ATTRIBUTE_MAPPINGS_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_ATTRIBUTE_MAPPINGS_it);
    AROS_LIBFUNC_EXIT
}

OSSL_ATTRIBUTE_MAPPINGS * LIB_OSSL_ATTRIBUTE_MAPPINGS_new(struct Library * _base);

AROS_LH0(OSSL_ATTRIBUTE_MAPPINGS *,OSSL_ATTRIBUTE_MAPPINGS_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_ATTRIBUTE_MAPPINGS_new);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_ATTRIBUTE_MAPPING_free(struct Library * _base, OSSL_ATTRIBUTE_MAPPING * a);

AROS_LH1(void,OSSL_ATTRIBUTE_MAPPING_free,
    AROS_LDA(OSSL_ATTRIBUTE_MAPPING *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_ATTRIBUTE_MAPPING_free, a);
    AROS_LIBFUNC_EXIT
}

const ASN1_ITEM * LIB_OSSL_ATTRIBUTE_MAPPING_it(struct Library * _base);

AROS_LH0(const ASN1_ITEM *,OSSL_ATTRIBUTE_MAPPING_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_ATTRIBUTE_MAPPING_it);
    AROS_LIBFUNC_EXIT
}

OSSL_ATTRIBUTE_MAPPING * LIB_OSSL_ATTRIBUTE_MAPPING_new(struct Library * _base);

AROS_LH0(OSSL_ATTRIBUTE_MAPPING *,OSSL_ATTRIBUTE_MAPPING_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_ATTRIBUTE_MAPPING_new);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_ATTRIBUTE_TYPE_MAPPING_free(struct Library * _base, OSSL_ATTRIBUTE_TYPE_MAPPING * a);

AROS_LH1(void,OSSL_ATTRIBUTE_TYPE_MAPPING_free,
    AROS_LDA(OSSL_ATTRIBUTE_TYPE_MAPPING *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_ATTRIBUTE_TYPE_MAPPING_free, a);
    AROS_LIBFUNC_EXIT
}

const ASN1_ITEM * LIB_OSSL_ATTRIBUTE_TYPE_MAPPING_it(struct Library * _base);

AROS_LH0(const ASN1_ITEM *,OSSL_ATTRIBUTE_TYPE_MAPPING_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_ATTRIBUTE_TYPE_MAPPING_it);
    AROS_LIBFUNC_EXIT
}

OSSL_ATTRIBUTE_TYPE_MAPPING * LIB_OSSL_ATTRIBUTE_TYPE_MAPPING_new(struct Library * _base);

AROS_LH0(OSSL_ATTRIBUTE_TYPE_MAPPING *,OSSL_ATTRIBUTE_TYPE_MAPPING_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_ATTRIBUTE_TYPE_MAPPING_new);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_ATTRIBUTE_VALUE_MAPPING_free(struct Library * _base, OSSL_ATTRIBUTE_VALUE_MAPPING * a);

AROS_LH1(void,OSSL_ATTRIBUTE_VALUE_MAPPING_free,
    AROS_LDA(OSSL_ATTRIBUTE_VALUE_MAPPING *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_ATTRIBUTE_VALUE_MAPPING_free, a);
    AROS_LIBFUNC_EXIT
}

const ASN1_ITEM * LIB_OSSL_ATTRIBUTE_VALUE_MAPPING_it(struct Library * _base);

AROS_LH0(const ASN1_ITEM *,OSSL_ATTRIBUTE_VALUE_MAPPING_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_ATTRIBUTE_VALUE_MAPPING_it);
    AROS_LIBFUNC_EXIT
}

OSSL_ATTRIBUTE_VALUE_MAPPING * LIB_OSSL_ATTRIBUTE_VALUE_MAPPING_new(struct Library * _base);

AROS_LH0(OSSL_ATTRIBUTE_VALUE_MAPPING *,OSSL_ATTRIBUTE_VALUE_MAPPING_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_ATTRIBUTE_VALUE_MAPPING_new);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX_free(struct Library * _base, OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX * a);

AROS_LH1(void,OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX_free,
    AROS_LDA(OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX_free, a);
    AROS_LIBFUNC_EXIT
}

const ASN1_ITEM * LIB_OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX_it(struct Library * _base);

AROS_LH0(const ASN1_ITEM *,OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX_it);
    AROS_LIBFUNC_EXIT
}

OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX * LIB_OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX_new(struct Library * _base);

AROS_LH0(OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX *,OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX_new);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_BASIC_ATTR_CONSTRAINTS_free(struct Library * _base, OSSL_BASIC_ATTR_CONSTRAINTS * a);

AROS_LH1(void,OSSL_BASIC_ATTR_CONSTRAINTS_free,
    AROS_LDA(OSSL_BASIC_ATTR_CONSTRAINTS *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_BASIC_ATTR_CONSTRAINTS_free, a);
    AROS_LIBFUNC_EXIT
}

const ASN1_ITEM * LIB_OSSL_BASIC_ATTR_CONSTRAINTS_it(struct Library * _base);

AROS_LH0(const ASN1_ITEM *,OSSL_BASIC_ATTR_CONSTRAINTS_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_BASIC_ATTR_CONSTRAINTS_it);
    AROS_LIBFUNC_EXIT
}

OSSL_BASIC_ATTR_CONSTRAINTS * LIB_OSSL_BASIC_ATTR_CONSTRAINTS_new(struct Library * _base);

AROS_LH0(OSSL_BASIC_ATTR_CONSTRAINTS *,OSSL_BASIC_ATTR_CONSTRAINTS_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_BASIC_ATTR_CONSTRAINTS_new);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_CMP_ATAVS_free(struct Library * _base, OSSL_CMP_ATAVS * a);

AROS_LH1(void,OSSL_CMP_ATAVS_free,
    AROS_LDA(OSSL_CMP_ATAVS *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_CMP_ATAVS_free, a);
    AROS_LIBFUNC_EXIT
}

const ASN1_ITEM * LIB_OSSL_CMP_ATAVS_it(struct Library * _base);

AROS_LH0(const ASN1_ITEM *,OSSL_CMP_ATAVS_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_CMP_ATAVS_it);
    AROS_LIBFUNC_EXIT
}

OSSL_CMP_ATAVS * LIB_OSSL_CMP_ATAVS_new(struct Library * _base);

AROS_LH0(OSSL_CMP_ATAVS *,OSSL_CMP_ATAVS_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_CMP_ATAVS_new);
    AROS_LIBFUNC_EXIT
}

OSSL_CMP_ATAV * LIB_OSSL_CMP_ATAV_create(struct Library * _base, ASN1_OBJECT * type, ASN1_TYPE * value);

AROS_LH2(OSSL_CMP_ATAV *,OSSL_CMP_ATAV_create,
    AROS_LDA(ASN1_OBJECT *, type, A0),
    AROS_LDA(ASN1_TYPE *, value, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_ATAV_create, type, value);
    AROS_LIBFUNC_EXIT
}

X509_ALGOR * LIB_OSSL_CMP_ATAV_get0_algId(struct Library * _base, const OSSL_CMP_ATAV * atav);

AROS_LH1(X509_ALGOR *,OSSL_CMP_ATAV_get0_algId,
    AROS_LDA(const OSSL_CMP_ATAV *, atav, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_ATAV_get0_algId, atav);
    AROS_LIBFUNC_EXIT
}

ASN1_OBJECT * LIB_OSSL_CMP_ATAV_get0_type(struct Library * _base, const OSSL_CMP_ATAV * itav);

AROS_LH1(ASN1_OBJECT *,OSSL_CMP_ATAV_get0_type,
    AROS_LDA(const OSSL_CMP_ATAV *, itav, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_ATAV_get0_type, itav);
    AROS_LIBFUNC_EXIT
}

ASN1_TYPE * LIB_OSSL_CMP_ATAV_get0_value(struct Library * _base, const OSSL_CMP_ATAV * itav);

AROS_LH1(ASN1_TYPE *,OSSL_CMP_ATAV_get0_value,
    AROS_LDA(const OSSL_CMP_ATAV *, itav, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_ATAV_get0_value, itav);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_ATAV_get_rsaKeyLen(struct Library * _base, const OSSL_CMP_ATAV * atav);

AROS_LH1(int,OSSL_CMP_ATAV_get_rsaKeyLen,
    AROS_LDA(const OSSL_CMP_ATAV *, atav, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_ATAV_get_rsaKeyLen, atav);
    AROS_LIBFUNC_EXIT
}

OSSL_CMP_ATAV * LIB_OSSL_CMP_ATAV_new_algId(struct Library * _base, const X509_ALGOR * alg);

AROS_LH1(OSSL_CMP_ATAV *,OSSL_CMP_ATAV_new_algId,
    AROS_LDA(const X509_ALGOR *, alg, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_ATAV_new_algId, alg);
    AROS_LIBFUNC_EXIT
}

OSSL_CMP_ATAV * LIB_OSSL_CMP_ATAV_new_rsaKeyLen(struct Library * _base, int len);

AROS_LH1(OSSL_CMP_ATAV *,OSSL_CMP_ATAV_new_rsaKeyLen,
    AROS_LDA(int, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_ATAV_new_rsaKeyLen, len);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_ATAV_push1(struct Library * _base, OSSL_CMP_ATAVS ** sk_p, const OSSL_CMP_ATAV * atav);

AROS_LH2(int,OSSL_CMP_ATAV_push1,
    AROS_LDA(OSSL_CMP_ATAVS **, sk_p, A0),
    AROS_LDA(const OSSL_CMP_ATAV *, atav, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_ATAV_push1, sk_p, atav);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_CMP_ATAV_set0(struct Library * _base, OSSL_CMP_ATAV * itav, ASN1_OBJECT * type, ASN1_TYPE * value);

AROS_LH3(void,OSSL_CMP_ATAV_set0,
    AROS_LDA(OSSL_CMP_ATAV *, itav, A0),
    AROS_LDA(ASN1_OBJECT *, type, A1),
    AROS_LDA(ASN1_TYPE *, value, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_CMP_ATAV_set0, itav, type, value);
    AROS_LIBFUNC_EXIT
}

OSSL_CMP_CRLSTATUS * LIB_OSSL_CMP_CRLSTATUS_create(struct Library * _base, const X509_CRL * crl, const X509 * cert, int only_DN);

AROS_LH3(OSSL_CMP_CRLSTATUS *,OSSL_CMP_CRLSTATUS_create,
    AROS_LDA(const X509_CRL *, crl, A0),
    AROS_LDA(const X509 *, cert, A1),
    AROS_LDA(int, only_DN, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CRLSTATUS_create, crl, cert, only_DN);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_CMP_CRLSTATUS_free(struct Library * _base, OSSL_CMP_CRLSTATUS * crlstatus);

AROS_LH1(void,OSSL_CMP_CRLSTATUS_free,
    AROS_LDA(OSSL_CMP_CRLSTATUS *, crlstatus, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_CMP_CRLSTATUS_free, crlstatus);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_CRLSTATUS_get0(struct Library * _base, const OSSL_CMP_CRLSTATUS * crlstatus, DIST_POINT_NAME ** dpn, GENERAL_NAMES ** issuer, ASN1_TIME ** thisUpdate);

AROS_LH4(int,OSSL_CMP_CRLSTATUS_get0,
    AROS_LDA(const OSSL_CMP_CRLSTATUS *, crlstatus, A0),
    AROS_LDA(DIST_POINT_NAME **, dpn, A1),
    AROS_LDA(GENERAL_NAMES **, issuer, A2),
    AROS_LDA(ASN1_TIME **, thisUpdate, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CRLSTATUS_get0, crlstatus, dpn, issuer, thisUpdate);
    AROS_LIBFUNC_EXIT
}

OSSL_CMP_CRLSTATUS * LIB_OSSL_CMP_CRLSTATUS_new1(struct Library * _base, const DIST_POINT_NAME * dpn, const GENERAL_NAMES * issuer, const ASN1_TIME * thisUpdate);

AROS_LH3(OSSL_CMP_CRLSTATUS *,OSSL_CMP_CRLSTATUS_new1,
    AROS_LDA(const DIST_POINT_NAME *, dpn, A0),
    AROS_LDA(const GENERAL_NAMES *, issuer, A1),
    AROS_LDA(const ASN1_TIME *, thisUpdate, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CRLSTATUS_new1, dpn, issuer, thisUpdate);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_CMP_CTX_free(struct Library * _base, OSSL_CMP_CTX * ctx);

AROS_LH1(void,OSSL_CMP_CTX_free,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_CMP_CTX_free, ctx);
    AROS_LIBFUNC_EXIT
}

STACK_OF(OSSL_CMP_ITAV) * LIB_OSSL_CMP_CTX_get0_geninfo_ITAVs(struct Library * _base, const OSSL_CMP_CTX * ctx);

AROS_LH1(STACK_OF(OSSL_CMP_ITAV) *,OSSL_CMP_CTX_get0_geninfo_ITAVs,
    AROS_LDA(const OSSL_CMP_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_get0_geninfo_ITAVs, ctx);
    AROS_LIBFUNC_EXIT
}

OSSL_LIB_CTX * LIB_OSSL_CMP_CTX_get0_libctx(struct Library * _base, const OSSL_CMP_CTX * ctx);

AROS_LH1(OSSL_LIB_CTX *,OSSL_CMP_CTX_get0_libctx,
    AROS_LDA(const OSSL_CMP_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_get0_libctx, ctx);
    AROS_LIBFUNC_EXIT
}

X509 * LIB_OSSL_CMP_CTX_get0_newCert(struct Library * _base, const OSSL_CMP_CTX * ctx);

AROS_LH1(X509 *,OSSL_CMP_CTX_get0_newCert,
    AROS_LDA(const OSSL_CMP_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_get0_newCert, ctx);
    AROS_LIBFUNC_EXIT
}

EVP_PKEY * LIB_OSSL_CMP_CTX_get0_newPkey(struct Library * _base, const OSSL_CMP_CTX * ctx, int priv);

AROS_LH2(EVP_PKEY *,OSSL_CMP_CTX_get0_newPkey,
    AROS_LDA(const OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(int, priv, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_get0_newPkey, ctx, priv);
    AROS_LIBFUNC_EXIT
}

const char * LIB_OSSL_CMP_CTX_get0_propq(struct Library * _base, const OSSL_CMP_CTX * ctx);

AROS_LH1(const char *,OSSL_CMP_CTX_get0_propq,
    AROS_LDA(const OSSL_CMP_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_get0_propq, ctx);
    AROS_LIBFUNC_EXIT
}

OSSL_CMP_PKIFREETEXT * LIB_OSSL_CMP_CTX_get0_statusString(struct Library * _base, const OSSL_CMP_CTX * ctx);

AROS_LH1(OSSL_CMP_PKIFREETEXT *,OSSL_CMP_CTX_get0_statusString,
    AROS_LDA(const OSSL_CMP_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_get0_statusString, ctx);
    AROS_LIBFUNC_EXIT
}

X509_STORE * LIB_OSSL_CMP_CTX_get0_trustedStore(struct Library * _base, const OSSL_CMP_CTX * ctx);

AROS_LH1(X509_STORE *,OSSL_CMP_CTX_get0_trustedStore,
    AROS_LDA(const OSSL_CMP_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_get0_trustedStore, ctx);
    AROS_LIBFUNC_EXIT
}

STACK_OF(X509) * LIB_OSSL_CMP_CTX_get0_untrusted(struct Library * _base, const OSSL_CMP_CTX * ctx);

AROS_LH1(STACK_OF(X509) *,OSSL_CMP_CTX_get0_untrusted,
    AROS_LDA(const OSSL_CMP_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_get0_untrusted, ctx);
    AROS_LIBFUNC_EXIT
}

X509 * LIB_OSSL_CMP_CTX_get0_validatedSrvCert(struct Library * _base, const OSSL_CMP_CTX * ctx);

AROS_LH1(X509 *,OSSL_CMP_CTX_get0_validatedSrvCert,
    AROS_LDA(const OSSL_CMP_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_get0_validatedSrvCert, ctx);
    AROS_LIBFUNC_EXIT
}

STACK_OF(X509) * LIB_OSSL_CMP_CTX_get1_caPubs(struct Library * _base, const OSSL_CMP_CTX * ctx);

AROS_LH1(STACK_OF(X509) *,OSSL_CMP_CTX_get1_caPubs,
    AROS_LDA(const OSSL_CMP_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_get1_caPubs, ctx);
    AROS_LIBFUNC_EXIT
}

STACK_OF(X509) * LIB_OSSL_CMP_CTX_get1_extraCertsIn(struct Library * _base, const OSSL_CMP_CTX * ctx);

AROS_LH1(STACK_OF(X509) *,OSSL_CMP_CTX_get1_extraCertsIn,
    AROS_LDA(const OSSL_CMP_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_get1_extraCertsIn, ctx);
    AROS_LIBFUNC_EXIT
}

STACK_OF(X509) * LIB_OSSL_CMP_CTX_get1_newChain(struct Library * _base, const OSSL_CMP_CTX * ctx);

AROS_LH1(STACK_OF(X509) *,OSSL_CMP_CTX_get1_newChain,
    AROS_LDA(const OSSL_CMP_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_get1_newChain, ctx);
    AROS_LIBFUNC_EXIT
}

void * LIB_OSSL_CMP_CTX_get_certConf_cb_arg(struct Library * _base, const OSSL_CMP_CTX * ctx);

AROS_LH1(void *,OSSL_CMP_CTX_get_certConf_cb_arg,
    AROS_LDA(const OSSL_CMP_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_get_certConf_cb_arg, ctx);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_CTX_get_failInfoCode(struct Library * _base, const OSSL_CMP_CTX * ctx);

AROS_LH1(int,OSSL_CMP_CTX_get_failInfoCode,
    AROS_LDA(const OSSL_CMP_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_get_failInfoCode, ctx);
    AROS_LIBFUNC_EXIT
}

void * LIB_OSSL_CMP_CTX_get_http_cb_arg(struct Library * _base, const OSSL_CMP_CTX * ctx);

AROS_LH1(void *,OSSL_CMP_CTX_get_http_cb_arg,
    AROS_LDA(const OSSL_CMP_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_get_http_cb_arg, ctx);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_CTX_get_option(struct Library * _base, const OSSL_CMP_CTX * ctx, int opt);

AROS_LH2(int,OSSL_CMP_CTX_get_option,
    AROS_LDA(const OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(int, opt, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_get_option, ctx, opt);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_CTX_get_status(struct Library * _base, const OSSL_CMP_CTX * ctx);

AROS_LH1(int,OSSL_CMP_CTX_get_status,
    AROS_LDA(const OSSL_CMP_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_get_status, ctx);
    AROS_LIBFUNC_EXIT
}

void * LIB_OSSL_CMP_CTX_get_transfer_cb_arg(struct Library * _base, const OSSL_CMP_CTX * ctx);

AROS_LH1(void *,OSSL_CMP_CTX_get_transfer_cb_arg,
    AROS_LDA(const OSSL_CMP_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_get_transfer_cb_arg, ctx);
    AROS_LIBFUNC_EXIT
}

OSSL_CMP_CTX * LIB_OSSL_CMP_CTX_new(struct Library * _base, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH2(OSSL_CMP_CTX *,OSSL_CMP_CTX_new,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, propq, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_new, libctx, propq);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_CMP_CTX_print_errors(struct Library * _base, const OSSL_CMP_CTX * ctx);

AROS_LH1(void,OSSL_CMP_CTX_print_errors,
    AROS_LDA(const OSSL_CMP_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_CMP_CTX_print_errors, ctx);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_CTX_push0_geninfo_ITAV(struct Library * _base, OSSL_CMP_CTX * ctx, OSSL_CMP_ITAV * itav);

AROS_LH2(int,OSSL_CMP_CTX_push0_geninfo_ITAV,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(OSSL_CMP_ITAV *, itav, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_push0_geninfo_ITAV, ctx, itav);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_CTX_push0_genm_ITAV(struct Library * _base, OSSL_CMP_CTX * ctx, OSSL_CMP_ITAV * itav);

AROS_LH2(int,OSSL_CMP_CTX_push0_genm_ITAV,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(OSSL_CMP_ITAV *, itav, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_push0_genm_ITAV, ctx, itav);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_CTX_push0_policy(struct Library * _base, OSSL_CMP_CTX * ctx, POLICYINFO * pinfo);

AROS_LH2(int,OSSL_CMP_CTX_push0_policy,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(POLICYINFO *, pinfo, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_push0_policy, ctx, pinfo);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_CTX_push1_subjectAltName(struct Library * _base, OSSL_CMP_CTX * ctx, const GENERAL_NAME * name);

AROS_LH2(int,OSSL_CMP_CTX_push1_subjectAltName,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(const GENERAL_NAME *, name, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_push1_subjectAltName, ctx, name);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_CTX_reinit(struct Library * _base, OSSL_CMP_CTX * ctx);

AROS_LH1(int,OSSL_CMP_CTX_reinit,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_reinit, ctx);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_CTX_reqExtensions_have_SAN(struct Library * _base, OSSL_CMP_CTX * ctx);

AROS_LH1(int,OSSL_CMP_CTX_reqExtensions_have_SAN,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_reqExtensions_have_SAN, ctx);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_CTX_reset_geninfo_ITAVs(struct Library * _base, OSSL_CMP_CTX * ctx);

AROS_LH1(int,OSSL_CMP_CTX_reset_geninfo_ITAVs,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_reset_geninfo_ITAVs, ctx);
    AROS_LIBFUNC_EXIT
}

OSSL_CMP_MSG * LIB_OSSL_CMP_CTX_server_perform(struct Library * _base, OSSL_CMP_CTX * client_ctx, const OSSL_CMP_MSG * req);

AROS_LH2(OSSL_CMP_MSG *,OSSL_CMP_CTX_server_perform,
    AROS_LDA(OSSL_CMP_CTX *, client_ctx, A0),
    AROS_LDA(const OSSL_CMP_MSG *, req, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_server_perform, client_ctx, req);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_CTX_set0_newPkey(struct Library * _base, OSSL_CMP_CTX * ctx, int priv, EVP_PKEY * pkey);

AROS_LH3(int,OSSL_CMP_CTX_set0_newPkey,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(int, priv, D0),
    AROS_LDA(EVP_PKEY *, pkey, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_set0_newPkey, ctx, priv, pkey);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_CTX_set0_reqExtensions(struct Library * _base, OSSL_CMP_CTX * ctx, X509_EXTENSIONS * exts);

AROS_LH2(int,OSSL_CMP_CTX_set0_reqExtensions,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(X509_EXTENSIONS *, exts, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_set0_reqExtensions, ctx, exts);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_CTX_set0_trustedStore(struct Library * _base, OSSL_CMP_CTX * ctx, X509_STORE * store);

AROS_LH2(int,OSSL_CMP_CTX_set0_trustedStore,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(X509_STORE *, store, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_set0_trustedStore, ctx, store);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_CTX_set1_cert(struct Library * _base, OSSL_CMP_CTX * ctx, X509 * cert);

AROS_LH2(int,OSSL_CMP_CTX_set1_cert,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(X509 *, cert, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_set1_cert, ctx, cert);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_CTX_set1_expected_sender(struct Library * _base, OSSL_CMP_CTX * ctx, const X509_NAME * name);

AROS_LH2(int,OSSL_CMP_CTX_set1_expected_sender,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(const X509_NAME *, name, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_set1_expected_sender, ctx, name);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_CTX_set1_issuer(struct Library * _base, OSSL_CMP_CTX * ctx, const X509_NAME * name);

AROS_LH2(int,OSSL_CMP_CTX_set1_issuer,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(const X509_NAME *, name, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_set1_issuer, ctx, name);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_CTX_set1_no_proxy(struct Library * _base, OSSL_CMP_CTX * ctx, const char * names);

AROS_LH2(int,OSSL_CMP_CTX_set1_no_proxy,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(const char *, names, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_set1_no_proxy, ctx, names);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_CTX_set1_oldCert(struct Library * _base, OSSL_CMP_CTX * ctx, X509 * cert);

AROS_LH2(int,OSSL_CMP_CTX_set1_oldCert,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(X509 *, cert, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_set1_oldCert, ctx, cert);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_CTX_set1_p10CSR(struct Library * _base, OSSL_CMP_CTX * ctx, const X509_REQ * csr);

AROS_LH2(int,OSSL_CMP_CTX_set1_p10CSR,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(const X509_REQ *, csr, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_set1_p10CSR, ctx, csr);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_CTX_set1_pkey(struct Library * _base, OSSL_CMP_CTX * ctx, EVP_PKEY * pkey);

AROS_LH2(int,OSSL_CMP_CTX_set1_pkey,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(EVP_PKEY *, pkey, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_set1_pkey, ctx, pkey);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_CTX_set1_proxy(struct Library * _base, OSSL_CMP_CTX * ctx, const char * name);

AROS_LH2(int,OSSL_CMP_CTX_set1_proxy,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(const char *, name, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_set1_proxy, ctx, name);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_CTX_set1_recipient(struct Library * _base, OSSL_CMP_CTX * ctx, const X509_NAME * name);

AROS_LH2(int,OSSL_CMP_CTX_set1_recipient,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(const X509_NAME *, name, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_set1_recipient, ctx, name);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_CTX_set1_referenceValue(struct Library * _base, OSSL_CMP_CTX * ctx, const unsigned char * ref, int len);

AROS_LH3(int,OSSL_CMP_CTX_set1_referenceValue,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(const unsigned char *, ref, A1),
    AROS_LDA(int, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_set1_referenceValue, ctx, ref, len);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_CTX_set1_secretValue(struct Library * _base, OSSL_CMP_CTX * ctx, const unsigned char * sec, const int len);

AROS_LH3(int,OSSL_CMP_CTX_set1_secretValue,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(const unsigned char *, sec, A1),
    AROS_LDA(const int, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_set1_secretValue, ctx, sec, len);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_CTX_set1_senderNonce(struct Library * _base, OSSL_CMP_CTX * ctx, const ASN1_OCTET_STRING * nonce);

AROS_LH2(int,OSSL_CMP_CTX_set1_senderNonce,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(const ASN1_OCTET_STRING *, nonce, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_set1_senderNonce, ctx, nonce);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_CTX_set1_serialNumber(struct Library * _base, OSSL_CMP_CTX * ctx, const ASN1_INTEGER * sn);

AROS_LH2(int,OSSL_CMP_CTX_set1_serialNumber,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(const ASN1_INTEGER *, sn, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_set1_serialNumber, ctx, sn);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_CTX_set1_server(struct Library * _base, OSSL_CMP_CTX * ctx, const char * address);

AROS_LH2(int,OSSL_CMP_CTX_set1_server,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(const char *, address, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_set1_server, ctx, address);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_CTX_set1_serverPath(struct Library * _base, OSSL_CMP_CTX * ctx, const char * path);

AROS_LH2(int,OSSL_CMP_CTX_set1_serverPath,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(const char *, path, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_set1_serverPath, ctx, path);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_CTX_set1_srvCert(struct Library * _base, OSSL_CMP_CTX * ctx, X509 * cert);

AROS_LH2(int,OSSL_CMP_CTX_set1_srvCert,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(X509 *, cert, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_set1_srvCert, ctx, cert);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_CTX_set1_subjectName(struct Library * _base, OSSL_CMP_CTX * ctx, const X509_NAME * name);

AROS_LH2(int,OSSL_CMP_CTX_set1_subjectName,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(const X509_NAME *, name, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_set1_subjectName, ctx, name);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_CTX_set1_transactionID(struct Library * _base, OSSL_CMP_CTX * ctx, const ASN1_OCTET_STRING * id);

AROS_LH2(int,OSSL_CMP_CTX_set1_transactionID,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(const ASN1_OCTET_STRING *, id, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_set1_transactionID, ctx, id);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_CTX_set_certConf_cb(struct Library * _base, OSSL_CMP_CTX * ctx, OSSL_CMP_certConf_cb_t cb);

AROS_LH2(int,OSSL_CMP_CTX_set_certConf_cb,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(OSSL_CMP_certConf_cb_t, cb, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_set_certConf_cb, ctx, cb);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_CTX_set_certConf_cb_arg(struct Library * _base, OSSL_CMP_CTX * ctx, void * arg);

AROS_LH2(int,OSSL_CMP_CTX_set_certConf_cb_arg,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(void *, arg, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_set_certConf_cb_arg, ctx, arg);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_CTX_set_http_cb(struct Library * _base, OSSL_CMP_CTX * ctx, OSSL_HTTP_bio_cb_t cb);

AROS_LH2(int,OSSL_CMP_CTX_set_http_cb,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(OSSL_HTTP_bio_cb_t, cb, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_set_http_cb, ctx, cb);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_CTX_set_http_cb_arg(struct Library * _base, OSSL_CMP_CTX * ctx, void * arg);

AROS_LH2(int,OSSL_CMP_CTX_set_http_cb_arg,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(void *, arg, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_set_http_cb_arg, ctx, arg);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_CTX_set_log_cb(struct Library * _base, OSSL_CMP_CTX * ctx, OSSL_CMP_log_cb_t cb);

AROS_LH2(int,OSSL_CMP_CTX_set_log_cb,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(OSSL_CMP_log_cb_t, cb, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_set_log_cb, ctx, cb);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_CTX_set_option(struct Library * _base, OSSL_CMP_CTX * ctx, int opt, int val);

AROS_LH3(int,OSSL_CMP_CTX_set_option,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(int, opt, D0),
    AROS_LDA(int, val, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_set_option, ctx, opt, val);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_CTX_set_serverPort(struct Library * _base, OSSL_CMP_CTX * ctx, int port);

AROS_LH2(int,OSSL_CMP_CTX_set_serverPort,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(int, port, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_set_serverPort, ctx, port);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_CTX_set_transfer_cb(struct Library * _base, OSSL_CMP_CTX * ctx, OSSL_CMP_transfer_cb_t cb);

AROS_LH2(int,OSSL_CMP_CTX_set_transfer_cb,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(OSSL_CMP_transfer_cb_t, cb, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_set_transfer_cb, ctx, cb);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_CTX_set_transfer_cb_arg(struct Library * _base, OSSL_CMP_CTX * ctx, void * arg);

AROS_LH2(int,OSSL_CMP_CTX_set_transfer_cb_arg,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(void *, arg, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_set_transfer_cb_arg, ctx, arg);
    AROS_LIBFUNC_EXIT
}

OSSL_CRMF_MSG * LIB_OSSL_CMP_CTX_setup_CRM(struct Library * _base, OSSL_CMP_CTX * ctx, int for_KUR, int rid);

AROS_LH3(OSSL_CRMF_MSG *,OSSL_CMP_CTX_setup_CRM,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(int, for_KUR, D0),
    AROS_LDA(int, rid, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_setup_CRM, ctx, for_KUR, rid);
    AROS_LIBFUNC_EXIT
}

char * LIB_OSSL_CMP_CTX_snprint_PKIStatus(struct Library * _base, const OSSL_CMP_CTX * ctx, char * buf, size_t bufsize);

AROS_LH3(char *,OSSL_CMP_CTX_snprint_PKIStatus,
    AROS_LDA(const OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(char *, buf, A1),
    AROS_LDA(size_t, bufsize, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_CTX_snprint_PKIStatus, ctx, buf, bufsize);
    AROS_LIBFUNC_EXIT
}

STACK_OF(OSSL_CMP_ITAV) * LIB_OSSL_CMP_HDR_get0_geninfo_ITAVs(struct Library * _base, const OSSL_CMP_PKIHEADER * hdr);

AROS_LH1(STACK_OF(OSSL_CMP_ITAV) *,OSSL_CMP_HDR_get0_geninfo_ITAVs,
    AROS_LDA(const OSSL_CMP_PKIHEADER *, hdr, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_HDR_get0_geninfo_ITAVs, hdr);
    AROS_LIBFUNC_EXIT
}

ASN1_OCTET_STRING * LIB_OSSL_CMP_HDR_get0_recipNonce(struct Library * _base, const OSSL_CMP_PKIHEADER * hdr);

AROS_LH1(ASN1_OCTET_STRING *,OSSL_CMP_HDR_get0_recipNonce,
    AROS_LDA(const OSSL_CMP_PKIHEADER *, hdr, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_HDR_get0_recipNonce, hdr);
    AROS_LIBFUNC_EXIT
}

ASN1_OCTET_STRING * LIB_OSSL_CMP_HDR_get0_transactionID(struct Library * _base, const OSSL_CMP_PKIHEADER * hdr);

AROS_LH1(ASN1_OCTET_STRING *,OSSL_CMP_HDR_get0_transactionID,
    AROS_LDA(const OSSL_CMP_PKIHEADER *, hdr, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_HDR_get0_transactionID, hdr);
    AROS_LIBFUNC_EXIT
}

OSSL_CMP_ITAV * LIB_OSSL_CMP_ITAV_create(struct Library * _base, ASN1_OBJECT * type, ASN1_TYPE * value);

AROS_LH2(OSSL_CMP_ITAV *,OSSL_CMP_ITAV_create,
    AROS_LDA(ASN1_OBJECT *, type, A0),
    AROS_LDA(ASN1_TYPE *, value, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_ITAV_create, type, value);
    AROS_LIBFUNC_EXIT
}

OSSL_CMP_ITAV * LIB_OSSL_CMP_ITAV_dup(struct Library * _base, const OSSL_CMP_ITAV * a);

AROS_LH1(OSSL_CMP_ITAV *,OSSL_CMP_ITAV_dup,
    AROS_LDA(const OSSL_CMP_ITAV *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_ITAV_dup, a);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_CMP_ITAV_free(struct Library * _base, OSSL_CMP_ITAV * itav);

AROS_LH1(void,OSSL_CMP_ITAV_free,
    AROS_LDA(OSSL_CMP_ITAV *, itav, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_CMP_ITAV_free, itav);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_ITAV_get0_rootCaCert(struct Library * _base, const OSSL_CMP_ITAV * itav, X509 ** out);

AROS_LH2(int,OSSL_CMP_ITAV_get0_rootCaCert,
    AROS_LDA(const OSSL_CMP_ITAV *, itav, A0),
    AROS_LDA(X509 **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_ITAV_get0_rootCaCert, itav, out);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_ITAV_get0_rootCaKeyUpdate(struct Library * _base, const OSSL_CMP_ITAV * itav, X509 ** newWithNew, X509 ** newWithOld, X509 ** oldWithNew);

AROS_LH4(int,OSSL_CMP_ITAV_get0_rootCaKeyUpdate,
    AROS_LDA(const OSSL_CMP_ITAV *, itav, A0),
    AROS_LDA(X509 **, newWithNew, A1),
    AROS_LDA(X509 **, newWithOld, A2),
    AROS_LDA(X509 **, oldWithNew, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_ITAV_get0_rootCaKeyUpdate, itav, newWithNew, newWithOld, oldWithNew);
    AROS_LIBFUNC_EXIT
}

ASN1_OBJECT * LIB_OSSL_CMP_ITAV_get0_type(struct Library * _base, const OSSL_CMP_ITAV * itav);

AROS_LH1(ASN1_OBJECT *,OSSL_CMP_ITAV_get0_type,
    AROS_LDA(const OSSL_CMP_ITAV *, itav, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_ITAV_get0_type, itav);
    AROS_LIBFUNC_EXIT
}

ASN1_TYPE * LIB_OSSL_CMP_ITAV_get0_value(struct Library * _base, const OSSL_CMP_ITAV * itav);

AROS_LH1(ASN1_TYPE *,OSSL_CMP_ITAV_get0_value,
    AROS_LDA(const OSSL_CMP_ITAV *, itav, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_ITAV_get0_value, itav);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_ITAV_get1_certReqTemplate(struct Library * _base, const OSSL_CMP_ITAV * itav, OSSL_CRMF_CERTTEMPLATE ** certTemplate, OSSL_CMP_ATAVS ** keySpec);

AROS_LH3(int,OSSL_CMP_ITAV_get1_certReqTemplate,
    AROS_LDA(const OSSL_CMP_ITAV *, itav, A0),
    AROS_LDA(OSSL_CRMF_CERTTEMPLATE **, certTemplate, A1),
    AROS_LDA(OSSL_CMP_ATAVS **, keySpec, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_ITAV_get1_certReqTemplate, itav, certTemplate, keySpec);
    AROS_LIBFUNC_EXIT
}

OSSL_CMP_ITAV * LIB_OSSL_CMP_ITAV_new0_certReqTemplate(struct Library * _base, OSSL_CRMF_CERTTEMPLATE * certTemplate, OSSL_CMP_ATAVS * keySpec);

AROS_LH2(OSSL_CMP_ITAV *,OSSL_CMP_ITAV_new0_certReqTemplate,
    AROS_LDA(OSSL_CRMF_CERTTEMPLATE *, certTemplate, A0),
    AROS_LDA(OSSL_CMP_ATAVS *, keySpec, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_ITAV_new0_certReqTemplate, certTemplate, keySpec);
    AROS_LIBFUNC_EXIT
}

OSSL_CMP_ITAV * LIB_OSSL_CMP_ITAV_new_crls(struct Library * _base, const X509_CRL * crls);

AROS_LH1(OSSL_CMP_ITAV *,OSSL_CMP_ITAV_new_crls,
    AROS_LDA(const X509_CRL *, crls, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_ITAV_new_crls, crls);
    AROS_LIBFUNC_EXIT
}

OSSL_CMP_ITAV * LIB_OSSL_CMP_ITAV_new_rootCaCert(struct Library * _base, const X509 * rootCaCert);

AROS_LH1(OSSL_CMP_ITAV *,OSSL_CMP_ITAV_new_rootCaCert,
    AROS_LDA(const X509 *, rootCaCert, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_ITAV_new_rootCaCert, rootCaCert);
    AROS_LIBFUNC_EXIT
}

OSSL_CMP_ITAV * LIB_OSSL_CMP_ITAV_new_rootCaKeyUpdate(struct Library * _base, const X509 * newWithNew, const X509 * newWithOld, const X509 * oldWithNew);

AROS_LH3(OSSL_CMP_ITAV *,OSSL_CMP_ITAV_new_rootCaKeyUpdate,
    AROS_LDA(const X509 *, newWithNew, A0),
    AROS_LDA(const X509 *, newWithOld, A1),
    AROS_LDA(const X509 *, oldWithNew, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_ITAV_new_rootCaKeyUpdate, newWithNew, newWithOld, oldWithNew);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_CMP_ITAV_set0(struct Library * _base, OSSL_CMP_ITAV * itav, ASN1_OBJECT * type, ASN1_TYPE * value);

AROS_LH3(void,OSSL_CMP_ITAV_set0,
    AROS_LDA(OSSL_CMP_ITAV *, itav, A0),
    AROS_LDA(ASN1_OBJECT *, type, A1),
    AROS_LDA(ASN1_TYPE *, value, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_CMP_ITAV_set0, itav, type, value);
    AROS_LIBFUNC_EXIT
}

OSSL_CMP_MSG * LIB_OSSL_CMP_MSG_dup(struct Library * _base, const OSSL_CMP_MSG * a);

AROS_LH1(OSSL_CMP_MSG *,OSSL_CMP_MSG_dup,
    AROS_LDA(const OSSL_CMP_MSG *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_MSG_dup, a);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_CMP_MSG_free(struct Library * _base, OSSL_CMP_MSG * msg);

AROS_LH1(void,OSSL_CMP_MSG_free,
    AROS_LDA(OSSL_CMP_MSG *, msg, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_CMP_MSG_free, msg);
    AROS_LIBFUNC_EXIT
}

X509_PUBKEY * LIB_OSSL_CMP_MSG_get0_certreq_publickey(struct Library * _base, const OSSL_CMP_MSG * msg);

AROS_LH1(X509_PUBKEY *,OSSL_CMP_MSG_get0_certreq_publickey,
    AROS_LDA(const OSSL_CMP_MSG *, msg, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_MSG_get0_certreq_publickey, msg);
    AROS_LIBFUNC_EXIT
}

OSSL_CMP_PKIHEADER * LIB_OSSL_CMP_MSG_get0_header(struct Library * _base, const OSSL_CMP_MSG * msg);

AROS_LH1(OSSL_CMP_PKIHEADER *,OSSL_CMP_MSG_get0_header,
    AROS_LDA(const OSSL_CMP_MSG *, msg, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_MSG_get0_header, msg);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_MSG_get_bodytype(struct Library * _base, const OSSL_CMP_MSG * msg);

AROS_LH1(int,OSSL_CMP_MSG_get_bodytype,
    AROS_LDA(const OSSL_CMP_MSG *, msg, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_MSG_get_bodytype, msg);
    AROS_LIBFUNC_EXIT
}

OSSL_CMP_MSG * LIB_OSSL_CMP_MSG_http_perform(struct Library * _base, OSSL_CMP_CTX * ctx, const OSSL_CMP_MSG * req);

AROS_LH2(OSSL_CMP_MSG *,OSSL_CMP_MSG_http_perform,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(const OSSL_CMP_MSG *, req, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_MSG_http_perform, ctx, req);
    AROS_LIBFUNC_EXIT
}

const ASN1_ITEM * LIB_OSSL_CMP_MSG_it(struct Library * _base);

AROS_LH0(const ASN1_ITEM *,OSSL_CMP_MSG_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_CMP_MSG_it);
    AROS_LIBFUNC_EXIT
}

OSSL_CMP_MSG * LIB_OSSL_CMP_MSG_read(struct Library * _base, const char * file, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH3(OSSL_CMP_MSG *,OSSL_CMP_MSG_read,
    AROS_LDA(const char *, file, A0),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A1),
    AROS_LDA(const char *, propq, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_MSG_read, file, libctx, propq);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_MSG_update_recipNonce(struct Library * _base, OSSL_CMP_CTX * ctx, OSSL_CMP_MSG * msg);

AROS_LH2(int,OSSL_CMP_MSG_update_recipNonce,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(OSSL_CMP_MSG *, msg, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_MSG_update_recipNonce, ctx, msg);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_MSG_update_transactionID(struct Library * _base, OSSL_CMP_CTX * ctx, OSSL_CMP_MSG * msg);

AROS_LH2(int,OSSL_CMP_MSG_update_transactionID,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(OSSL_CMP_MSG *, msg, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_MSG_update_transactionID, ctx, msg);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_MSG_write(struct Library * _base, const char * file, const OSSL_CMP_MSG * msg);

AROS_LH2(int,OSSL_CMP_MSG_write,
    AROS_LDA(const char *, file, A0),
    AROS_LDA(const OSSL_CMP_MSG *, msg, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_MSG_write, file, msg);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_CMP_PKIHEADER_free(struct Library * _base, OSSL_CMP_PKIHEADER * a);

AROS_LH1(void,OSSL_CMP_PKIHEADER_free,
    AROS_LDA(OSSL_CMP_PKIHEADER *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_CMP_PKIHEADER_free, a);
    AROS_LIBFUNC_EXIT
}

const ASN1_ITEM * LIB_OSSL_CMP_PKIHEADER_it(struct Library * _base);

AROS_LH0(const ASN1_ITEM *,OSSL_CMP_PKIHEADER_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_CMP_PKIHEADER_it);
    AROS_LIBFUNC_EXIT
}

OSSL_CMP_PKIHEADER * LIB_OSSL_CMP_PKIHEADER_new(struct Library * _base);

AROS_LH0(OSSL_CMP_PKIHEADER *,OSSL_CMP_PKIHEADER_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_CMP_PKIHEADER_new);
    AROS_LIBFUNC_EXIT
}

OSSL_CMP_PKISI * LIB_OSSL_CMP_PKISI_dup(struct Library * _base, const OSSL_CMP_PKISI * a);

AROS_LH1(OSSL_CMP_PKISI *,OSSL_CMP_PKISI_dup,
    AROS_LDA(const OSSL_CMP_PKISI *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_PKISI_dup, a);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_CMP_PKISI_free(struct Library * _base, OSSL_CMP_PKISI * a);

AROS_LH1(void,OSSL_CMP_PKISI_free,
    AROS_LDA(OSSL_CMP_PKISI *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_CMP_PKISI_free, a);
    AROS_LIBFUNC_EXIT
}

const ASN1_ITEM * LIB_OSSL_CMP_PKISI_it(struct Library * _base);

AROS_LH0(const ASN1_ITEM *,OSSL_CMP_PKISI_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_CMP_PKISI_it);
    AROS_LIBFUNC_EXIT
}

OSSL_CMP_PKISI * LIB_OSSL_CMP_PKISI_new(struct Library * _base);

AROS_LH0(OSSL_CMP_PKISI *,OSSL_CMP_PKISI_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_CMP_PKISI_new);
    AROS_LIBFUNC_EXIT
}

const ASN1_ITEM * LIB_OSSL_CMP_PKISTATUS_it(struct Library * _base);

AROS_LH0(const ASN1_ITEM *,OSSL_CMP_PKISTATUS_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_CMP_PKISTATUS_it);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_CMP_SRV_CTX_free(struct Library * _base, OSSL_CMP_SRV_CTX * srv_ctx);

AROS_LH1(void,OSSL_CMP_SRV_CTX_free,
    AROS_LDA(OSSL_CMP_SRV_CTX *, srv_ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_CMP_SRV_CTX_free, srv_ctx);
    AROS_LIBFUNC_EXIT
}

OSSL_CMP_CTX * LIB_OSSL_CMP_SRV_CTX_get0_cmp_ctx(struct Library * _base, const OSSL_CMP_SRV_CTX * srv_ctx);

AROS_LH1(OSSL_CMP_CTX *,OSSL_CMP_SRV_CTX_get0_cmp_ctx,
    AROS_LDA(const OSSL_CMP_SRV_CTX *, srv_ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_SRV_CTX_get0_cmp_ctx, srv_ctx);
    AROS_LIBFUNC_EXIT
}

void * LIB_OSSL_CMP_SRV_CTX_get0_custom_ctx(struct Library * _base, const OSSL_CMP_SRV_CTX * srv_ctx);

AROS_LH1(void *,OSSL_CMP_SRV_CTX_get0_custom_ctx,
    AROS_LDA(const OSSL_CMP_SRV_CTX *, srv_ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_SRV_CTX_get0_custom_ctx, srv_ctx);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_SRV_CTX_init(struct Library * _base, OSSL_CMP_SRV_CTX * srv_ctx, void * custom_ctx, OSSL_CMP_SRV_cert_request_cb_t process_cert_request, OSSL_CMP_SRV_rr_cb_t process_rr, OSSL_CMP_SRV_genm_cb_t process_genm, OSSL_CMP_SRV_error_cb_t process_error, OSSL_CMP_SRV_certConf_cb_t process_certConf, OSSL_CMP_SRV_pollReq_cb_t process_pollReq);

AROS_LH8(int,OSSL_CMP_SRV_CTX_init,
    AROS_LDA(OSSL_CMP_SRV_CTX *, srv_ctx, A0),
    AROS_LDA(void *, custom_ctx, A1),
    AROS_LDA(OSSL_CMP_SRV_cert_request_cb_t, process_cert_request, A2),
    AROS_LDA(OSSL_CMP_SRV_rr_cb_t, process_rr, A3),
    AROS_LDA(OSSL_CMP_SRV_genm_cb_t, process_genm, D0),
    AROS_LDA(OSSL_CMP_SRV_error_cb_t, process_error, D1),
    AROS_LDA(OSSL_CMP_SRV_certConf_cb_t, process_certConf, D2),
    AROS_LDA(OSSL_CMP_SRV_pollReq_cb_t, process_pollReq, D3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_SRV_CTX_init, srv_ctx, custom_ctx, process_cert_request, process_rr, process_genm, process_error, process_certConf, process_pollReq);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_SRV_CTX_init_trans(struct Library * _base, OSSL_CMP_SRV_CTX * srv_ctx, OSSL_CMP_SRV_delayed_delivery_cb_t delay, OSSL_CMP_SRV_clean_transaction_cb_t clean);

AROS_LH3(int,OSSL_CMP_SRV_CTX_init_trans,
    AROS_LDA(OSSL_CMP_SRV_CTX *, srv_ctx, A0),
    AROS_LDA(OSSL_CMP_SRV_delayed_delivery_cb_t, delay, A1),
    AROS_LDA(OSSL_CMP_SRV_clean_transaction_cb_t, clean, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_SRV_CTX_init_trans, srv_ctx, delay, clean);
    AROS_LIBFUNC_EXIT
}

OSSL_CMP_SRV_CTX * LIB_OSSL_CMP_SRV_CTX_new(struct Library * _base, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH2(OSSL_CMP_SRV_CTX *,OSSL_CMP_SRV_CTX_new,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, propq, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_SRV_CTX_new, libctx, propq);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_SRV_CTX_set_accept_raverified(struct Library * _base, OSSL_CMP_SRV_CTX * srv_ctx, int val);

AROS_LH2(int,OSSL_CMP_SRV_CTX_set_accept_raverified,
    AROS_LDA(OSSL_CMP_SRV_CTX *, srv_ctx, A0),
    AROS_LDA(int, val, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_SRV_CTX_set_accept_raverified, srv_ctx, val);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_SRV_CTX_set_accept_unprotected(struct Library * _base, OSSL_CMP_SRV_CTX * srv_ctx, int val);

AROS_LH2(int,OSSL_CMP_SRV_CTX_set_accept_unprotected,
    AROS_LDA(OSSL_CMP_SRV_CTX *, srv_ctx, A0),
    AROS_LDA(int, val, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_SRV_CTX_set_accept_unprotected, srv_ctx, val);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_SRV_CTX_set_grant_implicit_confirm(struct Library * _base, OSSL_CMP_SRV_CTX * srv_ctx, int val);

AROS_LH2(int,OSSL_CMP_SRV_CTX_set_grant_implicit_confirm,
    AROS_LDA(OSSL_CMP_SRV_CTX *, srv_ctx, A0),
    AROS_LDA(int, val, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_SRV_CTX_set_grant_implicit_confirm, srv_ctx, val);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_SRV_CTX_set_send_unprotected_errors(struct Library * _base, OSSL_CMP_SRV_CTX * srv_ctx, int val);

AROS_LH2(int,OSSL_CMP_SRV_CTX_set_send_unprotected_errors,
    AROS_LDA(OSSL_CMP_SRV_CTX *, srv_ctx, A0),
    AROS_LDA(int, val, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_SRV_CTX_set_send_unprotected_errors, srv_ctx, val);
    AROS_LIBFUNC_EXIT
}

OSSL_CMP_MSG * LIB_OSSL_CMP_SRV_process_request(struct Library * _base, OSSL_CMP_SRV_CTX * srv_ctx, const OSSL_CMP_MSG * req);

AROS_LH2(OSSL_CMP_MSG *,OSSL_CMP_SRV_process_request,
    AROS_LDA(OSSL_CMP_SRV_CTX *, srv_ctx, A0),
    AROS_LDA(const OSSL_CMP_MSG *, req, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_SRV_process_request, srv_ctx, req);
    AROS_LIBFUNC_EXIT
}

OSSL_CMP_PKISI * LIB_OSSL_CMP_STATUSINFO_new(struct Library * _base, int status, int fail_info, const char * text);

AROS_LH3(OSSL_CMP_PKISI *,OSSL_CMP_STATUSINFO_new,
    AROS_LDA(int, status, D0),
    AROS_LDA(int, fail_info, D1),
    AROS_LDA(const char *, text, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_STATUSINFO_new, status, fail_info, text);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_certConf_cb(struct Library * _base, OSSL_CMP_CTX * ctx, X509 * cert, int fail_info, const char ** text);

AROS_LH4(int,OSSL_CMP_certConf_cb,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(X509 *, cert, A1),
    AROS_LDA(int, fail_info, D0),
    AROS_LDA(const char **, text, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_certConf_cb, ctx, cert, fail_info, text);
    AROS_LIBFUNC_EXIT
}

STACK_OF(OSSL_CMP_ITAV) * LIB_OSSL_CMP_exec_GENM_ses(struct Library * _base, OSSL_CMP_CTX * ctx);

AROS_LH1(STACK_OF(OSSL_CMP_ITAV) *,OSSL_CMP_exec_GENM_ses,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_exec_GENM_ses, ctx);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_exec_RR_ses(struct Library * _base, OSSL_CMP_CTX * ctx);

AROS_LH1(int,OSSL_CMP_exec_RR_ses,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_exec_RR_ses, ctx);
    AROS_LIBFUNC_EXIT
}

X509 * LIB_OSSL_CMP_exec_certreq(struct Library * _base, OSSL_CMP_CTX * ctx, int req_type, const OSSL_CRMF_MSG * crm);

AROS_LH3(X509 *,OSSL_CMP_exec_certreq,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(int, req_type, D0),
    AROS_LDA(const OSSL_CRMF_MSG *, crm, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_exec_certreq, ctx, req_type, crm);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_get1_certReqTemplate(struct Library * _base, OSSL_CMP_CTX * ctx, OSSL_CRMF_CERTTEMPLATE ** certTemplate, OSSL_CMP_ATAVS ** keySpec);

AROS_LH3(int,OSSL_CMP_get1_certReqTemplate,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(OSSL_CRMF_CERTTEMPLATE **, certTemplate, A1),
    AROS_LDA(OSSL_CMP_ATAVS **, keySpec, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_get1_certReqTemplate, ctx, certTemplate, keySpec);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_get1_crlUpdate(struct Library * _base, OSSL_CMP_CTX * ctx, const X509 * crlcert, const X509_CRL * last_crl, X509_CRL ** crl);

AROS_LH4(int,OSSL_CMP_get1_crlUpdate,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(const X509 *, crlcert, A1),
    AROS_LDA(const X509_CRL *, last_crl, A2),
    AROS_LDA(X509_CRL **, crl, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_get1_crlUpdate, ctx, crlcert, last_crl, crl);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_get1_rootCaKeyUpdate(struct Library * _base, OSSL_CMP_CTX * ctx, const X509 * oldWithOld, X509 ** newWithNew, X509 ** newWithOld, X509 ** oldWithNew);

AROS_LH5(int,OSSL_CMP_get1_rootCaKeyUpdate,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(const X509 *, oldWithOld, A1),
    AROS_LDA(X509 **, newWithNew, A2),
    AROS_LDA(X509 **, newWithOld, A3),
    AROS_LDA(X509 **, oldWithNew, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_get1_rootCaKeyUpdate, ctx, oldWithOld, newWithNew, newWithOld, oldWithNew);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_CMP_log_close(struct Library * _base);

AROS_LH0(void,OSSL_CMP_log_close,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC_NP(OSSL_CMP_log_close);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_log_open(struct Library * _base);

AROS_LH0(int,OSSL_CMP_log_open,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_CMP_log_open);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_CMP_print_errors_cb(struct Library * _base, OSSL_CMP_log_cb_t log_fn);

AROS_LH1(void,OSSL_CMP_print_errors_cb,
    AROS_LDA(OSSL_CMP_log_cb_t, log_fn, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_CMP_print_errors_cb, log_fn);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_print_to_bio(struct Library * _base, BIO * bio, const char * component, const char * file, int line, OSSL_CMP_severity level, const char * msg);

AROS_LH6(int,OSSL_CMP_print_to_bio,
    AROS_LDA(BIO *, bio, A0),
    AROS_LDA(const char *, component, A1),
    AROS_LDA(const char *, file, A2),
    AROS_LDA(int, line, D0),
    AROS_LDA(OSSL_CMP_severity, level, D1),
    AROS_LDA(const char *, msg, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_print_to_bio, bio, component, file, line, level, msg);
    AROS_LIBFUNC_EXIT
}

char * LIB_OSSL_CMP_snprint_PKIStatusInfo(struct Library * _base, const OSSL_CMP_PKISI * statusInfo, char * buf, size_t bufsize);

AROS_LH3(char *,OSSL_CMP_snprint_PKIStatusInfo,
    AROS_LDA(const OSSL_CMP_PKISI *, statusInfo, A0),
    AROS_LDA(char *, buf, A1),
    AROS_LDA(size_t, bufsize, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_snprint_PKIStatusInfo, statusInfo, buf, bufsize);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_try_certreq(struct Library * _base, OSSL_CMP_CTX * ctx, int req_type, const OSSL_CRMF_MSG * crm, int * checkAfter);

AROS_LH4(int,OSSL_CMP_try_certreq,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(int, req_type, D0),
    AROS_LDA(const OSSL_CRMF_MSG *, crm, A1),
    AROS_LDA(int *, checkAfter, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_try_certreq, ctx, req_type, crm, checkAfter);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_validate_cert_path(struct Library * _base, const OSSL_CMP_CTX * ctx, X509_STORE * trusted_store, X509 * cert);

AROS_LH3(int,OSSL_CMP_validate_cert_path,
    AROS_LDA(const OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(X509_STORE *, trusted_store, A1),
    AROS_LDA(X509 *, cert, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_validate_cert_path, ctx, trusted_store, cert);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CMP_validate_msg(struct Library * _base, OSSL_CMP_CTX * ctx, const OSSL_CMP_MSG * msg);

AROS_LH2(int,OSSL_CMP_validate_msg,
    AROS_LDA(OSSL_CMP_CTX *, ctx, A0),
    AROS_LDA(const OSSL_CMP_MSG *, msg, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CMP_validate_msg, ctx, msg);
    AROS_LIBFUNC_EXIT
}

OSSL_CRMF_ATTRIBUTETYPEANDVALUE * LIB_OSSL_CRMF_ATTRIBUTETYPEANDVALUE_dup(struct Library * _base, const OSSL_CRMF_ATTRIBUTETYPEANDVALUE * a);

AROS_LH1(OSSL_CRMF_ATTRIBUTETYPEANDVALUE *,OSSL_CRMF_ATTRIBUTETYPEANDVALUE_dup,
    AROS_LDA(const OSSL_CRMF_ATTRIBUTETYPEANDVALUE *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CRMF_ATTRIBUTETYPEANDVALUE_dup, a);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_CRMF_ATTRIBUTETYPEANDVALUE_free(struct Library * _base, OSSL_CRMF_ATTRIBUTETYPEANDVALUE * v);

AROS_LH1(void,OSSL_CRMF_ATTRIBUTETYPEANDVALUE_free,
    AROS_LDA(OSSL_CRMF_ATTRIBUTETYPEANDVALUE *, v, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_CRMF_ATTRIBUTETYPEANDVALUE_free, v);
    AROS_LIBFUNC_EXIT
}

OSSL_CRMF_CERTID * LIB_OSSL_CRMF_CERTID_dup(struct Library * _base, const OSSL_CRMF_CERTID * a);

AROS_LH1(OSSL_CRMF_CERTID *,OSSL_CRMF_CERTID_dup,
    AROS_LDA(const OSSL_CRMF_CERTID *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CRMF_CERTID_dup, a);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_CRMF_CERTID_free(struct Library * _base, OSSL_CRMF_CERTID * a);

AROS_LH1(void,OSSL_CRMF_CERTID_free,
    AROS_LDA(OSSL_CRMF_CERTID *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_CRMF_CERTID_free, a);
    AROS_LIBFUNC_EXIT
}

OSSL_CRMF_CERTID * LIB_OSSL_CRMF_CERTID_gen(struct Library * _base, const X509_NAME * issuer, const ASN1_INTEGER * serial);

AROS_LH2(OSSL_CRMF_CERTID *,OSSL_CRMF_CERTID_gen,
    AROS_LDA(const X509_NAME *, issuer, A0),
    AROS_LDA(const ASN1_INTEGER *, serial, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CRMF_CERTID_gen, issuer, serial);
    AROS_LIBFUNC_EXIT
}

const X509_NAME * LIB_OSSL_CRMF_CERTID_get0_issuer(struct Library * _base, const OSSL_CRMF_CERTID * cid);

AROS_LH1(const X509_NAME *,OSSL_CRMF_CERTID_get0_issuer,
    AROS_LDA(const OSSL_CRMF_CERTID *, cid, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CRMF_CERTID_get0_issuer, cid);
    AROS_LIBFUNC_EXIT
}

const ASN1_INTEGER * LIB_OSSL_CRMF_CERTID_get0_serialNumber(struct Library * _base, const OSSL_CRMF_CERTID * cid);

AROS_LH1(const ASN1_INTEGER *,OSSL_CRMF_CERTID_get0_serialNumber,
    AROS_LDA(const OSSL_CRMF_CERTID *, cid, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CRMF_CERTID_get0_serialNumber, cid);
    AROS_LIBFUNC_EXIT
}

const ASN1_ITEM * LIB_OSSL_CRMF_CERTID_it(struct Library * _base);

AROS_LH0(const ASN1_ITEM *,OSSL_CRMF_CERTID_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_CRMF_CERTID_it);
    AROS_LIBFUNC_EXIT
}

OSSL_CRMF_CERTID * LIB_OSSL_CRMF_CERTID_new(struct Library * _base);

AROS_LH0(OSSL_CRMF_CERTID *,OSSL_CRMF_CERTID_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_CRMF_CERTID_new);
    AROS_LIBFUNC_EXIT
}

OSSL_CRMF_CERTTEMPLATE * LIB_OSSL_CRMF_CERTTEMPLATE_dup(struct Library * _base, const OSSL_CRMF_CERTTEMPLATE * a);

AROS_LH1(OSSL_CRMF_CERTTEMPLATE *,OSSL_CRMF_CERTTEMPLATE_dup,
    AROS_LDA(const OSSL_CRMF_CERTTEMPLATE *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CRMF_CERTTEMPLATE_dup, a);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CRMF_CERTTEMPLATE_fill(struct Library * _base, OSSL_CRMF_CERTTEMPLATE * tmpl, EVP_PKEY * pubkey, const X509_NAME * subject, const X509_NAME * issuer, const ASN1_INTEGER * serial);

AROS_LH5(int,OSSL_CRMF_CERTTEMPLATE_fill,
    AROS_LDA(OSSL_CRMF_CERTTEMPLATE *, tmpl, A0),
    AROS_LDA(EVP_PKEY *, pubkey, A1),
    AROS_LDA(const X509_NAME *, subject, A2),
    AROS_LDA(const X509_NAME *, issuer, A3),
    AROS_LDA(const ASN1_INTEGER *, serial, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CRMF_CERTTEMPLATE_fill, tmpl, pubkey, subject, issuer, serial);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_CRMF_CERTTEMPLATE_free(struct Library * _base, OSSL_CRMF_CERTTEMPLATE * a);

AROS_LH1(void,OSSL_CRMF_CERTTEMPLATE_free,
    AROS_LDA(OSSL_CRMF_CERTTEMPLATE *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_CRMF_CERTTEMPLATE_free, a);
    AROS_LIBFUNC_EXIT
}

X509_EXTENSIONS * LIB_OSSL_CRMF_CERTTEMPLATE_get0_extensions(struct Library * _base, const OSSL_CRMF_CERTTEMPLATE * tmpl);

AROS_LH1(X509_EXTENSIONS *,OSSL_CRMF_CERTTEMPLATE_get0_extensions,
    AROS_LDA(const OSSL_CRMF_CERTTEMPLATE *, tmpl, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CRMF_CERTTEMPLATE_get0_extensions, tmpl);
    AROS_LIBFUNC_EXIT
}

const X509_NAME * LIB_OSSL_CRMF_CERTTEMPLATE_get0_issuer(struct Library * _base, const OSSL_CRMF_CERTTEMPLATE * tmpl);

AROS_LH1(const X509_NAME *,OSSL_CRMF_CERTTEMPLATE_get0_issuer,
    AROS_LDA(const OSSL_CRMF_CERTTEMPLATE *, tmpl, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CRMF_CERTTEMPLATE_get0_issuer, tmpl);
    AROS_LIBFUNC_EXIT
}

X509_PUBKEY * LIB_OSSL_CRMF_CERTTEMPLATE_get0_publicKey(struct Library * _base, const OSSL_CRMF_CERTTEMPLATE * tmpl);

AROS_LH1(X509_PUBKEY *,OSSL_CRMF_CERTTEMPLATE_get0_publicKey,
    AROS_LDA(const OSSL_CRMF_CERTTEMPLATE *, tmpl, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CRMF_CERTTEMPLATE_get0_publicKey, tmpl);
    AROS_LIBFUNC_EXIT
}

const ASN1_INTEGER * LIB_OSSL_CRMF_CERTTEMPLATE_get0_serialNumber(struct Library * _base, const OSSL_CRMF_CERTTEMPLATE * tmpl);

AROS_LH1(const ASN1_INTEGER *,OSSL_CRMF_CERTTEMPLATE_get0_serialNumber,
    AROS_LDA(const OSSL_CRMF_CERTTEMPLATE *, tmpl, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CRMF_CERTTEMPLATE_get0_serialNumber, tmpl);
    AROS_LIBFUNC_EXIT
}

const X509_NAME * LIB_OSSL_CRMF_CERTTEMPLATE_get0_subject(struct Library * _base, const OSSL_CRMF_CERTTEMPLATE * tmpl);

AROS_LH1(const X509_NAME *,OSSL_CRMF_CERTTEMPLATE_get0_subject,
    AROS_LDA(const OSSL_CRMF_CERTTEMPLATE *, tmpl, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CRMF_CERTTEMPLATE_get0_subject, tmpl);
    AROS_LIBFUNC_EXIT
}

const ASN1_ITEM * LIB_OSSL_CRMF_CERTTEMPLATE_it(struct Library * _base);

AROS_LH0(const ASN1_ITEM *,OSSL_CRMF_CERTTEMPLATE_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_CRMF_CERTTEMPLATE_it);
    AROS_LIBFUNC_EXIT
}

OSSL_CRMF_CERTTEMPLATE * LIB_OSSL_CRMF_CERTTEMPLATE_new(struct Library * _base);

AROS_LH0(OSSL_CRMF_CERTTEMPLATE *,OSSL_CRMF_CERTTEMPLATE_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_CRMF_CERTTEMPLATE_new);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_CRMF_ENCRYPTEDKEY_free(struct Library * _base, OSSL_CRMF_ENCRYPTEDKEY * a);

AROS_LH1(void,OSSL_CRMF_ENCRYPTEDKEY_free,
    AROS_LDA(OSSL_CRMF_ENCRYPTEDKEY *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_CRMF_ENCRYPTEDKEY_free, a);
    AROS_LIBFUNC_EXIT
}

X509 * LIB_OSSL_CRMF_ENCRYPTEDKEY_get1_encCert(struct Library * _base, const OSSL_CRMF_ENCRYPTEDKEY * ecert, OSSL_LIB_CTX * libctx, const char * propq, EVP_PKEY * pkey, unsigned int flags);

AROS_LH5(X509 *,OSSL_CRMF_ENCRYPTEDKEY_get1_encCert,
    AROS_LDA(const OSSL_CRMF_ENCRYPTEDKEY *, ecert, A0),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A1),
    AROS_LDA(const char *, propq, A2),
    AROS_LDA(EVP_PKEY *, pkey, A3),
    AROS_LDA(unsigned int, flags, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CRMF_ENCRYPTEDKEY_get1_encCert, ecert, libctx, propq, pkey, flags);
    AROS_LIBFUNC_EXIT
}

OSSL_CRMF_ENCRYPTEDKEY * LIB_OSSL_CRMF_ENCRYPTEDKEY_init_envdata(struct Library * _base, CMS_EnvelopedData * envdata);

AROS_LH1(OSSL_CRMF_ENCRYPTEDKEY *,OSSL_CRMF_ENCRYPTEDKEY_init_envdata,
    AROS_LDA(CMS_EnvelopedData *, envdata, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CRMF_ENCRYPTEDKEY_init_envdata, envdata);
    AROS_LIBFUNC_EXIT
}

const ASN1_ITEM * LIB_OSSL_CRMF_ENCRYPTEDKEY_it(struct Library * _base);

AROS_LH0(const ASN1_ITEM *,OSSL_CRMF_ENCRYPTEDKEY_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_CRMF_ENCRYPTEDKEY_it);
    AROS_LIBFUNC_EXIT
}

OSSL_CRMF_ENCRYPTEDKEY * LIB_OSSL_CRMF_ENCRYPTEDKEY_new(struct Library * _base);

AROS_LH0(OSSL_CRMF_ENCRYPTEDKEY *,OSSL_CRMF_ENCRYPTEDKEY_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_CRMF_ENCRYPTEDKEY_new);
    AROS_LIBFUNC_EXIT
}

unsigned char * LIB_OSSL_CRMF_ENCRYPTEDVALUE_decrypt(struct Library * _base, const OSSL_CRMF_ENCRYPTEDVALUE * enc, OSSL_LIB_CTX * libctx, const char * propq, EVP_PKEY * pkey, int * outlen);

AROS_LH5(unsigned char *,OSSL_CRMF_ENCRYPTEDVALUE_decrypt,
    AROS_LDA(const OSSL_CRMF_ENCRYPTEDVALUE *, enc, A0),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A1),
    AROS_LDA(const char *, propq, A2),
    AROS_LDA(EVP_PKEY *, pkey, A3),
    AROS_LDA(int *, outlen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CRMF_ENCRYPTEDVALUE_decrypt, enc, libctx, propq, pkey, outlen);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_CRMF_ENCRYPTEDVALUE_free(struct Library * _base, OSSL_CRMF_ENCRYPTEDVALUE * a);

AROS_LH1(void,OSSL_CRMF_ENCRYPTEDVALUE_free,
    AROS_LDA(OSSL_CRMF_ENCRYPTEDVALUE *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_CRMF_ENCRYPTEDVALUE_free, a);
    AROS_LIBFUNC_EXIT
}

X509 * LIB_OSSL_CRMF_ENCRYPTEDVALUE_get1_encCert(struct Library * _base, const OSSL_CRMF_ENCRYPTEDVALUE * ecert, OSSL_LIB_CTX * libctx, const char * propq, EVP_PKEY * pkey);

AROS_LH4(X509 *,OSSL_CRMF_ENCRYPTEDVALUE_get1_encCert,
    AROS_LDA(const OSSL_CRMF_ENCRYPTEDVALUE *, ecert, A0),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A1),
    AROS_LDA(const char *, propq, A2),
    AROS_LDA(EVP_PKEY *, pkey, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CRMF_ENCRYPTEDVALUE_get1_encCert, ecert, libctx, propq, pkey);
    AROS_LIBFUNC_EXIT
}

const ASN1_ITEM * LIB_OSSL_CRMF_ENCRYPTEDVALUE_it(struct Library * _base);

AROS_LH0(const ASN1_ITEM *,OSSL_CRMF_ENCRYPTEDVALUE_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_CRMF_ENCRYPTEDVALUE_it);
    AROS_LIBFUNC_EXIT
}

OSSL_CRMF_ENCRYPTEDVALUE * LIB_OSSL_CRMF_ENCRYPTEDVALUE_new(struct Library * _base);

AROS_LH0(OSSL_CRMF_ENCRYPTEDVALUE *,OSSL_CRMF_ENCRYPTEDVALUE_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_CRMF_ENCRYPTEDVALUE_new);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_CRMF_MSGS_free(struct Library * _base, OSSL_CRMF_MSGS * a);

AROS_LH1(void,OSSL_CRMF_MSGS_free,
    AROS_LDA(OSSL_CRMF_MSGS *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_CRMF_MSGS_free, a);
    AROS_LIBFUNC_EXIT
}

const ASN1_ITEM * LIB_OSSL_CRMF_MSGS_it(struct Library * _base);

AROS_LH0(const ASN1_ITEM *,OSSL_CRMF_MSGS_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_CRMF_MSGS_it);
    AROS_LIBFUNC_EXIT
}

OSSL_CRMF_MSGS * LIB_OSSL_CRMF_MSGS_new(struct Library * _base);

AROS_LH0(OSSL_CRMF_MSGS *,OSSL_CRMF_MSGS_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_CRMF_MSGS_new);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CRMF_MSGS_verify_popo(struct Library * _base, const OSSL_CRMF_MSGS * reqs, int rid, int acceptRAVerified, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH5(int,OSSL_CRMF_MSGS_verify_popo,
    AROS_LDA(const OSSL_CRMF_MSGS *, reqs, A0),
    AROS_LDA(int, rid, D0),
    AROS_LDA(int, acceptRAVerified, D1),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A1),
    AROS_LDA(const char *, propq, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CRMF_MSGS_verify_popo, reqs, rid, acceptRAVerified, libctx, propq);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CRMF_MSG_PKIPublicationInfo_push0_SinglePubInfo(struct Library * _base, OSSL_CRMF_PKIPUBLICATIONINFO * pi, OSSL_CRMF_SINGLEPUBINFO * spi);

AROS_LH2(int,OSSL_CRMF_MSG_PKIPublicationInfo_push0_SinglePubInfo,
    AROS_LDA(OSSL_CRMF_PKIPUBLICATIONINFO *, pi, A0),
    AROS_LDA(OSSL_CRMF_SINGLEPUBINFO *, spi, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CRMF_MSG_PKIPublicationInfo_push0_SinglePubInfo, pi, spi);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CRMF_MSG_centralkeygen_requested(struct Library * _base, const OSSL_CRMF_MSG * crm, const X509_REQ * p10cr);

AROS_LH2(int,OSSL_CRMF_MSG_centralkeygen_requested,
    AROS_LDA(const OSSL_CRMF_MSG *, crm, A0),
    AROS_LDA(const X509_REQ *, p10cr, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CRMF_MSG_centralkeygen_requested, crm, p10cr);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CRMF_MSG_create_popo(struct Library * _base, int meth, OSSL_CRMF_MSG * crm, EVP_PKEY * pkey, const EVP_MD * digest, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH6(int,OSSL_CRMF_MSG_create_popo,
    AROS_LDA(int, meth, D0),
    AROS_LDA(OSSL_CRMF_MSG *, crm, A0),
    AROS_LDA(EVP_PKEY *, pkey, A1),
    AROS_LDA(const EVP_MD *, digest, A2),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A3),
    AROS_LDA(const char *, propq, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CRMF_MSG_create_popo, meth, crm, pkey, digest, libctx, propq);
    AROS_LIBFUNC_EXIT
}

OSSL_CRMF_MSG * LIB_OSSL_CRMF_MSG_dup(struct Library * _base, const OSSL_CRMF_MSG * a);

AROS_LH1(OSSL_CRMF_MSG *,OSSL_CRMF_MSG_dup,
    AROS_LDA(const OSSL_CRMF_MSG *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CRMF_MSG_dup, a);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_CRMF_MSG_free(struct Library * _base, OSSL_CRMF_MSG * a);

AROS_LH1(void,OSSL_CRMF_MSG_free,
    AROS_LDA(OSSL_CRMF_MSG *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_CRMF_MSG_free, a);
    AROS_LIBFUNC_EXIT
}

ASN1_UTF8STRING * LIB_OSSL_CRMF_MSG_get0_regCtrl_authenticator(struct Library * _base, const OSSL_CRMF_MSG * msg);

AROS_LH1(ASN1_UTF8STRING *,OSSL_CRMF_MSG_get0_regCtrl_authenticator,
    AROS_LDA(const OSSL_CRMF_MSG *, msg, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CRMF_MSG_get0_regCtrl_authenticator, msg);
    AROS_LIBFUNC_EXIT
}

OSSL_CRMF_CERTID * LIB_OSSL_CRMF_MSG_get0_regCtrl_oldCertID(struct Library * _base, const OSSL_CRMF_MSG * msg);

AROS_LH1(OSSL_CRMF_CERTID *,OSSL_CRMF_MSG_get0_regCtrl_oldCertID,
    AROS_LDA(const OSSL_CRMF_MSG *, msg, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CRMF_MSG_get0_regCtrl_oldCertID, msg);
    AROS_LIBFUNC_EXIT
}

OSSL_CRMF_PKIPUBLICATIONINFO * LIB_OSSL_CRMF_MSG_get0_regCtrl_pkiPublicationInfo(struct Library * _base, const OSSL_CRMF_MSG * msg);

AROS_LH1(OSSL_CRMF_PKIPUBLICATIONINFO *,OSSL_CRMF_MSG_get0_regCtrl_pkiPublicationInfo,
    AROS_LDA(const OSSL_CRMF_MSG *, msg, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CRMF_MSG_get0_regCtrl_pkiPublicationInfo, msg);
    AROS_LIBFUNC_EXIT
}

X509_PUBKEY * LIB_OSSL_CRMF_MSG_get0_regCtrl_protocolEncrKey(struct Library * _base, const OSSL_CRMF_MSG * msg);

AROS_LH1(X509_PUBKEY *,OSSL_CRMF_MSG_get0_regCtrl_protocolEncrKey,
    AROS_LDA(const OSSL_CRMF_MSG *, msg, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CRMF_MSG_get0_regCtrl_protocolEncrKey, msg);
    AROS_LIBFUNC_EXIT
}

ASN1_UTF8STRING * LIB_OSSL_CRMF_MSG_get0_regCtrl_regToken(struct Library * _base, const OSSL_CRMF_MSG * msg);

AROS_LH1(ASN1_UTF8STRING *,OSSL_CRMF_MSG_get0_regCtrl_regToken,
    AROS_LDA(const OSSL_CRMF_MSG *, msg, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CRMF_MSG_get0_regCtrl_regToken, msg);
    AROS_LIBFUNC_EXIT
}

OSSL_CRMF_CERTREQUEST * LIB_OSSL_CRMF_MSG_get0_regInfo_certReq(struct Library * _base, const OSSL_CRMF_MSG * msg);

AROS_LH1(OSSL_CRMF_CERTREQUEST *,OSSL_CRMF_MSG_get0_regInfo_certReq,
    AROS_LDA(const OSSL_CRMF_MSG *, msg, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CRMF_MSG_get0_regInfo_certReq, msg);
    AROS_LIBFUNC_EXIT
}

ASN1_UTF8STRING * LIB_OSSL_CRMF_MSG_get0_regInfo_utf8Pairs(struct Library * _base, const OSSL_CRMF_MSG * msg);

AROS_LH1(ASN1_UTF8STRING *,OSSL_CRMF_MSG_get0_regInfo_utf8Pairs,
    AROS_LDA(const OSSL_CRMF_MSG *, msg, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CRMF_MSG_get0_regInfo_utf8Pairs, msg);
    AROS_LIBFUNC_EXIT
}

OSSL_CRMF_CERTTEMPLATE * LIB_OSSL_CRMF_MSG_get0_tmpl(struct Library * _base, const OSSL_CRMF_MSG * crm);

AROS_LH1(OSSL_CRMF_CERTTEMPLATE *,OSSL_CRMF_MSG_get0_tmpl,
    AROS_LDA(const OSSL_CRMF_MSG *, crm, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CRMF_MSG_get0_tmpl, crm);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CRMF_MSG_get_certReqId(struct Library * _base, const OSSL_CRMF_MSG * crm);

AROS_LH1(int,OSSL_CRMF_MSG_get_certReqId,
    AROS_LDA(const OSSL_CRMF_MSG *, crm, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CRMF_MSG_get_certReqId, crm);
    AROS_LIBFUNC_EXIT
}

const ASN1_ITEM * LIB_OSSL_CRMF_MSG_it(struct Library * _base);

AROS_LH0(const ASN1_ITEM *,OSSL_CRMF_MSG_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_CRMF_MSG_it);
    AROS_LIBFUNC_EXIT
}

OSSL_CRMF_MSG * LIB_OSSL_CRMF_MSG_new(struct Library * _base);

AROS_LH0(OSSL_CRMF_MSG *,OSSL_CRMF_MSG_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_CRMF_MSG_new);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CRMF_MSG_push0_extension(struct Library * _base, OSSL_CRMF_MSG * crm, X509_EXTENSION * ext);

AROS_LH2(int,OSSL_CRMF_MSG_push0_extension,
    AROS_LDA(OSSL_CRMF_MSG *, crm, A0),
    AROS_LDA(X509_EXTENSION *, ext, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CRMF_MSG_push0_extension, crm, ext);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CRMF_MSG_set0_SinglePubInfo(struct Library * _base, OSSL_CRMF_SINGLEPUBINFO * spi, int method, GENERAL_NAME * nm);

AROS_LH3(int,OSSL_CRMF_MSG_set0_SinglePubInfo,
    AROS_LDA(OSSL_CRMF_SINGLEPUBINFO *, spi, A0),
    AROS_LDA(int, method, D0),
    AROS_LDA(GENERAL_NAME *, nm, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CRMF_MSG_set0_SinglePubInfo, spi, method, nm);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CRMF_MSG_set0_extensions(struct Library * _base, OSSL_CRMF_MSG * crm, X509_EXTENSIONS * exts);

AROS_LH2(int,OSSL_CRMF_MSG_set0_extensions,
    AROS_LDA(OSSL_CRMF_MSG *, crm, A0),
    AROS_LDA(X509_EXTENSIONS *, exts, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CRMF_MSG_set0_extensions, crm, exts);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CRMF_MSG_set0_validity(struct Library * _base, OSSL_CRMF_MSG * crm, ASN1_TIME * notBefore, ASN1_TIME * notAfter);

AROS_LH3(int,OSSL_CRMF_MSG_set0_validity,
    AROS_LDA(OSSL_CRMF_MSG *, crm, A0),
    AROS_LDA(ASN1_TIME *, notBefore, A1),
    AROS_LDA(ASN1_TIME *, notAfter, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CRMF_MSG_set0_validity, crm, notBefore, notAfter);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CRMF_MSG_set1_regCtrl_authenticator(struct Library * _base, OSSL_CRMF_MSG * msg, const ASN1_UTF8STRING * auth);

AROS_LH2(int,OSSL_CRMF_MSG_set1_regCtrl_authenticator,
    AROS_LDA(OSSL_CRMF_MSG *, msg, A0),
    AROS_LDA(const ASN1_UTF8STRING *, auth, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CRMF_MSG_set1_regCtrl_authenticator, msg, auth);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CRMF_MSG_set1_regCtrl_oldCertID(struct Library * _base, OSSL_CRMF_MSG * msg, const OSSL_CRMF_CERTID * cid);

AROS_LH2(int,OSSL_CRMF_MSG_set1_regCtrl_oldCertID,
    AROS_LDA(OSSL_CRMF_MSG *, msg, A0),
    AROS_LDA(const OSSL_CRMF_CERTID *, cid, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CRMF_MSG_set1_regCtrl_oldCertID, msg, cid);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CRMF_MSG_set1_regCtrl_pkiPublicationInfo(struct Library * _base, OSSL_CRMF_MSG * msg, const OSSL_CRMF_PKIPUBLICATIONINFO * pi);

AROS_LH2(int,OSSL_CRMF_MSG_set1_regCtrl_pkiPublicationInfo,
    AROS_LDA(OSSL_CRMF_MSG *, msg, A0),
    AROS_LDA(const OSSL_CRMF_PKIPUBLICATIONINFO *, pi, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CRMF_MSG_set1_regCtrl_pkiPublicationInfo, msg, pi);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CRMF_MSG_set1_regCtrl_protocolEncrKey(struct Library * _base, OSSL_CRMF_MSG * msg, const X509_PUBKEY * pubkey);

AROS_LH2(int,OSSL_CRMF_MSG_set1_regCtrl_protocolEncrKey,
    AROS_LDA(OSSL_CRMF_MSG *, msg, A0),
    AROS_LDA(const X509_PUBKEY *, pubkey, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CRMF_MSG_set1_regCtrl_protocolEncrKey, msg, pubkey);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CRMF_MSG_set1_regCtrl_regToken(struct Library * _base, OSSL_CRMF_MSG * msg, const ASN1_UTF8STRING * tok);

AROS_LH2(int,OSSL_CRMF_MSG_set1_regCtrl_regToken,
    AROS_LDA(OSSL_CRMF_MSG *, msg, A0),
    AROS_LDA(const ASN1_UTF8STRING *, tok, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CRMF_MSG_set1_regCtrl_regToken, msg, tok);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CRMF_MSG_set1_regInfo_certReq(struct Library * _base, OSSL_CRMF_MSG * msg, const OSSL_CRMF_CERTREQUEST * cr);

AROS_LH2(int,OSSL_CRMF_MSG_set1_regInfo_certReq,
    AROS_LDA(OSSL_CRMF_MSG *, msg, A0),
    AROS_LDA(const OSSL_CRMF_CERTREQUEST *, cr, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CRMF_MSG_set1_regInfo_certReq, msg, cr);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CRMF_MSG_set1_regInfo_utf8Pairs(struct Library * _base, OSSL_CRMF_MSG * msg, const ASN1_UTF8STRING * utf8pairs);

AROS_LH2(int,OSSL_CRMF_MSG_set1_regInfo_utf8Pairs,
    AROS_LDA(OSSL_CRMF_MSG *, msg, A0),
    AROS_LDA(const ASN1_UTF8STRING *, utf8pairs, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CRMF_MSG_set1_regInfo_utf8Pairs, msg, utf8pairs);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CRMF_MSG_set_PKIPublicationInfo_action(struct Library * _base, OSSL_CRMF_PKIPUBLICATIONINFO * pi, int action);

AROS_LH2(int,OSSL_CRMF_MSG_set_PKIPublicationInfo_action,
    AROS_LDA(OSSL_CRMF_PKIPUBLICATIONINFO *, pi, A0),
    AROS_LDA(int, action, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CRMF_MSG_set_PKIPublicationInfo_action, pi, action);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CRMF_MSG_set_certReqId(struct Library * _base, OSSL_CRMF_MSG * crm, int rid);

AROS_LH2(int,OSSL_CRMF_MSG_set_certReqId,
    AROS_LDA(OSSL_CRMF_MSG *, crm, A0),
    AROS_LDA(int, rid, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CRMF_MSG_set_certReqId, crm, rid);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_CRMF_PBMPARAMETER_free(struct Library * _base, OSSL_CRMF_PBMPARAMETER * a);

AROS_LH1(void,OSSL_CRMF_PBMPARAMETER_free,
    AROS_LDA(OSSL_CRMF_PBMPARAMETER *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_CRMF_PBMPARAMETER_free, a);
    AROS_LIBFUNC_EXIT
}

const ASN1_ITEM * LIB_OSSL_CRMF_PBMPARAMETER_it(struct Library * _base);

AROS_LH0(const ASN1_ITEM *,OSSL_CRMF_PBMPARAMETER_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_CRMF_PBMPARAMETER_it);
    AROS_LIBFUNC_EXIT
}

OSSL_CRMF_PBMPARAMETER * LIB_OSSL_CRMF_PBMPARAMETER_new(struct Library * _base);

AROS_LH0(OSSL_CRMF_PBMPARAMETER *,OSSL_CRMF_PBMPARAMETER_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_CRMF_PBMPARAMETER_new);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_CRMF_PKIPUBLICATIONINFO_free(struct Library * _base, OSSL_CRMF_PKIPUBLICATIONINFO * a);

AROS_LH1(void,OSSL_CRMF_PKIPUBLICATIONINFO_free,
    AROS_LDA(OSSL_CRMF_PKIPUBLICATIONINFO *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_CRMF_PKIPUBLICATIONINFO_free, a);
    AROS_LIBFUNC_EXIT
}

const ASN1_ITEM * LIB_OSSL_CRMF_PKIPUBLICATIONINFO_it(struct Library * _base);

AROS_LH0(const ASN1_ITEM *,OSSL_CRMF_PKIPUBLICATIONINFO_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_CRMF_PKIPUBLICATIONINFO_it);
    AROS_LIBFUNC_EXIT
}

OSSL_CRMF_PKIPUBLICATIONINFO * LIB_OSSL_CRMF_PKIPUBLICATIONINFO_new(struct Library * _base);

AROS_LH0(OSSL_CRMF_PKIPUBLICATIONINFO *,OSSL_CRMF_PKIPUBLICATIONINFO_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_CRMF_PKIPUBLICATIONINFO_new);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_CRMF_SINGLEPUBINFO_free(struct Library * _base, OSSL_CRMF_SINGLEPUBINFO * a);

AROS_LH1(void,OSSL_CRMF_SINGLEPUBINFO_free,
    AROS_LDA(OSSL_CRMF_SINGLEPUBINFO *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_CRMF_SINGLEPUBINFO_free, a);
    AROS_LIBFUNC_EXIT
}

const ASN1_ITEM * LIB_OSSL_CRMF_SINGLEPUBINFO_it(struct Library * _base);

AROS_LH0(const ASN1_ITEM *,OSSL_CRMF_SINGLEPUBINFO_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_CRMF_SINGLEPUBINFO_it);
    AROS_LIBFUNC_EXIT
}

OSSL_CRMF_SINGLEPUBINFO * LIB_OSSL_CRMF_SINGLEPUBINFO_new(struct Library * _base);

AROS_LH0(OSSL_CRMF_SINGLEPUBINFO *,OSSL_CRMF_SINGLEPUBINFO_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_CRMF_SINGLEPUBINFO_new);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_CRMF_pbm_new(struct Library * _base, OSSL_LIB_CTX * libctx, const char * propq, const OSSL_CRMF_PBMPARAMETER * pbmp, const unsigned char * msg, size_t msglen, const unsigned char * sec, size_t seclen, unsigned char ** mac, size_t * maclen);

AROS_LH9(int,OSSL_CRMF_pbm_new,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, propq, A1),
    AROS_LDA(const OSSL_CRMF_PBMPARAMETER *, pbmp, A2),
    AROS_LDA(const unsigned char *, msg, A3),
    AROS_LDA(size_t, msglen, D0),
    AROS_LDA(const unsigned char *, sec, D1),
    AROS_LDA(size_t, seclen, D2),
    AROS_LDA(unsigned char **, mac, D3),
    AROS_LDA(size_t *, maclen, D4),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CRMF_pbm_new, libctx, propq, pbmp, msg, msglen, sec, seclen, mac, maclen);
    AROS_LIBFUNC_EXIT
}

OSSL_CRMF_PBMPARAMETER * LIB_OSSL_CRMF_pbmp_new(struct Library * _base, OSSL_LIB_CTX * libctx, size_t slen, int owfnid, size_t itercnt, int macnid);

AROS_LH5(OSSL_CRMF_PBMPARAMETER *,OSSL_CRMF_pbmp_new,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(size_t, slen, D0),
    AROS_LDA(int, owfnid, D1),
    AROS_LDA(size_t, itercnt, D2),
    AROS_LDA(int, macnid, D3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_CRMF_pbmp_new, libctx, slen, owfnid, itercnt, macnid);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_DAY_TIME_BAND_free(struct Library * _base, OSSL_DAY_TIME_BAND * a);

AROS_LH1(void,OSSL_DAY_TIME_BAND_free,
    AROS_LDA(OSSL_DAY_TIME_BAND *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_DAY_TIME_BAND_free, a);
    AROS_LIBFUNC_EXIT
}

const ASN1_ITEM * LIB_OSSL_DAY_TIME_BAND_it(struct Library * _base);

AROS_LH0(const ASN1_ITEM *,OSSL_DAY_TIME_BAND_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_DAY_TIME_BAND_it);
    AROS_LIBFUNC_EXIT
}

OSSL_DAY_TIME_BAND * LIB_OSSL_DAY_TIME_BAND_new(struct Library * _base);

AROS_LH0(OSSL_DAY_TIME_BAND *,OSSL_DAY_TIME_BAND_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_DAY_TIME_BAND_new);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_DAY_TIME_free(struct Library * _base, OSSL_DAY_TIME * a);

AROS_LH1(void,OSSL_DAY_TIME_free,
    AROS_LDA(OSSL_DAY_TIME *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_DAY_TIME_free, a);
    AROS_LIBFUNC_EXIT
}

const ASN1_ITEM * LIB_OSSL_DAY_TIME_it(struct Library * _base);

AROS_LH0(const ASN1_ITEM *,OSSL_DAY_TIME_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_DAY_TIME_it);
    AROS_LIBFUNC_EXIT
}

OSSL_DAY_TIME * LIB_OSSL_DAY_TIME_new(struct Library * _base);

AROS_LH0(OSSL_DAY_TIME *,OSSL_DAY_TIME_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_DAY_TIME_new);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_DECODER_CTX_add_decoder(struct Library * _base, OSSL_DECODER_CTX * ctx, OSSL_DECODER * decoder);

AROS_LH2(int,OSSL_DECODER_CTX_add_decoder,
    AROS_LDA(OSSL_DECODER_CTX *, ctx, A0),
    AROS_LDA(OSSL_DECODER *, decoder, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_DECODER_CTX_add_decoder, ctx, decoder);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_DECODER_CTX_add_extra(struct Library * _base, OSSL_DECODER_CTX * ctx, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH3(int,OSSL_DECODER_CTX_add_extra,
    AROS_LDA(OSSL_DECODER_CTX *, ctx, A0),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A1),
    AROS_LDA(const char *, propq, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_DECODER_CTX_add_extra, ctx, libctx, propq);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_DECODER_CTX_free(struct Library * _base, OSSL_DECODER_CTX * ctx);

AROS_LH1(void,OSSL_DECODER_CTX_free,
    AROS_LDA(OSSL_DECODER_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_DECODER_CTX_free, ctx);
    AROS_LIBFUNC_EXIT
}

OSSL_DECODER_CLEANUP * LIB_OSSL_DECODER_CTX_get_cleanup(struct Library * _base, OSSL_DECODER_CTX * ctx);

AROS_LH1(OSSL_DECODER_CLEANUP *,OSSL_DECODER_CTX_get_cleanup,
    AROS_LDA(OSSL_DECODER_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_DECODER_CTX_get_cleanup, ctx);
    AROS_LIBFUNC_EXIT
}

OSSL_DECODER_CONSTRUCT * LIB_OSSL_DECODER_CTX_get_construct(struct Library * _base, OSSL_DECODER_CTX * ctx);

AROS_LH1(OSSL_DECODER_CONSTRUCT *,OSSL_DECODER_CTX_get_construct,
    AROS_LDA(OSSL_DECODER_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_DECODER_CTX_get_construct, ctx);
    AROS_LIBFUNC_EXIT
}

void * LIB_OSSL_DECODER_CTX_get_construct_data(struct Library * _base, OSSL_DECODER_CTX * ctx);

AROS_LH1(void *,OSSL_DECODER_CTX_get_construct_data,
    AROS_LDA(OSSL_DECODER_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_DECODER_CTX_get_construct_data, ctx);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_DECODER_CTX_get_num_decoders(struct Library * _base, OSSL_DECODER_CTX * ctx);

AROS_LH1(int,OSSL_DECODER_CTX_get_num_decoders,
    AROS_LDA(OSSL_DECODER_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_DECODER_CTX_get_num_decoders, ctx);
    AROS_LIBFUNC_EXIT
}

OSSL_DECODER_CTX * LIB_OSSL_DECODER_CTX_new(struct Library * _base);

AROS_LH0(OSSL_DECODER_CTX *,OSSL_DECODER_CTX_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_DECODER_CTX_new);
    AROS_LIBFUNC_EXIT
}

OSSL_DECODER_CTX * LIB_OSSL_DECODER_CTX_new_for_pkey(struct Library * _base, EVP_PKEY ** pkey, const char * input_type, const char * input_struct, const char * keytype, int selection, OSSL_LIB_CTX * libctx, const char * propquery);

AROS_LH7(OSSL_DECODER_CTX *,OSSL_DECODER_CTX_new_for_pkey,
    AROS_LDA(EVP_PKEY **, pkey, A0),
    AROS_LDA(const char *, input_type, A1),
    AROS_LDA(const char *, input_struct, A2),
    AROS_LDA(const char *, keytype, A3),
    AROS_LDA(int, selection, D0),
    AROS_LDA(OSSL_LIB_CTX *, libctx, D1),
    AROS_LDA(const char *, propquery, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_DECODER_CTX_new_for_pkey, pkey, input_type, input_struct, keytype, selection, libctx, propquery);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_DECODER_CTX_set_cleanup(struct Library * _base, OSSL_DECODER_CTX * ctx, OSSL_DECODER_CLEANUP * cleanup);

AROS_LH2(int,OSSL_DECODER_CTX_set_cleanup,
    AROS_LDA(OSSL_DECODER_CTX *, ctx, A0),
    AROS_LDA(OSSL_DECODER_CLEANUP *, cleanup, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_DECODER_CTX_set_cleanup, ctx, cleanup);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_DECODER_CTX_set_construct(struct Library * _base, OSSL_DECODER_CTX * ctx, OSSL_DECODER_CONSTRUCT * construct);

AROS_LH2(int,OSSL_DECODER_CTX_set_construct,
    AROS_LDA(OSSL_DECODER_CTX *, ctx, A0),
    AROS_LDA(OSSL_DECODER_CONSTRUCT *, construct, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_DECODER_CTX_set_construct, ctx, construct);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_DECODER_CTX_set_construct_data(struct Library * _base, OSSL_DECODER_CTX * ctx, void * construct_data);

AROS_LH2(int,OSSL_DECODER_CTX_set_construct_data,
    AROS_LDA(OSSL_DECODER_CTX *, ctx, A0),
    AROS_LDA(void *, construct_data, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_DECODER_CTX_set_construct_data, ctx, construct_data);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_DECODER_CTX_set_input_structure(struct Library * _base, OSSL_DECODER_CTX * ctx, const char * input_structure);

AROS_LH2(int,OSSL_DECODER_CTX_set_input_structure,
    AROS_LDA(OSSL_DECODER_CTX *, ctx, A0),
    AROS_LDA(const char *, input_structure, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_DECODER_CTX_set_input_structure, ctx, input_structure);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_DECODER_CTX_set_input_type(struct Library * _base, OSSL_DECODER_CTX * ctx, const char * input_type);

AROS_LH2(int,OSSL_DECODER_CTX_set_input_type,
    AROS_LDA(OSSL_DECODER_CTX *, ctx, A0),
    AROS_LDA(const char *, input_type, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_DECODER_CTX_set_input_type, ctx, input_type);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_DECODER_CTX_set_params(struct Library * _base, OSSL_DECODER_CTX * ctx, const OSSL_PARAM * params);

AROS_LH2(int,OSSL_DECODER_CTX_set_params,
    AROS_LDA(OSSL_DECODER_CTX *, ctx, A0),
    AROS_LDA(const OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_DECODER_CTX_set_params, ctx, params);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_DECODER_CTX_set_passphrase(struct Library * _base, OSSL_DECODER_CTX * ctx, const unsigned char * kstr, size_t klen);

AROS_LH3(int,OSSL_DECODER_CTX_set_passphrase,
    AROS_LDA(OSSL_DECODER_CTX *, ctx, A0),
    AROS_LDA(const unsigned char *, kstr, A1),
    AROS_LDA(size_t, klen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_DECODER_CTX_set_passphrase, ctx, kstr, klen);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_DECODER_CTX_set_passphrase_cb(struct Library * _base, OSSL_DECODER_CTX * ctx, OSSL_PASSPHRASE_CALLBACK * cb, void * cbarg);

AROS_LH3(int,OSSL_DECODER_CTX_set_passphrase_cb,
    AROS_LDA(OSSL_DECODER_CTX *, ctx, A0),
    AROS_LDA(OSSL_PASSPHRASE_CALLBACK *, cb, A1),
    AROS_LDA(void *, cbarg, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_DECODER_CTX_set_passphrase_cb, ctx, cb, cbarg);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_DECODER_CTX_set_passphrase_ui(struct Library * _base, OSSL_DECODER_CTX * ctx, const UI_METHOD * ui_method, void * ui_data);

AROS_LH3(int,OSSL_DECODER_CTX_set_passphrase_ui,
    AROS_LDA(OSSL_DECODER_CTX *, ctx, A0),
    AROS_LDA(const UI_METHOD *, ui_method, A1),
    AROS_LDA(void *, ui_data, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_DECODER_CTX_set_passphrase_ui, ctx, ui_method, ui_data);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_DECODER_CTX_set_pem_password_cb(struct Library * _base, OSSL_DECODER_CTX * ctx, pem_password_cb * cb, void * cbarg);

AROS_LH3(int,OSSL_DECODER_CTX_set_pem_password_cb,
    AROS_LDA(OSSL_DECODER_CTX *, ctx, A0),
    AROS_LDA(pem_password_cb *, cb, A1),
    AROS_LDA(void *, cbarg, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_DECODER_CTX_set_pem_password_cb, ctx, cb, cbarg);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_DECODER_CTX_set_selection(struct Library * _base, OSSL_DECODER_CTX * ctx, int selection);

AROS_LH2(int,OSSL_DECODER_CTX_set_selection,
    AROS_LDA(OSSL_DECODER_CTX *, ctx, A0),
    AROS_LDA(int, selection, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_DECODER_CTX_set_selection, ctx, selection);
    AROS_LIBFUNC_EXIT
}

OSSL_DECODER * LIB_OSSL_DECODER_INSTANCE_get_decoder(struct Library * _base, OSSL_DECODER_INSTANCE * decoder_inst);

AROS_LH1(OSSL_DECODER *,OSSL_DECODER_INSTANCE_get_decoder,
    AROS_LDA(OSSL_DECODER_INSTANCE *, decoder_inst, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_DECODER_INSTANCE_get_decoder, decoder_inst);
    AROS_LIBFUNC_EXIT
}

void * LIB_OSSL_DECODER_INSTANCE_get_decoder_ctx(struct Library * _base, OSSL_DECODER_INSTANCE * decoder_inst);

AROS_LH1(void *,OSSL_DECODER_INSTANCE_get_decoder_ctx,
    AROS_LDA(OSSL_DECODER_INSTANCE *, decoder_inst, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_DECODER_INSTANCE_get_decoder_ctx, decoder_inst);
    AROS_LIBFUNC_EXIT
}

const char * LIB_OSSL_DECODER_INSTANCE_get_input_structure(struct Library * _base, OSSL_DECODER_INSTANCE * decoder_inst, int * was_set);

AROS_LH2(const char *,OSSL_DECODER_INSTANCE_get_input_structure,
    AROS_LDA(OSSL_DECODER_INSTANCE *, decoder_inst, A0),
    AROS_LDA(int *, was_set, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_DECODER_INSTANCE_get_input_structure, decoder_inst, was_set);
    AROS_LIBFUNC_EXIT
}

const char * LIB_OSSL_DECODER_INSTANCE_get_input_type(struct Library * _base, OSSL_DECODER_INSTANCE * decoder_inst);

AROS_LH1(const char *,OSSL_DECODER_INSTANCE_get_input_type,
    AROS_LDA(OSSL_DECODER_INSTANCE *, decoder_inst, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_DECODER_INSTANCE_get_input_type, decoder_inst);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_DECODER_do_all_provided(struct Library * _base, OSSL_LIB_CTX * libctx, void * arg);

AROS_LH2(void,OSSL_DECODER_do_all_provided,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(void *, arg, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_DECODER_do_all_provided, libctx, arg);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_DECODER_export(struct Library * _base, OSSL_DECODER_INSTANCE * decoder_inst, void * reference, size_t reference_sz, OSSL_CALLBACK * export_cb, void * export_cbarg);

AROS_LH5(int,OSSL_DECODER_export,
    AROS_LDA(OSSL_DECODER_INSTANCE *, decoder_inst, A0),
    AROS_LDA(void *, reference, A1),
    AROS_LDA(size_t, reference_sz, D0),
    AROS_LDA(OSSL_CALLBACK *, export_cb, A2),
    AROS_LDA(void *, export_cbarg, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_DECODER_export, decoder_inst, reference, reference_sz, export_cb, export_cbarg);
    AROS_LIBFUNC_EXIT
}

OSSL_DECODER * LIB_OSSL_DECODER_fetch(struct Library * _base, OSSL_LIB_CTX * libctx, const char * name, const char * properties);

AROS_LH3(OSSL_DECODER *,OSSL_DECODER_fetch,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, name, A1),
    AROS_LDA(const char *, properties, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_DECODER_fetch, libctx, name, properties);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_DECODER_free(struct Library * _base, OSSL_DECODER * encoder);

AROS_LH1(void,OSSL_DECODER_free,
    AROS_LDA(OSSL_DECODER *, encoder, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_DECODER_free, encoder);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_DECODER_from_bio(struct Library * _base, OSSL_DECODER_CTX * ctx, BIO * in);

AROS_LH2(int,OSSL_DECODER_from_bio,
    AROS_LDA(OSSL_DECODER_CTX *, ctx, A0),
    AROS_LDA(BIO *, in, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_DECODER_from_bio, ctx, in);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_DECODER_from_data(struct Library * _base, OSSL_DECODER_CTX * ctx, const unsigned char ** pdata, size_t * pdata_len);

AROS_LH3(int,OSSL_DECODER_from_data,
    AROS_LDA(OSSL_DECODER_CTX *, ctx, A0),
    AROS_LDA(const unsigned char **, pdata, A1),
    AROS_LDA(size_t *, pdata_len, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_DECODER_from_data, ctx, pdata, pdata_len);
    AROS_LIBFUNC_EXIT
}

const char * LIB_OSSL_DECODER_get0_description(struct Library * _base, const OSSL_DECODER * decoder);

AROS_LH1(const char *,OSSL_DECODER_get0_description,
    AROS_LDA(const OSSL_DECODER *, decoder, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_DECODER_get0_description, decoder);
    AROS_LIBFUNC_EXIT
}

const char * LIB_OSSL_DECODER_get0_name(struct Library * _base, const OSSL_DECODER * decoder);

AROS_LH1(const char *,OSSL_DECODER_get0_name,
    AROS_LDA(const OSSL_DECODER *, decoder, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_DECODER_get0_name, decoder);
    AROS_LIBFUNC_EXIT
}

const char * LIB_OSSL_DECODER_get0_properties(struct Library * _base, const OSSL_DECODER * encoder);

AROS_LH1(const char *,OSSL_DECODER_get0_properties,
    AROS_LDA(const OSSL_DECODER *, encoder, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_DECODER_get0_properties, encoder);
    AROS_LIBFUNC_EXIT
}

const OSSL_PROVIDER * LIB_OSSL_DECODER_get0_provider(struct Library * _base, const OSSL_DECODER * encoder);

AROS_LH1(const OSSL_PROVIDER *,OSSL_DECODER_get0_provider,
    AROS_LDA(const OSSL_DECODER *, encoder, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_DECODER_get0_provider, encoder);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_DECODER_get_params(struct Library * _base, OSSL_DECODER * decoder, OSSL_PARAM * params);

AROS_LH2(int,OSSL_DECODER_get_params,
    AROS_LDA(OSSL_DECODER *, decoder, A0),
    AROS_LDA(OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_DECODER_get_params, decoder, params);
    AROS_LIBFUNC_EXIT
}

const OSSL_PARAM * LIB_OSSL_DECODER_gettable_params(struct Library * _base, OSSL_DECODER * decoder);

AROS_LH1(const OSSL_PARAM *,OSSL_DECODER_gettable_params,
    AROS_LDA(OSSL_DECODER *, decoder, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_DECODER_gettable_params, decoder);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_DECODER_is_a(struct Library * _base, const OSSL_DECODER * encoder, const char * name);

AROS_LH2(int,OSSL_DECODER_is_a,
    AROS_LDA(const OSSL_DECODER *, encoder, A0),
    AROS_LDA(const char *, name, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_DECODER_is_a, encoder, name);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_DECODER_names_do_all(struct Library * _base, const OSSL_DECODER * encoder, void * data);

AROS_LH2(int,OSSL_DECODER_names_do_all,
    AROS_LDA(const OSSL_DECODER *, encoder, A0),
    AROS_LDA(void *, data, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_DECODER_names_do_all, encoder, data);
    AROS_LIBFUNC_EXIT
}

const OSSL_PARAM * LIB_OSSL_DECODER_settable_ctx_params(struct Library * _base, OSSL_DECODER * encoder);

AROS_LH1(const OSSL_PARAM *,OSSL_DECODER_settable_ctx_params,
    AROS_LDA(OSSL_DECODER *, encoder, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_DECODER_settable_ctx_params, encoder);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_DECODER_up_ref(struct Library * _base, OSSL_DECODER * encoder);

AROS_LH1(int,OSSL_DECODER_up_ref,
    AROS_LDA(OSSL_DECODER *, encoder, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_DECODER_up_ref, encoder);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_ENCODER_CTX_add_encoder(struct Library * _base, OSSL_ENCODER_CTX * ctx, OSSL_ENCODER * encoder);

AROS_LH2(int,OSSL_ENCODER_CTX_add_encoder,
    AROS_LDA(OSSL_ENCODER_CTX *, ctx, A0),
    AROS_LDA(OSSL_ENCODER *, encoder, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_ENCODER_CTX_add_encoder, ctx, encoder);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_ENCODER_CTX_add_extra(struct Library * _base, OSSL_ENCODER_CTX * ctx, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH3(int,OSSL_ENCODER_CTX_add_extra,
    AROS_LDA(OSSL_ENCODER_CTX *, ctx, A0),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A1),
    AROS_LDA(const char *, propq, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_ENCODER_CTX_add_extra, ctx, libctx, propq);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_ENCODER_CTX_free(struct Library * _base, OSSL_ENCODER_CTX * ctx);

AROS_LH1(void,OSSL_ENCODER_CTX_free,
    AROS_LDA(OSSL_ENCODER_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_ENCODER_CTX_free, ctx);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_ENCODER_CTX_get_num_encoders(struct Library * _base, OSSL_ENCODER_CTX * ctx);

AROS_LH1(int,OSSL_ENCODER_CTX_get_num_encoders,
    AROS_LDA(OSSL_ENCODER_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_ENCODER_CTX_get_num_encoders, ctx);
    AROS_LIBFUNC_EXIT
}

OSSL_ENCODER_CTX * LIB_OSSL_ENCODER_CTX_new(struct Library * _base);

AROS_LH0(OSSL_ENCODER_CTX *,OSSL_ENCODER_CTX_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_ENCODER_CTX_new);
    AROS_LIBFUNC_EXIT
}

OSSL_ENCODER_CTX * LIB_OSSL_ENCODER_CTX_new_for_pkey(struct Library * _base, const EVP_PKEY * pkey, int selection, const char * output_type, const char * output_struct, const char * propquery);

AROS_LH5(OSSL_ENCODER_CTX *,OSSL_ENCODER_CTX_new_for_pkey,
    AROS_LDA(const EVP_PKEY *, pkey, A0),
    AROS_LDA(int, selection, D0),
    AROS_LDA(const char *, output_type, A1),
    AROS_LDA(const char *, output_struct, A2),
    AROS_LDA(const char *, propquery, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_ENCODER_CTX_new_for_pkey, pkey, selection, output_type, output_struct, propquery);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_ENCODER_CTX_set_cipher(struct Library * _base, OSSL_ENCODER_CTX * ctx, const char * cipher_name, const char * propquery);

AROS_LH3(int,OSSL_ENCODER_CTX_set_cipher,
    AROS_LDA(OSSL_ENCODER_CTX *, ctx, A0),
    AROS_LDA(const char *, cipher_name, A1),
    AROS_LDA(const char *, propquery, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_ENCODER_CTX_set_cipher, ctx, cipher_name, propquery);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_ENCODER_CTX_set_cleanup(struct Library * _base, OSSL_ENCODER_CTX * ctx, OSSL_ENCODER_CLEANUP * cleanup);

AROS_LH2(int,OSSL_ENCODER_CTX_set_cleanup,
    AROS_LDA(OSSL_ENCODER_CTX *, ctx, A0),
    AROS_LDA(OSSL_ENCODER_CLEANUP *, cleanup, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_ENCODER_CTX_set_cleanup, ctx, cleanup);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_ENCODER_CTX_set_construct(struct Library * _base, OSSL_ENCODER_CTX * ctx, OSSL_ENCODER_CONSTRUCT * construct);

AROS_LH2(int,OSSL_ENCODER_CTX_set_construct,
    AROS_LDA(OSSL_ENCODER_CTX *, ctx, A0),
    AROS_LDA(OSSL_ENCODER_CONSTRUCT *, construct, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_ENCODER_CTX_set_construct, ctx, construct);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_ENCODER_CTX_set_construct_data(struct Library * _base, OSSL_ENCODER_CTX * ctx, void * construct_data);

AROS_LH2(int,OSSL_ENCODER_CTX_set_construct_data,
    AROS_LDA(OSSL_ENCODER_CTX *, ctx, A0),
    AROS_LDA(void *, construct_data, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_ENCODER_CTX_set_construct_data, ctx, construct_data);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_ENCODER_CTX_set_output_structure(struct Library * _base, OSSL_ENCODER_CTX * ctx, const char * output_structure);

AROS_LH2(int,OSSL_ENCODER_CTX_set_output_structure,
    AROS_LDA(OSSL_ENCODER_CTX *, ctx, A0),
    AROS_LDA(const char *, output_structure, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_ENCODER_CTX_set_output_structure, ctx, output_structure);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_ENCODER_CTX_set_output_type(struct Library * _base, OSSL_ENCODER_CTX * ctx, const char * output_type);

AROS_LH2(int,OSSL_ENCODER_CTX_set_output_type,
    AROS_LDA(OSSL_ENCODER_CTX *, ctx, A0),
    AROS_LDA(const char *, output_type, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_ENCODER_CTX_set_output_type, ctx, output_type);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_ENCODER_CTX_set_params(struct Library * _base, OSSL_ENCODER_CTX * ctx, const OSSL_PARAM * params);

AROS_LH2(int,OSSL_ENCODER_CTX_set_params,
    AROS_LDA(OSSL_ENCODER_CTX *, ctx, A0),
    AROS_LDA(const OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_ENCODER_CTX_set_params, ctx, params);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_ENCODER_CTX_set_passphrase(struct Library * _base, OSSL_ENCODER_CTX * ctx, const unsigned char * kstr, size_t klen);

AROS_LH3(int,OSSL_ENCODER_CTX_set_passphrase,
    AROS_LDA(OSSL_ENCODER_CTX *, ctx, A0),
    AROS_LDA(const unsigned char *, kstr, A1),
    AROS_LDA(size_t, klen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_ENCODER_CTX_set_passphrase, ctx, kstr, klen);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_ENCODER_CTX_set_passphrase_cb(struct Library * _base, OSSL_ENCODER_CTX * ctx, OSSL_PASSPHRASE_CALLBACK * cb, void * cbarg);

AROS_LH3(int,OSSL_ENCODER_CTX_set_passphrase_cb,
    AROS_LDA(OSSL_ENCODER_CTX *, ctx, A0),
    AROS_LDA(OSSL_PASSPHRASE_CALLBACK *, cb, A1),
    AROS_LDA(void *, cbarg, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_ENCODER_CTX_set_passphrase_cb, ctx, cb, cbarg);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_ENCODER_CTX_set_passphrase_ui(struct Library * _base, OSSL_ENCODER_CTX * ctx, const UI_METHOD * ui_method, void * ui_data);

AROS_LH3(int,OSSL_ENCODER_CTX_set_passphrase_ui,
    AROS_LDA(OSSL_ENCODER_CTX *, ctx, A0),
    AROS_LDA(const UI_METHOD *, ui_method, A1),
    AROS_LDA(void *, ui_data, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_ENCODER_CTX_set_passphrase_ui, ctx, ui_method, ui_data);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_ENCODER_CTX_set_pem_password_cb(struct Library * _base, OSSL_ENCODER_CTX * ctx, pem_password_cb * cb, void * cbarg);

AROS_LH3(int,OSSL_ENCODER_CTX_set_pem_password_cb,
    AROS_LDA(OSSL_ENCODER_CTX *, ctx, A0),
    AROS_LDA(pem_password_cb *, cb, A1),
    AROS_LDA(void *, cbarg, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_ENCODER_CTX_set_pem_password_cb, ctx, cb, cbarg);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_ENCODER_CTX_set_selection(struct Library * _base, OSSL_ENCODER_CTX * ctx, int selection);

AROS_LH2(int,OSSL_ENCODER_CTX_set_selection,
    AROS_LDA(OSSL_ENCODER_CTX *, ctx, A0),
    AROS_LDA(int, selection, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_ENCODER_CTX_set_selection, ctx, selection);
    AROS_LIBFUNC_EXIT
}

OSSL_ENCODER * LIB_OSSL_ENCODER_INSTANCE_get_encoder(struct Library * _base, OSSL_ENCODER_INSTANCE * encoder_inst);

AROS_LH1(OSSL_ENCODER *,OSSL_ENCODER_INSTANCE_get_encoder,
    AROS_LDA(OSSL_ENCODER_INSTANCE *, encoder_inst, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_ENCODER_INSTANCE_get_encoder, encoder_inst);
    AROS_LIBFUNC_EXIT
}

void * LIB_OSSL_ENCODER_INSTANCE_get_encoder_ctx(struct Library * _base, OSSL_ENCODER_INSTANCE * encoder_inst);

AROS_LH1(void *,OSSL_ENCODER_INSTANCE_get_encoder_ctx,
    AROS_LDA(OSSL_ENCODER_INSTANCE *, encoder_inst, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_ENCODER_INSTANCE_get_encoder_ctx, encoder_inst);
    AROS_LIBFUNC_EXIT
}

const char * LIB_OSSL_ENCODER_INSTANCE_get_output_structure(struct Library * _base, OSSL_ENCODER_INSTANCE * encoder_inst);

AROS_LH1(const char *,OSSL_ENCODER_INSTANCE_get_output_structure,
    AROS_LDA(OSSL_ENCODER_INSTANCE *, encoder_inst, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_ENCODER_INSTANCE_get_output_structure, encoder_inst);
    AROS_LIBFUNC_EXIT
}

const char * LIB_OSSL_ENCODER_INSTANCE_get_output_type(struct Library * _base, OSSL_ENCODER_INSTANCE * encoder_inst);

AROS_LH1(const char *,OSSL_ENCODER_INSTANCE_get_output_type,
    AROS_LDA(OSSL_ENCODER_INSTANCE *, encoder_inst, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_ENCODER_INSTANCE_get_output_type, encoder_inst);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_ENCODER_do_all_provided(struct Library * _base, OSSL_LIB_CTX * libctx, void * arg);

AROS_LH2(void,OSSL_ENCODER_do_all_provided,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(void *, arg, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_ENCODER_do_all_provided, libctx, arg);
    AROS_LIBFUNC_EXIT
}

OSSL_ENCODER * LIB_OSSL_ENCODER_fetch(struct Library * _base, OSSL_LIB_CTX * libctx, const char * name, const char * properties);

AROS_LH3(OSSL_ENCODER *,OSSL_ENCODER_fetch,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, name, A1),
    AROS_LDA(const char *, properties, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_ENCODER_fetch, libctx, name, properties);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_ENCODER_free(struct Library * _base, OSSL_ENCODER * encoder);

AROS_LH1(void,OSSL_ENCODER_free,
    AROS_LDA(OSSL_ENCODER *, encoder, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_ENCODER_free, encoder);
    AROS_LIBFUNC_EXIT
}

const char * LIB_OSSL_ENCODER_get0_description(struct Library * _base, const OSSL_ENCODER * kdf);

AROS_LH1(const char *,OSSL_ENCODER_get0_description,
    AROS_LDA(const OSSL_ENCODER *, kdf, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_ENCODER_get0_description, kdf);
    AROS_LIBFUNC_EXIT
}

const char * LIB_OSSL_ENCODER_get0_name(struct Library * _base, const OSSL_ENCODER * kdf);

AROS_LH1(const char *,OSSL_ENCODER_get0_name,
    AROS_LDA(const OSSL_ENCODER *, kdf, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_ENCODER_get0_name, kdf);
    AROS_LIBFUNC_EXIT
}

const char * LIB_OSSL_ENCODER_get0_properties(struct Library * _base, const OSSL_ENCODER * encoder);

AROS_LH1(const char *,OSSL_ENCODER_get0_properties,
    AROS_LDA(const OSSL_ENCODER *, encoder, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_ENCODER_get0_properties, encoder);
    AROS_LIBFUNC_EXIT
}

const OSSL_PROVIDER * LIB_OSSL_ENCODER_get0_provider(struct Library * _base, const OSSL_ENCODER * encoder);

AROS_LH1(const OSSL_PROVIDER *,OSSL_ENCODER_get0_provider,
    AROS_LDA(const OSSL_ENCODER *, encoder, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_ENCODER_get0_provider, encoder);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_ENCODER_get_params(struct Library * _base, OSSL_ENCODER * encoder, OSSL_PARAM * params);

AROS_LH2(int,OSSL_ENCODER_get_params,
    AROS_LDA(OSSL_ENCODER *, encoder, A0),
    AROS_LDA(OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_ENCODER_get_params, encoder, params);
    AROS_LIBFUNC_EXIT
}

const OSSL_PARAM * LIB_OSSL_ENCODER_gettable_params(struct Library * _base, OSSL_ENCODER * encoder);

AROS_LH1(const OSSL_PARAM *,OSSL_ENCODER_gettable_params,
    AROS_LDA(OSSL_ENCODER *, encoder, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_ENCODER_gettable_params, encoder);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_ENCODER_is_a(struct Library * _base, const OSSL_ENCODER * encoder, const char * name);

AROS_LH2(int,OSSL_ENCODER_is_a,
    AROS_LDA(const OSSL_ENCODER *, encoder, A0),
    AROS_LDA(const char *, name, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_ENCODER_is_a, encoder, name);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_ENCODER_names_do_all(struct Library * _base, const OSSL_ENCODER * encoder, void * data);

AROS_LH2(int,OSSL_ENCODER_names_do_all,
    AROS_LDA(const OSSL_ENCODER *, encoder, A0),
    AROS_LDA(void *, data, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_ENCODER_names_do_all, encoder, data);
    AROS_LIBFUNC_EXIT
}

const OSSL_PARAM * LIB_OSSL_ENCODER_settable_ctx_params(struct Library * _base, OSSL_ENCODER * encoder);

AROS_LH1(const OSSL_PARAM *,OSSL_ENCODER_settable_ctx_params,
    AROS_LDA(OSSL_ENCODER *, encoder, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_ENCODER_settable_ctx_params, encoder);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_ENCODER_to_bio(struct Library * _base, OSSL_ENCODER_CTX * ctx, BIO * out);

AROS_LH2(int,OSSL_ENCODER_to_bio,
    AROS_LDA(OSSL_ENCODER_CTX *, ctx, A0),
    AROS_LDA(BIO *, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_ENCODER_to_bio, ctx, out);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_ENCODER_to_data(struct Library * _base, OSSL_ENCODER_CTX * ctx, unsigned char ** pdata, size_t * pdata_len);

AROS_LH3(int,OSSL_ENCODER_to_data,
    AROS_LDA(OSSL_ENCODER_CTX *, ctx, A0),
    AROS_LDA(unsigned char **, pdata, A1),
    AROS_LDA(size_t *, pdata_len, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_ENCODER_to_data, ctx, pdata, pdata_len);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_ENCODER_up_ref(struct Library * _base, OSSL_ENCODER * encoder);

AROS_LH1(int,OSSL_ENCODER_up_ref,
    AROS_LDA(OSSL_ENCODER *, encoder, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_ENCODER_up_ref, encoder);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_ERR_STATE_free(struct Library * _base, ERR_STATE * es);

AROS_LH1(void,OSSL_ERR_STATE_free,
    AROS_LDA(ERR_STATE *, es, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_ERR_STATE_free, es);
    AROS_LIBFUNC_EXIT
}

ERR_STATE * LIB_OSSL_ERR_STATE_new(struct Library * _base);

AROS_LH0(ERR_STATE *,OSSL_ERR_STATE_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_ERR_STATE_new);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_ERR_STATE_restore(struct Library * _base, const ERR_STATE * es);

AROS_LH1(void,OSSL_ERR_STATE_restore,
    AROS_LDA(const ERR_STATE *, es, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_ERR_STATE_restore, es);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_ERR_STATE_save(struct Library * _base, ERR_STATE * es);

AROS_LH1(void,OSSL_ERR_STATE_save,
    AROS_LDA(ERR_STATE *, es, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_ERR_STATE_save, es);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_ERR_STATE_save_to_mark(struct Library * _base, ERR_STATE * es);

AROS_LH1(void,OSSL_ERR_STATE_save_to_mark,
    AROS_LDA(ERR_STATE *, es, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_ERR_STATE_save_to_mark, es);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_GENERAL_NAMES_print(struct Library * _base, BIO * out, GENERAL_NAMES * gens, int indent);

AROS_LH3(int,OSSL_GENERAL_NAMES_print,
    AROS_LDA(BIO *, out, A0),
    AROS_LDA(GENERAL_NAMES *, gens, A1),
    AROS_LDA(int, indent, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_GENERAL_NAMES_print, out, gens, indent);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_HASH_free(struct Library * _base, OSSL_HASH * a);

AROS_LH1(void,OSSL_HASH_free,
    AROS_LDA(OSSL_HASH *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_HASH_free, a);
    AROS_LIBFUNC_EXIT
}

const ASN1_ITEM * LIB_OSSL_HASH_it(struct Library * _base);

AROS_LH0(const ASN1_ITEM *,OSSL_HASH_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_HASH_it);
    AROS_LIBFUNC_EXIT
}

OSSL_HASH * LIB_OSSL_HASH_new(struct Library * _base);

AROS_LH0(OSSL_HASH *,OSSL_HASH_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_HASH_new);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_HPKE_CTX_free(struct Library * _base, OSSL_HPKE_CTX * ctx);

AROS_LH1(void,OSSL_HPKE_CTX_free,
    AROS_LDA(OSSL_HPKE_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_HPKE_CTX_free, ctx);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_HPKE_CTX_get_seq(struct Library * _base, OSSL_HPKE_CTX * ctx, uint64_t * seq);

AROS_LH2(int,OSSL_HPKE_CTX_get_seq,
    AROS_LDA(OSSL_HPKE_CTX *, ctx, A0),
    AROS_LDA(uint64_t *, seq, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_HPKE_CTX_get_seq, ctx, seq);
    AROS_LIBFUNC_EXIT
}

OSSL_HPKE_CTX * LIB_OSSL_HPKE_CTX_new_amiga(struct Library * _base, int mode, OSSL_HPKE_SUITE * suite, int role, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH5(OSSL_HPKE_CTX *,OSSL_HPKE_CTX_new_amiga,
    AROS_LDA(int, mode, D0),
    AROS_LDA(OSSL_HPKE_SUITE *, suite, A0),
    AROS_LDA(int, role, D1),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A1),
    AROS_LDA(const char *, propq, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_HPKE_CTX_new_amiga, mode, suite, role, libctx, propq);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_HPKE_CTX_set1_authpriv(struct Library * _base, OSSL_HPKE_CTX * ctx, EVP_PKEY * priv);

AROS_LH2(int,OSSL_HPKE_CTX_set1_authpriv,
    AROS_LDA(OSSL_HPKE_CTX *, ctx, A0),
    AROS_LDA(EVP_PKEY *, priv, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_HPKE_CTX_set1_authpriv, ctx, priv);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_HPKE_CTX_set1_authpub(struct Library * _base, OSSL_HPKE_CTX * ctx, const unsigned char * pub, size_t publen);

AROS_LH3(int,OSSL_HPKE_CTX_set1_authpub,
    AROS_LDA(OSSL_HPKE_CTX *, ctx, A0),
    AROS_LDA(const unsigned char *, pub, A1),
    AROS_LDA(size_t, publen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_HPKE_CTX_set1_authpub, ctx, pub, publen);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_HPKE_CTX_set1_ikme(struct Library * _base, OSSL_HPKE_CTX * ctx, const unsigned char * ikme, size_t ikmelen);

AROS_LH3(int,OSSL_HPKE_CTX_set1_ikme,
    AROS_LDA(OSSL_HPKE_CTX *, ctx, A0),
    AROS_LDA(const unsigned char *, ikme, A1),
    AROS_LDA(size_t, ikmelen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_HPKE_CTX_set1_ikme, ctx, ikme, ikmelen);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_HPKE_CTX_set1_psk(struct Library * _base, OSSL_HPKE_CTX * ctx, const char * pskid, const unsigned char * psk, size_t psklen);

AROS_LH4(int,OSSL_HPKE_CTX_set1_psk,
    AROS_LDA(OSSL_HPKE_CTX *, ctx, A0),
    AROS_LDA(const char *, pskid, A1),
    AROS_LDA(const unsigned char *, psk, A2),
    AROS_LDA(size_t, psklen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_HPKE_CTX_set1_psk, ctx, pskid, psk, psklen);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_HPKE_CTX_set_seq(struct Library * _base, OSSL_HPKE_CTX * ctx, uint64_t seq);

AROS_LH2(int,OSSL_HPKE_CTX_set_seq,
    AROS_LDA(OSSL_HPKE_CTX *, ctx, A0),
    AROS_LDA(uint64_t, seq, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_HPKE_CTX_set_seq, ctx, seq);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_HPKE_decap(struct Library * _base, OSSL_HPKE_CTX * ctx, const unsigned char * enc, size_t enclen, EVP_PKEY * recippriv, const unsigned char * info, size_t infolen);

AROS_LH6(int,OSSL_HPKE_decap,
    AROS_LDA(OSSL_HPKE_CTX *, ctx, A0),
    AROS_LDA(const unsigned char *, enc, A1),
    AROS_LDA(size_t, enclen, D0),
    AROS_LDA(EVP_PKEY *, recippriv, A2),
    AROS_LDA(const unsigned char *, info, A3),
    AROS_LDA(size_t, infolen, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_HPKE_decap, ctx, enc, enclen, recippriv, info, infolen);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_HPKE_encap(struct Library * _base, OSSL_HPKE_CTX * ctx, unsigned char * enc, size_t * enclen, const unsigned char * pub, size_t publen, const unsigned char * info, size_t infolen);

AROS_LH7(int,OSSL_HPKE_encap,
    AROS_LDA(OSSL_HPKE_CTX *, ctx, A0),
    AROS_LDA(unsigned char *, enc, A1),
    AROS_LDA(size_t *, enclen, A2),
    AROS_LDA(const unsigned char *, pub, A3),
    AROS_LDA(size_t, publen, D0),
    AROS_LDA(const unsigned char *, info, D1),
    AROS_LDA(size_t, infolen, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_HPKE_encap, ctx, enc, enclen, pub, publen, info, infolen);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_HPKE_export(struct Library * _base, OSSL_HPKE_CTX * ctx, unsigned char * secret, size_t secretlen, const unsigned char * label, size_t labellen);

AROS_LH5(int,OSSL_HPKE_export,
    AROS_LDA(OSSL_HPKE_CTX *, ctx, A0),
    AROS_LDA(unsigned char *, secret, A1),
    AROS_LDA(size_t, secretlen, D0),
    AROS_LDA(const unsigned char *, label, A2),
    AROS_LDA(size_t, labellen, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_HPKE_export, ctx, secret, secretlen, label, labellen);
    AROS_LIBFUNC_EXIT
}

size_t LIB_OSSL_HPKE_get_ciphertext_size_amiga(struct Library * _base, OSSL_HPKE_SUITE * suite, size_t clearlen);

AROS_LH2(size_t,OSSL_HPKE_get_ciphertext_size_amiga,
    AROS_LDA(OSSL_HPKE_SUITE *, suite, A0),
    AROS_LDA(size_t, clearlen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_HPKE_get_ciphertext_size_amiga, suite, clearlen);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_HPKE_get_grease_value(struct Library * _base, const OSSL_HPKE_SUITE * suite_in, OSSL_HPKE_SUITE * suite, unsigned char * enc, size_t * enclen, unsigned char * ct, size_t ctlen, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH8(int,OSSL_HPKE_get_grease_value,
    AROS_LDA(const OSSL_HPKE_SUITE *, suite_in, A0),
    AROS_LDA(OSSL_HPKE_SUITE *, suite, A1),
    AROS_LDA(unsigned char *, enc, A2),
    AROS_LDA(size_t *, enclen, A3),
    AROS_LDA(unsigned char *, ct, D0),
    AROS_LDA(size_t, ctlen, D1),
    AROS_LDA(OSSL_LIB_CTX *, libctx, D2),
    AROS_LDA(const char *, propq, D3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_HPKE_get_grease_value, suite_in, suite, enc, enclen, ct, ctlen, libctx, propq);
    AROS_LIBFUNC_EXIT
}

size_t LIB_OSSL_HPKE_get_public_encap_size_amiga(struct Library * _base, OSSL_HPKE_SUITE * suite);

AROS_LH1(size_t,OSSL_HPKE_get_public_encap_size_amiga,
    AROS_LDA(OSSL_HPKE_SUITE *, suite, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_HPKE_get_public_encap_size_amiga, suite);
    AROS_LIBFUNC_EXIT
}

size_t LIB_OSSL_HPKE_get_recommended_ikmelen_amiga(struct Library * _base, OSSL_HPKE_SUITE * suite);

AROS_LH1(size_t,OSSL_HPKE_get_recommended_ikmelen_amiga,
    AROS_LDA(OSSL_HPKE_SUITE *, suite, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_HPKE_get_recommended_ikmelen_amiga, suite);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_HPKE_keygen_amiga(struct Library * _base, OSSL_HPKE_SUITE * suite, unsigned char * pub, size_t * publen, EVP_PKEY ** priv, const unsigned char * ikm, size_t ikmlen, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH8(int,OSSL_HPKE_keygen_amiga,
    AROS_LDA(OSSL_HPKE_SUITE *, suite, A0),
    AROS_LDA(unsigned char *, pub, A1),
    AROS_LDA(size_t *, publen, A2),
    AROS_LDA(EVP_PKEY **, priv, A3),
    AROS_LDA(const unsigned char *, ikm, D0),
    AROS_LDA(size_t, ikmlen, D1),
    AROS_LDA(OSSL_LIB_CTX *, libctx, D2),
    AROS_LDA(const char *, propq, D3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_HPKE_keygen_amiga, suite, pub, publen, priv, ikm, ikmlen, libctx, propq);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_HPKE_open(struct Library * _base, OSSL_HPKE_CTX * ctx, unsigned char * pt, size_t * ptlen, const unsigned char * aad, size_t aadlen, const unsigned char * ct, size_t ctlen);

AROS_LH7(int,OSSL_HPKE_open,
    AROS_LDA(OSSL_HPKE_CTX *, ctx, A0),
    AROS_LDA(unsigned char *, pt, A1),
    AROS_LDA(size_t *, ptlen, A2),
    AROS_LDA(const unsigned char *, aad, A3),
    AROS_LDA(size_t, aadlen, D0),
    AROS_LDA(const unsigned char *, ct, D1),
    AROS_LDA(size_t, ctlen, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_HPKE_open, ctx, pt, ptlen, aad, aadlen, ct, ctlen);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_HPKE_seal(struct Library * _base, OSSL_HPKE_CTX * ctx, unsigned char * ct, size_t * ctlen, const unsigned char * aad, size_t aadlen, const unsigned char * pt, size_t ptlen);

AROS_LH7(int,OSSL_HPKE_seal,
    AROS_LDA(OSSL_HPKE_CTX *, ctx, A0),
    AROS_LDA(unsigned char *, ct, A1),
    AROS_LDA(size_t *, ctlen, A2),
    AROS_LDA(const unsigned char *, aad, A3),
    AROS_LDA(size_t, aadlen, D0),
    AROS_LDA(const unsigned char *, pt, D1),
    AROS_LDA(size_t, ptlen, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_HPKE_seal, ctx, ct, ctlen, aad, aadlen, pt, ptlen);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_HPKE_str2suite(struct Library * _base, const char * str, OSSL_HPKE_SUITE * suite);

AROS_LH2(int,OSSL_HPKE_str2suite,
    AROS_LDA(const char *, str, A0),
    AROS_LDA(OSSL_HPKE_SUITE *, suite, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_HPKE_str2suite, str, suite);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_HPKE_suite_check_amiga(struct Library * _base, OSSL_HPKE_SUITE * suite);

AROS_LH1(int,OSSL_HPKE_suite_check_amiga,
    AROS_LDA(OSSL_HPKE_SUITE *, suite, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_HPKE_suite_check_amiga, suite);
    AROS_LIBFUNC_EXIT
}

size_t LIB_OSSL_HTTP_REQ_CTX_get_resp_len(struct Library * _base, const OSSL_HTTP_REQ_CTX * rctx);

AROS_LH1(size_t,OSSL_HTTP_REQ_CTX_get_resp_len,
    AROS_LDA(const OSSL_HTTP_REQ_CTX *, rctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_HTTP_REQ_CTX_get_resp_len, rctx);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_HTTP_REQ_CTX_set_expected(struct Library * _base, OSSL_HTTP_REQ_CTX * rctx, const char * content_type, int asn1, int timeout, int keep_alive);

AROS_LH5(int,OSSL_HTTP_REQ_CTX_set_expected,
    AROS_LDA(OSSL_HTTP_REQ_CTX *, rctx, A0),
    AROS_LDA(const char *, content_type, A1),
    AROS_LDA(int, asn1, D0),
    AROS_LDA(int, timeout, D1),
    AROS_LDA(int, keep_alive, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_HTTP_REQ_CTX_set_expected, rctx, content_type, asn1, timeout, keep_alive);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_HTTP_REQ_CTX_set_max_response_hdr_lines(struct Library * _base, OSSL_HTTP_REQ_CTX * rctx, size_t count);

AROS_LH2(void,OSSL_HTTP_REQ_CTX_set_max_response_hdr_lines,
    AROS_LDA(OSSL_HTTP_REQ_CTX *, rctx, A0),
    AROS_LDA(size_t, count, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_HTTP_REQ_CTX_set_max_response_hdr_lines, rctx, count);
    AROS_LIBFUNC_EXIT
}

const char * LIB_OSSL_HTTP_adapt_proxy(struct Library * _base, const char * proxy, const char * no_proxy, const char * server, int use_ssl);

AROS_LH4(const char *,OSSL_HTTP_adapt_proxy,
    AROS_LDA(const char *, proxy, A0),
    AROS_LDA(const char *, no_proxy, A1),
    AROS_LDA(const char *, server, A2),
    AROS_LDA(int, use_ssl, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_HTTP_adapt_proxy, proxy, no_proxy, server, use_ssl);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_HTTP_close(struct Library * _base, OSSL_HTTP_REQ_CTX * rctx, int ok);

AROS_LH2(int,OSSL_HTTP_close,
    AROS_LDA(OSSL_HTTP_REQ_CTX *, rctx, A0),
    AROS_LDA(int, ok, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_HTTP_close, rctx, ok);
    AROS_LIBFUNC_EXIT
}

BIO * LIB_OSSL_HTTP_exchange(struct Library * _base, OSSL_HTTP_REQ_CTX * rctx, char ** redirection_url);

AROS_LH2(BIO *,OSSL_HTTP_exchange,
    AROS_LDA(OSSL_HTTP_REQ_CTX *, rctx, A0),
    AROS_LDA(char **, redirection_url, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_HTTP_exchange, rctx, redirection_url);
    AROS_LIBFUNC_EXIT
}

BIO * LIB_OSSL_HTTP_get_amiga_1(struct Library * _base, const char * url, const char * proxy, const char * no_proxy, BIO * bio, BIO * rbio, OSSL_HTTP_bio_cb_t bio_update_fn, void * moreargs);

AROS_LH7(BIO *,OSSL_HTTP_get_amiga_1,
    AROS_LDA(const char *, url, A0),
    AROS_LDA(const char *, proxy, A1),
    AROS_LDA(const char *, no_proxy, A2),
    AROS_LDA(BIO *, bio, D1),
    AROS_LDA(BIO *, rbio, D2),
    AROS_LDA(OSSL_HTTP_bio_cb_t, bio_update_fn, A3),
    AROS_LDA(void *, moreargs, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_HTTP_get_amiga_1, url, proxy, no_proxy, bio, rbio, bio_update_fn, moreargs);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_HTTP_is_alive(struct Library * _base, const OSSL_HTTP_REQ_CTX * rctx);

AROS_LH1(int,OSSL_HTTP_is_alive,
    AROS_LDA(const OSSL_HTTP_REQ_CTX *, rctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_HTTP_is_alive, rctx);
    AROS_LIBFUNC_EXIT
}

OSSL_HTTP_REQ_CTX * LIB_OSSL_HTTP_open(struct Library * _base, const char * server, const char * port, const char * proxy, const char * no_proxy, int use_ssl, BIO * bio, BIO * rbio, OSSL_HTTP_bio_cb_t bio_update_fn, void * arg, int buf_size, int overall_timeout);

AROS_LH11(OSSL_HTTP_REQ_CTX *,OSSL_HTTP_open,
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
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_HTTP_open, server, port, proxy, no_proxy, use_ssl, bio, rbio, bio_update_fn, arg, buf_size, overall_timeout);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_HTTP_proxy_connect(struct Library * _base, BIO * bio, const char * server, const char * port, const char * proxyuser, const char * proxypass, int timeout, BIO * bio_err, const char * prog);

AROS_LH8(int,OSSL_HTTP_proxy_connect,
    AROS_LDA(BIO *, bio, A0),
    AROS_LDA(const char *, server, A1),
    AROS_LDA(const char *, port, A2),
    AROS_LDA(const char *, proxyuser, A3),
    AROS_LDA(const char *, proxypass, D0),
    AROS_LDA(int, timeout, D1),
    AROS_LDA(BIO *, bio_err, D2),
    AROS_LDA(const char *, prog, D3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_HTTP_proxy_connect, bio, server, port, proxyuser, proxypass, timeout, bio_err, prog);
    AROS_LIBFUNC_EXIT
}

BIO * LIB_OSSL_HTTP_transfer_amiga_1(struct Library * _base, OSSL_HTTP_REQ_CTX ** prctx, const char * server, const char * port, const char * path, int use_ssl, const char * proxy, const char * no_proxy, BIO * bio, BIO * rbio, OSSL_HTTP_bio_cb_t bio_update_fn, void * moreargs);

AROS_LH11(BIO *,OSSL_HTTP_transfer_amiga_1,
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
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_HTTP_transfer_amiga_1, prctx, server, port, path, use_ssl, proxy, no_proxy, bio, rbio, bio_update_fn, moreargs);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_IETF_ATTR_SYNTAX_VALUE_free(struct Library * _base, OSSL_IETF_ATTR_SYNTAX_VALUE * a);

AROS_LH1(void,OSSL_IETF_ATTR_SYNTAX_VALUE_free,
    AROS_LDA(OSSL_IETF_ATTR_SYNTAX_VALUE *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_IETF_ATTR_SYNTAX_VALUE_free, a);
    AROS_LIBFUNC_EXIT
}

const ASN1_ITEM * LIB_OSSL_IETF_ATTR_SYNTAX_VALUE_it(struct Library * _base);

AROS_LH0(const ASN1_ITEM *,OSSL_IETF_ATTR_SYNTAX_VALUE_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_IETF_ATTR_SYNTAX_VALUE_it);
    AROS_LIBFUNC_EXIT
}

OSSL_IETF_ATTR_SYNTAX_VALUE * LIB_OSSL_IETF_ATTR_SYNTAX_VALUE_new(struct Library * _base);

AROS_LH0(OSSL_IETF_ATTR_SYNTAX_VALUE *,OSSL_IETF_ATTR_SYNTAX_VALUE_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_IETF_ATTR_SYNTAX_VALUE_new);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_IETF_ATTR_SYNTAX_add1_value(struct Library * _base, OSSL_IETF_ATTR_SYNTAX * a, int type, void * data);

AROS_LH3(int,OSSL_IETF_ATTR_SYNTAX_add1_value,
    AROS_LDA(OSSL_IETF_ATTR_SYNTAX *, a, A0),
    AROS_LDA(int, type, D0),
    AROS_LDA(void *, data, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_IETF_ATTR_SYNTAX_add1_value, a, type, data);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_IETF_ATTR_SYNTAX_free(struct Library * _base, OSSL_IETF_ATTR_SYNTAX * a);

AROS_LH1(void,OSSL_IETF_ATTR_SYNTAX_free,
    AROS_LDA(OSSL_IETF_ATTR_SYNTAX *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_IETF_ATTR_SYNTAX_free, a);
    AROS_LIBFUNC_EXIT
}

const GENERAL_NAMES * LIB_OSSL_IETF_ATTR_SYNTAX_get0_policyAuthority(struct Library * _base, const OSSL_IETF_ATTR_SYNTAX * a);

AROS_LH1(const GENERAL_NAMES *,OSSL_IETF_ATTR_SYNTAX_get0_policyAuthority,
    AROS_LDA(const OSSL_IETF_ATTR_SYNTAX *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_IETF_ATTR_SYNTAX_get0_policyAuthority, a);
    AROS_LIBFUNC_EXIT
}

void * LIB_OSSL_IETF_ATTR_SYNTAX_get0_value(struct Library * _base, const OSSL_IETF_ATTR_SYNTAX * a, int ind, int * type);

AROS_LH3(void *,OSSL_IETF_ATTR_SYNTAX_get0_value,
    AROS_LDA(const OSSL_IETF_ATTR_SYNTAX *, a, A0),
    AROS_LDA(int, ind, D0),
    AROS_LDA(int *, type, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_IETF_ATTR_SYNTAX_get0_value, a, ind, type);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_IETF_ATTR_SYNTAX_get_value_num(struct Library * _base, const OSSL_IETF_ATTR_SYNTAX * a);

AROS_LH1(int,OSSL_IETF_ATTR_SYNTAX_get_value_num,
    AROS_LDA(const OSSL_IETF_ATTR_SYNTAX *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_IETF_ATTR_SYNTAX_get_value_num, a);
    AROS_LIBFUNC_EXIT
}

const ASN1_ITEM * LIB_OSSL_IETF_ATTR_SYNTAX_it(struct Library * _base);

AROS_LH0(const ASN1_ITEM *,OSSL_IETF_ATTR_SYNTAX_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_IETF_ATTR_SYNTAX_it);
    AROS_LIBFUNC_EXIT
}

OSSL_IETF_ATTR_SYNTAX * LIB_OSSL_IETF_ATTR_SYNTAX_new(struct Library * _base);

AROS_LH0(OSSL_IETF_ATTR_SYNTAX *,OSSL_IETF_ATTR_SYNTAX_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_IETF_ATTR_SYNTAX_new);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_IETF_ATTR_SYNTAX_print(struct Library * _base, BIO * bp, OSSL_IETF_ATTR_SYNTAX * a, int indent);

AROS_LH3(int,OSSL_IETF_ATTR_SYNTAX_print,
    AROS_LDA(BIO *, bp, A0),
    AROS_LDA(OSSL_IETF_ATTR_SYNTAX *, a, A1),
    AROS_LDA(int, indent, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_IETF_ATTR_SYNTAX_print, bp, a, indent);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_IETF_ATTR_SYNTAX_set0_policyAuthority(struct Library * _base, OSSL_IETF_ATTR_SYNTAX * a, GENERAL_NAMES * names);

AROS_LH2(void,OSSL_IETF_ATTR_SYNTAX_set0_policyAuthority,
    AROS_LDA(OSSL_IETF_ATTR_SYNTAX *, a, A0),
    AROS_LDA(GENERAL_NAMES *, names, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_IETF_ATTR_SYNTAX_set0_policyAuthority, a, names);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_INDICATOR_get_callback(struct Library * _base, OSSL_LIB_CTX * libctx, OSSL_INDICATOR_CALLBACK ** cb);

AROS_LH2(void,OSSL_INDICATOR_get_callback,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(OSSL_INDICATOR_CALLBACK **, cb, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_INDICATOR_get_callback, libctx, cb);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_INDICATOR_set_callback(struct Library * _base, OSSL_LIB_CTX * libctx, OSSL_INDICATOR_CALLBACK * cb);

AROS_LH2(void,OSSL_INDICATOR_set_callback,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(OSSL_INDICATOR_CALLBACK *, cb, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_INDICATOR_set_callback, libctx, cb);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_INFO_SYNTAX_POINTER_free(struct Library * _base, OSSL_INFO_SYNTAX_POINTER * a);

AROS_LH1(void,OSSL_INFO_SYNTAX_POINTER_free,
    AROS_LDA(OSSL_INFO_SYNTAX_POINTER *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_INFO_SYNTAX_POINTER_free, a);
    AROS_LIBFUNC_EXIT
}

const ASN1_ITEM * LIB_OSSL_INFO_SYNTAX_POINTER_it(struct Library * _base);

AROS_LH0(const ASN1_ITEM *,OSSL_INFO_SYNTAX_POINTER_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_INFO_SYNTAX_POINTER_it);
    AROS_LIBFUNC_EXIT
}

OSSL_INFO_SYNTAX_POINTER * LIB_OSSL_INFO_SYNTAX_POINTER_new(struct Library * _base);

AROS_LH0(OSSL_INFO_SYNTAX_POINTER *,OSSL_INFO_SYNTAX_POINTER_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_INFO_SYNTAX_POINTER_new);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_INFO_SYNTAX_free(struct Library * _base, OSSL_INFO_SYNTAX * a);

AROS_LH1(void,OSSL_INFO_SYNTAX_free,
    AROS_LDA(OSSL_INFO_SYNTAX *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_INFO_SYNTAX_free, a);
    AROS_LIBFUNC_EXIT
}

const ASN1_ITEM * LIB_OSSL_INFO_SYNTAX_it(struct Library * _base);

AROS_LH0(const ASN1_ITEM *,OSSL_INFO_SYNTAX_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_INFO_SYNTAX_it);
    AROS_LIBFUNC_EXIT
}

OSSL_INFO_SYNTAX * LIB_OSSL_INFO_SYNTAX_new(struct Library * _base);

AROS_LH0(OSSL_INFO_SYNTAX *,OSSL_INFO_SYNTAX_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_INFO_SYNTAX_new);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_ISSUER_SERIAL_free(struct Library * _base, OSSL_ISSUER_SERIAL * a);

AROS_LH1(void,OSSL_ISSUER_SERIAL_free,
    AROS_LDA(OSSL_ISSUER_SERIAL *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_ISSUER_SERIAL_free, a);
    AROS_LIBFUNC_EXIT
}

const X509_NAME * LIB_OSSL_ISSUER_SERIAL_get0_issuer(struct Library * _base, const OSSL_ISSUER_SERIAL * isss);

AROS_LH1(const X509_NAME *,OSSL_ISSUER_SERIAL_get0_issuer,
    AROS_LDA(const OSSL_ISSUER_SERIAL *, isss, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_ISSUER_SERIAL_get0_issuer, isss);
    AROS_LIBFUNC_EXIT
}

const ASN1_BIT_STRING * LIB_OSSL_ISSUER_SERIAL_get0_issuerUID(struct Library * _base, const OSSL_ISSUER_SERIAL * isss);

AROS_LH1(const ASN1_BIT_STRING *,OSSL_ISSUER_SERIAL_get0_issuerUID,
    AROS_LDA(const OSSL_ISSUER_SERIAL *, isss, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_ISSUER_SERIAL_get0_issuerUID, isss);
    AROS_LIBFUNC_EXIT
}

const ASN1_INTEGER * LIB_OSSL_ISSUER_SERIAL_get0_serial(struct Library * _base, const OSSL_ISSUER_SERIAL * isss);

AROS_LH1(const ASN1_INTEGER *,OSSL_ISSUER_SERIAL_get0_serial,
    AROS_LDA(const OSSL_ISSUER_SERIAL *, isss, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_ISSUER_SERIAL_get0_serial, isss);
    AROS_LIBFUNC_EXIT
}

OSSL_ISSUER_SERIAL * LIB_OSSL_ISSUER_SERIAL_new(struct Library * _base);

AROS_LH0(OSSL_ISSUER_SERIAL *,OSSL_ISSUER_SERIAL_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_ISSUER_SERIAL_new);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_ISSUER_SERIAL_set1_issuer(struct Library * _base, OSSL_ISSUER_SERIAL * isss, const X509_NAME * issuer);

AROS_LH2(int,OSSL_ISSUER_SERIAL_set1_issuer,
    AROS_LDA(OSSL_ISSUER_SERIAL *, isss, A0),
    AROS_LDA(const X509_NAME *, issuer, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_ISSUER_SERIAL_set1_issuer, isss, issuer);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_ISSUER_SERIAL_set1_issuerUID(struct Library * _base, OSSL_ISSUER_SERIAL * isss, const ASN1_BIT_STRING * uid);

AROS_LH2(int,OSSL_ISSUER_SERIAL_set1_issuerUID,
    AROS_LDA(OSSL_ISSUER_SERIAL *, isss, A0),
    AROS_LDA(const ASN1_BIT_STRING *, uid, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_ISSUER_SERIAL_set1_issuerUID, isss, uid);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_ISSUER_SERIAL_set1_serial(struct Library * _base, OSSL_ISSUER_SERIAL * isss, const ASN1_INTEGER * serial);

AROS_LH2(int,OSSL_ISSUER_SERIAL_set1_serial,
    AROS_LDA(OSSL_ISSUER_SERIAL *, isss, A0),
    AROS_LDA(const ASN1_INTEGER *, serial, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_ISSUER_SERIAL_set1_serial, isss, serial);
    AROS_LIBFUNC_EXIT
}

OSSL_LIB_CTX * LIB_OSSL_LIB_CTX_get0_global_default(struct Library * _base);

AROS_LH0(OSSL_LIB_CTX *,OSSL_LIB_CTX_get0_global_default,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_LIB_CTX_get0_global_default);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_LIB_CTX_get_conf_diagnostics(struct Library * _base, OSSL_LIB_CTX * ctx);

AROS_LH1(int,OSSL_LIB_CTX_get_conf_diagnostics,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_LIB_CTX_get_conf_diagnostics, ctx);
    AROS_LIBFUNC_EXIT
}

void * LIB_OSSL_LIB_CTX_get_data(struct Library * _base, OSSL_LIB_CTX * ctx, int index);

AROS_LH2(void *,OSSL_LIB_CTX_get_data,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    AROS_LDA(int, index, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_LIB_CTX_get_data, ctx, index);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_LIB_CTX_load_config(struct Library * _base, OSSL_LIB_CTX * ctx, const char * config_file);

AROS_LH2(int,OSSL_LIB_CTX_load_config,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    AROS_LDA(const char *, config_file, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_LIB_CTX_load_config, ctx, config_file);
    AROS_LIBFUNC_EXIT
}

OSSL_LIB_CTX * LIB_OSSL_LIB_CTX_new_child(struct Library * _base, const OSSL_CORE_HANDLE * handle, const OSSL_DISPATCH * in);

AROS_LH2(OSSL_LIB_CTX *,OSSL_LIB_CTX_new_child,
    AROS_LDA(const OSSL_CORE_HANDLE *, handle, A0),
    AROS_LDA(const OSSL_DISPATCH *, in, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_LIB_CTX_new_child, handle, in);
    AROS_LIBFUNC_EXIT
}

OSSL_LIB_CTX * LIB_OSSL_LIB_CTX_new_from_dispatch(struct Library * _base, const OSSL_CORE_HANDLE * handle, const OSSL_DISPATCH * in);

AROS_LH2(OSSL_LIB_CTX *,OSSL_LIB_CTX_new_from_dispatch,
    AROS_LDA(const OSSL_CORE_HANDLE *, handle, A0),
    AROS_LDA(const OSSL_DISPATCH *, in, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_LIB_CTX_new_from_dispatch, handle, in);
    AROS_LIBFUNC_EXIT
}

OSSL_LIB_CTX * LIB_OSSL_LIB_CTX_set0_default(struct Library * _base, OSSL_LIB_CTX * libctx);

AROS_LH1(OSSL_LIB_CTX *,OSSL_LIB_CTX_set0_default,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_LIB_CTX_set0_default, libctx);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_LIB_CTX_set_conf_diagnostics(struct Library * _base, OSSL_LIB_CTX * ctx, int value);

AROS_LH2(void,OSSL_LIB_CTX_set_conf_diagnostics,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    AROS_LDA(int, value, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_LIB_CTX_set_conf_diagnostics, ctx, value);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_NAMED_DAY_free(struct Library * _base, OSSL_NAMED_DAY * a);

AROS_LH1(void,OSSL_NAMED_DAY_free,
    AROS_LDA(OSSL_NAMED_DAY *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_NAMED_DAY_free, a);
    AROS_LIBFUNC_EXIT
}

const ASN1_ITEM * LIB_OSSL_NAMED_DAY_it(struct Library * _base);

AROS_LH0(const ASN1_ITEM *,OSSL_NAMED_DAY_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_NAMED_DAY_it);
    AROS_LIBFUNC_EXIT
}

OSSL_NAMED_DAY * LIB_OSSL_NAMED_DAY_new(struct Library * _base);

AROS_LH0(OSSL_NAMED_DAY *,OSSL_NAMED_DAY_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_NAMED_DAY_new);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_OBJECT_DIGEST_INFO_free(struct Library * _base, OSSL_OBJECT_DIGEST_INFO * a);

AROS_LH1(void,OSSL_OBJECT_DIGEST_INFO_free,
    AROS_LDA(OSSL_OBJECT_DIGEST_INFO *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_OBJECT_DIGEST_INFO_free, a);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_OBJECT_DIGEST_INFO_get0_digest(struct Library * _base, const OSSL_OBJECT_DIGEST_INFO * o, int * digestedObjectType, const X509_ALGOR ** digestAlgorithm, const ASN1_BIT_STRING ** digest);

AROS_LH4(void,OSSL_OBJECT_DIGEST_INFO_get0_digest,
    AROS_LDA(const OSSL_OBJECT_DIGEST_INFO *, o, A0),
    AROS_LDA(int *, digestedObjectType, A1),
    AROS_LDA(const X509_ALGOR **, digestAlgorithm, A2),
    AROS_LDA(const ASN1_BIT_STRING **, digest, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_OBJECT_DIGEST_INFO_get0_digest, o, digestedObjectType, digestAlgorithm, digest);
    AROS_LIBFUNC_EXIT
}

OSSL_OBJECT_DIGEST_INFO * LIB_OSSL_OBJECT_DIGEST_INFO_new(struct Library * _base);

AROS_LH0(OSSL_OBJECT_DIGEST_INFO *,OSSL_OBJECT_DIGEST_INFO_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_OBJECT_DIGEST_INFO_new);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_OBJECT_DIGEST_INFO_set1_digest(struct Library * _base, OSSL_OBJECT_DIGEST_INFO * o, int digestedObjectType, X509_ALGOR * digestAlgorithm, ASN1_BIT_STRING * digest);

AROS_LH4(int,OSSL_OBJECT_DIGEST_INFO_set1_digest,
    AROS_LDA(OSSL_OBJECT_DIGEST_INFO *, o, A0),
    AROS_LDA(int, digestedObjectType, D0),
    AROS_LDA(X509_ALGOR *, digestAlgorithm, A1),
    AROS_LDA(ASN1_BIT_STRING *, digest, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_OBJECT_DIGEST_INFO_set1_digest, o, digestedObjectType, digestAlgorithm, digest);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_PARAM_BLD_free(struct Library * _base, OSSL_PARAM_BLD * bld);

AROS_LH1(void,OSSL_PARAM_BLD_free,
    AROS_LDA(OSSL_PARAM_BLD *, bld, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_PARAM_BLD_free, bld);
    AROS_LIBFUNC_EXIT
}

OSSL_PARAM_BLD * LIB_OSSL_PARAM_BLD_new(struct Library * _base);

AROS_LH0(OSSL_PARAM_BLD *,OSSL_PARAM_BLD_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_PARAM_BLD_new);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PARAM_BLD_push_BN(struct Library * _base, OSSL_PARAM_BLD * bld, const char * key, const BIGNUM * bn);

AROS_LH3(int,OSSL_PARAM_BLD_push_BN,
    AROS_LDA(OSSL_PARAM_BLD *, bld, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(const BIGNUM *, bn, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_BLD_push_BN, bld, key, bn);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PARAM_BLD_push_BN_pad(struct Library * _base, OSSL_PARAM_BLD * bld, const char * key, const BIGNUM * bn, size_t sz);

AROS_LH4(int,OSSL_PARAM_BLD_push_BN_pad,
    AROS_LDA(OSSL_PARAM_BLD *, bld, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(const BIGNUM *, bn, A2),
    AROS_LDA(size_t, sz, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_BLD_push_BN_pad, bld, key, bn, sz);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PARAM_BLD_push_double(struct Library * _base, OSSL_PARAM_BLD * bld, const char * key, double val);

AROS_LH3(int,OSSL_PARAM_BLD_push_double,
    AROS_LDA(OSSL_PARAM_BLD *, bld, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(double, val, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_BLD_push_double, bld, key, val);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PARAM_BLD_push_int(struct Library * _base, OSSL_PARAM_BLD * bld, const char * key, int val);

AROS_LH3(int,OSSL_PARAM_BLD_push_int,
    AROS_LDA(OSSL_PARAM_BLD *, bld, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(int, val, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_BLD_push_int, bld, key, val);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PARAM_BLD_push_int32(struct Library * _base, OSSL_PARAM_BLD * bld, const char * key, int32_t val);

AROS_LH3(int,OSSL_PARAM_BLD_push_int32,
    AROS_LDA(OSSL_PARAM_BLD *, bld, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(int32_t, val, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_BLD_push_int32, bld, key, val);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PARAM_BLD_push_int64(struct Library * _base, OSSL_PARAM_BLD * bld, const char * key, int64_t val);

AROS_LH3(int,OSSL_PARAM_BLD_push_int64,
    AROS_LDA(OSSL_PARAM_BLD *, bld, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(int64_t, val, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_BLD_push_int64, bld, key, val);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PARAM_BLD_push_long(struct Library * _base, OSSL_PARAM_BLD * bld, const char * key, long int val);

AROS_LH3(int,OSSL_PARAM_BLD_push_long,
    AROS_LDA(OSSL_PARAM_BLD *, bld, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(long int, val, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_BLD_push_long, bld, key, val);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PARAM_BLD_push_octet_ptr(struct Library * _base, OSSL_PARAM_BLD * bld, const char * key, void * buf, size_t bsize);

AROS_LH4(int,OSSL_PARAM_BLD_push_octet_ptr,
    AROS_LDA(OSSL_PARAM_BLD *, bld, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(void *, buf, A2),
    AROS_LDA(size_t, bsize, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_BLD_push_octet_ptr, bld, key, buf, bsize);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PARAM_BLD_push_octet_string(struct Library * _base, OSSL_PARAM_BLD * bld, const char * key, const void * buf, size_t bsize);

AROS_LH4(int,OSSL_PARAM_BLD_push_octet_string,
    AROS_LDA(OSSL_PARAM_BLD *, bld, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(const void *, buf, A2),
    AROS_LDA(size_t, bsize, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_BLD_push_octet_string, bld, key, buf, bsize);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PARAM_BLD_push_size_t(struct Library * _base, OSSL_PARAM_BLD * bld, const char * key, size_t val);

AROS_LH3(int,OSSL_PARAM_BLD_push_size_t,
    AROS_LDA(OSSL_PARAM_BLD *, bld, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(size_t, val, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_BLD_push_size_t, bld, key, val);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PARAM_BLD_push_time_t(struct Library * _base, OSSL_PARAM_BLD * bld, const char * key, time_t val);

AROS_LH3(int,OSSL_PARAM_BLD_push_time_t,
    AROS_LDA(OSSL_PARAM_BLD *, bld, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(time_t, val, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_BLD_push_time_t, bld, key, val);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PARAM_BLD_push_uint(struct Library * _base, OSSL_PARAM_BLD * bld, const char * key, unsigned int val);

AROS_LH3(int,OSSL_PARAM_BLD_push_uint,
    AROS_LDA(OSSL_PARAM_BLD *, bld, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(unsigned int, val, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_BLD_push_uint, bld, key, val);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PARAM_BLD_push_uint32(struct Library * _base, OSSL_PARAM_BLD * bld, const char * key, uint32_t val);

AROS_LH3(int,OSSL_PARAM_BLD_push_uint32,
    AROS_LDA(OSSL_PARAM_BLD *, bld, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(uint32_t, val, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_BLD_push_uint32, bld, key, val);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PARAM_BLD_push_uint64(struct Library * _base, OSSL_PARAM_BLD * bld, const char * key, uint64_t val);

AROS_LH3(int,OSSL_PARAM_BLD_push_uint64,
    AROS_LDA(OSSL_PARAM_BLD *, bld, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(uint64_t, val, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_BLD_push_uint64, bld, key, val);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PARAM_BLD_push_ulong(struct Library * _base, OSSL_PARAM_BLD * bld, const char * key, unsigned long int val);

AROS_LH3(int,OSSL_PARAM_BLD_push_ulong,
    AROS_LDA(OSSL_PARAM_BLD *, bld, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(unsigned long int, val, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_BLD_push_ulong, bld, key, val);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PARAM_BLD_push_utf8_ptr(struct Library * _base, OSSL_PARAM_BLD * bld, const char * key, char * buf, size_t bsize);

AROS_LH4(int,OSSL_PARAM_BLD_push_utf8_ptr,
    AROS_LDA(OSSL_PARAM_BLD *, bld, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(char *, buf, A2),
    AROS_LDA(size_t, bsize, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_BLD_push_utf8_ptr, bld, key, buf, bsize);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PARAM_BLD_push_utf8_string(struct Library * _base, OSSL_PARAM_BLD * bld, const char * key, const char * buf, size_t bsize);

AROS_LH4(int,OSSL_PARAM_BLD_push_utf8_string,
    AROS_LDA(OSSL_PARAM_BLD *, bld, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(const char *, buf, A2),
    AROS_LDA(size_t, bsize, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_BLD_push_utf8_string, bld, key, buf, bsize);
    AROS_LIBFUNC_EXIT
}

OSSL_PARAM * LIB_OSSL_PARAM_BLD_to_param(struct Library * _base, OSSL_PARAM_BLD * bld);

AROS_LH1(OSSL_PARAM *,OSSL_PARAM_BLD_to_param,
    AROS_LDA(OSSL_PARAM_BLD *, bld, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_BLD_to_param, bld);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PARAM_allocate_from_text(struct Library * _base, OSSL_PARAM * to, const OSSL_PARAM * paramdefs, const char * key, const char * value, size_t value_n, int * found);

AROS_LH6(int,OSSL_PARAM_allocate_from_text,
    AROS_LDA(OSSL_PARAM *, to, A0),
    AROS_LDA(const OSSL_PARAM *, paramdefs, A1),
    AROS_LDA(const char *, key, A2),
    AROS_LDA(const char *, value, A3),
    AROS_LDA(size_t, value_n, D0),
    AROS_LDA(int *, found, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_allocate_from_text, to, paramdefs, key, value, value_n, found);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_PARAM_construct_BN_amiga(struct Library * _base, OSSL_PARAM * result, const char * key, unsigned char * buf, size_t bsize);

AROS_LH4(void,OSSL_PARAM_construct_BN_amiga,
    AROS_LDA(OSSL_PARAM *, result, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(unsigned char *, buf, A2),
    AROS_LDA(size_t, bsize, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_PARAM_construct_BN_amiga, result, key, buf, bsize);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_PARAM_construct_double_amiga(struct Library * _base, OSSL_PARAM * result, const char * key, double * buf);

AROS_LH3(void,OSSL_PARAM_construct_double_amiga,
    AROS_LDA(OSSL_PARAM *, result, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(double *, buf, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_PARAM_construct_double_amiga, result, key, buf);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_PARAM_construct_end_amiga(struct Library * _base, OSSL_PARAM * result);

AROS_LH1(void,OSSL_PARAM_construct_end_amiga,
    AROS_LDA(OSSL_PARAM *, result, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_PARAM_construct_end_amiga, result);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_PARAM_construct_int32_amiga(struct Library * _base, OSSL_PARAM * result, const char * key, int32_t * buf);

AROS_LH3(void,OSSL_PARAM_construct_int32_amiga,
    AROS_LDA(OSSL_PARAM *, result, A1),
    AROS_LDA(const char *, key, A2),
    AROS_LDA(int32_t *, buf, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_PARAM_construct_int32_amiga, result, key, buf);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_PARAM_construct_int64_amiga(struct Library * _base, OSSL_PARAM * result, const char * key, int64_t * buf);

AROS_LH3(void,OSSL_PARAM_construct_int64_amiga,
    AROS_LDA(OSSL_PARAM *, result, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(int64_t *, buf, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_PARAM_construct_int64_amiga, result, key, buf);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_PARAM_construct_int_amiga(struct Library * _base, OSSL_PARAM * result, const char * key, int * buf);

AROS_LH3(void,OSSL_PARAM_construct_int_amiga,
    AROS_LDA(OSSL_PARAM *, result, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(int *, buf, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_PARAM_construct_int_amiga, result, key, buf);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_PARAM_construct_long_amiga(struct Library * _base, OSSL_PARAM * result, const char * key, long int * buf);

AROS_LH3(void,OSSL_PARAM_construct_long_amiga,
    AROS_LDA(OSSL_PARAM *, result, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(long int *, buf, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_PARAM_construct_long_amiga, result, key, buf);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_PARAM_construct_octet_ptr_amiga(struct Library * _base, OSSL_PARAM * result, const char * key, void ** buf, size_t bsize);

AROS_LH4(void,OSSL_PARAM_construct_octet_ptr_amiga,
    AROS_LDA(OSSL_PARAM *, result, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(void **, buf, A2),
    AROS_LDA(size_t, bsize, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_PARAM_construct_octet_ptr_amiga, result, key, buf, bsize);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_PARAM_construct_octet_string_amiga(struct Library * _base, OSSL_PARAM * result, const char * key, void * buf, size_t bsize);

AROS_LH4(void,OSSL_PARAM_construct_octet_string_amiga,
    AROS_LDA(OSSL_PARAM *, result, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(void *, buf, A2),
    AROS_LDA(size_t, bsize, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_PARAM_construct_octet_string_amiga, result, key, buf, bsize);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_PARAM_construct_size_t_amiga(struct Library * _base, OSSL_PARAM * result, const char * key, size_t * buf);

AROS_LH3(void,OSSL_PARAM_construct_size_t_amiga,
    AROS_LDA(OSSL_PARAM *, result, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(size_t *, buf, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_PARAM_construct_size_t_amiga, result, key, buf);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_PARAM_construct_time_t_amiga(struct Library * _base, OSSL_PARAM * result, const char * key, time_t * buf);

AROS_LH3(void,OSSL_PARAM_construct_time_t_amiga,
    AROS_LDA(OSSL_PARAM *, result, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(time_t *, buf, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_PARAM_construct_time_t_amiga, result, key, buf);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_PARAM_construct_uint32_amiga(struct Library * _base, OSSL_PARAM * result, const char * key, uint32_t * buf);

AROS_LH3(void,OSSL_PARAM_construct_uint32_amiga,
    AROS_LDA(OSSL_PARAM *, result, A1),
    AROS_LDA(const char *, key, A2),
    AROS_LDA(uint32_t *, buf, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_PARAM_construct_uint32_amiga, result, key, buf);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_PARAM_construct_uint64_amiga(struct Library * _base, OSSL_PARAM * result, const char * key, uint64_t * buf);

AROS_LH3(void,OSSL_PARAM_construct_uint64_amiga,
    AROS_LDA(OSSL_PARAM *, result, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(uint64_t *, buf, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_PARAM_construct_uint64_amiga, result, key, buf);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_PARAM_construct_uint_amiga(struct Library * _base, OSSL_PARAM * result, const char * key, unsigned int * buf);

AROS_LH3(void,OSSL_PARAM_construct_uint_amiga,
    AROS_LDA(OSSL_PARAM *, result, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(unsigned int *, buf, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_PARAM_construct_uint_amiga, result, key, buf);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_PARAM_construct_ulong_amiga(struct Library * _base, OSSL_PARAM * result, const char * key, unsigned long int * buf);

AROS_LH3(void,OSSL_PARAM_construct_ulong_amiga,
    AROS_LDA(OSSL_PARAM *, result, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(unsigned long int *, buf, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_PARAM_construct_ulong_amiga, result, key, buf);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_PARAM_construct_utf8_ptr_amiga(struct Library * _base, OSSL_PARAM * result, const char * key, char ** buf, size_t bsize);

AROS_LH4(void,OSSL_PARAM_construct_utf8_ptr_amiga,
    AROS_LDA(OSSL_PARAM *, result, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(char **, buf, A2),
    AROS_LDA(size_t, bsize, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_PARAM_construct_utf8_ptr_amiga, result, key, buf, bsize);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_PARAM_construct_utf8_string_amiga(struct Library * _base, OSSL_PARAM * result, const char * key, char * buf, size_t bsize);

AROS_LH4(void,OSSL_PARAM_construct_utf8_string_amiga,
    AROS_LDA(OSSL_PARAM *, result, A0),
    AROS_LDA(const char *, key, A1),
    AROS_LDA(char *, buf, A2),
    AROS_LDA(size_t, bsize, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_PARAM_construct_utf8_string_amiga, result, key, buf, bsize);
    AROS_LIBFUNC_EXIT
}

OSSL_PARAM * LIB_OSSL_PARAM_dup(struct Library * _base, const OSSL_PARAM * p);

AROS_LH1(OSSL_PARAM *,OSSL_PARAM_dup,
    AROS_LDA(const OSSL_PARAM *, p, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_dup, p);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_PARAM_free(struct Library * _base, OSSL_PARAM * p);

AROS_LH1(void,OSSL_PARAM_free,
    AROS_LDA(OSSL_PARAM *, p, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_PARAM_free, p);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PARAM_get_BN(struct Library * _base, const OSSL_PARAM * p, BIGNUM ** val);

AROS_LH2(int,OSSL_PARAM_get_BN,
    AROS_LDA(const OSSL_PARAM *, p, A0),
    AROS_LDA(BIGNUM **, val, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_get_BN, p, val);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PARAM_get_double(struct Library * _base, const OSSL_PARAM * p, double * val);

AROS_LH2(int,OSSL_PARAM_get_double,
    AROS_LDA(const OSSL_PARAM *, p, A0),
    AROS_LDA(double *, val, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_get_double, p, val);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PARAM_get_int(struct Library * _base, const OSSL_PARAM * p, int * val);

AROS_LH2(int,OSSL_PARAM_get_int,
    AROS_LDA(const OSSL_PARAM *, p, A0),
    AROS_LDA(int *, val, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_get_int, p, val);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PARAM_get_int32(struct Library * _base, const OSSL_PARAM * p, int32_t * val);

AROS_LH2(int,OSSL_PARAM_get_int32,
    AROS_LDA(const OSSL_PARAM *, p, A0),
    AROS_LDA(int32_t *, val, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_get_int32, p, val);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PARAM_get_int64(struct Library * _base, const OSSL_PARAM * p, int64_t * val);

AROS_LH2(int,OSSL_PARAM_get_int64,
    AROS_LDA(const OSSL_PARAM *, p, A0),
    AROS_LDA(int64_t *, val, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_get_int64, p, val);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PARAM_get_long(struct Library * _base, const OSSL_PARAM * p, long int * val);

AROS_LH2(int,OSSL_PARAM_get_long,
    AROS_LDA(const OSSL_PARAM *, p, A0),
    AROS_LDA(long int *, val, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_get_long, p, val);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PARAM_get_octet_ptr(struct Library * _base, const OSSL_PARAM * p, const void ** val, size_t * used_len);

AROS_LH3(int,OSSL_PARAM_get_octet_ptr,
    AROS_LDA(const OSSL_PARAM *, p, A0),
    AROS_LDA(const void **, val, A1),
    AROS_LDA(size_t *, used_len, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_get_octet_ptr, p, val, used_len);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PARAM_get_octet_string(struct Library * _base, const OSSL_PARAM * p, void ** val, size_t max_len, size_t * used_len);

AROS_LH4(int,OSSL_PARAM_get_octet_string,
    AROS_LDA(const OSSL_PARAM *, p, A0),
    AROS_LDA(void **, val, A1),
    AROS_LDA(size_t, max_len, D0),
    AROS_LDA(size_t *, used_len, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_get_octet_string, p, val, max_len, used_len);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PARAM_get_octet_string_ptr(struct Library * _base, const OSSL_PARAM * p, const void ** val, size_t * used_len);

AROS_LH3(int,OSSL_PARAM_get_octet_string_ptr,
    AROS_LDA(const OSSL_PARAM *, p, A0),
    AROS_LDA(const void **, val, A1),
    AROS_LDA(size_t *, used_len, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_get_octet_string_ptr, p, val, used_len);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PARAM_get_size_t(struct Library * _base, const OSSL_PARAM * p, size_t * val);

AROS_LH2(int,OSSL_PARAM_get_size_t,
    AROS_LDA(const OSSL_PARAM *, p, A0),
    AROS_LDA(size_t *, val, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_get_size_t, p, val);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PARAM_get_time_t(struct Library * _base, const OSSL_PARAM * p, time_t * val);

AROS_LH2(int,OSSL_PARAM_get_time_t,
    AROS_LDA(const OSSL_PARAM *, p, A0),
    AROS_LDA(time_t *, val, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_get_time_t, p, val);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PARAM_get_uint(struct Library * _base, const OSSL_PARAM * p, unsigned int * val);

AROS_LH2(int,OSSL_PARAM_get_uint,
    AROS_LDA(const OSSL_PARAM *, p, A0),
    AROS_LDA(unsigned int *, val, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_get_uint, p, val);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PARAM_get_uint32(struct Library * _base, const OSSL_PARAM * p, uint32_t * val);

AROS_LH2(int,OSSL_PARAM_get_uint32,
    AROS_LDA(const OSSL_PARAM *, p, A0),
    AROS_LDA(uint32_t *, val, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_get_uint32, p, val);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PARAM_get_uint64(struct Library * _base, const OSSL_PARAM * p, uint64_t * val);

AROS_LH2(int,OSSL_PARAM_get_uint64,
    AROS_LDA(const OSSL_PARAM *, p, A0),
    AROS_LDA(uint64_t *, val, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_get_uint64, p, val);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PARAM_get_ulong(struct Library * _base, const OSSL_PARAM * p, unsigned long int * val);

AROS_LH2(int,OSSL_PARAM_get_ulong,
    AROS_LDA(const OSSL_PARAM *, p, A0),
    AROS_LDA(unsigned long int *, val, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_get_ulong, p, val);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PARAM_get_utf8_ptr(struct Library * _base, const OSSL_PARAM * p, const char ** val);

AROS_LH2(int,OSSL_PARAM_get_utf8_ptr,
    AROS_LDA(const OSSL_PARAM *, p, A0),
    AROS_LDA(const char **, val, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_get_utf8_ptr, p, val);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PARAM_get_utf8_string(struct Library * _base, const OSSL_PARAM * p, char ** val, size_t max_len);

AROS_LH3(int,OSSL_PARAM_get_utf8_string,
    AROS_LDA(const OSSL_PARAM *, p, A0),
    AROS_LDA(char **, val, A1),
    AROS_LDA(size_t, max_len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_get_utf8_string, p, val, max_len);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PARAM_get_utf8_string_ptr(struct Library * _base, const OSSL_PARAM * p, const char ** val);

AROS_LH2(int,OSSL_PARAM_get_utf8_string_ptr,
    AROS_LDA(const OSSL_PARAM *, p, A0),
    AROS_LDA(const char **, val, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_get_utf8_string_ptr, p, val);
    AROS_LIBFUNC_EXIT
}

OSSL_PARAM * LIB_OSSL_PARAM_locate(struct Library * _base, OSSL_PARAM * p, const char * key);

AROS_LH2(OSSL_PARAM *,OSSL_PARAM_locate,
    AROS_LDA(OSSL_PARAM *, p, A0),
    AROS_LDA(const char *, key, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_locate, p, key);
    AROS_LIBFUNC_EXIT
}

const OSSL_PARAM * LIB_OSSL_PARAM_locate_const(struct Library * _base, const OSSL_PARAM * p, const char * key);

AROS_LH2(const OSSL_PARAM *,OSSL_PARAM_locate_const,
    AROS_LDA(const OSSL_PARAM *, p, A0),
    AROS_LDA(const char *, key, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_locate_const, p, key);
    AROS_LIBFUNC_EXIT
}

OSSL_PARAM * LIB_OSSL_PARAM_merge(struct Library * _base, const OSSL_PARAM * p1, const OSSL_PARAM * p2);

AROS_LH2(OSSL_PARAM *,OSSL_PARAM_merge,
    AROS_LDA(const OSSL_PARAM *, p1, A0),
    AROS_LDA(const OSSL_PARAM *, p2, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_merge, p1, p2);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PARAM_modified(struct Library * _base, const OSSL_PARAM * p);

AROS_LH1(int,OSSL_PARAM_modified,
    AROS_LDA(const OSSL_PARAM *, p, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_modified, p);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PARAM_print_to_bio(struct Library * _base, const OSSL_PARAM * params, BIO * bio, int print_values);

AROS_LH3(int,OSSL_PARAM_print_to_bio,
    AROS_LDA(const OSSL_PARAM *, params, A0),
    AROS_LDA(BIO *, bio, A1),
    AROS_LDA(int, print_values, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_print_to_bio, params, bio, print_values);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PARAM_set_BN(struct Library * _base, OSSL_PARAM * p, const BIGNUM * val);

AROS_LH2(int,OSSL_PARAM_set_BN,
    AROS_LDA(OSSL_PARAM *, p, A0),
    AROS_LDA(const BIGNUM *, val, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_set_BN, p, val);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_PARAM_set_all_unmodified(struct Library * _base, OSSL_PARAM * p);

AROS_LH1(void,OSSL_PARAM_set_all_unmodified,
    AROS_LDA(OSSL_PARAM *, p, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_PARAM_set_all_unmodified, p);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PARAM_set_double(struct Library * _base, OSSL_PARAM * p, double val);

AROS_LH2(int,OSSL_PARAM_set_double,
    AROS_LDA(OSSL_PARAM *, p, A0),
    AROS_LDA(double, val, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_set_double, p, val);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PARAM_set_int(struct Library * _base, OSSL_PARAM * p, int val);

AROS_LH2(int,OSSL_PARAM_set_int,
    AROS_LDA(OSSL_PARAM *, p, A0),
    AROS_LDA(int, val, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_set_int, p, val);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PARAM_set_int32(struct Library * _base, OSSL_PARAM * p, int32_t val);

AROS_LH2(int,OSSL_PARAM_set_int32,
    AROS_LDA(OSSL_PARAM *, p, A0),
    AROS_LDA(int32_t, val, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_set_int32, p, val);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PARAM_set_int64(struct Library * _base, OSSL_PARAM * p, int64_t val);

AROS_LH2(int,OSSL_PARAM_set_int64,
    AROS_LDA(OSSL_PARAM *, p, A0),
    AROS_LDA(int64_t, val, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_set_int64, p, val);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PARAM_set_long(struct Library * _base, OSSL_PARAM * p, long int val);

AROS_LH2(int,OSSL_PARAM_set_long,
    AROS_LDA(OSSL_PARAM *, p, A0),
    AROS_LDA(long int, val, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_set_long, p, val);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PARAM_set_octet_ptr(struct Library * _base, OSSL_PARAM * p, const void * val, size_t used_len);

AROS_LH3(int,OSSL_PARAM_set_octet_ptr,
    AROS_LDA(OSSL_PARAM *, p, A0),
    AROS_LDA(const void *, val, A1),
    AROS_LDA(size_t, used_len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_set_octet_ptr, p, val, used_len);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PARAM_set_octet_string(struct Library * _base, OSSL_PARAM * p, const void * val, size_t len);

AROS_LH3(int,OSSL_PARAM_set_octet_string,
    AROS_LDA(OSSL_PARAM *, p, A0),
    AROS_LDA(const void *, val, A1),
    AROS_LDA(size_t, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_set_octet_string, p, val, len);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PARAM_set_size_t(struct Library * _base, OSSL_PARAM * p, size_t val);

AROS_LH2(int,OSSL_PARAM_set_size_t,
    AROS_LDA(OSSL_PARAM *, p, A0),
    AROS_LDA(size_t, val, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_set_size_t, p, val);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PARAM_set_time_t(struct Library * _base, OSSL_PARAM * p, time_t val);

AROS_LH2(int,OSSL_PARAM_set_time_t,
    AROS_LDA(OSSL_PARAM *, p, A0),
    AROS_LDA(time_t, val, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_set_time_t, p, val);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PARAM_set_uint(struct Library * _base, OSSL_PARAM * p, unsigned int val);

AROS_LH2(int,OSSL_PARAM_set_uint,
    AROS_LDA(OSSL_PARAM *, p, A0),
    AROS_LDA(unsigned int, val, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_set_uint, p, val);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PARAM_set_uint32(struct Library * _base, OSSL_PARAM * p, uint32_t val);

AROS_LH2(int,OSSL_PARAM_set_uint32,
    AROS_LDA(OSSL_PARAM *, p, A0),
    AROS_LDA(uint32_t, val, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_set_uint32, p, val);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PARAM_set_uint64(struct Library * _base, OSSL_PARAM * p, uint64_t val);

AROS_LH2(int,OSSL_PARAM_set_uint64,
    AROS_LDA(OSSL_PARAM *, p, A0),
    AROS_LDA(uint64_t, val, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_set_uint64, p, val);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PARAM_set_ulong(struct Library * _base, OSSL_PARAM * p, unsigned long int val);

AROS_LH2(int,OSSL_PARAM_set_ulong,
    AROS_LDA(OSSL_PARAM *, p, A0),
    AROS_LDA(unsigned long int, val, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_set_ulong, p, val);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PARAM_set_utf8_ptr(struct Library * _base, OSSL_PARAM * p, const char * val);

AROS_LH2(int,OSSL_PARAM_set_utf8_ptr,
    AROS_LDA(OSSL_PARAM *, p, A0),
    AROS_LDA(const char *, val, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_set_utf8_ptr, p, val);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PARAM_set_utf8_string(struct Library * _base, OSSL_PARAM * p, const char * val);

AROS_LH2(int,OSSL_PARAM_set_utf8_string,
    AROS_LDA(OSSL_PARAM *, p, A0),
    AROS_LDA(const char *, val, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PARAM_set_utf8_string, p, val);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_PRIVILEGE_POLICY_ID_free(struct Library * _base, OSSL_PRIVILEGE_POLICY_ID * a);

AROS_LH1(void,OSSL_PRIVILEGE_POLICY_ID_free,
    AROS_LDA(OSSL_PRIVILEGE_POLICY_ID *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_PRIVILEGE_POLICY_ID_free, a);
    AROS_LIBFUNC_EXIT
}

const ASN1_ITEM * LIB_OSSL_PRIVILEGE_POLICY_ID_it(struct Library * _base);

AROS_LH0(const ASN1_ITEM *,OSSL_PRIVILEGE_POLICY_ID_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_PRIVILEGE_POLICY_ID_it);
    AROS_LIBFUNC_EXIT
}

OSSL_PRIVILEGE_POLICY_ID * LIB_OSSL_PRIVILEGE_POLICY_ID_new(struct Library * _base);

AROS_LH0(OSSL_PRIVILEGE_POLICY_ID *,OSSL_PRIVILEGE_POLICY_ID_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_PRIVILEGE_POLICY_ID_new);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PROVIDER_add_builtin(struct Library * _base, OSSL_LIB_CTX * a, const char * name, OSSL_provider_init_fn * init_fn);

AROS_LH3(int,OSSL_PROVIDER_add_builtin,
    AROS_LDA(OSSL_LIB_CTX *, a, A0),
    AROS_LDA(const char *, name, A1),
    AROS_LDA(OSSL_provider_init_fn *, init_fn, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PROVIDER_add_builtin, a, name, init_fn);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PROVIDER_add_conf_parameter(struct Library * _base, OSSL_PROVIDER * prov, const char * name, const char * value);

AROS_LH3(int,OSSL_PROVIDER_add_conf_parameter,
    AROS_LDA(OSSL_PROVIDER *, prov, A0),
    AROS_LDA(const char *, name, A1),
    AROS_LDA(const char *, value, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PROVIDER_add_conf_parameter, prov, name, value);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PROVIDER_available(struct Library * _base, OSSL_LIB_CTX * a, const char * name);

AROS_LH2(int,OSSL_PROVIDER_available,
    AROS_LDA(OSSL_LIB_CTX *, a, A0),
    AROS_LDA(const char *, name, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PROVIDER_available, a, name);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PROVIDER_conf_get_bool(struct Library * _base, const OSSL_PROVIDER * prov, const char * name, int defval);

AROS_LH3(int,OSSL_PROVIDER_conf_get_bool,
    AROS_LDA(const OSSL_PROVIDER *, prov, A0),
    AROS_LDA(const char *, name, A1),
    AROS_LDA(int, defval, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PROVIDER_conf_get_bool, prov, name, defval);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PROVIDER_do_all(struct Library * _base, OSSL_LIB_CTX * ctx, void * cbdata);

AROS_LH2(int,OSSL_PROVIDER_do_all,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    AROS_LDA(void *, cbdata, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PROVIDER_do_all, ctx, cbdata);
    AROS_LIBFUNC_EXIT
}

const char * LIB_OSSL_PROVIDER_get0_default_search_path(struct Library * _base, OSSL_LIB_CTX * libctx);

AROS_LH1(const char *,OSSL_PROVIDER_get0_default_search_path,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PROVIDER_get0_default_search_path, libctx);
    AROS_LIBFUNC_EXIT
}

const OSSL_DISPATCH * LIB_OSSL_PROVIDER_get0_dispatch(struct Library * _base, const OSSL_PROVIDER * prov);

AROS_LH1(const OSSL_DISPATCH *,OSSL_PROVIDER_get0_dispatch,
    AROS_LDA(const OSSL_PROVIDER *, prov, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PROVIDER_get0_dispatch, prov);
    AROS_LIBFUNC_EXIT
}

const char * LIB_OSSL_PROVIDER_get0_name(struct Library * _base, const OSSL_PROVIDER * prov);

AROS_LH1(const char *,OSSL_PROVIDER_get0_name,
    AROS_LDA(const OSSL_PROVIDER *, prov, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PROVIDER_get0_name, prov);
    AROS_LIBFUNC_EXIT
}

void * LIB_OSSL_PROVIDER_get0_provider_ctx(struct Library * _base, const OSSL_PROVIDER * prov);

AROS_LH1(void *,OSSL_PROVIDER_get0_provider_ctx,
    AROS_LDA(const OSSL_PROVIDER *, prov, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PROVIDER_get0_provider_ctx, prov);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PROVIDER_get_capabilities(struct Library * _base, const OSSL_PROVIDER * prov, const char * capability, OSSL_CALLBACK * cb, void * arg);

AROS_LH4(int,OSSL_PROVIDER_get_capabilities,
    AROS_LDA(const OSSL_PROVIDER *, prov, A0),
    AROS_LDA(const char *, capability, A1),
    AROS_LDA(OSSL_CALLBACK *, cb, A2),
    AROS_LDA(void *, arg, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PROVIDER_get_capabilities, prov, capability, cb, arg);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PROVIDER_get_conf_parameters(struct Library * _base, const OSSL_PROVIDER * prov, OSSL_PARAM * params);

AROS_LH2(int,OSSL_PROVIDER_get_conf_parameters,
    AROS_LDA(const OSSL_PROVIDER *, prov, A0),
    AROS_LDA(OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PROVIDER_get_conf_parameters, prov, params);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PROVIDER_get_params(struct Library * _base, const OSSL_PROVIDER * prov, OSSL_PARAM * params);

AROS_LH2(int,OSSL_PROVIDER_get_params,
    AROS_LDA(const OSSL_PROVIDER *, prov, A0),
    AROS_LDA(OSSL_PARAM *, params, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PROVIDER_get_params, prov, params);
    AROS_LIBFUNC_EXIT
}

const OSSL_PARAM * LIB_OSSL_PROVIDER_gettable_params(struct Library * _base, const OSSL_PROVIDER * prov);

AROS_LH1(const OSSL_PARAM *,OSSL_PROVIDER_gettable_params,
    AROS_LDA(const OSSL_PROVIDER *, prov, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PROVIDER_gettable_params, prov);
    AROS_LIBFUNC_EXIT
}

OSSL_PROVIDER * LIB_OSSL_PROVIDER_load(struct Library * _base, OSSL_LIB_CTX * a, const char * name);

AROS_LH2(OSSL_PROVIDER *,OSSL_PROVIDER_load,
    AROS_LDA(OSSL_LIB_CTX *, a, A0),
    AROS_LDA(const char *, name, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PROVIDER_load, a, name);
    AROS_LIBFUNC_EXIT
}

OSSL_PROVIDER * LIB_OSSL_PROVIDER_load_ex(struct Library * _base, OSSL_LIB_CTX * a, const char * name, OSSL_PARAM * params);

AROS_LH3(OSSL_PROVIDER *,OSSL_PROVIDER_load_ex,
    AROS_LDA(OSSL_LIB_CTX *, a, A0),
    AROS_LDA(const char *, name, A1),
    AROS_LDA(OSSL_PARAM *, params, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PROVIDER_load_ex, a, name, params);
    AROS_LIBFUNC_EXIT
}

const OSSL_ALGORITHM * LIB_OSSL_PROVIDER_query_operation(struct Library * _base, const OSSL_PROVIDER * prov, int operation_id, int * no_cache);

AROS_LH3(const OSSL_ALGORITHM *,OSSL_PROVIDER_query_operation,
    AROS_LDA(const OSSL_PROVIDER *, prov, A0),
    AROS_LDA(int, operation_id, D0),
    AROS_LDA(int *, no_cache, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PROVIDER_query_operation, prov, operation_id, no_cache);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PROVIDER_self_test(struct Library * _base, const OSSL_PROVIDER * prov);

AROS_LH1(int,OSSL_PROVIDER_self_test,
    AROS_LDA(const OSSL_PROVIDER *, prov, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PROVIDER_self_test, prov);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PROVIDER_set_default_search_path(struct Library * _base, OSSL_LIB_CTX * a, const char * path);

AROS_LH2(int,OSSL_PROVIDER_set_default_search_path,
    AROS_LDA(OSSL_LIB_CTX *, a, A0),
    AROS_LDA(const char *, path, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PROVIDER_set_default_search_path, a, path);
    AROS_LIBFUNC_EXIT
}

OSSL_PROVIDER * LIB_OSSL_PROVIDER_try_load(struct Library * _base, OSSL_LIB_CTX * a, const char * name, int retain_fallbacks);

AROS_LH3(OSSL_PROVIDER *,OSSL_PROVIDER_try_load,
    AROS_LDA(OSSL_LIB_CTX *, a, A0),
    AROS_LDA(const char *, name, A1),
    AROS_LDA(int, retain_fallbacks, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PROVIDER_try_load, a, name, retain_fallbacks);
    AROS_LIBFUNC_EXIT
}

OSSL_PROVIDER * LIB_OSSL_PROVIDER_try_load_ex(struct Library * _base, OSSL_LIB_CTX * a, const char * name, OSSL_PARAM * params, int retain_fallbacks);

AROS_LH4(OSSL_PROVIDER *,OSSL_PROVIDER_try_load_ex,
    AROS_LDA(OSSL_LIB_CTX *, a, A0),
    AROS_LDA(const char *, name, A1),
    AROS_LDA(OSSL_PARAM *, params, A2),
    AROS_LDA(int, retain_fallbacks, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PROVIDER_try_load_ex, a, name, params, retain_fallbacks);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_PROVIDER_unload(struct Library * _base, OSSL_PROVIDER * prov);

AROS_LH1(int,OSSL_PROVIDER_unload,
    AROS_LDA(OSSL_PROVIDER *, prov, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_PROVIDER_unload, prov);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_PROVIDER_unquery_operation(struct Library * _base, const OSSL_PROVIDER * prov, int operation_id, const OSSL_ALGORITHM * algs);

AROS_LH3(void,OSSL_PROVIDER_unquery_operation,
    AROS_LDA(const OSSL_PROVIDER *, prov, A0),
    AROS_LDA(int, operation_id, D0),
    AROS_LDA(const OSSL_ALGORITHM *, algs, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_PROVIDER_unquery_operation, prov, operation_id, algs);
    AROS_LIBFUNC_EXIT
}

const SSL_METHOD * LIB_OSSL_QUIC_client_method(struct Library * _base);

AROS_LH0(const SSL_METHOD *,OSSL_QUIC_client_method,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_QUIC_client_method);
    AROS_LIBFUNC_EXIT
}

const SSL_METHOD * LIB_OSSL_QUIC_client_thread_method(struct Library * _base);

AROS_LH0(const SSL_METHOD *,OSSL_QUIC_client_thread_method,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_QUIC_client_thread_method);
    AROS_LIBFUNC_EXIT
}

const SSL_METHOD * LIB_OSSL_QUIC_server_method(struct Library * _base);

AROS_LH0(const SSL_METHOD *,OSSL_QUIC_server_method,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_QUIC_server_method);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_ROLE_SPEC_CERT_ID_SYNTAX_free(struct Library * _base, OSSL_ROLE_SPEC_CERT_ID_SYNTAX * a);

AROS_LH1(void,OSSL_ROLE_SPEC_CERT_ID_SYNTAX_free,
    AROS_LDA(OSSL_ROLE_SPEC_CERT_ID_SYNTAX *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_ROLE_SPEC_CERT_ID_SYNTAX_free, a);
    AROS_LIBFUNC_EXIT
}

const ASN1_ITEM * LIB_OSSL_ROLE_SPEC_CERT_ID_SYNTAX_it(struct Library * _base);

AROS_LH0(const ASN1_ITEM *,OSSL_ROLE_SPEC_CERT_ID_SYNTAX_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_ROLE_SPEC_CERT_ID_SYNTAX_it);
    AROS_LIBFUNC_EXIT
}

OSSL_ROLE_SPEC_CERT_ID_SYNTAX * LIB_OSSL_ROLE_SPEC_CERT_ID_SYNTAX_new(struct Library * _base);

AROS_LH0(OSSL_ROLE_SPEC_CERT_ID_SYNTAX *,OSSL_ROLE_SPEC_CERT_ID_SYNTAX_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_ROLE_SPEC_CERT_ID_SYNTAX_new);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_ROLE_SPEC_CERT_ID_free(struct Library * _base, OSSL_ROLE_SPEC_CERT_ID * a);

AROS_LH1(void,OSSL_ROLE_SPEC_CERT_ID_free,
    AROS_LDA(OSSL_ROLE_SPEC_CERT_ID *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_ROLE_SPEC_CERT_ID_free, a);
    AROS_LIBFUNC_EXIT
}

const ASN1_ITEM * LIB_OSSL_ROLE_SPEC_CERT_ID_it(struct Library * _base);

AROS_LH0(const ASN1_ITEM *,OSSL_ROLE_SPEC_CERT_ID_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_ROLE_SPEC_CERT_ID_it);
    AROS_LIBFUNC_EXIT
}

OSSL_ROLE_SPEC_CERT_ID * LIB_OSSL_ROLE_SPEC_CERT_ID_new(struct Library * _base);

AROS_LH0(OSSL_ROLE_SPEC_CERT_ID *,OSSL_ROLE_SPEC_CERT_ID_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_ROLE_SPEC_CERT_ID_new);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_SELF_TEST_free(struct Library * _base, OSSL_SELF_TEST * st);

AROS_LH1(void,OSSL_SELF_TEST_free,
    AROS_LDA(OSSL_SELF_TEST *, st, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_SELF_TEST_free, st);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_SELF_TEST_get_callback(struct Library * _base, OSSL_LIB_CTX * libctx, OSSL_CALLBACK ** cb, void ** cbarg);

AROS_LH3(void,OSSL_SELF_TEST_get_callback,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(OSSL_CALLBACK **, cb, A1),
    AROS_LDA(void **, cbarg, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_SELF_TEST_get_callback, libctx, cb, cbarg);
    AROS_LIBFUNC_EXIT
}

OSSL_SELF_TEST * LIB_OSSL_SELF_TEST_new(struct Library * _base, OSSL_CALLBACK * cb, void * cbarg);

AROS_LH2(OSSL_SELF_TEST *,OSSL_SELF_TEST_new,
    AROS_LDA(OSSL_CALLBACK *, cb, A0),
    AROS_LDA(void *, cbarg, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_SELF_TEST_new, cb, cbarg);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_SELF_TEST_onbegin(struct Library * _base, OSSL_SELF_TEST * st, const char * type, const char * desc);

AROS_LH3(void,OSSL_SELF_TEST_onbegin,
    AROS_LDA(OSSL_SELF_TEST *, st, A0),
    AROS_LDA(const char *, type, A1),
    AROS_LDA(const char *, desc, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_SELF_TEST_onbegin, st, type, desc);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_SELF_TEST_oncorrupt_byte(struct Library * _base, OSSL_SELF_TEST * st, unsigned char * bytes);

AROS_LH2(int,OSSL_SELF_TEST_oncorrupt_byte,
    AROS_LDA(OSSL_SELF_TEST *, st, A0),
    AROS_LDA(unsigned char *, bytes, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_SELF_TEST_oncorrupt_byte, st, bytes);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_SELF_TEST_onend(struct Library * _base, OSSL_SELF_TEST * st, int ret);

AROS_LH2(void,OSSL_SELF_TEST_onend,
    AROS_LDA(OSSL_SELF_TEST *, st, A0),
    AROS_LDA(int, ret, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_SELF_TEST_onend, st, ret);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_SELF_TEST_set_callback(struct Library * _base, OSSL_LIB_CTX * libctx, OSSL_CALLBACK * cb, void * cbarg);

AROS_LH3(void,OSSL_SELF_TEST_set_callback,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(OSSL_CALLBACK *, cb, A1),
    AROS_LDA(void *, cbarg, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_SELF_TEST_set_callback, libctx, cb, cbarg);
    AROS_LIBFUNC_EXIT
}

EVP_PKEY * LIB_OSSL_STORE_INFO_get0_PUBKEY(struct Library * _base, const OSSL_STORE_INFO * info);

AROS_LH1(EVP_PKEY *,OSSL_STORE_INFO_get0_PUBKEY,
    AROS_LDA(const OSSL_STORE_INFO *, info, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_STORE_INFO_get0_PUBKEY, info);
    AROS_LIBFUNC_EXIT
}

void * LIB_OSSL_STORE_INFO_get0_data(struct Library * _base, int type, const OSSL_STORE_INFO * info);

AROS_LH2(void *,OSSL_STORE_INFO_get0_data,
    AROS_LDA(int, type, D0),
    AROS_LDA(const OSSL_STORE_INFO *, info, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_STORE_INFO_get0_data, type, info);
    AROS_LIBFUNC_EXIT
}

EVP_PKEY * LIB_OSSL_STORE_INFO_get1_PUBKEY(struct Library * _base, const OSSL_STORE_INFO * info);

AROS_LH1(EVP_PKEY *,OSSL_STORE_INFO_get1_PUBKEY,
    AROS_LDA(const OSSL_STORE_INFO *, info, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_STORE_INFO_get1_PUBKEY, info);
    AROS_LIBFUNC_EXIT
}

OSSL_STORE_INFO * LIB_OSSL_STORE_INFO_new(struct Library * _base, int type, void * data);

AROS_LH2(OSSL_STORE_INFO *,OSSL_STORE_INFO_new,
    AROS_LDA(int, type, D0),
    AROS_LDA(void *, data, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_STORE_INFO_new, type, data);
    AROS_LIBFUNC_EXIT
}

OSSL_STORE_INFO * LIB_OSSL_STORE_INFO_new_PUBKEY(struct Library * _base, EVP_PKEY * pubkey);

AROS_LH1(OSSL_STORE_INFO *,OSSL_STORE_INFO_new_PUBKEY,
    AROS_LDA(EVP_PKEY *, pubkey, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_STORE_INFO_new_PUBKEY, pubkey);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_STORE_LOADER_do_all_provided(struct Library * _base, OSSL_LIB_CTX * libctx, void * arg);

AROS_LH2(void,OSSL_STORE_LOADER_do_all_provided,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(void *, arg, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_STORE_LOADER_do_all_provided, libctx, arg);
    AROS_LIBFUNC_EXIT
}

OSSL_STORE_LOADER * LIB_OSSL_STORE_LOADER_fetch(struct Library * _base, OSSL_LIB_CTX * libctx, const char * scheme, const char * properties);

AROS_LH3(OSSL_STORE_LOADER *,OSSL_STORE_LOADER_fetch,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, scheme, A1),
    AROS_LDA(const char *, properties, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_STORE_LOADER_fetch, libctx, scheme, properties);
    AROS_LIBFUNC_EXIT
}

const char * LIB_OSSL_STORE_LOADER_get0_description(struct Library * _base, const OSSL_STORE_LOADER * loader);

AROS_LH1(const char *,OSSL_STORE_LOADER_get0_description,
    AROS_LDA(const OSSL_STORE_LOADER *, loader, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_STORE_LOADER_get0_description, loader);
    AROS_LIBFUNC_EXIT
}

const char * LIB_OSSL_STORE_LOADER_get0_properties(struct Library * _base, const OSSL_STORE_LOADER * loader);

AROS_LH1(const char *,OSSL_STORE_LOADER_get0_properties,
    AROS_LDA(const OSSL_STORE_LOADER *, loader, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_STORE_LOADER_get0_properties, loader);
    AROS_LIBFUNC_EXIT
}

const OSSL_PROVIDER * LIB_OSSL_STORE_LOADER_get0_provider(struct Library * _base, const OSSL_STORE_LOADER * loader);

AROS_LH1(const OSSL_PROVIDER *,OSSL_STORE_LOADER_get0_provider,
    AROS_LDA(const OSSL_STORE_LOADER *, loader, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_STORE_LOADER_get0_provider, loader);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_STORE_LOADER_is_a(struct Library * _base, const OSSL_STORE_LOADER * loader, const char * scheme);

AROS_LH2(int,OSSL_STORE_LOADER_is_a,
    AROS_LDA(const OSSL_STORE_LOADER *, loader, A0),
    AROS_LDA(const char *, scheme, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_STORE_LOADER_is_a, loader, scheme);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_STORE_LOADER_names_do_all(struct Library * _base, const OSSL_STORE_LOADER * loader, void * data);

AROS_LH2(int,OSSL_STORE_LOADER_names_do_all,
    AROS_LDA(const OSSL_STORE_LOADER *, loader, A0),
    AROS_LDA(void *, data, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_STORE_LOADER_names_do_all, loader, data);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_STORE_LOADER_set_attach(struct Library * _base, OSSL_STORE_LOADER * loader, OSSL_STORE_attach_fn attach_function);

AROS_LH2(int,OSSL_STORE_LOADER_set_attach,
    AROS_LDA(OSSL_STORE_LOADER *, loader, A0),
    AROS_LDA(OSSL_STORE_attach_fn, attach_function, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_STORE_LOADER_set_attach, loader, attach_function);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_STORE_LOADER_set_open_ex(struct Library * _base, OSSL_STORE_LOADER * loader, OSSL_STORE_open_ex_fn open_ex_function);

AROS_LH2(int,OSSL_STORE_LOADER_set_open_ex,
    AROS_LDA(OSSL_STORE_LOADER *, loader, A0),
    AROS_LDA(OSSL_STORE_open_ex_fn, open_ex_function, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_STORE_LOADER_set_open_ex, loader, open_ex_function);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_STORE_LOADER_up_ref(struct Library * _base, OSSL_STORE_LOADER * loader);

AROS_LH1(int,OSSL_STORE_LOADER_up_ref,
    AROS_LDA(OSSL_STORE_LOADER *, loader, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_STORE_LOADER_up_ref, loader);
    AROS_LIBFUNC_EXIT
}

OSSL_STORE_CTX * LIB_OSSL_STORE_attach(struct Library * _base, BIO * bio, const char * scheme, OSSL_LIB_CTX * libctx, const char * propq, const UI_METHOD * ui_method, void * ui_data, const OSSL_PARAM * params, OSSL_STORE_post_process_info_fn post_process, void * post_process_data);

AROS_LH9(OSSL_STORE_CTX *,OSSL_STORE_attach,
    AROS_LDA(BIO *, bio, A0),
    AROS_LDA(const char *, scheme, A1),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A2),
    AROS_LDA(const char *, propq, A3),
    AROS_LDA(const UI_METHOD *, ui_method, D0),
    AROS_LDA(void *, ui_data, D1),
    AROS_LDA(const OSSL_PARAM *, params, D2),
    AROS_LDA(OSSL_STORE_post_process_info_fn, post_process, D3),
    AROS_LDA(void *, post_process_data, D4),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_STORE_attach, bio, scheme, libctx, propq, ui_method, ui_data, params, post_process, post_process_data);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_STORE_delete(struct Library * _base, const char * uri, OSSL_LIB_CTX * libctx, const char * propq, const UI_METHOD * ui_method, void * ui_data, const OSSL_PARAM * params);

AROS_LH6(int,OSSL_STORE_delete,
    AROS_LDA(const char *, uri, A0),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A1),
    AROS_LDA(const char *, propq, A2),
    AROS_LDA(const UI_METHOD *, ui_method, A3),
    AROS_LDA(void *, ui_data, D0),
    AROS_LDA(const OSSL_PARAM *, params, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_STORE_delete, uri, libctx, propq, ui_method, ui_data, params);
    AROS_LIBFUNC_EXIT
}

OSSL_STORE_CTX * LIB_OSSL_STORE_open_ex(struct Library * _base, const char * uri, OSSL_LIB_CTX * libctx, const char * propq, const UI_METHOD * ui_method, void * ui_data, const OSSL_PARAM * params, OSSL_STORE_post_process_info_fn post_process, void * post_process_data);

AROS_LH8(OSSL_STORE_CTX *,OSSL_STORE_open_ex,
    AROS_LDA(const char *, uri, A0),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A1),
    AROS_LDA(const char *, propq, A2),
    AROS_LDA(const UI_METHOD *, ui_method, A3),
    AROS_LDA(void *, ui_data, D0),
    AROS_LDA(const OSSL_PARAM *, params, D1),
    AROS_LDA(OSSL_STORE_post_process_info_fn, post_process, D2),
    AROS_LDA(void *, post_process_data, D3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_STORE_open_ex, uri, libctx, propq, ui_method, ui_data, params, post_process, post_process_data);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_TARGETING_INFORMATION_free(struct Library * _base, OSSL_TARGETING_INFORMATION * a);

AROS_LH1(void,OSSL_TARGETING_INFORMATION_free,
    AROS_LDA(OSSL_TARGETING_INFORMATION *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_TARGETING_INFORMATION_free, a);
    AROS_LIBFUNC_EXIT
}

const ASN1_ITEM * LIB_OSSL_TARGETING_INFORMATION_it(struct Library * _base);

AROS_LH0(const ASN1_ITEM *,OSSL_TARGETING_INFORMATION_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_TARGETING_INFORMATION_it);
    AROS_LIBFUNC_EXIT
}

OSSL_TARGETING_INFORMATION * LIB_OSSL_TARGETING_INFORMATION_new(struct Library * _base);

AROS_LH0(OSSL_TARGETING_INFORMATION *,OSSL_TARGETING_INFORMATION_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_TARGETING_INFORMATION_new);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_TARGETS_free(struct Library * _base, OSSL_TARGETS * a);

AROS_LH1(void,OSSL_TARGETS_free,
    AROS_LDA(OSSL_TARGETS *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_TARGETS_free, a);
    AROS_LIBFUNC_EXIT
}

const ASN1_ITEM * LIB_OSSL_TARGETS_it(struct Library * _base);

AROS_LH0(const ASN1_ITEM *,OSSL_TARGETS_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_TARGETS_it);
    AROS_LIBFUNC_EXIT
}

OSSL_TARGETS * LIB_OSSL_TARGETS_new(struct Library * _base);

AROS_LH0(OSSL_TARGETS *,OSSL_TARGETS_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_TARGETS_new);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_TARGET_free(struct Library * _base, OSSL_TARGET * a);

AROS_LH1(void,OSSL_TARGET_free,
    AROS_LDA(OSSL_TARGET *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_TARGET_free, a);
    AROS_LIBFUNC_EXIT
}

const ASN1_ITEM * LIB_OSSL_TARGET_it(struct Library * _base);

AROS_LH0(const ASN1_ITEM *,OSSL_TARGET_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_TARGET_it);
    AROS_LIBFUNC_EXIT
}

OSSL_TARGET * LIB_OSSL_TARGET_new(struct Library * _base);

AROS_LH0(OSSL_TARGET *,OSSL_TARGET_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_TARGET_new);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_TIME_PERIOD_free(struct Library * _base, OSSL_TIME_PERIOD * a);

AROS_LH1(void,OSSL_TIME_PERIOD_free,
    AROS_LDA(OSSL_TIME_PERIOD *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_TIME_PERIOD_free, a);
    AROS_LIBFUNC_EXIT
}

const ASN1_ITEM * LIB_OSSL_TIME_PERIOD_it(struct Library * _base);

AROS_LH0(const ASN1_ITEM *,OSSL_TIME_PERIOD_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_TIME_PERIOD_it);
    AROS_LIBFUNC_EXIT
}

OSSL_TIME_PERIOD * LIB_OSSL_TIME_PERIOD_new(struct Library * _base);

AROS_LH0(OSSL_TIME_PERIOD *,OSSL_TIME_PERIOD_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_TIME_PERIOD_new);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_TIME_SPEC_ABSOLUTE_free(struct Library * _base, OSSL_TIME_SPEC_ABSOLUTE * a);

AROS_LH1(void,OSSL_TIME_SPEC_ABSOLUTE_free,
    AROS_LDA(OSSL_TIME_SPEC_ABSOLUTE *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_TIME_SPEC_ABSOLUTE_free, a);
    AROS_LIBFUNC_EXIT
}

const ASN1_ITEM * LIB_OSSL_TIME_SPEC_ABSOLUTE_it(struct Library * _base);

AROS_LH0(const ASN1_ITEM *,OSSL_TIME_SPEC_ABSOLUTE_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_TIME_SPEC_ABSOLUTE_it);
    AROS_LIBFUNC_EXIT
}

OSSL_TIME_SPEC_ABSOLUTE * LIB_OSSL_TIME_SPEC_ABSOLUTE_new(struct Library * _base);

AROS_LH0(OSSL_TIME_SPEC_ABSOLUTE *,OSSL_TIME_SPEC_ABSOLUTE_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_TIME_SPEC_ABSOLUTE_new);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_TIME_SPEC_DAY_free(struct Library * _base, OSSL_TIME_SPEC_DAY * a);

AROS_LH1(void,OSSL_TIME_SPEC_DAY_free,
    AROS_LDA(OSSL_TIME_SPEC_DAY *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_TIME_SPEC_DAY_free, a);
    AROS_LIBFUNC_EXIT
}

const ASN1_ITEM * LIB_OSSL_TIME_SPEC_DAY_it(struct Library * _base);

AROS_LH0(const ASN1_ITEM *,OSSL_TIME_SPEC_DAY_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_TIME_SPEC_DAY_it);
    AROS_LIBFUNC_EXIT
}

OSSL_TIME_SPEC_DAY * LIB_OSSL_TIME_SPEC_DAY_new(struct Library * _base);

AROS_LH0(OSSL_TIME_SPEC_DAY *,OSSL_TIME_SPEC_DAY_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_TIME_SPEC_DAY_new);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_TIME_SPEC_MONTH_free(struct Library * _base, OSSL_TIME_SPEC_MONTH * a);

AROS_LH1(void,OSSL_TIME_SPEC_MONTH_free,
    AROS_LDA(OSSL_TIME_SPEC_MONTH *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_TIME_SPEC_MONTH_free, a);
    AROS_LIBFUNC_EXIT
}

const ASN1_ITEM * LIB_OSSL_TIME_SPEC_MONTH_it(struct Library * _base);

AROS_LH0(const ASN1_ITEM *,OSSL_TIME_SPEC_MONTH_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_TIME_SPEC_MONTH_it);
    AROS_LIBFUNC_EXIT
}

OSSL_TIME_SPEC_MONTH * LIB_OSSL_TIME_SPEC_MONTH_new(struct Library * _base);

AROS_LH0(OSSL_TIME_SPEC_MONTH *,OSSL_TIME_SPEC_MONTH_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_TIME_SPEC_MONTH_new);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_TIME_SPEC_TIME_free(struct Library * _base, OSSL_TIME_SPEC_TIME * a);

AROS_LH1(void,OSSL_TIME_SPEC_TIME_free,
    AROS_LDA(OSSL_TIME_SPEC_TIME *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_TIME_SPEC_TIME_free, a);
    AROS_LIBFUNC_EXIT
}

const ASN1_ITEM * LIB_OSSL_TIME_SPEC_TIME_it(struct Library * _base);

AROS_LH0(const ASN1_ITEM *,OSSL_TIME_SPEC_TIME_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_TIME_SPEC_TIME_it);
    AROS_LIBFUNC_EXIT
}

OSSL_TIME_SPEC_TIME * LIB_OSSL_TIME_SPEC_TIME_new(struct Library * _base);

AROS_LH0(OSSL_TIME_SPEC_TIME *,OSSL_TIME_SPEC_TIME_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_TIME_SPEC_TIME_new);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_TIME_SPEC_WEEKS_free(struct Library * _base, OSSL_TIME_SPEC_WEEKS * a);

AROS_LH1(void,OSSL_TIME_SPEC_WEEKS_free,
    AROS_LDA(OSSL_TIME_SPEC_WEEKS *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_TIME_SPEC_WEEKS_free, a);
    AROS_LIBFUNC_EXIT
}

const ASN1_ITEM * LIB_OSSL_TIME_SPEC_WEEKS_it(struct Library * _base);

AROS_LH0(const ASN1_ITEM *,OSSL_TIME_SPEC_WEEKS_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_TIME_SPEC_WEEKS_it);
    AROS_LIBFUNC_EXIT
}

OSSL_TIME_SPEC_WEEKS * LIB_OSSL_TIME_SPEC_WEEKS_new(struct Library * _base);

AROS_LH0(OSSL_TIME_SPEC_WEEKS *,OSSL_TIME_SPEC_WEEKS_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_TIME_SPEC_WEEKS_new);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_TIME_SPEC_X_DAY_OF_free(struct Library * _base, OSSL_TIME_SPEC_X_DAY_OF * a);

AROS_LH1(void,OSSL_TIME_SPEC_X_DAY_OF_free,
    AROS_LDA(OSSL_TIME_SPEC_X_DAY_OF *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_TIME_SPEC_X_DAY_OF_free, a);
    AROS_LIBFUNC_EXIT
}

const ASN1_ITEM * LIB_OSSL_TIME_SPEC_X_DAY_OF_it(struct Library * _base);

AROS_LH0(const ASN1_ITEM *,OSSL_TIME_SPEC_X_DAY_OF_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_TIME_SPEC_X_DAY_OF_it);
    AROS_LIBFUNC_EXIT
}

OSSL_TIME_SPEC_X_DAY_OF * LIB_OSSL_TIME_SPEC_X_DAY_OF_new(struct Library * _base);

AROS_LH0(OSSL_TIME_SPEC_X_DAY_OF *,OSSL_TIME_SPEC_X_DAY_OF_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_TIME_SPEC_X_DAY_OF_new);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_TIME_SPEC_free(struct Library * _base, OSSL_TIME_SPEC * a);

AROS_LH1(void,OSSL_TIME_SPEC_free,
    AROS_LDA(OSSL_TIME_SPEC *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_TIME_SPEC_free, a);
    AROS_LIBFUNC_EXIT
}

const ASN1_ITEM * LIB_OSSL_TIME_SPEC_it(struct Library * _base);

AROS_LH0(const ASN1_ITEM *,OSSL_TIME_SPEC_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_TIME_SPEC_it);
    AROS_LIBFUNC_EXIT
}

OSSL_TIME_SPEC * LIB_OSSL_TIME_SPEC_new(struct Library * _base);

AROS_LH0(OSSL_TIME_SPEC *,OSSL_TIME_SPEC_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_TIME_SPEC_new);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_USER_NOTICE_SYNTAX_free(struct Library * _base, OSSL_USER_NOTICE_SYNTAX * a);

AROS_LH1(void,OSSL_USER_NOTICE_SYNTAX_free,
    AROS_LDA(OSSL_USER_NOTICE_SYNTAX *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_USER_NOTICE_SYNTAX_free, a);
    AROS_LIBFUNC_EXIT
}

const ASN1_ITEM * LIB_OSSL_USER_NOTICE_SYNTAX_it(struct Library * _base);

AROS_LH0(const ASN1_ITEM *,OSSL_USER_NOTICE_SYNTAX_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_USER_NOTICE_SYNTAX_it);
    AROS_LIBFUNC_EXIT
}

OSSL_USER_NOTICE_SYNTAX * LIB_OSSL_USER_NOTICE_SYNTAX_new(struct Library * _base);

AROS_LH0(OSSL_USER_NOTICE_SYNTAX *,OSSL_USER_NOTICE_SYNTAX_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_USER_NOTICE_SYNTAX_new);
    AROS_LIBFUNC_EXIT
}

uint64_t LIB_OSSL_get_max_threads(struct Library * _base, OSSL_LIB_CTX * ctx);

AROS_LH1(uint64_t,OSSL_get_max_threads,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_get_max_threads, ctx);
    AROS_LIBFUNC_EXIT
}

uint32_t LIB_OSSL_get_thread_support_flags(struct Library * _base);

AROS_LH0(uint32_t,OSSL_get_thread_support_flags,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(OSSL_get_thread_support_flags);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_parse_url(struct Library * _base, const char * url, char ** pscheme, char ** puser, char ** phost, char ** pport, int * pport_num, char ** ppath, char ** pquery, char ** pfrag);

AROS_LH9(int,OSSL_parse_url,
    AROS_LDA(const char *, url, A0),
    AROS_LDA(char **, pscheme, A1),
    AROS_LDA(char **, puser, A2),
    AROS_LDA(char **, phost, A3),
    AROS_LDA(char **, pport, D0),
    AROS_LDA(int *, pport_num, D1),
    AROS_LDA(char **, ppath, D2),
    AROS_LDA(char **, pquery, D3),
    AROS_LDA(char **, pfrag, D4),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_parse_url, url, pscheme, puser, phost, pport, pport_num, ppath, pquery, pfrag);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_set_max_threads(struct Library * _base, OSSL_LIB_CTX * ctx, uint64_t max_threads);

AROS_LH2(int,OSSL_set_max_threads,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    AROS_LDA(uint64_t, max_threads, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_set_max_threads, ctx, max_threads);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_sleep(struct Library * _base, uint64_t millis);

AROS_LH1(void,OSSL_sleep,
    AROS_LDA(uint64_t, millis, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_sleep, millis);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_trace_enabled(struct Library * _base, int category);

AROS_LH1(int,OSSL_trace_enabled,
    AROS_LDA(int, category, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_trace_enabled, category);
    AROS_LIBFUNC_EXIT
}

BIO * LIB_OSSL_trace_begin(struct Library * _base, int category);

AROS_LH1(BIO *,OSSL_trace_begin,
    AROS_LDA(int, category, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_trace_begin, category);
    AROS_LIBFUNC_EXIT
}

void LIB_OSSL_trace_end(struct Library * _base, int category, BIO * channel);

AROS_LH2(void,OSSL_trace_end,
    AROS_LDA(int, category, D0),
    AROS_LDA(BIO *, channel, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(OSSL_trace_end, category, channel);
    AROS_LIBFUNC_EXIT
}

int LIB_OSSL_trace_string(struct Library * _base, BIO * out, int text, int full, const unsigned char * data, size_t size);

AROS_LH5(int,OSSL_trace_string,
    AROS_LDA(BIO *, out, A0),
    AROS_LDA(int, text, D0),
    AROS_LDA(int, full, D1),
    AROS_LDA(const unsigned char *, data, A1),
    AROS_LDA(size_t, size, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(OSSL_trace_string, out, text, full, data, size);
    AROS_LIBFUNC_EXIT
}

void LIB_PBMAC1PARAM_free(struct Library * _base, PBMAC1PARAM * a);

AROS_LH1(void,PBMAC1PARAM_free,
    AROS_LDA(PBMAC1PARAM *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(PBMAC1PARAM_free, a);
    AROS_LIBFUNC_EXIT
}

const ASN1_ITEM * LIB_PBMAC1PARAM_it(struct Library * _base);

AROS_LH0(const ASN1_ITEM *,PBMAC1PARAM_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(PBMAC1PARAM_it);
    AROS_LIBFUNC_EXIT
}

PBMAC1PARAM * LIB_PBMAC1PARAM_new(struct Library * _base);

AROS_LH0(PBMAC1PARAM *,PBMAC1PARAM_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(PBMAC1PARAM_new);
    AROS_LIBFUNC_EXIT
}

PBKDF2PARAM * LIB_PBMAC1_get1_pbkdf2_param(struct Library * _base, const X509_ALGOR * macalg);

AROS_LH1(PBKDF2PARAM *,PBMAC1_get1_pbkdf2_param,
    AROS_LDA(const X509_ALGOR *, macalg, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(PBMAC1_get1_pbkdf2_param, macalg);
    AROS_LIBFUNC_EXIT
}

EVP_PKEY * LIB_PEM_read_bio_PUBKEY_ex(struct Library * _base, BIO * out, EVP_PKEY ** x, pem_password_cb * cb, void * u, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH6(EVP_PKEY *,PEM_read_bio_PUBKEY_ex,
    AROS_LDA(BIO *, out, A0),
    AROS_LDA(EVP_PKEY **, x, A1),
    AROS_LDA(pem_password_cb *, cb, A2),
    AROS_LDA(void *, u, A3),
    AROS_LDA(OSSL_LIB_CTX *, libctx, D0),
    AROS_LDA(const char *, propq, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(PEM_read_bio_PUBKEY_ex, out, x, cb, u, libctx, propq);
    AROS_LIBFUNC_EXIT
}

EVP_PKEY * LIB_PEM_read_bio_Parameters_ex(struct Library * _base, BIO * bp, EVP_PKEY ** x, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH4(EVP_PKEY *,PEM_read_bio_Parameters_ex,
    AROS_LDA(BIO *, bp, A0),
    AROS_LDA(EVP_PKEY **, x, A1),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A2),
    AROS_LDA(const char *, propq, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(PEM_read_bio_Parameters_ex, bp, x, libctx, propq);
    AROS_LIBFUNC_EXIT
}

EVP_PKEY * LIB_PEM_read_bio_PrivateKey_ex(struct Library * _base, BIO * out, EVP_PKEY ** x, pem_password_cb * cb, void * u, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH6(EVP_PKEY *,PEM_read_bio_PrivateKey_ex,
    AROS_LDA(BIO *, out, A0),
    AROS_LDA(EVP_PKEY **, x, A1),
    AROS_LDA(pem_password_cb *, cb, A2),
    AROS_LDA(void *, u, A3),
    AROS_LDA(OSSL_LIB_CTX *, libctx, D0),
    AROS_LDA(const char *, propq, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(PEM_read_bio_PrivateKey_ex, out, x, cb, u, libctx, propq);
    AROS_LIBFUNC_EXIT
}

X509_ACERT * LIB_PEM_read_bio_X509_ACERT(struct Library * _base, BIO * out, X509_ACERT ** x, pem_password_cb * cb, void * u);

AROS_LH4(X509_ACERT *,PEM_read_bio_X509_ACERT,
    AROS_LDA(BIO *, out, A0),
    AROS_LDA(X509_ACERT **, x, A1),
    AROS_LDA(pem_password_cb *, cb, A2),
    AROS_LDA(void *, u, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(PEM_read_bio_X509_ACERT, out, x, cb, u);
    AROS_LIBFUNC_EXIT
}

X509_PUBKEY * LIB_PEM_read_bio_X509_PUBKEY(struct Library * _base, BIO * out, X509_PUBKEY ** x, pem_password_cb * cb, void * u);

AROS_LH4(X509_PUBKEY *,PEM_read_bio_X509_PUBKEY,
    AROS_LDA(BIO *, out, A0),
    AROS_LDA(X509_PUBKEY **, x, A1),
    AROS_LDA(pem_password_cb *, cb, A2),
    AROS_LDA(void *, u, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(PEM_read_bio_X509_PUBKEY, out, x, cb, u);
    AROS_LIBFUNC_EXIT
}

int LIB_PEM_write_bio_PUBKEY_ex(struct Library * _base, BIO * out, const EVP_PKEY * x, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH4(int,PEM_write_bio_PUBKEY_ex,
    AROS_LDA(BIO *, out, A0),
    AROS_LDA(const EVP_PKEY *, x, A1),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A2),
    AROS_LDA(const char *, propq, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(PEM_write_bio_PUBKEY_ex, out, x, libctx, propq);
    AROS_LIBFUNC_EXIT
}

int LIB_PEM_write_bio_PrivateKey_ex(struct Library * _base, BIO * out, const EVP_PKEY * x, const EVP_CIPHER * enc, const unsigned char * kstr, int klen, pem_password_cb * cb, void * u, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH9(int,PEM_write_bio_PrivateKey_ex,
    AROS_LDA(BIO *, out, A0),
    AROS_LDA(const EVP_PKEY *, x, A1),
    AROS_LDA(const EVP_CIPHER *, enc, A2),
    AROS_LDA(const unsigned char *, kstr, A3),
    AROS_LDA(int, klen, D0),
    AROS_LDA(pem_password_cb *, cb, D1),
    AROS_LDA(void *, u, D2),
    AROS_LDA(OSSL_LIB_CTX *, libctx, D3),
    AROS_LDA(const char *, propq, D4),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(PEM_write_bio_PrivateKey_ex, out, x, enc, kstr, klen, cb, u, libctx, propq);
    AROS_LIBFUNC_EXIT
}

int LIB_PEM_write_bio_X509_ACERT(struct Library * _base, BIO * out, const X509_ACERT * x);

AROS_LH2(int,PEM_write_bio_X509_ACERT,
    AROS_LDA(BIO *, out, A0),
    AROS_LDA(const X509_ACERT *, x, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(PEM_write_bio_X509_ACERT, out, x);
    AROS_LIBFUNC_EXIT
}

int LIB_PEM_write_bio_X509_PUBKEY(struct Library * _base, BIO * out, const X509_PUBKEY * x);

AROS_LH2(int,PEM_write_bio_X509_PUBKEY,
    AROS_LDA(BIO *, out, A0),
    AROS_LDA(const X509_PUBKEY *, x, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(PEM_write_bio_X509_PUBKEY, out, x);
    AROS_LIBFUNC_EXIT
}

int LIB_PKCS12_PBE_keyivgen_ex(struct Library * _base, EVP_CIPHER_CTX * ctx, const char * pass, int passlen, ASN1_TYPE * param, const EVP_CIPHER * cipher, const EVP_MD * md_type, int en_de, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH9(int,PKCS12_PBE_keyivgen_ex,
    AROS_LDA(EVP_CIPHER_CTX *, ctx, A0),
    AROS_LDA(const char *, pass, A1),
    AROS_LDA(int, passlen, D0),
    AROS_LDA(ASN1_TYPE *, param, A2),
    AROS_LDA(const EVP_CIPHER *, cipher, A3),
    AROS_LDA(const EVP_MD *, md_type, D1),
    AROS_LDA(int, en_de, D2),
    AROS_LDA(OSSL_LIB_CTX *, libctx, D3),
    AROS_LDA(const char *, propq, D4),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(PKCS12_PBE_keyivgen_ex, ctx, pass, passlen, param, cipher, md_type, en_de, libctx, propq);
    AROS_LIBFUNC_EXIT
}

PKCS12_SAFEBAG * LIB_PKCS12_SAFEBAG_create_pkcs8_encrypt_ex(struct Library * _base, int pbe_nid, const char * pass, int passlen, unsigned char * salt, int saltlen, int iter, PKCS8_PRIV_KEY_INFO * p8inf, OSSL_LIB_CTX * ctx, const char * propq);

AROS_LH9(PKCS12_SAFEBAG *,PKCS12_SAFEBAG_create_pkcs8_encrypt_ex,
    AROS_LDA(int, pbe_nid, D0),
    AROS_LDA(const char *, pass, A0),
    AROS_LDA(int, passlen, D1),
    AROS_LDA(unsigned char *, salt, A1),
    AROS_LDA(int, saltlen, D2),
    AROS_LDA(int, iter, D3),
    AROS_LDA(PKCS8_PRIV_KEY_INFO *, p8inf, A2),
    AROS_LDA(OSSL_LIB_CTX *, ctx, A3),
    AROS_LDA(const char *, propq, D4),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(PKCS12_SAFEBAG_create_pkcs8_encrypt_ex, pbe_nid, pass, passlen, salt, saltlen, iter, p8inf, ctx, propq);
    AROS_LIBFUNC_EXIT
}

PKCS12_SAFEBAG * LIB_PKCS12_SAFEBAG_create_secret(struct Library * _base, int type, int vtype, const unsigned char * value, int len);

AROS_LH4(PKCS12_SAFEBAG *,PKCS12_SAFEBAG_create_secret,
    AROS_LDA(int, type, D0),
    AROS_LDA(int, vtype, D1),
    AROS_LDA(const unsigned char *, value, A0),
    AROS_LDA(int, len, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(PKCS12_SAFEBAG_create_secret, type, vtype, value, len);
    AROS_LIBFUNC_EXIT
}

const ASN1_TYPE * LIB_PKCS12_SAFEBAG_get0_bag_obj(struct Library * _base, const PKCS12_SAFEBAG * bag);

AROS_LH1(const ASN1_TYPE *,PKCS12_SAFEBAG_get0_bag_obj,
    AROS_LDA(const PKCS12_SAFEBAG *, bag, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(PKCS12_SAFEBAG_get0_bag_obj, bag);
    AROS_LIBFUNC_EXIT
}

const ASN1_OBJECT * LIB_PKCS12_SAFEBAG_get0_bag_type(struct Library * _base, const PKCS12_SAFEBAG * bag);

AROS_LH1(const ASN1_OBJECT *,PKCS12_SAFEBAG_get0_bag_type,
    AROS_LDA(const PKCS12_SAFEBAG *, bag, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(PKCS12_SAFEBAG_get0_bag_type, bag);
    AROS_LIBFUNC_EXIT
}

X509 * LIB_PKCS12_SAFEBAG_get1_cert_ex(struct Library * _base, const PKCS12_SAFEBAG * bag, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH3(X509 *,PKCS12_SAFEBAG_get1_cert_ex,
    AROS_LDA(const PKCS12_SAFEBAG *, bag, A0),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A1),
    AROS_LDA(const char *, propq, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(PKCS12_SAFEBAG_get1_cert_ex, bag, libctx, propq);
    AROS_LIBFUNC_EXIT
}

X509_CRL * LIB_PKCS12_SAFEBAG_get1_crl_ex(struct Library * _base, const PKCS12_SAFEBAG * bag, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH3(X509_CRL *,PKCS12_SAFEBAG_get1_crl_ex,
    AROS_LDA(const PKCS12_SAFEBAG *, bag, A0),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A1),
    AROS_LDA(const char *, propq, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(PKCS12_SAFEBAG_get1_crl_ex, bag, libctx, propq);
    AROS_LIBFUNC_EXIT
}

int LIB_PKCS12_add1_attr_by_NID(struct Library * _base, PKCS12_SAFEBAG * bag, int nid, int type, const unsigned char * bytes, int len);

AROS_LH5(int,PKCS12_add1_attr_by_NID,
    AROS_LDA(PKCS12_SAFEBAG *, bag, A0),
    AROS_LDA(int, nid, D0),
    AROS_LDA(int, type, D1),
    AROS_LDA(const unsigned char *, bytes, A1),
    AROS_LDA(int, len, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(PKCS12_add1_attr_by_NID, bag, nid, type, bytes, len);
    AROS_LIBFUNC_EXIT
}

int LIB_PKCS12_add1_attr_by_txt(struct Library * _base, PKCS12_SAFEBAG * bag, const char * attrname, int type, const unsigned char * bytes, int len);

AROS_LH5(int,PKCS12_add1_attr_by_txt,
    AROS_LDA(PKCS12_SAFEBAG *, bag, A0),
    AROS_LDA(const char *, attrname, A1),
    AROS_LDA(int, type, D0),
    AROS_LDA(const unsigned char *, bytes, A2),
    AROS_LDA(int, len, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(PKCS12_add1_attr_by_txt, bag, attrname, type, bytes, len);
    AROS_LIBFUNC_EXIT
}

void * LIB_PKCS12_create_ex2_amiga_2(struct Library * _base, int iter, int mac_iter, int keytype, OSSL_LIB_CTX * ctx, const char * propq, PKCS12_create_cb * cb, void * cbarg);

AROS_LH7(void *,PKCS12_create_ex2_amiga_2,
    AROS_LDA(int, iter, D0),
    AROS_LDA(int, mac_iter, D1),
    AROS_LDA(int, keytype, D2),
    AROS_LDA(OSSL_LIB_CTX *, ctx, A1),
    AROS_LDA(const char *, propq, A2),
    AROS_LDA(PKCS12_create_cb *, cb, A3),
    AROS_LDA(void *, cbarg, D3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(PKCS12_create_ex2_amiga_2, iter, mac_iter, keytype, ctx, propq, cb, cbarg);
    AROS_LIBFUNC_EXIT
}

PKCS8_PRIV_KEY_INFO * LIB_PKCS12_decrypt_skey_ex(struct Library * _base, const PKCS12_SAFEBAG * bag, const char * pass, int passlen, OSSL_LIB_CTX * ctx, const char * propq);

AROS_LH5(PKCS8_PRIV_KEY_INFO *,PKCS12_decrypt_skey_ex,
    AROS_LDA(const PKCS12_SAFEBAG *, bag, A0),
    AROS_LDA(const char *, pass, A1),
    AROS_LDA(int, passlen, D0),
    AROS_LDA(OSSL_LIB_CTX *, ctx, A2),
    AROS_LDA(const char *, propq, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(PKCS12_decrypt_skey_ex, bag, pass, passlen, ctx, propq);
    AROS_LIBFUNC_EXIT
}

PKCS12 * LIB_PKCS12_init_ex(struct Library * _base, int mode, OSSL_LIB_CTX * ctx, const char * propq);

AROS_LH3(PKCS12 *,PKCS12_init_ex,
    AROS_LDA(int, mode, D0),
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    AROS_LDA(const char *, propq, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(PKCS12_init_ex, mode, ctx, propq);
    AROS_LIBFUNC_EXIT
}

void * LIB_PKCS12_item_decrypt_d2i_ex(struct Library * _base, const X509_ALGOR * algor, const ASN1_ITEM * it, const char * pass, int passlen, const ASN1_OCTET_STRING * oct, int zbuf, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH8(void *,PKCS12_item_decrypt_d2i_ex,
    AROS_LDA(const X509_ALGOR *, algor, A0),
    AROS_LDA(const ASN1_ITEM *, it, A1),
    AROS_LDA(const char *, pass, A2),
    AROS_LDA(int, passlen, D0),
    AROS_LDA(const ASN1_OCTET_STRING *, oct, A3),
    AROS_LDA(int, zbuf, D1),
    AROS_LDA(OSSL_LIB_CTX *, libctx, D2),
    AROS_LDA(const char *, propq, D3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(PKCS12_item_decrypt_d2i_ex, algor, it, pass, passlen, oct, zbuf, libctx, propq);
    AROS_LIBFUNC_EXIT
}

ASN1_OCTET_STRING * LIB_PKCS12_item_i2d_encrypt_ex(struct Library * _base, X509_ALGOR * algor, const ASN1_ITEM * it, const char * pass, int passlen, void * obj, int zbuf, OSSL_LIB_CTX * ctx, const char * propq);

AROS_LH8(ASN1_OCTET_STRING *,PKCS12_item_i2d_encrypt_ex,
    AROS_LDA(X509_ALGOR *, algor, A0),
    AROS_LDA(const ASN1_ITEM *, it, A1),
    AROS_LDA(const char *, pass, A2),
    AROS_LDA(int, passlen, D0),
    AROS_LDA(void *, obj, A3),
    AROS_LDA(int, zbuf, D1),
    AROS_LDA(OSSL_LIB_CTX *, ctx, D2),
    AROS_LDA(const char *, propq, D3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(PKCS12_item_i2d_encrypt_ex, algor, it, pass, passlen, obj, zbuf, ctx, propq);
    AROS_LIBFUNC_EXIT
}

int LIB_PKCS12_key_gen_asc_ex(struct Library * _base, const char * pass, int passlen, unsigned char * salt, int saltlen, int id, int iter, int n, unsigned char * out, const EVP_MD * md_type, OSSL_LIB_CTX * ctx, const char * propq);

AROS_LH11(int,PKCS12_key_gen_asc_ex,
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
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(PKCS12_key_gen_asc_ex, pass, passlen, salt, saltlen, id, iter, n, out, md_type, ctx, propq);
    AROS_LIBFUNC_EXIT
}

int LIB_PKCS12_key_gen_uni_ex(struct Library * _base, unsigned char * pass, int passlen, unsigned char * salt, int saltlen, int id, int iter, int n, unsigned char * out, const EVP_MD * md_type, OSSL_LIB_CTX * ctx, const char * propq);

AROS_LH11(int,PKCS12_key_gen_uni_ex,
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
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(PKCS12_key_gen_uni_ex, pass, passlen, salt, saltlen, id, iter, n, out, md_type, ctx, propq);
    AROS_LIBFUNC_EXIT
}

int LIB_PKCS12_key_gen_utf8_ex(struct Library * _base, const char * pass, int passlen, unsigned char * salt, int saltlen, int id, int iter, int n, unsigned char * out, const EVP_MD * md_type, OSSL_LIB_CTX * ctx, const char * propq);

AROS_LH11(int,PKCS12_key_gen_utf8_ex,
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
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(PKCS12_key_gen_utf8_ex, pass, passlen, salt, saltlen, id, iter, n, out, md_type, ctx, propq);
    AROS_LIBFUNC_EXIT
}

unsigned char * LIB_PKCS12_pbe_crypt_ex(struct Library * _base, const X509_ALGOR * algor, const char * pass, int passlen, const unsigned char * in, int inlen, unsigned char ** data, int * datalen, int en_de, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH10(unsigned char *,PKCS12_pbe_crypt_ex,
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
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(PKCS12_pbe_crypt_ex, algor, pass, passlen, in, inlen, data, datalen, en_de, libctx, propq);
    AROS_LIBFUNC_EXIT
}

int LIB_PKCS12_set_pbmac1_pbkdf2(struct Library * _base, PKCS12 * p12, const char * pass, int passlen, unsigned char * salt, int saltlen, int iter, const EVP_MD * md_type, const char * prf_md_name);

AROS_LH8(int,PKCS12_set_pbmac1_pbkdf2,
    AROS_LDA(PKCS12 *, p12, A0),
    AROS_LDA(const char *, pass, A1),
    AROS_LDA(int, passlen, D0),
    AROS_LDA(unsigned char *, salt, A2),
    AROS_LDA(int, saltlen, D1),
    AROS_LDA(int, iter, D2),
    AROS_LDA(const EVP_MD *, md_type, A3),
    AROS_LDA(const char *, prf_md_name, D3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(PKCS12_set_pbmac1_pbkdf2, p12, pass, passlen, salt, saltlen, iter, md_type, prf_md_name);
    AROS_LIBFUNC_EXIT
}

int LIB_PKCS5_PBE_keyivgen_ex(struct Library * _base, EVP_CIPHER_CTX * cctx, const char * pass, int passlen, ASN1_TYPE * param, const EVP_CIPHER * cipher, const EVP_MD * md, int en_de, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH9(int,PKCS5_PBE_keyivgen_ex,
    AROS_LDA(EVP_CIPHER_CTX *, cctx, A0),
    AROS_LDA(const char *, pass, A1),
    AROS_LDA(int, passlen, D0),
    AROS_LDA(ASN1_TYPE *, param, A2),
    AROS_LDA(const EVP_CIPHER *, cipher, A3),
    AROS_LDA(const EVP_MD *, md, D1),
    AROS_LDA(int, en_de, D2),
    AROS_LDA(OSSL_LIB_CTX *, libctx, D3),
    AROS_LDA(const char *, propq, D4),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(PKCS5_PBE_keyivgen_ex, cctx, pass, passlen, param, cipher, md, en_de, libctx, propq);
    AROS_LIBFUNC_EXIT
}

X509_ALGOR * LIB_PKCS5_pbe2_set_iv_ex(struct Library * _base, const EVP_CIPHER * cipher, int iter, unsigned char * salt, int saltlen, unsigned char * aiv, int prf_nid, OSSL_LIB_CTX * libctx);

AROS_LH7(X509_ALGOR *,PKCS5_pbe2_set_iv_ex,
    AROS_LDA(const EVP_CIPHER *, cipher, A0),
    AROS_LDA(int, iter, D0),
    AROS_LDA(unsigned char *, salt, A1),
    AROS_LDA(int, saltlen, D1),
    AROS_LDA(unsigned char *, aiv, A2),
    AROS_LDA(int, prf_nid, D2),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(PKCS5_pbe2_set_iv_ex, cipher, iter, salt, saltlen, aiv, prf_nid, libctx);
    AROS_LIBFUNC_EXIT
}

int LIB_PKCS5_pbe_set0_algor_ex(struct Library * _base, X509_ALGOR * algor, int alg, int iter, const unsigned char * salt, int saltlen, OSSL_LIB_CTX * libctx);

AROS_LH6(int,PKCS5_pbe_set0_algor_ex,
    AROS_LDA(X509_ALGOR *, algor, A0),
    AROS_LDA(int, alg, D0),
    AROS_LDA(int, iter, D1),
    AROS_LDA(const unsigned char *, salt, A1),
    AROS_LDA(int, saltlen, D2),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(PKCS5_pbe_set0_algor_ex, algor, alg, iter, salt, saltlen, libctx);
    AROS_LIBFUNC_EXIT
}

X509_ALGOR * LIB_PKCS5_pbe_set_ex(struct Library * _base, int alg, int iter, const unsigned char * salt, int saltlen, OSSL_LIB_CTX * libctx);

AROS_LH5(X509_ALGOR *,PKCS5_pbe_set_ex,
    AROS_LDA(int, alg, D0),
    AROS_LDA(int, iter, D1),
    AROS_LDA(const unsigned char *, salt, A0),
    AROS_LDA(int, saltlen, D2),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(PKCS5_pbe_set_ex, alg, iter, salt, saltlen, libctx);
    AROS_LIBFUNC_EXIT
}

X509_ALGOR * LIB_PKCS5_pbkdf2_set_ex(struct Library * _base, int iter, unsigned char * salt, int saltlen, int prf_nid, int keylen, OSSL_LIB_CTX * libctx);

AROS_LH6(X509_ALGOR *,PKCS5_pbkdf2_set_ex,
    AROS_LDA(int, iter, D0),
    AROS_LDA(unsigned char *, salt, A0),
    AROS_LDA(int, saltlen, D1),
    AROS_LDA(int, prf_nid, D2),
    AROS_LDA(int, keylen, D3),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(PKCS5_pbkdf2_set_ex, iter, salt, saltlen, prf_nid, keylen, libctx);
    AROS_LIBFUNC_EXIT
}

int LIB_PKCS5_v2_PBE_keyivgen_ex(struct Library * _base, EVP_CIPHER_CTX * ctx, const char * pass, int passlen, ASN1_TYPE * param, const EVP_CIPHER * cipher, const EVP_MD * md, int en_de, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH9(int,PKCS5_v2_PBE_keyivgen_ex,
    AROS_LDA(EVP_CIPHER_CTX *, ctx, A0),
    AROS_LDA(const char *, pass, A1),
    AROS_LDA(int, passlen, D0),
    AROS_LDA(ASN1_TYPE *, param, A2),
    AROS_LDA(const EVP_CIPHER *, cipher, A3),
    AROS_LDA(const EVP_MD *, md, D1),
    AROS_LDA(int, en_de, D2),
    AROS_LDA(OSSL_LIB_CTX *, libctx, D3),
    AROS_LDA(const char *, propq, D4),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(PKCS5_v2_PBE_keyivgen_ex, ctx, pass, passlen, param, cipher, md, en_de, libctx, propq);
    AROS_LIBFUNC_EXIT
}

int LIB_PKCS5_v2_scrypt_keyivgen_ex(struct Library * _base, EVP_CIPHER_CTX * ctx, const char * pass, int passlen, ASN1_TYPE * param, const EVP_CIPHER * c, const EVP_MD * md, int en_de, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH9(int,PKCS5_v2_scrypt_keyivgen_ex,
    AROS_LDA(EVP_CIPHER_CTX *, ctx, A0),
    AROS_LDA(const char *, pass, A1),
    AROS_LDA(int, passlen, D0),
    AROS_LDA(ASN1_TYPE *, param, A2),
    AROS_LDA(const EVP_CIPHER *, c, A3),
    AROS_LDA(const EVP_MD *, md, D1),
    AROS_LDA(int, en_de, D2),
    AROS_LDA(OSSL_LIB_CTX *, libctx, D3),
    AROS_LDA(const char *, propq, D4),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(PKCS5_v2_scrypt_keyivgen_ex, ctx, pass, passlen, param, c, md, en_de, libctx, propq);
    AROS_LIBFUNC_EXIT
}

ASN1_OCTET_STRING * LIB_PKCS7_get_octet_string(struct Library * _base, PKCS7 * p7);

AROS_LH1(ASN1_OCTET_STRING *,PKCS7_get_octet_string,
    AROS_LDA(PKCS7 *, p7, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(PKCS7_get_octet_string, p7);
    AROS_LIBFUNC_EXIT
}

PKCS7 * LIB_PKCS7_new_ex(struct Library * _base, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH2(PKCS7 *,PKCS7_new_ex,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, propq, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(PKCS7_new_ex, libctx, propq);
    AROS_LIBFUNC_EXIT
}

int LIB_PKCS7_type_is_other(struct Library * _base, PKCS7 * p7);

AROS_LH1(int,PKCS7_type_is_other,
    AROS_LDA(PKCS7 *, p7, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(PKCS7_type_is_other, p7);
    AROS_LIBFUNC_EXIT
}

PKCS8_PRIV_KEY_INFO * LIB_PKCS8_decrypt_ex(struct Library * _base, const X509_SIG * p8, const char * pass, int passlen, OSSL_LIB_CTX * ctx, const char * propq);

AROS_LH5(PKCS8_PRIV_KEY_INFO *,PKCS8_decrypt_ex,
    AROS_LDA(const X509_SIG *, p8, A0),
    AROS_LDA(const char *, pass, A1),
    AROS_LDA(int, passlen, D0),
    AROS_LDA(OSSL_LIB_CTX *, ctx, A2),
    AROS_LDA(const char *, propq, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(PKCS8_decrypt_ex, p8, pass, passlen, ctx, propq);
    AROS_LIBFUNC_EXIT
}

X509_SIG * LIB_PKCS8_encrypt_ex(struct Library * _base, int pbe_nid, const EVP_CIPHER * cipher, const char * pass, int passlen, unsigned char * salt, int saltlen, int iter, PKCS8_PRIV_KEY_INFO * p8, OSSL_LIB_CTX * ctx, const char * propq);

AROS_LH10(X509_SIG *,PKCS8_encrypt_ex,
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
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(PKCS8_encrypt_ex, pbe_nid, cipher, pass, passlen, salt, saltlen, iter, p8, ctx, propq);
    AROS_LIBFUNC_EXIT
}

int LIB_PKCS8_pkey_add1_attr(struct Library * _base, PKCS8_PRIV_KEY_INFO * p8, X509_ATTRIBUTE * attr);

AROS_LH2(int,PKCS8_pkey_add1_attr,
    AROS_LDA(PKCS8_PRIV_KEY_INFO *, p8, A0),
    AROS_LDA(X509_ATTRIBUTE *, attr, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(PKCS8_pkey_add1_attr, p8, attr);
    AROS_LIBFUNC_EXIT
}

int LIB_PKCS8_pkey_add1_attr_by_OBJ(struct Library * _base, PKCS8_PRIV_KEY_INFO * p8, const ASN1_OBJECT * obj, int type, const unsigned char * bytes, int len);

AROS_LH5(int,PKCS8_pkey_add1_attr_by_OBJ,
    AROS_LDA(PKCS8_PRIV_KEY_INFO *, p8, A0),
    AROS_LDA(const ASN1_OBJECT *, obj, A1),
    AROS_LDA(int, type, D0),
    AROS_LDA(const unsigned char *, bytes, A2),
    AROS_LDA(int, len, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(PKCS8_pkey_add1_attr_by_OBJ, p8, obj, type, bytes, len);
    AROS_LIBFUNC_EXIT
}

X509_SIG * LIB_PKCS8_set0_pbe_ex(struct Library * _base, const char * pass, int passlen, PKCS8_PRIV_KEY_INFO * p8inf, X509_ALGOR * pbe, OSSL_LIB_CTX * ctx, const char * propq);

AROS_LH6(X509_SIG *,PKCS8_set0_pbe_ex,
    AROS_LDA(const char *, pass, A0),
    AROS_LDA(int, passlen, D0),
    AROS_LDA(PKCS8_PRIV_KEY_INFO *, p8inf, A1),
    AROS_LDA(X509_ALGOR *, pbe, A2),
    AROS_LDA(OSSL_LIB_CTX *, ctx, A3),
    AROS_LDA(const char *, propq, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(PKCS8_set0_pbe_ex, pass, passlen, p8inf, pbe, ctx, propq);
    AROS_LIBFUNC_EXIT
}

int LIB_RAND_bytes_ex(struct Library * _base, OSSL_LIB_CTX * ctx, unsigned char * buf, size_t num, unsigned int strength);

AROS_LH4(int,RAND_bytes_ex,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    AROS_LDA(unsigned char *, buf, A1),
    AROS_LDA(size_t, num, D0),
    AROS_LDA(unsigned int, strength, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(RAND_bytes_ex, ctx, buf, num, strength);
    AROS_LIBFUNC_EXIT
}

EVP_RAND_CTX * LIB_RAND_get0_primary(struct Library * _base, OSSL_LIB_CTX * ctx);

AROS_LH1(EVP_RAND_CTX *,RAND_get0_primary,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(RAND_get0_primary, ctx);
    AROS_LIBFUNC_EXIT
}

EVP_RAND_CTX * LIB_RAND_get0_private(struct Library * _base, OSSL_LIB_CTX * ctx);

AROS_LH1(EVP_RAND_CTX *,RAND_get0_private,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(RAND_get0_private, ctx);
    AROS_LIBFUNC_EXIT
}

EVP_RAND_CTX * LIB_RAND_get0_public(struct Library * _base, OSSL_LIB_CTX * ctx);

AROS_LH1(EVP_RAND_CTX *,RAND_get0_public,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(RAND_get0_public, ctx);
    AROS_LIBFUNC_EXIT
}

int LIB_RAND_priv_bytes_ex(struct Library * _base, OSSL_LIB_CTX * ctx, unsigned char * buf, size_t num, unsigned int strength);

AROS_LH4(int,RAND_priv_bytes_ex,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    AROS_LDA(unsigned char *, buf, A1),
    AROS_LDA(size_t, num, D0),
    AROS_LDA(unsigned int, strength, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(RAND_priv_bytes_ex, ctx, buf, num, strength);
    AROS_LIBFUNC_EXIT
}

int LIB_RAND_set0_private(struct Library * _base, OSSL_LIB_CTX * ctx, EVP_RAND_CTX * rand);

AROS_LH2(int,RAND_set0_private,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    AROS_LDA(EVP_RAND_CTX *, rand, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(RAND_set0_private, ctx, rand);
    AROS_LIBFUNC_EXIT
}

int LIB_RAND_set0_public(struct Library * _base, OSSL_LIB_CTX * ctx, EVP_RAND_CTX * rand);

AROS_LH2(int,RAND_set0_public,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    AROS_LDA(EVP_RAND_CTX *, rand, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(RAND_set0_public, ctx, rand);
    AROS_LIBFUNC_EXIT
}

int LIB_RAND_set1_random_provider(struct Library * _base, OSSL_LIB_CTX * ctx, OSSL_PROVIDER * p);

AROS_LH2(int,RAND_set1_random_provider,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    AROS_LDA(OSSL_PROVIDER *, p, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(RAND_set1_random_provider, ctx, p);
    AROS_LIBFUNC_EXIT
}

int LIB_RAND_set_DRBG_type(struct Library * _base, OSSL_LIB_CTX * ctx, const char * drbg, const char * propq, const char * cipher, const char * digest);

AROS_LH5(int,RAND_set_DRBG_type,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    AROS_LDA(const char *, drbg, A1),
    AROS_LDA(const char *, propq, A2),
    AROS_LDA(const char *, cipher, A3),
    AROS_LDA(const char *, digest, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(RAND_set_DRBG_type, ctx, drbg, propq, cipher, digest);
    AROS_LIBFUNC_EXIT
}

int LIB_RAND_set_seed_source_type(struct Library * _base, OSSL_LIB_CTX * ctx, const char * seed, const char * propq);

AROS_LH3(int,RAND_set_seed_source_type,
    AROS_LDA(OSSL_LIB_CTX *, ctx, A0),
    AROS_LDA(const char *, seed, A1),
    AROS_LDA(const char *, propq, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(RAND_set_seed_source_type, ctx, seed, propq);
    AROS_LIBFUNC_EXIT
}

RSA_PSS_PARAMS * LIB_RSA_PSS_PARAMS_dup(struct Library * _base, const RSA_PSS_PARAMS * a);

AROS_LH1(RSA_PSS_PARAMS *,RSA_PSS_PARAMS_dup,
    AROS_LDA(const RSA_PSS_PARAMS *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(RSA_PSS_PARAMS_dup, a);
    AROS_LIBFUNC_EXIT
}

ASN1_VALUE * LIB_SMIME_read_ASN1_ex(struct Library * _base, BIO * bio, int flags, BIO ** bcont, const ASN1_ITEM * it, ASN1_VALUE ** x, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH7(ASN1_VALUE *,SMIME_read_ASN1_ex,
    AROS_LDA(BIO *, bio, A0),
    AROS_LDA(int, flags, D0),
    AROS_LDA(BIO **, bcont, A1),
    AROS_LDA(const ASN1_ITEM *, it, A2),
    AROS_LDA(ASN1_VALUE **, x, A3),
    AROS_LDA(OSSL_LIB_CTX *, libctx, D1),
    AROS_LDA(const char *, propq, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SMIME_read_ASN1_ex, bio, flags, bcont, it, x, libctx, propq);
    AROS_LIBFUNC_EXIT
}

CMS_ContentInfo * LIB_SMIME_read_CMS_ex(struct Library * _base, BIO * bio, int flags, BIO ** bcont, CMS_ContentInfo ** ci);

AROS_LH4(CMS_ContentInfo *,SMIME_read_CMS_ex,
    AROS_LDA(BIO *, bio, A0),
    AROS_LDA(int, flags, D0),
    AROS_LDA(BIO **, bcont, A1),
    AROS_LDA(CMS_ContentInfo **, ci, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SMIME_read_CMS_ex, bio, flags, bcont, ci);
    AROS_LIBFUNC_EXIT
}

PKCS7 * LIB_SMIME_read_PKCS7_ex(struct Library * _base, BIO * bio, BIO ** bcont, PKCS7 ** p7);

AROS_LH3(PKCS7 *,SMIME_read_PKCS7_ex,
    AROS_LDA(BIO *, bio, A0),
    AROS_LDA(BIO **, bcont, A1),
    AROS_LDA(PKCS7 **, p7, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SMIME_read_PKCS7_ex, bio, bcont, p7);
    AROS_LIBFUNC_EXIT
}

BIGNUM * LIB_SRP_Calc_B_ex(struct Library * _base, const BIGNUM * b, const BIGNUM * N, const BIGNUM * g, const BIGNUM * v, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH6(BIGNUM *,SRP_Calc_B_ex,
    AROS_LDA(const BIGNUM *, b, A0),
    AROS_LDA(const BIGNUM *, N, A1),
    AROS_LDA(const BIGNUM *, g, A2),
    AROS_LDA(const BIGNUM *, v, A3),
    AROS_LDA(OSSL_LIB_CTX *, libctx, D0),
    AROS_LDA(const char *, propq, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SRP_Calc_B_ex, b, N, g, v, libctx, propq);
    AROS_LIBFUNC_EXIT
}

BIGNUM * LIB_SRP_Calc_client_key_ex(struct Library * _base, const BIGNUM * N, const BIGNUM * B, const BIGNUM * g, const BIGNUM * x, const BIGNUM * a, const BIGNUM * u, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH8(BIGNUM *,SRP_Calc_client_key_ex,
    AROS_LDA(const BIGNUM *, N, A0),
    AROS_LDA(const BIGNUM *, B, A1),
    AROS_LDA(const BIGNUM *, g, A2),
    AROS_LDA(const BIGNUM *, x, A3),
    AROS_LDA(const BIGNUM *, a, D0),
    AROS_LDA(const BIGNUM *, u, D1),
    AROS_LDA(OSSL_LIB_CTX *, libctx, D2),
    AROS_LDA(const char *, propq, D3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SRP_Calc_client_key_ex, N, B, g, x, a, u, libctx, propq);
    AROS_LIBFUNC_EXIT
}

BIGNUM * LIB_SRP_Calc_u_ex(struct Library * _base, const BIGNUM * A, const BIGNUM * B, const BIGNUM * N, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH5(BIGNUM *,SRP_Calc_u_ex,
    AROS_LDA(const BIGNUM *, A, A0),
    AROS_LDA(const BIGNUM *, B, A1),
    AROS_LDA(const BIGNUM *, N, A2),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A3),
    AROS_LDA(const char *, propq, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SRP_Calc_u_ex, A, B, N, libctx, propq);
    AROS_LIBFUNC_EXIT
}

BIGNUM * LIB_SRP_Calc_x_ex(struct Library * _base, const BIGNUM * s, const char * user, const char * pass, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH5(BIGNUM *,SRP_Calc_x_ex,
    AROS_LDA(const BIGNUM *, s, A0),
    AROS_LDA(const char *, user, A1),
    AROS_LDA(const char *, pass, A2),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A3),
    AROS_LDA(const char *, propq, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SRP_Calc_x_ex, s, user, pass, libctx, propq);
    AROS_LIBFUNC_EXIT
}

int LIB_SRP_create_verifier_BN_ex(struct Library * _base, const char * user, const char * pass, BIGNUM ** salt, BIGNUM ** verifier, const BIGNUM * N, const BIGNUM * g, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH8(int,SRP_create_verifier_BN_ex,
    AROS_LDA(const char *, user, A0),
    AROS_LDA(const char *, pass, A1),
    AROS_LDA(BIGNUM **, salt, A2),
    AROS_LDA(BIGNUM **, verifier, A3),
    AROS_LDA(const BIGNUM *, N, D0),
    AROS_LDA(const BIGNUM *, g, D1),
    AROS_LDA(OSSL_LIB_CTX *, libctx, D2),
    AROS_LDA(const char *, propq, D3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SRP_create_verifier_BN_ex, user, pass, salt, verifier, N, g, libctx, propq);
    AROS_LIBFUNC_EXIT
}

char * LIB_SRP_create_verifier_ex(struct Library * _base, const char * user, const char * pass, char ** salt, char ** verifier, const char * N, const char * g, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH8(char *,SRP_create_verifier_ex,
    AROS_LDA(const char *, user, A0),
    AROS_LDA(const char *, pass, A1),
    AROS_LDA(char **, salt, A2),
    AROS_LDA(char **, verifier, A3),
    AROS_LDA(const char *, N, D0),
    AROS_LDA(const char *, g, D1),
    AROS_LDA(OSSL_LIB_CTX *, libctx, D2),
    AROS_LDA(const char *, propq, D3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SRP_create_verifier_ex, user, pass, salt, verifier, N, g, libctx, propq);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_CTX_compress_certs(struct Library * _base, SSL_CTX * ctx, int alg);

AROS_LH2(int,SSL_CTX_compress_certs,
    AROS_LDA(SSL_CTX *, ctx, A0),
    AROS_LDA(int, alg, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_CTX_compress_certs, ctx, alg);
    AROS_LIBFUNC_EXIT
}

void LIB_SSL_CTX_flush_sessions_ex(struct Library * _base, SSL_CTX * ctx, time_t tm);

AROS_LH2(void,SSL_CTX_flush_sessions_ex,
    AROS_LDA(SSL_CTX *, ctx, A0),
    AROS_LDA(time_t, tm, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(SSL_CTX_flush_sessions_ex, ctx, tm);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_CTX_get0_client_cert_type(struct Library * _base, const SSL_CTX * ctx, unsigned char ** t, size_t * len);

AROS_LH3(int,SSL_CTX_get0_client_cert_type,
    AROS_LDA(const SSL_CTX *, ctx, A0),
    AROS_LDA(unsigned char **, t, A1),
    AROS_LDA(size_t *, len, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_CTX_get0_client_cert_type, ctx, t, len);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_CTX_get0_server_cert_type(struct Library * _base, const SSL_CTX * s, unsigned char ** t, size_t * len);

AROS_LH3(int,SSL_CTX_get0_server_cert_type,
    AROS_LDA(const SSL_CTX *, s, A0),
    AROS_LDA(unsigned char **, t, A1),
    AROS_LDA(size_t *, len, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_CTX_get0_server_cert_type, s, t, len);
    AROS_LIBFUNC_EXIT
}

size_t LIB_SSL_CTX_get1_compressed_cert(struct Library * _base, SSL_CTX * ctx, int alg, unsigned char ** data, size_t * orig_len);

AROS_LH4(size_t,SSL_CTX_get1_compressed_cert,
    AROS_LDA(SSL_CTX *, ctx, A0),
    AROS_LDA(int, alg, D0),
    AROS_LDA(unsigned char **, data, A1),
    AROS_LDA(size_t *, orig_len, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_CTX_get1_compressed_cert, ctx, alg, data, orig_len);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_CTX_get_domain_flags(struct Library * _base, const SSL_CTX * ctx, uint64_t * domain_flags);

AROS_LH2(int,SSL_CTX_get_domain_flags,
    AROS_LDA(const SSL_CTX *, ctx, A0),
    AROS_LDA(uint64_t *, domain_flags, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_CTX_get_domain_flags, ctx, domain_flags);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_CTX_set1_cert_comp_preference(struct Library * _base, SSL_CTX * ctx, int * algs, size_t len);

AROS_LH3(int,SSL_CTX_set1_cert_comp_preference,
    AROS_LDA(SSL_CTX *, ctx, A0),
    AROS_LDA(int *, algs, A1),
    AROS_LDA(size_t, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_CTX_set1_cert_comp_preference, ctx, algs, len);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_CTX_set1_client_cert_type(struct Library * _base, SSL_CTX * ctx, const unsigned char * val, size_t len);

AROS_LH3(int,SSL_CTX_set1_client_cert_type,
    AROS_LDA(SSL_CTX *, ctx, A0),
    AROS_LDA(const unsigned char *, val, A1),
    AROS_LDA(size_t, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_CTX_set1_client_cert_type, ctx, val, len);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_CTX_set1_compressed_cert(struct Library * _base, SSL_CTX * ctx, int algorithm, unsigned char * comp_data, size_t comp_length, size_t orig_length);

AROS_LH5(int,SSL_CTX_set1_compressed_cert,
    AROS_LDA(SSL_CTX *, ctx, A0),
    AROS_LDA(int, algorithm, D0),
    AROS_LDA(unsigned char *, comp_data, A1),
    AROS_LDA(size_t, comp_length, D1),
    AROS_LDA(size_t, orig_length, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_CTX_set1_compressed_cert, ctx, algorithm, comp_data, comp_length, orig_length);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_CTX_set1_server_cert_type(struct Library * _base, SSL_CTX * ctx, const unsigned char * val, size_t len);

AROS_LH3(int,SSL_CTX_set1_server_cert_type,
    AROS_LDA(SSL_CTX *, ctx, A0),
    AROS_LDA(const unsigned char *, val, A1),
    AROS_LDA(size_t, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_CTX_set1_server_cert_type, ctx, val, len);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_CTX_set_block_padding_ex(struct Library * _base, SSL_CTX * ctx, size_t app_block_size, size_t hs_block_size);

AROS_LH3(int,SSL_CTX_set_block_padding_ex,
    AROS_LDA(SSL_CTX *, ctx, A0),
    AROS_LDA(size_t, app_block_size, D0),
    AROS_LDA(size_t, hs_block_size, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_CTX_set_block_padding_ex, ctx, app_block_size, hs_block_size);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_CTX_set_domain_flags(struct Library * _base, SSL_CTX * ctx, uint64_t domain_flags);

AROS_LH2(int,SSL_CTX_set_domain_flags,
    AROS_LDA(SSL_CTX *, ctx, A0),
    AROS_LDA(uint64_t, domain_flags, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_CTX_set_domain_flags, ctx, domain_flags);
    AROS_LIBFUNC_EXIT
}

void LIB_SSL_CTX_set_new_pending_conn_cb(struct Library * _base, SSL_CTX * c, SSL_new_pending_conn_cb_fn cb, void * arg);

AROS_LH3(void,SSL_CTX_set_new_pending_conn_cb,
    AROS_LDA(SSL_CTX *, c, A0),
    AROS_LDA(SSL_new_pending_conn_cb_fn, cb, A1),
    AROS_LDA(void *, arg, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(SSL_CTX_set_new_pending_conn_cb, c, cb, arg);
    AROS_LIBFUNC_EXIT
}

EVP_PKEY * LIB_SSL_SESSION_get0_peer_rpk(struct Library * _base, SSL_SESSION * s);

AROS_LH1(EVP_PKEY *,SSL_SESSION_get0_peer_rpk,
    AROS_LDA(SSL_SESSION *, s, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_SESSION_get0_peer_rpk, s);
    AROS_LIBFUNC_EXIT
}

time_t LIB_SSL_SESSION_get_time_ex(struct Library * _base, const SSL_SESSION * s);

AROS_LH1(time_t,SSL_SESSION_get_time_ex,
    AROS_LDA(const SSL_SESSION *, s, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_SESSION_get_time_ex, s);
    AROS_LIBFUNC_EXIT
}

time_t LIB_SSL_SESSION_set_time_ex(struct Library * _base, SSL_SESSION * s, time_t t);

AROS_LH2(time_t,SSL_SESSION_set_time_ex,
    AROS_LDA(SSL_SESSION *, s, A0),
    AROS_LDA(time_t, t, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_SESSION_set_time_ex, s, t);
    AROS_LIBFUNC_EXIT
}

SSL * LIB_SSL_accept_connection(struct Library * _base, SSL * ssl, uint64_t flags);

AROS_LH2(SSL *,SSL_accept_connection,
    AROS_LDA(SSL *, ssl, A0),
    AROS_LDA(uint64_t, flags, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_accept_connection, ssl, flags);
    AROS_LIBFUNC_EXIT
}

SSL * LIB_SSL_accept_stream(struct Library * _base, SSL * s, uint64_t flags);

AROS_LH2(SSL *,SSL_accept_stream,
    AROS_LDA(SSL *, s, A0),
    AROS_LDA(uint64_t, flags, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_accept_stream, s, flags);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_add_expected_rpk(struct Library * _base, SSL * s, EVP_PKEY * rpk);

AROS_LH2(int,SSL_add_expected_rpk,
    AROS_LDA(SSL *, s, A0),
    AROS_LDA(EVP_PKEY *, rpk, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_add_expected_rpk, s, rpk);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_client_hello_get_extension_order(struct Library * _base, SSL * s, uint16_t * exts, size_t * num_exts);

AROS_LH3(int,SSL_client_hello_get_extension_order,
    AROS_LDA(SSL *, s, A0),
    AROS_LDA(uint16_t *, exts, A1),
    AROS_LDA(size_t *, num_exts, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_client_hello_get_extension_order, s, exts, num_exts);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_compress_certs(struct Library * _base, SSL * ssl, int alg);

AROS_LH2(int,SSL_compress_certs,
    AROS_LDA(SSL *, ssl, A0),
    AROS_LDA(int, alg, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_compress_certs, ssl, alg);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_get0_client_cert_type(struct Library * _base, const SSL * s, unsigned char ** t, size_t * len);

AROS_LH3(int,SSL_get0_client_cert_type,
    AROS_LDA(const SSL *, s, A0),
    AROS_LDA(unsigned char **, t, A1),
    AROS_LDA(size_t *, len, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_get0_client_cert_type, s, t, len);
    AROS_LIBFUNC_EXIT
}

SSL * LIB_SSL_get0_connection(struct Library * _base, SSL * s);

AROS_LH1(SSL *,SSL_get0_connection,
    AROS_LDA(SSL *, s, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_get0_connection, s);
    AROS_LIBFUNC_EXIT
}

SSL * LIB_SSL_get0_domain(struct Library * _base, SSL * s);

AROS_LH1(SSL *,SSL_get0_domain,
    AROS_LDA(SSL *, s, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_get0_domain, s);
    AROS_LIBFUNC_EXIT
}

const char * LIB_SSL_get0_group_name(struct Library * _base, SSL * s);

AROS_LH1(const char *,SSL_get0_group_name,
    AROS_LDA(SSL *, s, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_get0_group_name, s);
    AROS_LIBFUNC_EXIT
}

SSL * LIB_SSL_get0_listener(struct Library * _base, SSL * s);

AROS_LH1(SSL *,SSL_get0_listener,
    AROS_LDA(SSL *, s, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_get0_listener, s);
    AROS_LIBFUNC_EXIT
}

EVP_PKEY * LIB_SSL_get0_peer_rpk(struct Library * _base, const SSL * s);

AROS_LH1(EVP_PKEY *,SSL_get0_peer_rpk,
    AROS_LDA(const SSL *, s, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_get0_peer_rpk, s);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_get0_server_cert_type(struct Library * _base, const SSL * s, unsigned char ** t, size_t * len);

AROS_LH3(int,SSL_get0_server_cert_type,
    AROS_LDA(const SSL *, s, A0),
    AROS_LDA(unsigned char **, t, A1),
    AROS_LDA(size_t *, len, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_get0_server_cert_type, s, t, len);
    AROS_LIBFUNC_EXIT
}

char * LIB_SSL_get1_builtin_sigalgs(struct Library * _base, OSSL_LIB_CTX * libctx);

AROS_LH1(char *,SSL_get1_builtin_sigalgs,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_get1_builtin_sigalgs, libctx);
    AROS_LIBFUNC_EXIT
}

size_t LIB_SSL_get1_compressed_cert(struct Library * _base, SSL * ssl, int alg, unsigned char ** data, size_t * orig_len);

AROS_LH4(size_t,SSL_get1_compressed_cert,
    AROS_LDA(SSL *, ssl, A0),
    AROS_LDA(int, alg, D0),
    AROS_LDA(unsigned char **, data, A1),
    AROS_LDA(size_t *, orig_len, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_get1_compressed_cert, ssl, alg, data, orig_len);
    AROS_LIBFUNC_EXIT
}

size_t LIB_SSL_get_accept_connection_queue_len(struct Library * _base, SSL * ssl);

AROS_LH1(size_t,SSL_get_accept_connection_queue_len,
    AROS_LDA(SSL *, ssl, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_get_accept_connection_queue_len, ssl);
    AROS_LIBFUNC_EXIT
}

size_t LIB_SSL_get_accept_stream_queue_len(struct Library * _base, SSL * s);

AROS_LH1(size_t,SSL_get_accept_stream_queue_len,
    AROS_LDA(SSL *, s, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_get_accept_stream_queue_len, s);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_get_blocking_mode(struct Library * _base, SSL * s);

AROS_LH1(int,SSL_get_blocking_mode,
    AROS_LDA(SSL *, s, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_get_blocking_mode, s);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_get_conn_close_info(struct Library * _base, SSL * ssl, SSL_CONN_CLOSE_INFO * info, size_t info_len);

AROS_LH3(int,SSL_get_conn_close_info,
    AROS_LDA(SSL *, ssl, A0),
    AROS_LDA(SSL_CONN_CLOSE_INFO *, info, A1),
    AROS_LDA(size_t, info_len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_get_conn_close_info, ssl, info, info_len);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_get_domain_flags(struct Library * _base, const SSL * ssl, uint64_t * domain_flags);

AROS_LH2(int,SSL_get_domain_flags,
    AROS_LDA(const SSL *, ssl, A0),
    AROS_LDA(uint64_t *, domain_flags, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_get_domain_flags, ssl, domain_flags);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_get_event_timeout(struct Library * _base, SSL * s, struct timeval * tv, int * is_infinite);

AROS_LH3(int,SSL_get_event_timeout,
    AROS_LDA(SSL *, s, A0),
    AROS_LDA(struct timeval *, tv, A1),
    AROS_LDA(int *, is_infinite, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_get_event_timeout, s, tv, is_infinite);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_get_handshake_rtt(struct Library * _base, const SSL * s, uint64_t * rtt);

AROS_LH2(int,SSL_get_handshake_rtt,
    AROS_LDA(const SSL *, s, A0),
    AROS_LDA(uint64_t *, rtt, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_get_handshake_rtt, s, rtt);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_get_negotiated_client_cert_type(struct Library * _base, const SSL * s);

AROS_LH1(int,SSL_get_negotiated_client_cert_type,
    AROS_LDA(const SSL *, s, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_get_negotiated_client_cert_type, s);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_get_negotiated_server_cert_type(struct Library * _base, const SSL * s);

AROS_LH1(int,SSL_get_negotiated_server_cert_type,
    AROS_LDA(const SSL *, s, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_get_negotiated_server_cert_type, s);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_get_rpoll_descriptor(struct Library * _base, SSL * s, BIO_POLL_DESCRIPTOR * desc);

AROS_LH2(int,SSL_get_rpoll_descriptor,
    AROS_LDA(SSL *, s, A0),
    AROS_LDA(BIO_POLL_DESCRIPTOR *, desc, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_get_rpoll_descriptor, s, desc);
    AROS_LIBFUNC_EXIT
}

uint64_t LIB_SSL_get_stream_id(struct Library * _base, SSL * s);

AROS_LH1(uint64_t,SSL_get_stream_id,
    AROS_LDA(SSL *, s, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_get_stream_id, s);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_get_stream_read_error_code(struct Library * _base, SSL * ssl, uint64_t * app_error_code);

AROS_LH2(int,SSL_get_stream_read_error_code,
    AROS_LDA(SSL *, ssl, A0),
    AROS_LDA(uint64_t *, app_error_code, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_get_stream_read_error_code, ssl, app_error_code);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_get_stream_read_state(struct Library * _base, SSL * ssl);

AROS_LH1(int,SSL_get_stream_read_state,
    AROS_LDA(SSL *, ssl, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_get_stream_read_state, ssl);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_get_stream_type(struct Library * _base, SSL * s);

AROS_LH1(int,SSL_get_stream_type,
    AROS_LDA(SSL *, s, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_get_stream_type, s);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_get_stream_write_error_code(struct Library * _base, SSL * ssl, uint64_t * app_error_code);

AROS_LH2(int,SSL_get_stream_write_error_code,
    AROS_LDA(SSL *, ssl, A0),
    AROS_LDA(uint64_t *, app_error_code, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_get_stream_write_error_code, ssl, app_error_code);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_get_stream_write_state(struct Library * _base, SSL * ssl);

AROS_LH1(int,SSL_get_stream_write_state,
    AROS_LDA(SSL *, ssl, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_get_stream_write_state, ssl);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_get_value_uint(struct Library * _base, SSL * s, uint32_t class_, uint32_t id, uint64_t * v);

AROS_LH4(int,SSL_get_value_uint,
    AROS_LDA(SSL *, s, A0),
    AROS_LDA(uint32_t, class_, D0),
    AROS_LDA(uint32_t, id, D1),
    AROS_LDA(uint64_t *, v, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_get_value_uint, s, class_, id, v);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_get_wpoll_descriptor(struct Library * _base, SSL * s, BIO_POLL_DESCRIPTOR * desc);

AROS_LH2(int,SSL_get_wpoll_descriptor,
    AROS_LDA(SSL *, s, A0),
    AROS_LDA(BIO_POLL_DESCRIPTOR *, desc, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_get_wpoll_descriptor, s, desc);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_handle_events(struct Library * _base, SSL * s);

AROS_LH1(int,SSL_handle_events,
    AROS_LDA(SSL *, s, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_handle_events, s);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_inject_net_dgram(struct Library * _base, SSL * s, const unsigned char * buf, size_t buf_len, const BIO_ADDR * peer, const BIO_ADDR * local);

AROS_LH5(int,SSL_inject_net_dgram,
    AROS_LDA(SSL *, s, A0),
    AROS_LDA(const unsigned char *, buf, A1),
    AROS_LDA(size_t, buf_len, D0),
    AROS_LDA(const BIO_ADDR *, peer, A2),
    AROS_LDA(const BIO_ADDR *, local, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_inject_net_dgram, s, buf, buf_len, peer, local);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_is_connection(struct Library * _base, SSL * s);

AROS_LH1(int,SSL_is_connection,
    AROS_LDA(SSL *, s, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_is_connection, s);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_is_domain(struct Library * _base, SSL * s);

AROS_LH1(int,SSL_is_domain,
    AROS_LDA(SSL *, s, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_is_domain, s);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_is_listener(struct Library * _base, SSL * ssl);

AROS_LH1(int,SSL_is_listener,
    AROS_LDA(SSL *, ssl, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_is_listener, ssl);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_is_quic(struct Library * _base, const SSL * s);

AROS_LH1(int,SSL_is_quic,
    AROS_LDA(const SSL *, s, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_is_quic, s);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_is_stream_local(struct Library * _base, SSL * s);

AROS_LH1(int,SSL_is_stream_local,
    AROS_LDA(SSL *, s, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_is_stream_local, s);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_is_tls(struct Library * _base, const SSL * s);

AROS_LH1(int,SSL_is_tls,
    AROS_LDA(const SSL *, s, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_is_tls, s);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_listen(struct Library * _base, SSL * ssl);

AROS_LH1(int,SSL_listen,
    AROS_LDA(SSL *, ssl, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_listen, ssl);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_net_read_desired(struct Library * _base, SSL * s);

AROS_LH1(int,SSL_net_read_desired,
    AROS_LDA(SSL *, s, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_net_read_desired, s);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_net_write_desired(struct Library * _base, SSL * s);

AROS_LH1(int,SSL_net_write_desired,
    AROS_LDA(SSL *, s, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_net_write_desired, s);
    AROS_LIBFUNC_EXIT
}

SSL * LIB_SSL_new_domain(struct Library * _base, SSL_CTX * ctx, uint64_t flags);

AROS_LH2(SSL *,SSL_new_domain,
    AROS_LDA(SSL_CTX *, ctx, A0),
    AROS_LDA(uint64_t, flags, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_new_domain, ctx, flags);
    AROS_LIBFUNC_EXIT
}

SSL * LIB_SSL_new_from_listener(struct Library * _base, SSL * ssl, uint64_t flags);

AROS_LH2(SSL *,SSL_new_from_listener,
    AROS_LDA(SSL *, ssl, A0),
    AROS_LDA(uint64_t, flags, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_new_from_listener, ssl, flags);
    AROS_LIBFUNC_EXIT
}

SSL * LIB_SSL_new_listener(struct Library * _base, SSL_CTX * ctx, uint64_t flags);

AROS_LH2(SSL *,SSL_new_listener,
    AROS_LDA(SSL_CTX *, ctx, A0),
    AROS_LDA(uint64_t, flags, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_new_listener, ctx, flags);
    AROS_LIBFUNC_EXIT
}

SSL * LIB_SSL_new_listener_from(struct Library * _base, SSL * ssl, uint64_t flags);

AROS_LH2(SSL *,SSL_new_listener_from,
    AROS_LDA(SSL *, ssl, A0),
    AROS_LDA(uint64_t, flags, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_new_listener_from, ssl, flags);
    AROS_LIBFUNC_EXIT
}

SSL * LIB_SSL_new_stream(struct Library * _base, SSL * s, uint64_t flags);

AROS_LH2(SSL *,SSL_new_stream,
    AROS_LDA(SSL *, s, A0),
    AROS_LDA(uint64_t, flags, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_new_stream, s, flags);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_poll(struct Library * _base, SSL_POLL_ITEM * items, size_t num_items, size_t stride, const struct timeval * timeout, uint64_t flags, size_t * result_count);

AROS_LH6(int,SSL_poll,
    AROS_LDA(SSL_POLL_ITEM *, items, A0),
    AROS_LDA(size_t, num_items, D0),
    AROS_LDA(size_t, stride, D1),
    AROS_LDA(const struct timeval *, timeout, A1),
    AROS_LDA(uint64_t, flags, D2),
    AROS_LDA(size_t *, result_count, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_poll, items, num_items, stride, timeout, flags, result_count);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_set1_cert_comp_preference(struct Library * _base, SSL * ssl, int * algs, size_t len);

AROS_LH3(int,SSL_set1_cert_comp_preference,
    AROS_LDA(SSL *, ssl, A0),
    AROS_LDA(int *, algs, A1),
    AROS_LDA(size_t, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_set1_cert_comp_preference, ssl, algs, len);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_set1_client_cert_type(struct Library * _base, SSL * s, const unsigned char * val, size_t len);

AROS_LH3(int,SSL_set1_client_cert_type,
    AROS_LDA(SSL *, s, A0),
    AROS_LDA(const unsigned char *, val, A1),
    AROS_LDA(size_t, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_set1_client_cert_type, s, val, len);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_set1_compressed_cert(struct Library * _base, SSL * ssl, int algorithm, unsigned char * comp_data, size_t comp_length, size_t orig_length);

AROS_LH5(int,SSL_set1_compressed_cert,
    AROS_LDA(SSL *, ssl, A0),
    AROS_LDA(int, algorithm, D0),
    AROS_LDA(unsigned char *, comp_data, A1),
    AROS_LDA(size_t, comp_length, D1),
    AROS_LDA(size_t, orig_length, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_set1_compressed_cert, ssl, algorithm, comp_data, comp_length, orig_length);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_set1_initial_peer_addr(struct Library * _base, SSL * s, const BIO_ADDR * peer_addr);

AROS_LH2(int,SSL_set1_initial_peer_addr,
    AROS_LDA(SSL *, s, A0),
    AROS_LDA(const BIO_ADDR *, peer_addr, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_set1_initial_peer_addr, s, peer_addr);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_set1_server_cert_type(struct Library * _base, SSL * s, const unsigned char * val, size_t len);

AROS_LH3(int,SSL_set1_server_cert_type,
    AROS_LDA(SSL *, s, A0),
    AROS_LDA(const unsigned char *, val, A1),
    AROS_LDA(size_t, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_set1_server_cert_type, s, val, len);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_set_block_padding_ex(struct Library * _base, SSL * ssl, size_t app_block_size, size_t hs_block_size);

AROS_LH3(int,SSL_set_block_padding_ex,
    AROS_LDA(SSL *, ssl, A0),
    AROS_LDA(size_t, app_block_size, D0),
    AROS_LDA(size_t, hs_block_size, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_set_block_padding_ex, ssl, app_block_size, hs_block_size);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_set_blocking_mode(struct Library * _base, SSL * s, int blocking);

AROS_LH2(int,SSL_set_blocking_mode,
    AROS_LDA(SSL *, s, A0),
    AROS_LDA(int, blocking, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_set_blocking_mode, s, blocking);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_set_default_stream_mode(struct Library * _base, SSL * s, uint32_t mode);

AROS_LH2(int,SSL_set_default_stream_mode,
    AROS_LDA(SSL *, s, A0),
    AROS_LDA(uint32_t, mode, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_set_default_stream_mode, s, mode);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_set_incoming_stream_policy(struct Library * _base, SSL * s, int policy, uint64_t aec);

AROS_LH3(int,SSL_set_incoming_stream_policy,
    AROS_LDA(SSL *, s, A0),
    AROS_LDA(int, policy, D2),
    AROS_LDA(uint64_t, aec, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_set_incoming_stream_policy, s, policy, aec);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_set_quic_tls_cbs(struct Library * _base, SSL * s, const OSSL_DISPATCH * qtdis, void * arg);

AROS_LH3(int,SSL_set_quic_tls_cbs,
    AROS_LDA(SSL *, s, A0),
    AROS_LDA(const OSSL_DISPATCH *, qtdis, A1),
    AROS_LDA(void *, arg, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_set_quic_tls_cbs, s, qtdis, arg);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_set_quic_tls_early_data_enabled(struct Library * _base, SSL * s, int enabled);

AROS_LH2(int,SSL_set_quic_tls_early_data_enabled,
    AROS_LDA(SSL *, s, A0),
    AROS_LDA(int, enabled, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_set_quic_tls_early_data_enabled, s, enabled);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_set_quic_tls_transport_params(struct Library * _base, SSL * s, const unsigned char * params, size_t params_len);

AROS_LH3(int,SSL_set_quic_tls_transport_params,
    AROS_LDA(SSL *, s, A0),
    AROS_LDA(const unsigned char *, params, A1),
    AROS_LDA(size_t, params_len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_set_quic_tls_transport_params, s, params, params_len);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_set_value_uint(struct Library * _base, SSL * s, uint32_t class_, uint32_t id, uint64_t v);

AROS_LH4(int,SSL_set_value_uint,
    AROS_LDA(SSL *, s, A0),
    AROS_LDA(uint32_t, class_, D0),
    AROS_LDA(uint32_t, id, D1),
    AROS_LDA(uint64_t, v, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_set_value_uint, s, class_, id, v);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_shutdown_ex(struct Library * _base, SSL * ssl, uint64_t flags, const SSL_SHUTDOWN_EX_ARGS * args, size_t args_len);

AROS_LH4(int,SSL_shutdown_ex,
    AROS_LDA(SSL *, ssl, A0),
    AROS_LDA(uint64_t, flags, D0),
    AROS_LDA(const SSL_SHUTDOWN_EX_ARGS *, args, A1),
    AROS_LDA(size_t, args_len, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_shutdown_ex, ssl, flags, args, args_len);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_stream_conclude(struct Library * _base, SSL * ssl, uint64_t flags);

AROS_LH2(int,SSL_stream_conclude,
    AROS_LDA(SSL *, ssl, A0),
    AROS_LDA(uint64_t, flags, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_stream_conclude, ssl, flags);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_stream_reset(struct Library * _base, SSL * ssl, const SSL_STREAM_RESET_ARGS * args, size_t args_len);

AROS_LH3(int,SSL_stream_reset,
    AROS_LDA(SSL *, ssl, A0),
    AROS_LDA(const SSL_STREAM_RESET_ARGS *, args, A1),
    AROS_LDA(size_t, args_len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_stream_reset, ssl, args, args_len);
    AROS_LIBFUNC_EXIT
}

int LIB_SSL_write_ex2(struct Library * _base, SSL * s, const void * buf, size_t num, uint64_t flags, size_t * written);

AROS_LH5(int,SSL_write_ex2,
    AROS_LDA(SSL *, s, A0),
    AROS_LDA(const void *, buf, A1),
    AROS_LDA(size_t, num, D2),
    AROS_LDA(uint64_t, flags, D0),
    AROS_LDA(size_t *, written, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(SSL_write_ex2, s, buf, num, flags, written);
    AROS_LIBFUNC_EXIT
}

TS_RESP_CTX * LIB_TS_RESP_CTX_new_ex(struct Library * _base, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH2(TS_RESP_CTX *,TS_RESP_CTX_new_ex,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, propq, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(TS_RESP_CTX_new_ex, libctx, propq);
    AROS_LIBFUNC_EXIT
}

int LIB_TS_VERIFY_CTX_set0_data(struct Library * _base, TS_VERIFY_CTX * ctx, BIO * b);

AROS_LH2(int,TS_VERIFY_CTX_set0_data,
    AROS_LDA(TS_VERIFY_CTX *, ctx, A0),
    AROS_LDA(BIO *, b, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(TS_VERIFY_CTX_set0_data, ctx, b);
    AROS_LIBFUNC_EXIT
}

int LIB_TS_VERIFY_CTX_set0_imprint(struct Library * _base, TS_VERIFY_CTX * ctx, unsigned char * hexstr, long len);

AROS_LH3(int,TS_VERIFY_CTX_set0_imprint,
    AROS_LDA(TS_VERIFY_CTX *, ctx, A0),
    AROS_LDA(unsigned char *, hexstr, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(TS_VERIFY_CTX_set0_imprint, ctx, hexstr, len);
    AROS_LIBFUNC_EXIT
}

int LIB_TS_VERIFY_CTX_set0_store(struct Library * _base, TS_VERIFY_CTX * ctx, X509_STORE * s);

AROS_LH2(int,TS_VERIFY_CTX_set0_store,
    AROS_LDA(TS_VERIFY_CTX *, ctx, A0),
    AROS_LDA(X509_STORE *, s, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(TS_VERIFY_CTX_set0_store, ctx, s);
    AROS_LIBFUNC_EXIT
}

int LIB_X509V3_set_issuer_pkey(struct Library * _base, X509V3_CTX * ctx, EVP_PKEY * pkey);

AROS_LH2(int,X509V3_set_issuer_pkey,
    AROS_LDA(X509V3_CTX *, ctx, A0),
    AROS_LDA(EVP_PKEY *, pkey, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509V3_set_issuer_pkey, ctx, pkey);
    AROS_LIBFUNC_EXIT
}

void LIB_X509_ACERT_INFO_free(struct Library * _base, X509_ACERT_INFO * a);

AROS_LH1(void,X509_ACERT_INFO_free,
    AROS_LDA(X509_ACERT_INFO *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(X509_ACERT_INFO_free, a);
    AROS_LIBFUNC_EXIT
}

const ASN1_ITEM * LIB_X509_ACERT_INFO_it(struct Library * _base);

AROS_LH0(const ASN1_ITEM *,X509_ACERT_INFO_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(X509_ACERT_INFO_it);
    AROS_LIBFUNC_EXIT
}

X509_ACERT_INFO * LIB_X509_ACERT_INFO_new(struct Library * _base);

AROS_LH0(X509_ACERT_INFO *,X509_ACERT_INFO_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(X509_ACERT_INFO_new);
    AROS_LIBFUNC_EXIT
}

void LIB_X509_ACERT_ISSUER_V2FORM_free(struct Library * _base, X509_ACERT_ISSUER_V2FORM * a);

AROS_LH1(void,X509_ACERT_ISSUER_V2FORM_free,
    AROS_LDA(X509_ACERT_ISSUER_V2FORM *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(X509_ACERT_ISSUER_V2FORM_free, a);
    AROS_LIBFUNC_EXIT
}

X509_ACERT_ISSUER_V2FORM * LIB_X509_ACERT_ISSUER_V2FORM_new(struct Library * _base);

AROS_LH0(X509_ACERT_ISSUER_V2FORM *,X509_ACERT_ISSUER_V2FORM_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(X509_ACERT_ISSUER_V2FORM_new);
    AROS_LIBFUNC_EXIT
}

int LIB_X509_ACERT_add1_attr(struct Library * _base, X509_ACERT * x, X509_ATTRIBUTE * attr);

AROS_LH2(int,X509_ACERT_add1_attr,
    AROS_LDA(X509_ACERT *, x, A0),
    AROS_LDA(X509_ATTRIBUTE *, attr, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_ACERT_add1_attr, x, attr);
    AROS_LIBFUNC_EXIT
}

int LIB_X509_ACERT_add1_attr_by_NID(struct Library * _base, X509_ACERT * x, int nid, int type, const void * bytes, int len);

AROS_LH5(int,X509_ACERT_add1_attr_by_NID,
    AROS_LDA(X509_ACERT *, x, A0),
    AROS_LDA(int, nid, D0),
    AROS_LDA(int, type, D1),
    AROS_LDA(const void *, bytes, A1),
    AROS_LDA(int, len, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_ACERT_add1_attr_by_NID, x, nid, type, bytes, len);
    AROS_LIBFUNC_EXIT
}

int LIB_X509_ACERT_add1_attr_by_OBJ(struct Library * _base, X509_ACERT * x, const ASN1_OBJECT * obj, int type, const void * bytes, int len);

AROS_LH5(int,X509_ACERT_add1_attr_by_OBJ,
    AROS_LDA(X509_ACERT *, x, A0),
    AROS_LDA(const ASN1_OBJECT *, obj, A1),
    AROS_LDA(int, type, D0),
    AROS_LDA(const void *, bytes, A2),
    AROS_LDA(int, len, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_ACERT_add1_attr_by_OBJ, x, obj, type, bytes, len);
    AROS_LIBFUNC_EXIT
}

int LIB_X509_ACERT_add1_attr_by_txt(struct Library * _base, X509_ACERT * x, const char * attrname, int type, const unsigned char * bytes, int len);

AROS_LH5(int,X509_ACERT_add1_attr_by_txt,
    AROS_LDA(X509_ACERT *, x, A0),
    AROS_LDA(const char *, attrname, A1),
    AROS_LDA(int, type, D0),
    AROS_LDA(const unsigned char *, bytes, A2),
    AROS_LDA(int, len, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_ACERT_add1_attr_by_txt, x, attrname, type, bytes, len);
    AROS_LIBFUNC_EXIT
}

int LIB_X509_ACERT_add1_ext_i2d(struct Library * _base, X509_ACERT * x, int nid, void * value, int crit, unsigned long flags);

AROS_LH5(int,X509_ACERT_add1_ext_i2d,
    AROS_LDA(X509_ACERT *, x, A0),
    AROS_LDA(int, nid, D0),
    AROS_LDA(void *, value, A1),
    AROS_LDA(int, crit, D1),
    AROS_LDA(unsigned long, flags, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_ACERT_add1_ext_i2d, x, nid, value, crit, flags);
    AROS_LIBFUNC_EXIT
}

int LIB_X509_ACERT_add_attr_nconf(struct Library * _base, CONF * conf, const char * section, X509_ACERT * acert);

AROS_LH3(int,X509_ACERT_add_attr_nconf,
    AROS_LDA(CONF *, conf, A0),
    AROS_LDA(const char *, section, A1),
    AROS_LDA(X509_ACERT *, acert, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_ACERT_add_attr_nconf, conf, section, acert);
    AROS_LIBFUNC_EXIT
}

X509_ATTRIBUTE * LIB_X509_ACERT_delete_attr(struct Library * _base, X509_ACERT * x, int loc);

AROS_LH2(X509_ATTRIBUTE *,X509_ACERT_delete_attr,
    AROS_LDA(X509_ACERT *, x, A0),
    AROS_LDA(int, loc, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_ACERT_delete_attr, x, loc);
    AROS_LIBFUNC_EXIT
}

X509_ACERT * LIB_X509_ACERT_dup(struct Library * _base, const X509_ACERT * a);

AROS_LH1(X509_ACERT *,X509_ACERT_dup,
    AROS_LDA(const X509_ACERT *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_ACERT_dup, a);
    AROS_LIBFUNC_EXIT
}

void LIB_X509_ACERT_free(struct Library * _base, X509_ACERT * a);

AROS_LH1(void,X509_ACERT_free,
    AROS_LDA(X509_ACERT *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(X509_ACERT_free, a);
    AROS_LIBFUNC_EXIT
}

const struct stack_st_X509_EXTENSION * LIB_X509_ACERT_get0_extensions(struct Library * _base, const X509_ACERT * x);

AROS_LH1(const struct stack_st_X509_EXTENSION *,X509_ACERT_get0_extensions,
    AROS_LDA(const X509_ACERT *, x, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_ACERT_get0_extensions, x);
    AROS_LIBFUNC_EXIT
}

const OSSL_ISSUER_SERIAL * LIB_X509_ACERT_get0_holder_baseCertId(struct Library * _base, const X509_ACERT * x);

AROS_LH1(const OSSL_ISSUER_SERIAL *,X509_ACERT_get0_holder_baseCertId,
    AROS_LDA(const X509_ACERT *, x, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_ACERT_get0_holder_baseCertId, x);
    AROS_LIBFUNC_EXIT
}

const OSSL_OBJECT_DIGEST_INFO * LIB_X509_ACERT_get0_holder_digest(struct Library * _base, const X509_ACERT * x);

AROS_LH1(const OSSL_OBJECT_DIGEST_INFO *,X509_ACERT_get0_holder_digest,
    AROS_LDA(const X509_ACERT *, x, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_ACERT_get0_holder_digest, x);
    AROS_LIBFUNC_EXIT
}

const GENERAL_NAMES * LIB_X509_ACERT_get0_holder_entityName(struct Library * _base, const X509_ACERT * x);

AROS_LH1(const GENERAL_NAMES *,X509_ACERT_get0_holder_entityName,
    AROS_LDA(const X509_ACERT *, x, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_ACERT_get0_holder_entityName, x);
    AROS_LIBFUNC_EXIT
}

const X509_ALGOR * LIB_X509_ACERT_get0_info_sigalg(struct Library * _base, const X509_ACERT * x);

AROS_LH1(const X509_ALGOR *,X509_ACERT_get0_info_sigalg,
    AROS_LDA(const X509_ACERT *, x, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_ACERT_get0_info_sigalg, x);
    AROS_LIBFUNC_EXIT
}

const X509_NAME * LIB_X509_ACERT_get0_issuerName(struct Library * _base, const X509_ACERT * x);

AROS_LH1(const X509_NAME *,X509_ACERT_get0_issuerName,
    AROS_LDA(const X509_ACERT *, x, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_ACERT_get0_issuerName, x);
    AROS_LIBFUNC_EXIT
}

const ASN1_BIT_STRING * LIB_X509_ACERT_get0_issuerUID(struct Library * _base, const X509_ACERT * x);

AROS_LH1(const ASN1_BIT_STRING *,X509_ACERT_get0_issuerUID,
    AROS_LDA(const X509_ACERT *, x, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_ACERT_get0_issuerUID, x);
    AROS_LIBFUNC_EXIT
}

const ASN1_TIME * LIB_X509_ACERT_get0_notAfter(struct Library * _base, const X509_ACERT * x);

AROS_LH1(const ASN1_TIME *,X509_ACERT_get0_notAfter,
    AROS_LDA(const X509_ACERT *, x, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_ACERT_get0_notAfter, x);
    AROS_LIBFUNC_EXIT
}

const ASN1_TIME * LIB_X509_ACERT_get0_notBefore(struct Library * _base, const X509_ACERT * x);

AROS_LH1(const ASN1_TIME *,X509_ACERT_get0_notBefore,
    AROS_LDA(const X509_ACERT *, x, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_ACERT_get0_notBefore, x);
    AROS_LIBFUNC_EXIT
}

const ASN1_INTEGER * LIB_X509_ACERT_get0_serialNumber(struct Library * _base, const X509_ACERT * x);

AROS_LH1(const ASN1_INTEGER *,X509_ACERT_get0_serialNumber,
    AROS_LDA(const X509_ACERT *, x, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_ACERT_get0_serialNumber, x);
    AROS_LIBFUNC_EXIT
}

void LIB_X509_ACERT_get0_signature(struct Library * _base, const X509_ACERT * x, const ASN1_BIT_STRING ** psig, const X509_ALGOR ** palg);

AROS_LH3(void,X509_ACERT_get0_signature,
    AROS_LDA(const X509_ACERT *, x, A0),
    AROS_LDA(const ASN1_BIT_STRING **, psig, A1),
    AROS_LDA(const X509_ALGOR **, palg, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(X509_ACERT_get0_signature, x, psig, palg);
    AROS_LIBFUNC_EXIT
}

X509_ATTRIBUTE * LIB_X509_ACERT_get_attr(struct Library * _base, const X509_ACERT * x, int loc);

AROS_LH2(X509_ATTRIBUTE *,X509_ACERT_get_attr,
    AROS_LDA(const X509_ACERT *, x, A0),
    AROS_LDA(int, loc, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_ACERT_get_attr, x, loc);
    AROS_LIBFUNC_EXIT
}

int LIB_X509_ACERT_get_attr_by_NID(struct Library * _base, const X509_ACERT * x, int nid, int lastpos);

AROS_LH3(int,X509_ACERT_get_attr_by_NID,
    AROS_LDA(const X509_ACERT *, x, A0),
    AROS_LDA(int, nid, D0),
    AROS_LDA(int, lastpos, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_ACERT_get_attr_by_NID, x, nid, lastpos);
    AROS_LIBFUNC_EXIT
}

int LIB_X509_ACERT_get_attr_by_OBJ(struct Library * _base, const X509_ACERT * x, const ASN1_OBJECT * obj, int lastpos);

AROS_LH3(int,X509_ACERT_get_attr_by_OBJ,
    AROS_LDA(const X509_ACERT *, x, A0),
    AROS_LDA(const ASN1_OBJECT *, obj, A1),
    AROS_LDA(int, lastpos, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_ACERT_get_attr_by_OBJ, x, obj, lastpos);
    AROS_LIBFUNC_EXIT
}

int LIB_X509_ACERT_get_attr_count(struct Library * _base, const X509_ACERT * x);

AROS_LH1(int,X509_ACERT_get_attr_count,
    AROS_LDA(const X509_ACERT *, x, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_ACERT_get_attr_count, x);
    AROS_LIBFUNC_EXIT
}

void * LIB_X509_ACERT_get_ext_d2i(struct Library * _base, const X509_ACERT * x, int nid, int * crit, int * idx);

AROS_LH4(void *,X509_ACERT_get_ext_d2i,
    AROS_LDA(const X509_ACERT *, x, A0),
    AROS_LDA(int, nid, D0),
    AROS_LDA(int *, crit, A1),
    AROS_LDA(int *, idx, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_ACERT_get_ext_d2i, x, nid, crit, idx);
    AROS_LIBFUNC_EXIT
}

int LIB_X509_ACERT_get_signature_nid(struct Library * _base, const X509_ACERT * x);

AROS_LH1(int,X509_ACERT_get_signature_nid,
    AROS_LDA(const X509_ACERT *, x, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_ACERT_get_signature_nid, x);
    AROS_LIBFUNC_EXIT
}

long LIB_X509_ACERT_get_version(struct Library * _base, const X509_ACERT * x);

AROS_LH1(long,X509_ACERT_get_version,
    AROS_LDA(const X509_ACERT *, x, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_ACERT_get_version, x);
    AROS_LIBFUNC_EXIT
}

const ASN1_ITEM * LIB_X509_ACERT_it(struct Library * _base);

AROS_LH0(const ASN1_ITEM *,X509_ACERT_it,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(X509_ACERT_it);
    AROS_LIBFUNC_EXIT
}

X509_ACERT * LIB_X509_ACERT_new(struct Library * _base);

AROS_LH0(X509_ACERT *,X509_ACERT_new,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(X509_ACERT_new);
    AROS_LIBFUNC_EXIT
}

int LIB_X509_ACERT_print(struct Library * _base, BIO * bp, X509_ACERT * x);

AROS_LH2(int,X509_ACERT_print,
    AROS_LDA(BIO *, bp, A0),
    AROS_LDA(X509_ACERT *, x, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_ACERT_print, bp, x);
    AROS_LIBFUNC_EXIT
}

int LIB_X509_ACERT_print_ex(struct Library * _base, BIO * bp, X509_ACERT * x, unsigned long nmflags, unsigned long cflag);

AROS_LH4(int,X509_ACERT_print_ex,
    AROS_LDA(BIO *, bp, A0),
    AROS_LDA(X509_ACERT *, x, A1),
    AROS_LDA(unsigned long, nmflags, D0),
    AROS_LDA(unsigned long, cflag, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_ACERT_print_ex, bp, x, nmflags, cflag);
    AROS_LIBFUNC_EXIT
}

void LIB_X509_ACERT_set0_holder_baseCertId(struct Library * _base, X509_ACERT * x, OSSL_ISSUER_SERIAL * isss);

AROS_LH2(void,X509_ACERT_set0_holder_baseCertId,
    AROS_LDA(X509_ACERT *, x, A0),
    AROS_LDA(OSSL_ISSUER_SERIAL *, isss, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(X509_ACERT_set0_holder_baseCertId, x, isss);
    AROS_LIBFUNC_EXIT
}

void LIB_X509_ACERT_set0_holder_digest(struct Library * _base, X509_ACERT * x, OSSL_OBJECT_DIGEST_INFO * dinfo);

AROS_LH2(void,X509_ACERT_set0_holder_digest,
    AROS_LDA(X509_ACERT *, x, A0),
    AROS_LDA(OSSL_OBJECT_DIGEST_INFO *, dinfo, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(X509_ACERT_set0_holder_digest, x, dinfo);
    AROS_LIBFUNC_EXIT
}

void LIB_X509_ACERT_set0_holder_entityName(struct Library * _base, X509_ACERT * x, GENERAL_NAMES * name);

AROS_LH2(void,X509_ACERT_set0_holder_entityName,
    AROS_LDA(X509_ACERT *, x, A0),
    AROS_LDA(GENERAL_NAMES *, name, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(X509_ACERT_set0_holder_entityName, x, name);
    AROS_LIBFUNC_EXIT
}

int LIB_X509_ACERT_set1_issuerName(struct Library * _base, X509_ACERT * x, const X509_NAME * name);

AROS_LH2(int,X509_ACERT_set1_issuerName,
    AROS_LDA(X509_ACERT *, x, A0),
    AROS_LDA(const X509_NAME *, name, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_ACERT_set1_issuerName, x, name);
    AROS_LIBFUNC_EXIT
}

int LIB_X509_ACERT_set1_notAfter(struct Library * _base, X509_ACERT * x, const ASN1_GENERALIZEDTIME * time);

AROS_LH2(int,X509_ACERT_set1_notAfter,
    AROS_LDA(X509_ACERT *, x, A0),
    AROS_LDA(const ASN1_GENERALIZEDTIME *, time, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_ACERT_set1_notAfter, x, time);
    AROS_LIBFUNC_EXIT
}

int LIB_X509_ACERT_set1_notBefore(struct Library * _base, X509_ACERT * x, const ASN1_GENERALIZEDTIME * time);

AROS_LH2(int,X509_ACERT_set1_notBefore,
    AROS_LDA(X509_ACERT *, x, A0),
    AROS_LDA(const ASN1_GENERALIZEDTIME *, time, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_ACERT_set1_notBefore, x, time);
    AROS_LIBFUNC_EXIT
}

int LIB_X509_ACERT_set1_serialNumber(struct Library * _base, X509_ACERT * x, const ASN1_INTEGER * serial);

AROS_LH2(int,X509_ACERT_set1_serialNumber,
    AROS_LDA(X509_ACERT *, x, A0),
    AROS_LDA(const ASN1_INTEGER *, serial, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_ACERT_set1_serialNumber, x, serial);
    AROS_LIBFUNC_EXIT
}

int LIB_X509_ACERT_set_version(struct Library * _base, X509_ACERT * x, long version);

AROS_LH2(int,X509_ACERT_set_version,
    AROS_LDA(X509_ACERT *, x, A0),
    AROS_LDA(long, version, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_ACERT_set_version, x, version);
    AROS_LIBFUNC_EXIT
}

int LIB_X509_ACERT_sign(struct Library * _base, X509_ACERT * x, EVP_PKEY * pkey, const EVP_MD * md);

AROS_LH3(int,X509_ACERT_sign,
    AROS_LDA(X509_ACERT *, x, A0),
    AROS_LDA(EVP_PKEY *, pkey, A1),
    AROS_LDA(const EVP_MD *, md, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_ACERT_sign, x, pkey, md);
    AROS_LIBFUNC_EXIT
}

int LIB_X509_ACERT_sign_ctx(struct Library * _base, X509_ACERT * x, EVP_MD_CTX * ctx);

AROS_LH2(int,X509_ACERT_sign_ctx,
    AROS_LDA(X509_ACERT *, x, A0),
    AROS_LDA(EVP_MD_CTX *, ctx, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_ACERT_sign_ctx, x, ctx);
    AROS_LIBFUNC_EXIT
}

int LIB_X509_ACERT_verify(struct Library * _base, X509_ACERT * a, EVP_PKEY * r);

AROS_LH2(int,X509_ACERT_verify,
    AROS_LDA(X509_ACERT *, a, A0),
    AROS_LDA(EVP_PKEY *, r, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_ACERT_verify, a, r);
    AROS_LIBFUNC_EXIT
}

X509_CRL * LIB_X509_CRL_new_ex(struct Library * _base, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH2(X509_CRL *,X509_CRL_new_ex,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, propq, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_CRL_new_ex, libctx, propq);
    AROS_LIBFUNC_EXIT
}

int LIB_X509_LOOKUP_by_subject_ex(struct Library * _base, X509_LOOKUP * ctx, X509_LOOKUP_TYPE type, const X509_NAME * name, X509_OBJECT * ret, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH6(int,X509_LOOKUP_by_subject_ex,
    AROS_LDA(X509_LOOKUP *, ctx, A0),
    AROS_LDA(X509_LOOKUP_TYPE, type, D0),
    AROS_LDA(const X509_NAME *, name, A1),
    AROS_LDA(X509_OBJECT *, ret, A2),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A3),
    AROS_LDA(const char *, propq, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_LOOKUP_by_subject_ex, ctx, type, name, ret, libctx, propq);
    AROS_LIBFUNC_EXIT
}

int LIB_X509_LOOKUP_ctrl_ex(struct Library * _base, X509_LOOKUP * ctx, int cmd, const char * argc, long argl, char ** ret, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH7(int,X509_LOOKUP_ctrl_ex,
    AROS_LDA(X509_LOOKUP *, ctx, A0),
    AROS_LDA(int, cmd, D0),
    AROS_LDA(const char *, argc, A1),
    AROS_LDA(long, argl, D1),
    AROS_LDA(char **, ret, A2),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A3),
    AROS_LDA(const char *, propq, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_LOOKUP_ctrl_ex, ctx, cmd, argc, argl, ret, libctx, propq);
    AROS_LIBFUNC_EXIT
}

X509_LOOKUP_METHOD * LIB_X509_LOOKUP_store(struct Library * _base);

AROS_LH0(X509_LOOKUP_METHOD *,X509_LOOKUP_store,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(X509_LOOKUP_store);
    AROS_LIBFUNC_EXIT
}

X509_PUBKEY * LIB_X509_PUBKEY_dup(struct Library * _base, const X509_PUBKEY * a);

AROS_LH1(X509_PUBKEY *,X509_PUBKEY_dup,
    AROS_LDA(const X509_PUBKEY *, a, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_PUBKEY_dup, a);
    AROS_LIBFUNC_EXIT
}

int LIB_X509_PUBKEY_eq(struct Library * _base, const X509_PUBKEY * a, const X509_PUBKEY * b);

AROS_LH2(int,X509_PUBKEY_eq,
    AROS_LDA(const X509_PUBKEY *, a, A0),
    AROS_LDA(const X509_PUBKEY *, b, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_PUBKEY_eq, a, b);
    AROS_LIBFUNC_EXIT
}

X509_PUBKEY * LIB_X509_PUBKEY_new_ex(struct Library * _base, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH2(X509_PUBKEY *,X509_PUBKEY_new_ex,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, propq, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_PUBKEY_new_ex, libctx, propq);
    AROS_LIBFUNC_EXIT
}

void LIB_X509_PUBKEY_set0_public_key(struct Library * _base, X509_PUBKEY * pub, unsigned char * penc, int penclen);

AROS_LH3(void,X509_PUBKEY_set0_public_key,
    AROS_LDA(X509_PUBKEY *, pub, A0),
    AROS_LDA(unsigned char *, penc, A1),
    AROS_LDA(int, penclen, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(X509_PUBKEY_set0_public_key, pub, penc, penclen);
    AROS_LIBFUNC_EXIT
}

int LIB_X509_PURPOSE_get_unused_id(struct Library * _base, OSSL_LIB_CTX * libctx);

AROS_LH1(int,X509_PURPOSE_get_unused_id,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_PURPOSE_get_unused_id, libctx);
    AROS_LIBFUNC_EXIT
}

ASN1_OCTET_STRING * LIB_X509_REQ_get0_distinguishing_id(struct Library * _base, X509_REQ * x);

AROS_LH1(ASN1_OCTET_STRING *,X509_REQ_get0_distinguishing_id,
    AROS_LDA(X509_REQ *, x, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_REQ_get0_distinguishing_id, x);
    AROS_LIBFUNC_EXIT
}

X509_REQ * LIB_X509_REQ_new_ex(struct Library * _base, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH2(X509_REQ *,X509_REQ_new_ex,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, propq, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_REQ_new_ex, libctx, propq);
    AROS_LIBFUNC_EXIT
}

void LIB_X509_REQ_set0_distinguishing_id(struct Library * _base, X509_REQ * x, ASN1_OCTET_STRING * d_id);

AROS_LH2(void,X509_REQ_set0_distinguishing_id,
    AROS_LDA(X509_REQ *, x, A0),
    AROS_LDA(ASN1_OCTET_STRING *, d_id, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(X509_REQ_set0_distinguishing_id, x, d_id);
    AROS_LIBFUNC_EXIT
}

int LIB_X509_REQ_verify_ex(struct Library * _base, X509_REQ * a, EVP_PKEY * r, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH4(int,X509_REQ_verify_ex,
    AROS_LDA(X509_REQ *, a, A0),
    AROS_LDA(EVP_PKEY *, r, A1),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A2),
    AROS_LDA(const char *, propq, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_REQ_verify_ex, a, r, libctx, propq);
    AROS_LIBFUNC_EXIT
}

EVP_PKEY * LIB_X509_STORE_CTX_get0_rpk(struct Library * _base, const X509_STORE_CTX * ctx);

AROS_LH1(EVP_PKEY *,X509_STORE_CTX_get0_rpk,
    AROS_LDA(const X509_STORE_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_STORE_CTX_get0_rpk, ctx);
    AROS_LIBFUNC_EXIT
}

int LIB_X509_STORE_CTX_init_rpk(struct Library * _base, X509_STORE_CTX * ctx, X509_STORE * trust_store, EVP_PKEY* rpk);

AROS_LH3(int,X509_STORE_CTX_init_rpk,
    AROS_LDA(X509_STORE_CTX *, ctx, A0),
    AROS_LDA(X509_STORE *, trust_store, A1),
    AROS_LDA(EVP_PKEY*, rpk, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_STORE_CTX_init_rpk, ctx, trust_store, rpk);
    AROS_LIBFUNC_EXIT
}

X509_STORE_CTX * LIB_X509_STORE_CTX_new_ex(struct Library * _base, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH2(X509_STORE_CTX *,X509_STORE_CTX_new_ex,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, propq, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_STORE_CTX_new_ex, libctx, propq);
    AROS_LIBFUNC_EXIT
}

int LIB_X509_STORE_CTX_print_verify_cb(struct Library * _base, int ok, X509_STORE_CTX * ctx);

AROS_LH2(int,X509_STORE_CTX_print_verify_cb,
    AROS_LDA(int, ok, D0),
    AROS_LDA(X509_STORE_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_STORE_CTX_print_verify_cb, ok, ctx);
    AROS_LIBFUNC_EXIT
}

void LIB_X509_STORE_CTX_set0_rpk(struct Library * _base, X509_STORE_CTX * ctx, EVP_PKEY * target);

AROS_LH2(void,X509_STORE_CTX_set0_rpk,
    AROS_LDA(X509_STORE_CTX *, ctx, A0),
    AROS_LDA(EVP_PKEY *, target, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(X509_STORE_CTX_set0_rpk, ctx, target);
    AROS_LIBFUNC_EXIT
}

void LIB_X509_STORE_CTX_set_current_reasons(struct Library * _base, X509_STORE_CTX * ctx, unsigned int current_reasons);

AROS_LH2(void,X509_STORE_CTX_set_current_reasons,
    AROS_LDA(X509_STORE_CTX *, ctx, A0),
    AROS_LDA(unsigned int, current_reasons, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(X509_STORE_CTX_set_current_reasons, ctx, current_reasons);
    AROS_LIBFUNC_EXIT
}

void LIB_X509_STORE_CTX_set_get_crl(struct Library * _base, X509_STORE_CTX * ctx, X509_STORE_CTX_get_crl_fn get_crl);

AROS_LH2(void,X509_STORE_CTX_set_get_crl,
    AROS_LDA(X509_STORE_CTX *, ctx, A0),
    AROS_LDA(X509_STORE_CTX_get_crl_fn, get_crl, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(X509_STORE_CTX_set_get_crl, ctx, get_crl);
    AROS_LIBFUNC_EXIT
}

int LIB_X509_STORE_CTX_verify(struct Library * _base, X509_STORE_CTX * ctx);

AROS_LH1(int,X509_STORE_CTX_verify,
    AROS_LDA(X509_STORE_CTX *, ctx, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_STORE_CTX_verify, ctx);
    AROS_LIBFUNC_EXIT
}

STACK_OF(X509) * LIB_X509_STORE_get1_all_certs(struct Library * _base, X509_STORE * xs);

AROS_LH1(STACK_OF(X509) *,X509_STORE_get1_all_certs,
    AROS_LDA(X509_STORE *, xs, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_STORE_get1_all_certs, xs);
    AROS_LIBFUNC_EXIT
}

STACK_OF(X509_OBJECT) * LIB_X509_STORE_get1_objects(struct Library * _base, X509_STORE * xs);

AROS_LH1(STACK_OF(X509_OBJECT) *,X509_STORE_get1_objects,
    AROS_LDA(X509_STORE *, xs, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_STORE_get1_objects, xs);
    AROS_LIBFUNC_EXIT
}

int LIB_X509_STORE_load_file(struct Library * _base, X509_STORE * xs, const char * file);

AROS_LH2(int,X509_STORE_load_file,
    AROS_LDA(X509_STORE *, xs, A0),
    AROS_LDA(const char *, file, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_STORE_load_file, xs, file);
    AROS_LIBFUNC_EXIT
}

int LIB_X509_STORE_load_file_ex(struct Library * _base, X509_STORE * xs, const char * file, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH4(int,X509_STORE_load_file_ex,
    AROS_LDA(X509_STORE *, xs, A0),
    AROS_LDA(const char *, file, A1),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A2),
    AROS_LDA(const char *, propq, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_STORE_load_file_ex, xs, file, libctx, propq);
    AROS_LIBFUNC_EXIT
}

int LIB_X509_STORE_load_locations_ex(struct Library * _base, X509_STORE * xs, const char * file, const char * dir, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH5(int,X509_STORE_load_locations_ex,
    AROS_LDA(X509_STORE *, xs, A0),
    AROS_LDA(const char *, file, A1),
    AROS_LDA(const char *, dir, A2),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A3),
    AROS_LDA(const char *, propq, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_STORE_load_locations_ex, xs, file, dir, libctx, propq);
    AROS_LIBFUNC_EXIT
}

int LIB_X509_STORE_load_path(struct Library * _base, X509_STORE * xs, const char * path);

AROS_LH2(int,X509_STORE_load_path,
    AROS_LDA(X509_STORE *, xs, A0),
    AROS_LDA(const char *, path, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_STORE_load_path, xs, path);
    AROS_LIBFUNC_EXIT
}

int LIB_X509_STORE_load_store(struct Library * _base, X509_STORE * xs, const char * store);

AROS_LH2(int,X509_STORE_load_store,
    AROS_LDA(X509_STORE *, xs, A0),
    AROS_LDA(const char *, store, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_STORE_load_store, xs, store);
    AROS_LIBFUNC_EXIT
}

int LIB_X509_STORE_load_store_ex(struct Library * _base, X509_STORE * xs, const char * store, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH4(int,X509_STORE_load_store_ex,
    AROS_LDA(X509_STORE *, xs, A0),
    AROS_LDA(const char *, store, A1),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A2),
    AROS_LDA(const char *, propq, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_STORE_load_store_ex, xs, store, libctx, propq);
    AROS_LIBFUNC_EXIT
}

int LIB_X509_STORE_set_default_paths_ex(struct Library * _base, X509_STORE * xs, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH3(int,X509_STORE_set_default_paths_ex,
    AROS_LDA(X509_STORE *, xs, A0),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A1),
    AROS_LDA(const char *, propq, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_STORE_set_default_paths_ex, xs, libctx, propq);
    AROS_LIBFUNC_EXIT
}

char * LIB_X509_VERIFY_PARAM_get0_email(struct Library * _base, X509_VERIFY_PARAM * param);

AROS_LH1(char *,X509_VERIFY_PARAM_get0_email,
    AROS_LDA(X509_VERIFY_PARAM *, param, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_VERIFY_PARAM_get0_email, param);
    AROS_LIBFUNC_EXIT
}

char * LIB_X509_VERIFY_PARAM_get0_host(struct Library * _base, X509_VERIFY_PARAM * param, int idx);

AROS_LH2(char *,X509_VERIFY_PARAM_get0_host,
    AROS_LDA(X509_VERIFY_PARAM *, param, A0),
    AROS_LDA(int, idx, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_VERIFY_PARAM_get0_host, param, idx);
    AROS_LIBFUNC_EXIT
}

char * LIB_X509_VERIFY_PARAM_get1_ip_asc(struct Library * _base, X509_VERIFY_PARAM * param);

AROS_LH1(char *,X509_VERIFY_PARAM_get1_ip_asc,
    AROS_LDA(X509_VERIFY_PARAM *, param, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_VERIFY_PARAM_get1_ip_asc, param);
    AROS_LIBFUNC_EXIT
}

int LIB_X509_VERIFY_PARAM_get_purpose(struct Library * _base, const X509_VERIFY_PARAM * param);

AROS_LH1(int,X509_VERIFY_PARAM_get_purpose,
    AROS_LDA(const X509_VERIFY_PARAM *, param, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_VERIFY_PARAM_get_purpose, param);
    AROS_LIBFUNC_EXIT
}

int LIB_X509_cmp_timeframe(struct Library * _base, const X509_VERIFY_PARAM * vpm, const ASN1_TIME * start, const ASN1_TIME * end);

AROS_LH3(int,X509_cmp_timeframe,
    AROS_LDA(const X509_VERIFY_PARAM *, vpm, A0),
    AROS_LDA(const ASN1_TIME *, start, A1),
    AROS_LDA(const ASN1_TIME *, end, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_cmp_timeframe, vpm, start, end);
    AROS_LIBFUNC_EXIT
}

ASN1_OCTET_STRING * LIB_X509_digest_sig(struct Library * _base, const X509 * cert, EVP_MD ** md_used, int * md_is_fallback);

AROS_LH3(ASN1_OCTET_STRING *,X509_digest_sig,
    AROS_LDA(const X509 *, cert, A0),
    AROS_LDA(EVP_MD **, md_used, A1),
    AROS_LDA(int *, md_is_fallback, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_digest_sig, cert, md_used, md_is_fallback);
    AROS_LIBFUNC_EXIT
}

ASN1_OCTET_STRING * LIB_X509_get0_distinguishing_id(struct Library * _base, X509 * x);

AROS_LH1(ASN1_OCTET_STRING *,X509_get0_distinguishing_id,
    AROS_LDA(X509 *, x, A0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_get0_distinguishing_id, x);
    AROS_LIBFUNC_EXIT
}

int LIB_X509_load_cert_crl_file_ex(struct Library * _base, X509_LOOKUP * ctx, const char * file, int type, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH5(int,X509_load_cert_crl_file_ex,
    AROS_LDA(X509_LOOKUP *, ctx, A0),
    AROS_LDA(const char *, file, A1),
    AROS_LDA(int, type, D0),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A2),
    AROS_LDA(const char *, propq, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_load_cert_crl_file_ex, ctx, file, type, libctx, propq);
    AROS_LIBFUNC_EXIT
}

int LIB_X509_load_cert_file_ex(struct Library * _base, X509_LOOKUP * ctx, const char * file, int type, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH5(int,X509_load_cert_file_ex,
    AROS_LDA(X509_LOOKUP *, ctx, A0),
    AROS_LDA(const char *, file, A1),
    AROS_LDA(int, type, D0),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A2),
    AROS_LDA(const char *, propq, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_load_cert_file_ex, ctx, file, type, libctx, propq);
    AROS_LIBFUNC_EXIT
}

X509 * LIB_X509_new_ex(struct Library * _base, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH2(X509 *,X509_new_ex,
    AROS_LDA(OSSL_LIB_CTX *, libctx, A0),
    AROS_LDA(const char *, propq, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_new_ex, libctx, propq);
    AROS_LIBFUNC_EXIT
}

int LIB_X509_self_signed(struct Library * _base, X509 * cert, int verify_signature);

AROS_LH2(int,X509_self_signed,
    AROS_LDA(X509 *, cert, A0),
    AROS_LDA(int, verify_signature, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(X509_self_signed, cert, verify_signature);
    AROS_LIBFUNC_EXIT
}

void LIB_X509_set0_distinguishing_id(struct Library * _base, X509 * x, ASN1_OCTET_STRING * d_id);

AROS_LH2(void,X509_set0_distinguishing_id,
    AROS_LDA(X509 *, x, A0),
    AROS_LDA(ASN1_OCTET_STRING *, d_id, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    CALL_LFUNC(X509_set0_distinguishing_id, x, d_id);
    AROS_LIBFUNC_EXIT
}

EVP_PKEY * LIB_b2i_PVK_bio_ex(struct Library * _base, BIO * in, pem_password_cb * cb, void * u, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH5(EVP_PKEY *,b2i_PVK_bio_ex,
    AROS_LDA(BIO *, in, A0),
    AROS_LDA(pem_password_cb *, cb, A1),
    AROS_LDA(void *, u, A2),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A3),
    AROS_LDA(const char *, propq, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(b2i_PVK_bio_ex, in, cb, u, libctx, propq);
    AROS_LIBFUNC_EXIT
}

EVP_PKEY * LIB_d2i_AutoPrivateKey_ex(struct Library * _base, EVP_PKEY ** a, const unsigned char ** pp, long length, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH5(EVP_PKEY *,d2i_AutoPrivateKey_ex,
    AROS_LDA(EVP_PKEY **, a, A0),
    AROS_LDA(const unsigned char **, pp, A1),
    AROS_LDA(long, length, D0),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A2),
    AROS_LDA(const char *, propq, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_AutoPrivateKey_ex, a, pp, length, libctx, propq);
    AROS_LIBFUNC_EXIT
}

ISSUER_SIGN_TOOL * LIB_d2i_ISSUER_SIGN_TOOL(struct Library * _base, ISSUER_SIGN_TOOL ** a, const unsigned char ** in, long len);

AROS_LH3(ISSUER_SIGN_TOOL *,d2i_ISSUER_SIGN_TOOL,
    AROS_LDA(ISSUER_SIGN_TOOL **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_ISSUER_SIGN_TOOL, a, in, len);
    AROS_LIBFUNC_EXIT
}

EVP_PKEY * LIB_d2i_KeyParams(struct Library * _base, int type, EVP_PKEY ** a, const unsigned char ** pp, long length);

AROS_LH4(EVP_PKEY *,d2i_KeyParams,
    AROS_LDA(int, type, D0),
    AROS_LDA(EVP_PKEY **, a, A0),
    AROS_LDA(const unsigned char **, pp, A1),
    AROS_LDA(long, length, D1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_KeyParams, type, a, pp, length);
    AROS_LIBFUNC_EXIT
}

EVP_PKEY * LIB_d2i_KeyParams_bio(struct Library * _base, int type, EVP_PKEY ** a, BIO * in);

AROS_LH3(EVP_PKEY *,d2i_KeyParams_bio,
    AROS_LDA(int, type, D0),
    AROS_LDA(EVP_PKEY **, a, A0),
    AROS_LDA(BIO *, in, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_KeyParams_bio, type, a, in);
    AROS_LIBFUNC_EXIT
}

OSSL_ALLOWED_ATTRIBUTES_CHOICE * LIB_d2i_OSSL_ALLOWED_ATTRIBUTES_CHOICE(struct Library * _base, OSSL_ALLOWED_ATTRIBUTES_CHOICE ** a, const unsigned char ** in, long len);

AROS_LH3(OSSL_ALLOWED_ATTRIBUTES_CHOICE *,d2i_OSSL_ALLOWED_ATTRIBUTES_CHOICE,
    AROS_LDA(OSSL_ALLOWED_ATTRIBUTES_CHOICE **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_OSSL_ALLOWED_ATTRIBUTES_CHOICE, a, in, len);
    AROS_LIBFUNC_EXIT
}

OSSL_ALLOWED_ATTRIBUTES_ITEM * LIB_d2i_OSSL_ALLOWED_ATTRIBUTES_ITEM(struct Library * _base, OSSL_ALLOWED_ATTRIBUTES_ITEM ** a, const unsigned char ** in, long len);

AROS_LH3(OSSL_ALLOWED_ATTRIBUTES_ITEM *,d2i_OSSL_ALLOWED_ATTRIBUTES_ITEM,
    AROS_LDA(OSSL_ALLOWED_ATTRIBUTES_ITEM **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_OSSL_ALLOWED_ATTRIBUTES_ITEM, a, in, len);
    AROS_LIBFUNC_EXIT
}

OSSL_ALLOWED_ATTRIBUTES_SYNTAX * LIB_d2i_OSSL_ALLOWED_ATTRIBUTES_SYNTAX(struct Library * _base, OSSL_ALLOWED_ATTRIBUTES_SYNTAX ** a, const unsigned char ** in, long len);

AROS_LH3(OSSL_ALLOWED_ATTRIBUTES_SYNTAX *,d2i_OSSL_ALLOWED_ATTRIBUTES_SYNTAX,
    AROS_LDA(OSSL_ALLOWED_ATTRIBUTES_SYNTAX **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_OSSL_ALLOWED_ATTRIBUTES_SYNTAX, a, in, len);
    AROS_LIBFUNC_EXIT
}

OSSL_ATAV * LIB_d2i_OSSL_ATAV(struct Library * _base, OSSL_ATAV ** a, const unsigned char ** in, long len);

AROS_LH3(OSSL_ATAV *,d2i_OSSL_ATAV,
    AROS_LDA(OSSL_ATAV **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_OSSL_ATAV, a, in, len);
    AROS_LIBFUNC_EXIT
}

OSSL_ATTRIBUTES_SYNTAX * LIB_d2i_OSSL_ATTRIBUTES_SYNTAX(struct Library * _base, OSSL_ATTRIBUTES_SYNTAX ** a, const unsigned char ** in, long len);

AROS_LH3(OSSL_ATTRIBUTES_SYNTAX *,d2i_OSSL_ATTRIBUTES_SYNTAX,
    AROS_LDA(OSSL_ATTRIBUTES_SYNTAX **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_OSSL_ATTRIBUTES_SYNTAX, a, in, len);
    AROS_LIBFUNC_EXIT
}

OSSL_ATTRIBUTE_DESCRIPTOR * LIB_d2i_OSSL_ATTRIBUTE_DESCRIPTOR(struct Library * _base, OSSL_ATTRIBUTE_DESCRIPTOR ** a, const unsigned char ** in, long len);

AROS_LH3(OSSL_ATTRIBUTE_DESCRIPTOR *,d2i_OSSL_ATTRIBUTE_DESCRIPTOR,
    AROS_LDA(OSSL_ATTRIBUTE_DESCRIPTOR **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_OSSL_ATTRIBUTE_DESCRIPTOR, a, in, len);
    AROS_LIBFUNC_EXIT
}

OSSL_ATTRIBUTE_MAPPING * LIB_d2i_OSSL_ATTRIBUTE_MAPPING(struct Library * _base, OSSL_ATTRIBUTE_MAPPING ** a, const unsigned char ** in, long len);

AROS_LH3(OSSL_ATTRIBUTE_MAPPING *,d2i_OSSL_ATTRIBUTE_MAPPING,
    AROS_LDA(OSSL_ATTRIBUTE_MAPPING **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_OSSL_ATTRIBUTE_MAPPING, a, in, len);
    AROS_LIBFUNC_EXIT
}

OSSL_ATTRIBUTE_MAPPINGS * LIB_d2i_OSSL_ATTRIBUTE_MAPPINGS(struct Library * _base, OSSL_ATTRIBUTE_MAPPINGS ** a, const unsigned char ** in, long len);

AROS_LH3(OSSL_ATTRIBUTE_MAPPINGS *,d2i_OSSL_ATTRIBUTE_MAPPINGS,
    AROS_LDA(OSSL_ATTRIBUTE_MAPPINGS **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_OSSL_ATTRIBUTE_MAPPINGS, a, in, len);
    AROS_LIBFUNC_EXIT
}

OSSL_ATTRIBUTE_TYPE_MAPPING * LIB_d2i_OSSL_ATTRIBUTE_TYPE_MAPPING(struct Library * _base, OSSL_ATTRIBUTE_TYPE_MAPPING ** a, const unsigned char ** in, long len);

AROS_LH3(OSSL_ATTRIBUTE_TYPE_MAPPING *,d2i_OSSL_ATTRIBUTE_TYPE_MAPPING,
    AROS_LDA(OSSL_ATTRIBUTE_TYPE_MAPPING **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_OSSL_ATTRIBUTE_TYPE_MAPPING, a, in, len);
    AROS_LIBFUNC_EXIT
}

OSSL_ATTRIBUTE_VALUE_MAPPING * LIB_d2i_OSSL_ATTRIBUTE_VALUE_MAPPING(struct Library * _base, OSSL_ATTRIBUTE_VALUE_MAPPING ** a, const unsigned char ** in, long len);

AROS_LH3(OSSL_ATTRIBUTE_VALUE_MAPPING *,d2i_OSSL_ATTRIBUTE_VALUE_MAPPING,
    AROS_LDA(OSSL_ATTRIBUTE_VALUE_MAPPING **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_OSSL_ATTRIBUTE_VALUE_MAPPING, a, in, len);
    AROS_LIBFUNC_EXIT
}

OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX * LIB_d2i_OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX(struct Library * _base, OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX ** a, const unsigned char ** in, long len);

AROS_LH3(OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX *,d2i_OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX,
    AROS_LDA(OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX, a, in, len);
    AROS_LIBFUNC_EXIT
}

OSSL_BASIC_ATTR_CONSTRAINTS * LIB_d2i_OSSL_BASIC_ATTR_CONSTRAINTS(struct Library * _base, OSSL_BASIC_ATTR_CONSTRAINTS ** a, const unsigned char ** in, long len);

AROS_LH3(OSSL_BASIC_ATTR_CONSTRAINTS *,d2i_OSSL_BASIC_ATTR_CONSTRAINTS,
    AROS_LDA(OSSL_BASIC_ATTR_CONSTRAINTS **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_OSSL_BASIC_ATTR_CONSTRAINTS, a, in, len);
    AROS_LIBFUNC_EXIT
}

OSSL_CMP_ATAVS * LIB_d2i_OSSL_CMP_ATAVS(struct Library * _base, OSSL_CMP_ATAVS ** a, const unsigned char ** in, long len);

AROS_LH3(OSSL_CMP_ATAVS *,d2i_OSSL_CMP_ATAVS,
    AROS_LDA(OSSL_CMP_ATAVS **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_OSSL_CMP_ATAVS, a, in, len);
    AROS_LIBFUNC_EXIT
}

OSSL_CMP_MSG * LIB_d2i_OSSL_CMP_MSG(struct Library * _base, OSSL_CMP_MSG ** a, const unsigned char ** in, long len);

AROS_LH3(OSSL_CMP_MSG *,d2i_OSSL_CMP_MSG,
    AROS_LDA(OSSL_CMP_MSG **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_OSSL_CMP_MSG, a, in, len);
    AROS_LIBFUNC_EXIT
}

OSSL_CMP_MSG * LIB_d2i_OSSL_CMP_MSG_bio(struct Library * _base, BIO * bio, OSSL_CMP_MSG ** msg);

AROS_LH2(OSSL_CMP_MSG *,d2i_OSSL_CMP_MSG_bio,
    AROS_LDA(BIO *, bio, A0),
    AROS_LDA(OSSL_CMP_MSG **, msg, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_OSSL_CMP_MSG_bio, bio, msg);
    AROS_LIBFUNC_EXIT
}

OSSL_CMP_PKIHEADER * LIB_d2i_OSSL_CMP_PKIHEADER(struct Library * _base, OSSL_CMP_PKIHEADER ** a, const unsigned char ** in, long len);

AROS_LH3(OSSL_CMP_PKIHEADER *,d2i_OSSL_CMP_PKIHEADER,
    AROS_LDA(OSSL_CMP_PKIHEADER **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_OSSL_CMP_PKIHEADER, a, in, len);
    AROS_LIBFUNC_EXIT
}

OSSL_CMP_PKISI * LIB_d2i_OSSL_CMP_PKISI(struct Library * _base, OSSL_CMP_PKISI ** a, const unsigned char ** in, long len);

AROS_LH3(OSSL_CMP_PKISI *,d2i_OSSL_CMP_PKISI,
    AROS_LDA(OSSL_CMP_PKISI **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_OSSL_CMP_PKISI, a, in, len);
    AROS_LIBFUNC_EXIT
}

OSSL_CRMF_CERTID * LIB_d2i_OSSL_CRMF_CERTID(struct Library * _base, OSSL_CRMF_CERTID ** a, const unsigned char ** in, long len);

AROS_LH3(OSSL_CRMF_CERTID *,d2i_OSSL_CRMF_CERTID,
    AROS_LDA(OSSL_CRMF_CERTID **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_OSSL_CRMF_CERTID, a, in, len);
    AROS_LIBFUNC_EXIT
}

OSSL_CRMF_CERTTEMPLATE * LIB_d2i_OSSL_CRMF_CERTTEMPLATE(struct Library * _base, OSSL_CRMF_CERTTEMPLATE ** a, const unsigned char ** in, long len);

AROS_LH3(OSSL_CRMF_CERTTEMPLATE *,d2i_OSSL_CRMF_CERTTEMPLATE,
    AROS_LDA(OSSL_CRMF_CERTTEMPLATE **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_OSSL_CRMF_CERTTEMPLATE, a, in, len);
    AROS_LIBFUNC_EXIT
}

OSSL_CRMF_ENCRYPTEDKEY * LIB_d2i_OSSL_CRMF_ENCRYPTEDKEY(struct Library * _base, OSSL_CRMF_ENCRYPTEDKEY ** a, const unsigned char ** in, long len);

AROS_LH3(OSSL_CRMF_ENCRYPTEDKEY *,d2i_OSSL_CRMF_ENCRYPTEDKEY,
    AROS_LDA(OSSL_CRMF_ENCRYPTEDKEY **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_OSSL_CRMF_ENCRYPTEDKEY, a, in, len);
    AROS_LIBFUNC_EXIT
}

OSSL_CRMF_ENCRYPTEDVALUE * LIB_d2i_OSSL_CRMF_ENCRYPTEDVALUE(struct Library * _base, OSSL_CRMF_ENCRYPTEDVALUE ** a, const unsigned char ** in, long len);

AROS_LH3(OSSL_CRMF_ENCRYPTEDVALUE *,d2i_OSSL_CRMF_ENCRYPTEDVALUE,
    AROS_LDA(OSSL_CRMF_ENCRYPTEDVALUE **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_OSSL_CRMF_ENCRYPTEDVALUE, a, in, len);
    AROS_LIBFUNC_EXIT
}

OSSL_CRMF_MSG * LIB_d2i_OSSL_CRMF_MSG(struct Library * _base, OSSL_CRMF_MSG ** a, const unsigned char ** in, long len);

AROS_LH3(OSSL_CRMF_MSG *,d2i_OSSL_CRMF_MSG,
    AROS_LDA(OSSL_CRMF_MSG **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_OSSL_CRMF_MSG, a, in, len);
    AROS_LIBFUNC_EXIT
}

OSSL_CRMF_MSGS * LIB_d2i_OSSL_CRMF_MSGS(struct Library * _base, OSSL_CRMF_MSGS ** a, const unsigned char ** in, long len);

AROS_LH3(OSSL_CRMF_MSGS *,d2i_OSSL_CRMF_MSGS,
    AROS_LDA(OSSL_CRMF_MSGS **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_OSSL_CRMF_MSGS, a, in, len);
    AROS_LIBFUNC_EXIT
}

OSSL_CRMF_PBMPARAMETER * LIB_d2i_OSSL_CRMF_PBMPARAMETER(struct Library * _base, OSSL_CRMF_PBMPARAMETER ** a, const unsigned char ** in, long len);

AROS_LH3(OSSL_CRMF_PBMPARAMETER *,d2i_OSSL_CRMF_PBMPARAMETER,
    AROS_LDA(OSSL_CRMF_PBMPARAMETER **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_OSSL_CRMF_PBMPARAMETER, a, in, len);
    AROS_LIBFUNC_EXIT
}

OSSL_CRMF_PKIPUBLICATIONINFO * LIB_d2i_OSSL_CRMF_PKIPUBLICATIONINFO(struct Library * _base, OSSL_CRMF_PKIPUBLICATIONINFO ** a, const unsigned char ** in, long len);

AROS_LH3(OSSL_CRMF_PKIPUBLICATIONINFO *,d2i_OSSL_CRMF_PKIPUBLICATIONINFO,
    AROS_LDA(OSSL_CRMF_PKIPUBLICATIONINFO **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_OSSL_CRMF_PKIPUBLICATIONINFO, a, in, len);
    AROS_LIBFUNC_EXIT
}

OSSL_CRMF_SINGLEPUBINFO * LIB_d2i_OSSL_CRMF_SINGLEPUBINFO(struct Library * _base, OSSL_CRMF_SINGLEPUBINFO ** a, const unsigned char ** in, long len);

AROS_LH3(OSSL_CRMF_SINGLEPUBINFO *,d2i_OSSL_CRMF_SINGLEPUBINFO,
    AROS_LDA(OSSL_CRMF_SINGLEPUBINFO **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_OSSL_CRMF_SINGLEPUBINFO, a, in, len);
    AROS_LIBFUNC_EXIT
}

OSSL_DAY_TIME * LIB_d2i_OSSL_DAY_TIME(struct Library * _base, OSSL_DAY_TIME ** a, const unsigned char ** in, long len);

AROS_LH3(OSSL_DAY_TIME *,d2i_OSSL_DAY_TIME,
    AROS_LDA(OSSL_DAY_TIME **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_OSSL_DAY_TIME, a, in, len);
    AROS_LIBFUNC_EXIT
}

OSSL_DAY_TIME_BAND * LIB_d2i_OSSL_DAY_TIME_BAND(struct Library * _base, OSSL_DAY_TIME_BAND ** a, const unsigned char ** in, long len);

AROS_LH3(OSSL_DAY_TIME_BAND *,d2i_OSSL_DAY_TIME_BAND,
    AROS_LDA(OSSL_DAY_TIME_BAND **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_OSSL_DAY_TIME_BAND, a, in, len);
    AROS_LIBFUNC_EXIT
}

OSSL_HASH * LIB_d2i_OSSL_HASH(struct Library * _base, OSSL_HASH ** a, const unsigned char ** in, long len);

AROS_LH3(OSSL_HASH *,d2i_OSSL_HASH,
    AROS_LDA(OSSL_HASH **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_OSSL_HASH, a, in, len);
    AROS_LIBFUNC_EXIT
}

OSSL_IETF_ATTR_SYNTAX * LIB_d2i_OSSL_IETF_ATTR_SYNTAX(struct Library * _base, OSSL_IETF_ATTR_SYNTAX ** a, const unsigned char ** in, long len);

AROS_LH3(OSSL_IETF_ATTR_SYNTAX *,d2i_OSSL_IETF_ATTR_SYNTAX,
    AROS_LDA(OSSL_IETF_ATTR_SYNTAX **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_OSSL_IETF_ATTR_SYNTAX, a, in, len);
    AROS_LIBFUNC_EXIT
}

OSSL_INFO_SYNTAX * LIB_d2i_OSSL_INFO_SYNTAX(struct Library * _base, OSSL_INFO_SYNTAX ** a, const unsigned char ** in, long len);

AROS_LH3(OSSL_INFO_SYNTAX *,d2i_OSSL_INFO_SYNTAX,
    AROS_LDA(OSSL_INFO_SYNTAX **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_OSSL_INFO_SYNTAX, a, in, len);
    AROS_LIBFUNC_EXIT
}

OSSL_INFO_SYNTAX_POINTER * LIB_d2i_OSSL_INFO_SYNTAX_POINTER(struct Library * _base, OSSL_INFO_SYNTAX_POINTER ** a, const unsigned char ** in, long len);

AROS_LH3(OSSL_INFO_SYNTAX_POINTER *,d2i_OSSL_INFO_SYNTAX_POINTER,
    AROS_LDA(OSSL_INFO_SYNTAX_POINTER **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_OSSL_INFO_SYNTAX_POINTER, a, in, len);
    AROS_LIBFUNC_EXIT
}

OSSL_NAMED_DAY * LIB_d2i_OSSL_NAMED_DAY(struct Library * _base, OSSL_NAMED_DAY ** a, const unsigned char ** in, long len);

AROS_LH3(OSSL_NAMED_DAY *,d2i_OSSL_NAMED_DAY,
    AROS_LDA(OSSL_NAMED_DAY **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_OSSL_NAMED_DAY, a, in, len);
    AROS_LIBFUNC_EXIT
}

OSSL_PRIVILEGE_POLICY_ID * LIB_d2i_OSSL_PRIVILEGE_POLICY_ID(struct Library * _base, OSSL_PRIVILEGE_POLICY_ID ** a, const unsigned char ** in, long len);

AROS_LH3(OSSL_PRIVILEGE_POLICY_ID *,d2i_OSSL_PRIVILEGE_POLICY_ID,
    AROS_LDA(OSSL_PRIVILEGE_POLICY_ID **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_OSSL_PRIVILEGE_POLICY_ID, a, in, len);
    AROS_LIBFUNC_EXIT
}

OSSL_ROLE_SPEC_CERT_ID * LIB_d2i_OSSL_ROLE_SPEC_CERT_ID(struct Library * _base, OSSL_ROLE_SPEC_CERT_ID ** a, const unsigned char ** in, long len);

AROS_LH3(OSSL_ROLE_SPEC_CERT_ID *,d2i_OSSL_ROLE_SPEC_CERT_ID,
    AROS_LDA(OSSL_ROLE_SPEC_CERT_ID **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_OSSL_ROLE_SPEC_CERT_ID, a, in, len);
    AROS_LIBFUNC_EXIT
}

OSSL_ROLE_SPEC_CERT_ID_SYNTAX * LIB_d2i_OSSL_ROLE_SPEC_CERT_ID_SYNTAX(struct Library * _base, OSSL_ROLE_SPEC_CERT_ID_SYNTAX ** a, const unsigned char ** in, long len);

AROS_LH3(OSSL_ROLE_SPEC_CERT_ID_SYNTAX *,d2i_OSSL_ROLE_SPEC_CERT_ID_SYNTAX,
    AROS_LDA(OSSL_ROLE_SPEC_CERT_ID_SYNTAX **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_OSSL_ROLE_SPEC_CERT_ID_SYNTAX, a, in, len);
    AROS_LIBFUNC_EXIT
}

OSSL_TARGET * LIB_d2i_OSSL_TARGET(struct Library * _base, OSSL_TARGET ** a, const unsigned char ** in, long len);

AROS_LH3(OSSL_TARGET *,d2i_OSSL_TARGET,
    AROS_LDA(OSSL_TARGET **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_OSSL_TARGET, a, in, len);
    AROS_LIBFUNC_EXIT
}

OSSL_TARGETING_INFORMATION * LIB_d2i_OSSL_TARGETING_INFORMATION(struct Library * _base, OSSL_TARGETING_INFORMATION ** a, const unsigned char ** in, long len);

AROS_LH3(OSSL_TARGETING_INFORMATION *,d2i_OSSL_TARGETING_INFORMATION,
    AROS_LDA(OSSL_TARGETING_INFORMATION **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_OSSL_TARGETING_INFORMATION, a, in, len);
    AROS_LIBFUNC_EXIT
}

OSSL_TARGETS * LIB_d2i_OSSL_TARGETS(struct Library * _base, OSSL_TARGETS ** a, const unsigned char ** in, long len);

AROS_LH3(OSSL_TARGETS *,d2i_OSSL_TARGETS,
    AROS_LDA(OSSL_TARGETS **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_OSSL_TARGETS, a, in, len);
    AROS_LIBFUNC_EXIT
}

OSSL_TIME_PERIOD * LIB_d2i_OSSL_TIME_PERIOD(struct Library * _base, OSSL_TIME_PERIOD ** a, const unsigned char ** in, long len);

AROS_LH3(OSSL_TIME_PERIOD *,d2i_OSSL_TIME_PERIOD,
    AROS_LDA(OSSL_TIME_PERIOD **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_OSSL_TIME_PERIOD, a, in, len);
    AROS_LIBFUNC_EXIT
}

OSSL_TIME_SPEC * LIB_d2i_OSSL_TIME_SPEC(struct Library * _base, OSSL_TIME_SPEC ** a, const unsigned char ** in, long len);

AROS_LH3(OSSL_TIME_SPEC *,d2i_OSSL_TIME_SPEC,
    AROS_LDA(OSSL_TIME_SPEC **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_OSSL_TIME_SPEC, a, in, len);
    AROS_LIBFUNC_EXIT
}

OSSL_TIME_SPEC_ABSOLUTE * LIB_d2i_OSSL_TIME_SPEC_ABSOLUTE(struct Library * _base, OSSL_TIME_SPEC_ABSOLUTE ** a, const unsigned char ** in, long len);

AROS_LH3(OSSL_TIME_SPEC_ABSOLUTE *,d2i_OSSL_TIME_SPEC_ABSOLUTE,
    AROS_LDA(OSSL_TIME_SPEC_ABSOLUTE **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_OSSL_TIME_SPEC_ABSOLUTE, a, in, len);
    AROS_LIBFUNC_EXIT
}

OSSL_TIME_SPEC_DAY * LIB_d2i_OSSL_TIME_SPEC_DAY(struct Library * _base, OSSL_TIME_SPEC_DAY ** a, const unsigned char ** in, long len);

AROS_LH3(OSSL_TIME_SPEC_DAY *,d2i_OSSL_TIME_SPEC_DAY,
    AROS_LDA(OSSL_TIME_SPEC_DAY **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_OSSL_TIME_SPEC_DAY, a, in, len);
    AROS_LIBFUNC_EXIT
}

OSSL_TIME_SPEC_MONTH * LIB_d2i_OSSL_TIME_SPEC_MONTH(struct Library * _base, OSSL_TIME_SPEC_MONTH ** a, const unsigned char ** in, long len);

AROS_LH3(OSSL_TIME_SPEC_MONTH *,d2i_OSSL_TIME_SPEC_MONTH,
    AROS_LDA(OSSL_TIME_SPEC_MONTH **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_OSSL_TIME_SPEC_MONTH, a, in, len);
    AROS_LIBFUNC_EXIT
}

OSSL_TIME_SPEC_TIME * LIB_d2i_OSSL_TIME_SPEC_TIME(struct Library * _base, OSSL_TIME_SPEC_TIME ** a, const unsigned char ** in, long len);

AROS_LH3(OSSL_TIME_SPEC_TIME *,d2i_OSSL_TIME_SPEC_TIME,
    AROS_LDA(OSSL_TIME_SPEC_TIME **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_OSSL_TIME_SPEC_TIME, a, in, len);
    AROS_LIBFUNC_EXIT
}

OSSL_TIME_SPEC_WEEKS * LIB_d2i_OSSL_TIME_SPEC_WEEKS(struct Library * _base, OSSL_TIME_SPEC_WEEKS ** a, const unsigned char ** in, long len);

AROS_LH3(OSSL_TIME_SPEC_WEEKS *,d2i_OSSL_TIME_SPEC_WEEKS,
    AROS_LDA(OSSL_TIME_SPEC_WEEKS **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_OSSL_TIME_SPEC_WEEKS, a, in, len);
    AROS_LIBFUNC_EXIT
}

OSSL_TIME_SPEC_X_DAY_OF * LIB_d2i_OSSL_TIME_SPEC_X_DAY_OF(struct Library * _base, OSSL_TIME_SPEC_X_DAY_OF ** a, const unsigned char ** in, long len);

AROS_LH3(OSSL_TIME_SPEC_X_DAY_OF *,d2i_OSSL_TIME_SPEC_X_DAY_OF,
    AROS_LDA(OSSL_TIME_SPEC_X_DAY_OF **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_OSSL_TIME_SPEC_X_DAY_OF, a, in, len);
    AROS_LIBFUNC_EXIT
}

OSSL_USER_NOTICE_SYNTAX * LIB_d2i_OSSL_USER_NOTICE_SYNTAX(struct Library * _base, OSSL_USER_NOTICE_SYNTAX ** a, const unsigned char ** in, long len);

AROS_LH3(OSSL_USER_NOTICE_SYNTAX *,d2i_OSSL_USER_NOTICE_SYNTAX,
    AROS_LDA(OSSL_USER_NOTICE_SYNTAX **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_OSSL_USER_NOTICE_SYNTAX, a, in, len);
    AROS_LIBFUNC_EXIT
}

PBMAC1PARAM * LIB_d2i_PBMAC1PARAM(struct Library * _base, PBMAC1PARAM ** a, const unsigned char ** in, long len);

AROS_LH3(PBMAC1PARAM *,d2i_PBMAC1PARAM,
    AROS_LDA(PBMAC1PARAM **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_PBMAC1PARAM, a, in, len);
    AROS_LIBFUNC_EXIT
}

EVP_PKEY * LIB_d2i_PUBKEY_ex(struct Library * _base, EVP_PKEY ** a, const unsigned char ** pp, long length, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH5(EVP_PKEY *,d2i_PUBKEY_ex,
    AROS_LDA(EVP_PKEY **, a, A0),
    AROS_LDA(const unsigned char **, pp, A1),
    AROS_LDA(long, length, D0),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A2),
    AROS_LDA(const char *, propq, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_PUBKEY_ex, a, pp, length, libctx, propq);
    AROS_LIBFUNC_EXIT
}

EVP_PKEY * LIB_d2i_PUBKEY_ex_bio(struct Library * _base, BIO * bp, EVP_PKEY ** a, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH4(EVP_PKEY *,d2i_PUBKEY_ex_bio,
    AROS_LDA(BIO *, bp, A0),
    AROS_LDA(EVP_PKEY **, a, A1),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A2),
    AROS_LDA(const char *, propq, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_PUBKEY_ex_bio, bp, a, libctx, propq);
    AROS_LIBFUNC_EXIT
}

EVP_PKEY * LIB_d2i_PrivateKey_ex(struct Library * _base, int type, EVP_PKEY ** a, const unsigned char ** pp, long length, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH6(EVP_PKEY *,d2i_PrivateKey_ex,
    AROS_LDA(int, type, D0),
    AROS_LDA(EVP_PKEY **, a, A0),
    AROS_LDA(const unsigned char **, pp, A1),
    AROS_LDA(long, length, D1),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A2),
    AROS_LDA(const char *, propq, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_PrivateKey_ex, type, a, pp, length, libctx, propq);
    AROS_LIBFUNC_EXIT
}

EVP_PKEY * LIB_d2i_PrivateKey_ex_bio(struct Library * _base, BIO * bp, EVP_PKEY ** a, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH4(EVP_PKEY *,d2i_PrivateKey_ex_bio,
    AROS_LDA(BIO *, bp, A0),
    AROS_LDA(EVP_PKEY **, a, A1),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A2),
    AROS_LDA(const char *, propq, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_PrivateKey_ex_bio, bp, a, libctx, propq);
    AROS_LIBFUNC_EXIT
}

SSL_SESSION * LIB_d2i_SSL_SESSION_ex(struct Library * _base, SSL_SESSION ** a, const unsigned char ** pp, long length, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH5(SSL_SESSION *,d2i_SSL_SESSION_ex,
    AROS_LDA(SSL_SESSION **, a, A0),
    AROS_LDA(const unsigned char **, pp, A1),
    AROS_LDA(long, length, D0),
    AROS_LDA(OSSL_LIB_CTX *, libctx, A2),
    AROS_LDA(const char *, propq, A3),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_SSL_SESSION_ex, a, pp, length, libctx, propq);
    AROS_LIBFUNC_EXIT
}

X509_ACERT * LIB_d2i_X509_ACERT(struct Library * _base, X509_ACERT ** a, const unsigned char ** in, long len);

AROS_LH3(X509_ACERT *,d2i_X509_ACERT,
    AROS_LDA(X509_ACERT **, a, A0),
    AROS_LDA(const unsigned char **, in, A1),
    AROS_LDA(long, len, D0),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_X509_ACERT, a, in, len);
    AROS_LIBFUNC_EXIT
}

X509_ACERT * LIB_d2i_X509_ACERT_bio(struct Library * _base, BIO * bp, X509_ACERT ** acert);

AROS_LH2(X509_ACERT *,d2i_X509_ACERT_bio,
    AROS_LDA(BIO *, bp, A0),
    AROS_LDA(X509_ACERT **, acert, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_X509_ACERT_bio, bp, acert);
    AROS_LIBFUNC_EXIT
}

X509_PUBKEY * LIB_d2i_X509_PUBKEY_bio(struct Library * _base, BIO * bp, X509_PUBKEY ** xpk);

AROS_LH2(X509_PUBKEY *,d2i_X509_PUBKEY_bio,
    AROS_LDA(BIO *, bp, A0),
    AROS_LDA(X509_PUBKEY **, xpk, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(d2i_X509_PUBKEY_bio, bp, xpk);
    AROS_LIBFUNC_EXIT
}

int LIB_i2b_PVK_bio_ex(struct Library * _base, BIO * out, const EVP_PKEY * pk, int enclevel, pem_password_cb * cb, void * u, OSSL_LIB_CTX * libctx, const char * propq);

AROS_LH7(int,i2b_PVK_bio_ex,
    AROS_LDA(BIO *, out, A0),
    AROS_LDA(const EVP_PKEY *, pk, A1),
    AROS_LDA(int, enclevel, D0),
    AROS_LDA(pem_password_cb *, cb, A2),
    AROS_LDA(void *, u, A3),
    AROS_LDA(OSSL_LIB_CTX *, libctx, D1),
    AROS_LDA(const char *, propq, D2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(i2b_PVK_bio_ex, out, pk, enclevel, cb, u, libctx, propq);
    AROS_LIBFUNC_EXIT
}

int LIB_i2d_ISSUER_SIGN_TOOL(struct Library * _base, const ISSUER_SIGN_TOOL * a, unsigned char ** out);

AROS_LH2(int,i2d_ISSUER_SIGN_TOOL,
    AROS_LDA(const ISSUER_SIGN_TOOL *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(i2d_ISSUER_SIGN_TOOL, a, out);
    AROS_LIBFUNC_EXIT
}

int LIB_i2d_KeyParams(struct Library * _base, const EVP_PKEY * a, unsigned char ** pp);

AROS_LH2(int,i2d_KeyParams,
    AROS_LDA(const EVP_PKEY *, a, A0),
    AROS_LDA(unsigned char **, pp, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(i2d_KeyParams, a, pp);
    AROS_LIBFUNC_EXIT
}

int LIB_i2d_KeyParams_bio(struct Library * _base, BIO * bp, const EVP_PKEY * pkey);

AROS_LH2(int,i2d_KeyParams_bio,
    AROS_LDA(BIO *, bp, A0),
    AROS_LDA(const EVP_PKEY *, pkey, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(i2d_KeyParams_bio, bp, pkey);
    AROS_LIBFUNC_EXIT
}

int LIB_i2d_OSSL_ALLOWED_ATTRIBUTES_CHOICE(struct Library * _base, const OSSL_ALLOWED_ATTRIBUTES_CHOICE * a, unsigned char ** out);

AROS_LH2(int,i2d_OSSL_ALLOWED_ATTRIBUTES_CHOICE,
    AROS_LDA(const OSSL_ALLOWED_ATTRIBUTES_CHOICE *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(i2d_OSSL_ALLOWED_ATTRIBUTES_CHOICE, a, out);
    AROS_LIBFUNC_EXIT
}

int LIB_i2d_OSSL_ALLOWED_ATTRIBUTES_ITEM(struct Library * _base, const OSSL_ALLOWED_ATTRIBUTES_ITEM * a, unsigned char ** out);

AROS_LH2(int,i2d_OSSL_ALLOWED_ATTRIBUTES_ITEM,
    AROS_LDA(const OSSL_ALLOWED_ATTRIBUTES_ITEM *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(i2d_OSSL_ALLOWED_ATTRIBUTES_ITEM, a, out);
    AROS_LIBFUNC_EXIT
}

int LIB_i2d_OSSL_ALLOWED_ATTRIBUTES_SYNTAX(struct Library * _base, const OSSL_ALLOWED_ATTRIBUTES_SYNTAX * a, unsigned char ** out);

AROS_LH2(int,i2d_OSSL_ALLOWED_ATTRIBUTES_SYNTAX,
    AROS_LDA(const OSSL_ALLOWED_ATTRIBUTES_SYNTAX *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(i2d_OSSL_ALLOWED_ATTRIBUTES_SYNTAX, a, out);
    AROS_LIBFUNC_EXIT
}

int LIB_i2d_OSSL_ATAV(struct Library * _base, const OSSL_ATAV * a, unsigned char ** out);

AROS_LH2(int,i2d_OSSL_ATAV,
    AROS_LDA(const OSSL_ATAV *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(i2d_OSSL_ATAV, a, out);
    AROS_LIBFUNC_EXIT
}

int LIB_i2d_OSSL_ATTRIBUTES_SYNTAX(struct Library * _base, const OSSL_ATTRIBUTES_SYNTAX * a, unsigned char ** out);

AROS_LH2(int,i2d_OSSL_ATTRIBUTES_SYNTAX,
    AROS_LDA(const OSSL_ATTRIBUTES_SYNTAX *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(i2d_OSSL_ATTRIBUTES_SYNTAX, a, out);
    AROS_LIBFUNC_EXIT
}

int LIB_i2d_OSSL_ATTRIBUTE_DESCRIPTOR(struct Library * _base, const OSSL_ATTRIBUTE_DESCRIPTOR * a, unsigned char ** out);

AROS_LH2(int,i2d_OSSL_ATTRIBUTE_DESCRIPTOR,
    AROS_LDA(const OSSL_ATTRIBUTE_DESCRIPTOR *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(i2d_OSSL_ATTRIBUTE_DESCRIPTOR, a, out);
    AROS_LIBFUNC_EXIT
}

int LIB_i2d_OSSL_ATTRIBUTE_MAPPING(struct Library * _base, const OSSL_ATTRIBUTE_MAPPING * a, unsigned char ** out);

AROS_LH2(int,i2d_OSSL_ATTRIBUTE_MAPPING,
    AROS_LDA(const OSSL_ATTRIBUTE_MAPPING *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(i2d_OSSL_ATTRIBUTE_MAPPING, a, out);
    AROS_LIBFUNC_EXIT
}

int LIB_i2d_OSSL_ATTRIBUTE_MAPPINGS(struct Library * _base, const OSSL_ATTRIBUTE_MAPPINGS * a, unsigned char ** out);

AROS_LH2(int,i2d_OSSL_ATTRIBUTE_MAPPINGS,
    AROS_LDA(const OSSL_ATTRIBUTE_MAPPINGS *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(i2d_OSSL_ATTRIBUTE_MAPPINGS, a, out);
    AROS_LIBFUNC_EXIT
}

int LIB_i2d_OSSL_ATTRIBUTE_TYPE_MAPPING(struct Library * _base, const OSSL_ATTRIBUTE_TYPE_MAPPING * a, unsigned char ** out);

AROS_LH2(int,i2d_OSSL_ATTRIBUTE_TYPE_MAPPING,
    AROS_LDA(const OSSL_ATTRIBUTE_TYPE_MAPPING *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(i2d_OSSL_ATTRIBUTE_TYPE_MAPPING, a, out);
    AROS_LIBFUNC_EXIT
}

int LIB_i2d_OSSL_ATTRIBUTE_VALUE_MAPPING(struct Library * _base, const OSSL_ATTRIBUTE_VALUE_MAPPING * a, unsigned char ** out);

AROS_LH2(int,i2d_OSSL_ATTRIBUTE_VALUE_MAPPING,
    AROS_LDA(const OSSL_ATTRIBUTE_VALUE_MAPPING *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(i2d_OSSL_ATTRIBUTE_VALUE_MAPPING, a, out);
    AROS_LIBFUNC_EXIT
}

int LIB_i2d_OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX(struct Library * _base, const OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX * a, unsigned char ** out);

AROS_LH2(int,i2d_OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX,
    AROS_LDA(const OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(i2d_OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX, a, out);
    AROS_LIBFUNC_EXIT
}

int LIB_i2d_OSSL_BASIC_ATTR_CONSTRAINTS(struct Library * _base, const OSSL_BASIC_ATTR_CONSTRAINTS * a, unsigned char ** out);

AROS_LH2(int,i2d_OSSL_BASIC_ATTR_CONSTRAINTS,
    AROS_LDA(const OSSL_BASIC_ATTR_CONSTRAINTS *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(i2d_OSSL_BASIC_ATTR_CONSTRAINTS, a, out);
    AROS_LIBFUNC_EXIT
}

int LIB_i2d_OSSL_CMP_ATAVS(struct Library * _base, const OSSL_CMP_ATAVS * a, unsigned char ** out);

AROS_LH2(int,i2d_OSSL_CMP_ATAVS,
    AROS_LDA(const OSSL_CMP_ATAVS *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(i2d_OSSL_CMP_ATAVS, a, out);
    AROS_LIBFUNC_EXIT
}

int LIB_i2d_OSSL_CMP_MSG(struct Library * _base, const OSSL_CMP_MSG * a, unsigned char ** out);

AROS_LH2(int,i2d_OSSL_CMP_MSG,
    AROS_LDA(const OSSL_CMP_MSG *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(i2d_OSSL_CMP_MSG, a, out);
    AROS_LIBFUNC_EXIT
}

int LIB_i2d_OSSL_CMP_MSG_bio(struct Library * _base, BIO * bio, const OSSL_CMP_MSG * msg);

AROS_LH2(int,i2d_OSSL_CMP_MSG_bio,
    AROS_LDA(BIO *, bio, A0),
    AROS_LDA(const OSSL_CMP_MSG *, msg, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(i2d_OSSL_CMP_MSG_bio, bio, msg);
    AROS_LIBFUNC_EXIT
}

int LIB_i2d_OSSL_CMP_PKIHEADER(struct Library * _base, const OSSL_CMP_PKIHEADER * a, unsigned char ** out);

AROS_LH2(int,i2d_OSSL_CMP_PKIHEADER,
    AROS_LDA(const OSSL_CMP_PKIHEADER *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(i2d_OSSL_CMP_PKIHEADER, a, out);
    AROS_LIBFUNC_EXIT
}

int LIB_i2d_OSSL_CMP_PKISI(struct Library * _base, const OSSL_CMP_PKISI * a, unsigned char ** out);

AROS_LH2(int,i2d_OSSL_CMP_PKISI,
    AROS_LDA(const OSSL_CMP_PKISI *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(i2d_OSSL_CMP_PKISI, a, out);
    AROS_LIBFUNC_EXIT
}

int LIB_i2d_OSSL_CRMF_CERTID(struct Library * _base, const OSSL_CRMF_CERTID * a, unsigned char ** out);

AROS_LH2(int,i2d_OSSL_CRMF_CERTID,
    AROS_LDA(const OSSL_CRMF_CERTID *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(i2d_OSSL_CRMF_CERTID, a, out);
    AROS_LIBFUNC_EXIT
}

int LIB_i2d_OSSL_CRMF_CERTTEMPLATE(struct Library * _base, const OSSL_CRMF_CERTTEMPLATE * a, unsigned char ** out);

AROS_LH2(int,i2d_OSSL_CRMF_CERTTEMPLATE,
    AROS_LDA(const OSSL_CRMF_CERTTEMPLATE *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(i2d_OSSL_CRMF_CERTTEMPLATE, a, out);
    AROS_LIBFUNC_EXIT
}

int LIB_i2d_OSSL_CRMF_ENCRYPTEDKEY(struct Library * _base, const OSSL_CRMF_ENCRYPTEDKEY * a, unsigned char ** out);

AROS_LH2(int,i2d_OSSL_CRMF_ENCRYPTEDKEY,
    AROS_LDA(const OSSL_CRMF_ENCRYPTEDKEY *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(i2d_OSSL_CRMF_ENCRYPTEDKEY, a, out);
    AROS_LIBFUNC_EXIT
}

int LIB_i2d_OSSL_CRMF_ENCRYPTEDVALUE(struct Library * _base, const OSSL_CRMF_ENCRYPTEDVALUE * a, unsigned char ** out);

AROS_LH2(int,i2d_OSSL_CRMF_ENCRYPTEDVALUE,
    AROS_LDA(const OSSL_CRMF_ENCRYPTEDVALUE *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(i2d_OSSL_CRMF_ENCRYPTEDVALUE, a, out);
    AROS_LIBFUNC_EXIT
}

int LIB_i2d_OSSL_CRMF_MSG(struct Library * _base, const OSSL_CRMF_MSG * a, unsigned char ** out);

AROS_LH2(int,i2d_OSSL_CRMF_MSG,
    AROS_LDA(const OSSL_CRMF_MSG *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(i2d_OSSL_CRMF_MSG, a, out);
    AROS_LIBFUNC_EXIT
}

int LIB_i2d_OSSL_CRMF_MSGS(struct Library * _base, const OSSL_CRMF_MSGS * a, unsigned char ** out);

AROS_LH2(int,i2d_OSSL_CRMF_MSGS,
    AROS_LDA(const OSSL_CRMF_MSGS *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(i2d_OSSL_CRMF_MSGS, a, out);
    AROS_LIBFUNC_EXIT
}

int LIB_i2d_OSSL_CRMF_PBMPARAMETER(struct Library * _base, const OSSL_CRMF_PBMPARAMETER * a, unsigned char ** out);

AROS_LH2(int,i2d_OSSL_CRMF_PBMPARAMETER,
    AROS_LDA(const OSSL_CRMF_PBMPARAMETER *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(i2d_OSSL_CRMF_PBMPARAMETER, a, out);
    AROS_LIBFUNC_EXIT
}

int LIB_i2d_OSSL_CRMF_PKIPUBLICATIONINFO(struct Library * _base, const OSSL_CRMF_PKIPUBLICATIONINFO * a, unsigned char ** out);

AROS_LH2(int,i2d_OSSL_CRMF_PKIPUBLICATIONINFO,
    AROS_LDA(const OSSL_CRMF_PKIPUBLICATIONINFO *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(i2d_OSSL_CRMF_PKIPUBLICATIONINFO, a, out);
    AROS_LIBFUNC_EXIT
}

int LIB_i2d_OSSL_CRMF_SINGLEPUBINFO(struct Library * _base, const OSSL_CRMF_SINGLEPUBINFO * a, unsigned char ** out);

AROS_LH2(int,i2d_OSSL_CRMF_SINGLEPUBINFO,
    AROS_LDA(const OSSL_CRMF_SINGLEPUBINFO *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(i2d_OSSL_CRMF_SINGLEPUBINFO, a, out);
    AROS_LIBFUNC_EXIT
}

int LIB_i2d_OSSL_DAY_TIME(struct Library * _base, const OSSL_DAY_TIME * a, unsigned char ** out);

AROS_LH2(int,i2d_OSSL_DAY_TIME,
    AROS_LDA(const OSSL_DAY_TIME *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(i2d_OSSL_DAY_TIME, a, out);
    AROS_LIBFUNC_EXIT
}

int LIB_i2d_OSSL_DAY_TIME_BAND(struct Library * _base, const OSSL_DAY_TIME_BAND * a, unsigned char ** out);

AROS_LH2(int,i2d_OSSL_DAY_TIME_BAND,
    AROS_LDA(const OSSL_DAY_TIME_BAND *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(i2d_OSSL_DAY_TIME_BAND, a, out);
    AROS_LIBFUNC_EXIT
}

int LIB_i2d_OSSL_HASH(struct Library * _base, const OSSL_HASH * a, unsigned char ** out);

AROS_LH2(int,i2d_OSSL_HASH,
    AROS_LDA(const OSSL_HASH *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(i2d_OSSL_HASH, a, out);
    AROS_LIBFUNC_EXIT
}

int LIB_i2d_OSSL_IETF_ATTR_SYNTAX(struct Library * _base, const OSSL_IETF_ATTR_SYNTAX * a, unsigned char ** out);

AROS_LH2(int,i2d_OSSL_IETF_ATTR_SYNTAX,
    AROS_LDA(const OSSL_IETF_ATTR_SYNTAX *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(i2d_OSSL_IETF_ATTR_SYNTAX, a, out);
    AROS_LIBFUNC_EXIT
}

int LIB_i2d_OSSL_INFO_SYNTAX(struct Library * _base, const OSSL_INFO_SYNTAX * a, unsigned char ** out);

AROS_LH2(int,i2d_OSSL_INFO_SYNTAX,
    AROS_LDA(const OSSL_INFO_SYNTAX *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(i2d_OSSL_INFO_SYNTAX, a, out);
    AROS_LIBFUNC_EXIT
}

int LIB_i2d_OSSL_INFO_SYNTAX_POINTER(struct Library * _base, const OSSL_INFO_SYNTAX_POINTER * a, unsigned char ** out);

AROS_LH2(int,i2d_OSSL_INFO_SYNTAX_POINTER,
    AROS_LDA(const OSSL_INFO_SYNTAX_POINTER *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(i2d_OSSL_INFO_SYNTAX_POINTER, a, out);
    AROS_LIBFUNC_EXIT
}

int LIB_i2d_OSSL_NAMED_DAY(struct Library * _base, const OSSL_NAMED_DAY * a, unsigned char ** out);

AROS_LH2(int,i2d_OSSL_NAMED_DAY,
    AROS_LDA(const OSSL_NAMED_DAY *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(i2d_OSSL_NAMED_DAY, a, out);
    AROS_LIBFUNC_EXIT
}

int LIB_i2d_OSSL_PRIVILEGE_POLICY_ID(struct Library * _base, const OSSL_PRIVILEGE_POLICY_ID * a, unsigned char ** out);

AROS_LH2(int,i2d_OSSL_PRIVILEGE_POLICY_ID,
    AROS_LDA(const OSSL_PRIVILEGE_POLICY_ID *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(i2d_OSSL_PRIVILEGE_POLICY_ID, a, out);
    AROS_LIBFUNC_EXIT
}

int LIB_i2d_OSSL_ROLE_SPEC_CERT_ID(struct Library * _base, const OSSL_ROLE_SPEC_CERT_ID * a, unsigned char ** out);

AROS_LH2(int,i2d_OSSL_ROLE_SPEC_CERT_ID,
    AROS_LDA(const OSSL_ROLE_SPEC_CERT_ID *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(i2d_OSSL_ROLE_SPEC_CERT_ID, a, out);
    AROS_LIBFUNC_EXIT
}

int LIB_i2d_OSSL_ROLE_SPEC_CERT_ID_SYNTAX(struct Library * _base, const OSSL_ROLE_SPEC_CERT_ID_SYNTAX * a, unsigned char ** out);

AROS_LH2(int,i2d_OSSL_ROLE_SPEC_CERT_ID_SYNTAX,
    AROS_LDA(const OSSL_ROLE_SPEC_CERT_ID_SYNTAX *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(i2d_OSSL_ROLE_SPEC_CERT_ID_SYNTAX, a, out);
    AROS_LIBFUNC_EXIT
}

int LIB_i2d_OSSL_TARGET(struct Library * _base, const OSSL_TARGET * a, unsigned char ** out);

AROS_LH2(int,i2d_OSSL_TARGET,
    AROS_LDA(const OSSL_TARGET *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(i2d_OSSL_TARGET, a, out);
    AROS_LIBFUNC_EXIT
}

int LIB_i2d_OSSL_TARGETING_INFORMATION(struct Library * _base, const OSSL_TARGETING_INFORMATION * a, unsigned char ** out);

AROS_LH2(int,i2d_OSSL_TARGETING_INFORMATION,
    AROS_LDA(const OSSL_TARGETING_INFORMATION *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(i2d_OSSL_TARGETING_INFORMATION, a, out);
    AROS_LIBFUNC_EXIT
}

int LIB_i2d_OSSL_TARGETS(struct Library * _base, const OSSL_TARGETS * a, unsigned char ** out);

AROS_LH2(int,i2d_OSSL_TARGETS,
    AROS_LDA(const OSSL_TARGETS *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(i2d_OSSL_TARGETS, a, out);
    AROS_LIBFUNC_EXIT
}

int LIB_i2d_OSSL_TIME_PERIOD(struct Library * _base, const OSSL_TIME_PERIOD * a, unsigned char ** out);

AROS_LH2(int,i2d_OSSL_TIME_PERIOD,
    AROS_LDA(const OSSL_TIME_PERIOD *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(i2d_OSSL_TIME_PERIOD, a, out);
    AROS_LIBFUNC_EXIT
}

int LIB_i2d_OSSL_TIME_SPEC(struct Library * _base, const OSSL_TIME_SPEC * a, unsigned char ** out);

AROS_LH2(int,i2d_OSSL_TIME_SPEC,
    AROS_LDA(const OSSL_TIME_SPEC *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(i2d_OSSL_TIME_SPEC, a, out);
    AROS_LIBFUNC_EXIT
}

int LIB_i2d_OSSL_TIME_SPEC_ABSOLUTE(struct Library * _base, const OSSL_TIME_SPEC_ABSOLUTE * a, unsigned char ** out);

AROS_LH2(int,i2d_OSSL_TIME_SPEC_ABSOLUTE,
    AROS_LDA(const OSSL_TIME_SPEC_ABSOLUTE *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(i2d_OSSL_TIME_SPEC_ABSOLUTE, a, out);
    AROS_LIBFUNC_EXIT
}

int LIB_i2d_OSSL_TIME_SPEC_DAY(struct Library * _base, const OSSL_TIME_SPEC_DAY * a, unsigned char ** out);

AROS_LH2(int,i2d_OSSL_TIME_SPEC_DAY,
    AROS_LDA(const OSSL_TIME_SPEC_DAY *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(i2d_OSSL_TIME_SPEC_DAY, a, out);
    AROS_LIBFUNC_EXIT
}

int LIB_i2d_OSSL_TIME_SPEC_MONTH(struct Library * _base, const OSSL_TIME_SPEC_MONTH * a, unsigned char ** out);

AROS_LH2(int,i2d_OSSL_TIME_SPEC_MONTH,
    AROS_LDA(const OSSL_TIME_SPEC_MONTH *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(i2d_OSSL_TIME_SPEC_MONTH, a, out);
    AROS_LIBFUNC_EXIT
}

int LIB_i2d_OSSL_TIME_SPEC_TIME(struct Library * _base, const OSSL_TIME_SPEC_TIME * a, unsigned char ** out);

AROS_LH2(int,i2d_OSSL_TIME_SPEC_TIME,
    AROS_LDA(const OSSL_TIME_SPEC_TIME *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(i2d_OSSL_TIME_SPEC_TIME, a, out);
    AROS_LIBFUNC_EXIT
}

int LIB_i2d_OSSL_TIME_SPEC_WEEKS(struct Library * _base, const OSSL_TIME_SPEC_WEEKS * a, unsigned char ** out);

AROS_LH2(int,i2d_OSSL_TIME_SPEC_WEEKS,
    AROS_LDA(const OSSL_TIME_SPEC_WEEKS *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(i2d_OSSL_TIME_SPEC_WEEKS, a, out);
    AROS_LIBFUNC_EXIT
}

int LIB_i2d_OSSL_TIME_SPEC_X_DAY_OF(struct Library * _base, const OSSL_TIME_SPEC_X_DAY_OF * a, unsigned char ** out);

AROS_LH2(int,i2d_OSSL_TIME_SPEC_X_DAY_OF,
    AROS_LDA(const OSSL_TIME_SPEC_X_DAY_OF *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(i2d_OSSL_TIME_SPEC_X_DAY_OF, a, out);
    AROS_LIBFUNC_EXIT
}

int LIB_i2d_OSSL_USER_NOTICE_SYNTAX(struct Library * _base, const OSSL_USER_NOTICE_SYNTAX * a, unsigned char ** out);

AROS_LH2(int,i2d_OSSL_USER_NOTICE_SYNTAX,
    AROS_LDA(const OSSL_USER_NOTICE_SYNTAX *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(i2d_OSSL_USER_NOTICE_SYNTAX, a, out);
    AROS_LIBFUNC_EXIT
}

int LIB_i2d_PBMAC1PARAM(struct Library * _base, const PBMAC1PARAM * a, unsigned char ** out);

AROS_LH2(int,i2d_PBMAC1PARAM,
    AROS_LDA(const PBMAC1PARAM *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(i2d_PBMAC1PARAM, a, out);
    AROS_LIBFUNC_EXIT
}

int LIB_i2d_X509_ACERT(struct Library * _base, const X509_ACERT * a, unsigned char ** out);

AROS_LH2(int,i2d_X509_ACERT,
    AROS_LDA(const X509_ACERT *, a, A0),
    AROS_LDA(unsigned char **, out, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(i2d_X509_ACERT, a, out);
    AROS_LIBFUNC_EXIT
}

int LIB_i2d_X509_ACERT_bio(struct Library * _base, BIO * bp, const X509_ACERT * acert);

AROS_LH2(int,i2d_X509_ACERT_bio,
    AROS_LDA(BIO *, bp, A0),
    AROS_LDA(const X509_ACERT *, acert, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(i2d_X509_ACERT_bio, bp, acert);
    AROS_LIBFUNC_EXIT
}

int LIB_i2d_X509_PUBKEY_bio(struct Library * _base, BIO * bp, const X509_PUBKEY * xpk);

AROS_LH2(int,i2d_X509_PUBKEY_bio,
    AROS_LDA(BIO *, bp, A0),
    AROS_LDA(const X509_PUBKEY *, xpk, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(i2d_X509_PUBKEY_bio, bp, xpk);
    AROS_LIBFUNC_EXIT
}

char * LIB_i2s_ASN1_UTF8STRING(struct Library * _base, X509V3_EXT_METHOD * method, ASN1_UTF8STRING * utf8);

AROS_LH2(char *,i2s_ASN1_UTF8STRING,
    AROS_LDA(X509V3_EXT_METHOD *, method, A0),
    AROS_LDA(ASN1_UTF8STRING *, utf8, A1),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(i2s_ASN1_UTF8STRING, method, utf8);
    AROS_LIBFUNC_EXIT
}

ASN1_UTF8STRING * LIB_s2i_ASN1_UTF8STRING(struct Library * _base, X509V3_EXT_METHOD * method, X509V3_CTX * ctx, const char * str);

AROS_LH3(ASN1_UTF8STRING *,s2i_ASN1_UTF8STRING,
    AROS_LDA(X509V3_EXT_METHOD *, method, A0),
    AROS_LDA(X509V3_CTX *, ctx, A1),
    AROS_LDA(const char *, str, A2),
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC(s2i_ASN1_UTF8STRING, method, ctx, str);
    AROS_LIBFUNC_EXIT
}

APTR LIB_BIO_meth_get_recvmmsg(struct Library * _base);

AROS_LH0(APTR,BIO_meth_get_recvmmsg,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(UNIMPLEMENTED);
    AROS_LIBFUNC_EXIT
}

APTR LIB_BIO_meth_get_sendmmsg(struct Library * _base);

AROS_LH0(APTR,BIO_meth_get_sendmmsg,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(UNIMPLEMENTED);
    AROS_LIBFUNC_EXIT
}

APTR LIB_CMS_ReceiptRequest_create0_ex(struct Library * _base);

AROS_LH0(APTR,CMS_ReceiptRequest_create0_ex,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(UNIMPLEMENTED);
    AROS_LIBFUNC_EXIT
}

APTR LIB_CMS_SignedData_verify(struct Library * _base);

AROS_LH0(APTR,CMS_SignedData_verify,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(UNIMPLEMENTED);
    AROS_LIBFUNC_EXIT
}

APTR LIB_CMS_encrypt_ex(struct Library * _base);

AROS_LH0(APTR,CMS_encrypt_ex,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(UNIMPLEMENTED);
    AROS_LIBFUNC_EXIT
}

APTR LIB_CMS_sign_ex(struct Library * _base);

AROS_LH0(APTR,CMS_sign_ex,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(UNIMPLEMENTED);
    AROS_LIBFUNC_EXIT
}

APTR LIB_OSSL_CMP_CTX_build_cert_chain(struct Library * _base);

AROS_LH0(APTR,OSSL_CMP_CTX_build_cert_chain,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(UNIMPLEMENTED);
    AROS_LIBFUNC_EXIT
}

APTR LIB_OSSL_CMP_CTX_set1_extraCertsOut(struct Library * _base);

AROS_LH0(APTR,OSSL_CMP_CTX_set1_extraCertsOut,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(UNIMPLEMENTED);
    AROS_LIBFUNC_EXIT
}

APTR LIB_OSSL_CMP_CTX_set1_untrusted(struct Library * _base);

AROS_LH0(APTR,OSSL_CMP_CTX_set1_untrusted,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(UNIMPLEMENTED);
    AROS_LIBFUNC_EXIT
}

APTR LIB_OSSL_CMP_ITAV_get0_caCerts(struct Library * _base);

AROS_LH0(APTR,OSSL_CMP_ITAV_get0_caCerts,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(UNIMPLEMENTED);
    AROS_LIBFUNC_EXIT
}

APTR LIB_OSSL_CMP_ITAV_get0_certProfile(struct Library * _base);

AROS_LH0(APTR,OSSL_CMP_ITAV_get0_certProfile,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(UNIMPLEMENTED);
    AROS_LIBFUNC_EXIT
}

APTR LIB_OSSL_CMP_ITAV_get0_crlStatusList(struct Library * _base);

AROS_LH0(APTR,OSSL_CMP_ITAV_get0_crlStatusList,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(UNIMPLEMENTED);
    AROS_LIBFUNC_EXIT
}

APTR LIB_OSSL_CMP_ITAV_get0_crls(struct Library * _base);

AROS_LH0(APTR,OSSL_CMP_ITAV_get0_crls,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(UNIMPLEMENTED);
    AROS_LIBFUNC_EXIT
}

APTR LIB_OSSL_CMP_ITAV_new0_certProfile(struct Library * _base);

AROS_LH0(APTR,OSSL_CMP_ITAV_new0_certProfile,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(UNIMPLEMENTED);
    AROS_LIBFUNC_EXIT
}

APTR LIB_OSSL_CMP_ITAV_new0_crlStatusList(struct Library * _base);

AROS_LH0(APTR,OSSL_CMP_ITAV_new0_crlStatusList,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(UNIMPLEMENTED);
    AROS_LIBFUNC_EXIT
}

APTR LIB_OSSL_CMP_ITAV_new_caCerts(struct Library * _base);

AROS_LH0(APTR,OSSL_CMP_ITAV_new_caCerts,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(UNIMPLEMENTED);
    AROS_LIBFUNC_EXIT
}

APTR LIB_OSSL_CMP_ITAV_push0_stack_item(struct Library * _base);

AROS_LH0(APTR,OSSL_CMP_ITAV_push0_stack_item,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(UNIMPLEMENTED);
    AROS_LIBFUNC_EXIT
}

APTR LIB_OSSL_CMP_get1_caCerts(struct Library * _base);

AROS_LH0(APTR,OSSL_CMP_get1_caCerts,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(UNIMPLEMENTED);
    AROS_LIBFUNC_EXIT
}

APTR LIB_OSSL_CRMF_ENCRYPTEDKEY_get1_pkey(struct Library * _base);

AROS_LH0(APTR,OSSL_CRMF_ENCRYPTEDKEY_get1_pkey,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(UNIMPLEMENTED);
    AROS_LIBFUNC_EXIT
}

APTR LIB_OSSL_ESS_check_signing_certs(struct Library * _base);

AROS_LH0(APTR,OSSL_ESS_check_signing_certs,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(UNIMPLEMENTED);
    AROS_LIBFUNC_EXIT
}

APTR LIB_OSSL_ESS_signing_cert_new_init(struct Library * _base);

AROS_LH0(APTR,OSSL_ESS_signing_cert_new_init,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(UNIMPLEMENTED);
    AROS_LIBFUNC_EXIT
}

APTR LIB_OSSL_ESS_signing_cert_v2_new_init(struct Library * _base);

AROS_LH0(APTR,OSSL_ESS_signing_cert_v2_new_init,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(UNIMPLEMENTED);
    AROS_LIBFUNC_EXIT
}

APTR LIB_OSSL_HTTP_get_amiga_2(struct Library * _base);

AROS_LH0(APTR,OSSL_HTTP_get_amiga_2,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(UNIMPLEMENTED);
    AROS_LIBFUNC_EXIT
}

APTR LIB_OSSL_HTTP_set1_request(struct Library * _base);

AROS_LH0(APTR,OSSL_HTTP_set1_request,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(UNIMPLEMENTED);
    AROS_LIBFUNC_EXIT
}

APTR LIB_OSSL_HTTP_transfer_amiga_2(struct Library * _base);

AROS_LH0(APTR,OSSL_HTTP_transfer_amiga_2,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(UNIMPLEMENTED);
    AROS_LIBFUNC_EXIT
}

APTR LIB_OSSL_STACK_OF_X509_free(struct Library * _base);

AROS_LH0(APTR,OSSL_STACK_OF_X509_free,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(UNIMPLEMENTED);
    AROS_LIBFUNC_EXIT
}

APTR LIB_PEM_X509_INFO_read_bio_ex(struct Library * _base);

AROS_LH0(APTR,PEM_X509_INFO_read_bio_ex,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(UNIMPLEMENTED);
    AROS_LIBFUNC_EXIT
}

APTR LIB_PKCS12_SAFEBAG_set0_attrs(struct Library * _base);

AROS_LH0(APTR,PKCS12_SAFEBAG_set0_attrs,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(UNIMPLEMENTED);
    AROS_LIBFUNC_EXIT
}

APTR LIB_PKCS12_add_key_ex(struct Library * _base);

AROS_LH0(APTR,PKCS12_add_key_ex,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(UNIMPLEMENTED);
    AROS_LIBFUNC_EXIT
}

APTR LIB_PKCS12_add_safe_ex(struct Library * _base);

AROS_LH0(APTR,PKCS12_add_safe_ex,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(UNIMPLEMENTED);
    AROS_LIBFUNC_EXIT
}

APTR LIB_PKCS12_add_safes_ex(struct Library * _base);

AROS_LH0(APTR,PKCS12_add_safes_ex,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(UNIMPLEMENTED);
    AROS_LIBFUNC_EXIT
}

APTR LIB_PKCS12_add_secret(struct Library * _base);

AROS_LH0(APTR,PKCS12_add_secret,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(UNIMPLEMENTED);
    AROS_LIBFUNC_EXIT
}

APTR LIB_PKCS12_create_ex(struct Library * _base);

AROS_LH0(APTR,PKCS12_create_ex,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(UNIMPLEMENTED);
    AROS_LIBFUNC_EXIT
}

APTR LIB_PKCS12_create_ex2_amiga_1(struct Library * _base);

AROS_LH0(APTR,PKCS12_create_ex2_amiga_1,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(UNIMPLEMENTED);
    AROS_LIBFUNC_EXIT
}

APTR LIB_PKCS12_pack_p7encdata_ex(struct Library * _base);

AROS_LH0(APTR,PKCS12_pack_p7encdata_ex,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(UNIMPLEMENTED);
    AROS_LIBFUNC_EXIT
}

APTR LIB_PKCS7_encrypt_ex(struct Library * _base);

AROS_LH0(APTR,PKCS7_encrypt_ex,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(UNIMPLEMENTED);
    AROS_LIBFUNC_EXIT
}

APTR LIB_PKCS7_sign_ex(struct Library * _base);

AROS_LH0(APTR,PKCS7_sign_ex,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(UNIMPLEMENTED);
    AROS_LIBFUNC_EXIT
}

APTR LIB_SMIME_write_ASN1_ex(struct Library * _base);

AROS_LH0(APTR,SMIME_write_ASN1_ex,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(UNIMPLEMENTED);
    AROS_LIBFUNC_EXIT
}

APTR LIB_TS_VERIFY_CTX_set0_certs(struct Library * _base);

AROS_LH0(APTR,TS_VERIFY_CTX_set0_certs,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(UNIMPLEMENTED);
    AROS_LIBFUNC_EXIT
}

APTR LIB_X509_add_cert(struct Library * _base);

AROS_LH0(APTR,X509_add_cert,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(UNIMPLEMENTED);
    AROS_LIBFUNC_EXIT
}

APTR LIB_X509_add_certs(struct Library * _base);

AROS_LH0(APTR,X509_add_certs,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(UNIMPLEMENTED);
    AROS_LIBFUNC_EXIT
}

APTR LIB_X509_build_chain(struct Library * _base);

AROS_LH0(APTR,X509_build_chain,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(UNIMPLEMENTED);
    AROS_LIBFUNC_EXIT
}

APTR LIB_X509v3_add_extensions(struct Library * _base);

AROS_LH0(APTR,X509v3_add_extensions,
    struct Library *, __BASE_OR_IFACE_VAR, 0, LIBSTUB)
{
    AROS_LIBFUNC_INIT
    return CALL_LFUNC_NP(UNIMPLEMENTED);
    AROS_LIBFUNC_EXIT
}

