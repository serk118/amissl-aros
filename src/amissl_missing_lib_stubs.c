/* Auto-generated stubs for missing LIB_* functions */
#ifdef __AROS__

/* AROS runtime init/fini/ctype symbol stubs */
void __LIBS__symbol_set_handler_missing(void *handler) { (void)handler; }
void __EXIT__symbol_set_handler_missing(void *handler) { (void)handler; }
void __INIT__symbol_set_handler_missing(void *handler) { (void)handler; }
unsigned short *__ctype_table = NULL;
int LIB_CRYPTO_mem_ctrl(struct Library * _base, int ___mode) {
    (void)0;
    return 0;
}

void LIB_ERR_load_DSO_strings(struct Library * _base) {
    (void)0;
}

void LIB_ERR_put_error(struct Library * _base, int ___lib, int ___func, int ___reason, const char * ___file, int ___line) {
    (void)0;
}

int LIB_EVP_PKEY_bits(struct Library * _base, const EVP_PKEY * ___pkey) {
    (void)0;
    return 0;
}

int LIB_EVP_PKEY_size(struct Library * _base, const EVP_PKEY * ___pkey) {
    (void)0;
    return 0;
}

int LIB_EVP_CIPHER_type(struct Library * _base, const EVP_CIPHER * ___ctx) {
    (void)0;
    return 0;
}

int LIB_OCSP_parse_url(struct Library * _base, const char * ___url, char ** ___phost, char ** ___pport, char ** ___ppath, int * ___pssl) {
    (void)0;
    return 0;
}

int LIB_FIPS_mode(struct Library * _base) {
    (void)0;
    return 0;
}

int LIB_EVP_CIPHER_nid(struct Library * _base, const EVP_CIPHER * ___cipher) {
    (void)0;
    return 0;
}

int LIB_EVP_MD_type(struct Library * _base, const EVP_MD * ___md) {
    (void)0;
    return 0;
}

int LIB_EVP_CIPHER_iv_length(struct Library * _base, const EVP_CIPHER * ___cipher) {
    (void)0;
    return 0;
}

int LIB_OCSP_sendreq_nbio(struct Library * _base, OCSP_RESPONSE ** ___presp, OCSP_REQ_CTX * ___rctx) {
    (void)0;
    return 0;
}

void LIB_OCSP_REQ_CTX_free(struct Library * _base, OCSP_REQ_CTX * ___rctx) {
    (void)0;
}

int LIB_FIPS_mode_set(struct Library * _base, int ___r) {
    (void)0;
    return 0;
}

int LIB_EVP_CIPHER_block_size(struct Library * _base, const EVP_CIPHER * ___cipher) {
    (void)0;
    return 0;
}

int LIB_EVP_CIPHER_CTX_nid(struct Library * _base, const EVP_CIPHER_CTX * ___ctx) {
    (void)0;
    return 0;
}

int LIB_EVP_CIPHER_CTX_key_length(struct Library * _base, const EVP_CIPHER_CTX * ___ctx) {
    (void)0;
    return 0;
}

int LIB_EVP_MD_size(struct Library * _base, const EVP_MD * ___md) {
    (void)0;
    return 0;
}

int LIB_EVP_MD_pkey_type(struct Library * _base, const EVP_MD * ___md) {
    (void)0;
    return 0;
}

unsigned long LIB_EVP_CIPHER_flags(struct Library * _base, const EVP_CIPHER * ___cipher) {
    (void)0;
    return 0;
}

int LIB_EVP_CIPHER_key_length(struct Library * _base, const EVP_CIPHER * ___cipher) {
    (void)0;
    return 0;
}

int LIB_EVP_CIPHER_CTX_block_size(struct Library * _base, const EVP_CIPHER_CTX * ___ctx) {
    (void)0;
    return 0;
}

int LIB_EVP_MD_block_size(struct Library * _base, const EVP_MD * ___md) {
    (void)0;
    return 0;
}

int LIB_EVP_CIPHER_CTX_iv_length(struct Library * _base, const EVP_CIPHER_CTX * ___ctx) {
    (void)0;
    return 0;
}

int LIB_EVP_PKEY_base_id(struct Library * _base, const EVP_PKEY * ___pkey) {
    (void)0;
    return 0;
}

int LIB_EVP_PKEY_id(struct Library * _base, const EVP_PKEY * ___pkey) {
    (void)0;
    return 0;
}

unsigned long LIB_EVP_MD_flags(struct Library * _base, const EVP_MD * ___md) {
    (void)0;
    return 0;
}

int LIB_OCSP_REQ_CTX_add1_header(struct Library * _base, OCSP_REQ_CTX * ___rctx, const char * ___name, const char * ___value) {
    (void)0;
    return 0;
}

int LIB_OCSP_REQ_CTX_set1_req(struct Library * _base, OCSP_REQ_CTX * ___rctx, OCSP_REQUEST * ___req) {
    (void)0;
    return 0;
}

int LIB_OPENSSL_memcmp(struct Library * _base, const void * ___p1, const void * ___p2, size_t ___n) {
    (void)0;
    return 0;
}

BIO * LIB_OCSP_REQ_CTX_get0_mem_bio(struct Library * _base, OCSP_REQ_CTX * ___rctx) {
    (void)0;
    return NULL;
}

int LIB_OCSP_REQ_CTX_http(struct Library * _base, OCSP_REQ_CTX * ___rctx, const char * ___op, const char * ___path) {
    (void)0;
    return 0;
}

int LIB_OCSP_REQ_CTX_i2d(struct Library * _base, OCSP_REQ_CTX * ___rctx, const ASN1_ITEM * ___it, ASN1_VALUE * ___val) {
    (void)0;
    return 0;
}

int LIB_OCSP_REQ_CTX_nbio(struct Library * _base, OCSP_REQ_CTX * ___rctx) {
    (void)0;
    return 0;
}

int LIB_OCSP_REQ_CTX_nbio_d2i(struct Library * _base, OCSP_REQ_CTX * ___rctx, ASN1_VALUE ** ___pval, const ASN1_ITEM * ___it) {
    (void)0;
    return 0;
}

OCSP_REQ_CTX * LIB_OCSP_REQ_CTX_new(struct Library * _base, BIO * ___io, int ___maxline) {
    (void)0;
    return NULL;
}

void LIB_OCSP_set_max_response_length(struct Library * _base, OCSP_REQ_CTX * ___rctx, unsigned long ___len) {
    (void)0;
}

int LIB_CRYPTO_set_mem_debug(struct Library * _base, int ___flag) {
    (void)0;
    return 0;
}

int LIB_EVP_CIPHER_CTX_encrypting(struct Library * _base, const EVP_CIPHER_CTX * ___ctx) {
    (void)0;
    return 0;
}

int LIB_EVP_CIPHER_CTX_num(struct Library * _base, const EVP_CIPHER_CTX * ___ctx) {
    (void)0;
    return 0;
}

void * LIB_EVP_MD_CTX_md_data(struct Library * _base, const EVP_MD_CTX * ___ctx) {
    (void)0;
    return NULL;
}

EVP_PKEY_CTX * LIB_EVP_MD_CTX_pkey_ctx(struct Library * _base, const EVP_MD_CTX * ___ctx) {
    (void)0;
    return NULL;
}

int LIB_EVP_PBE_scrypt(struct Library * _base, const char * ___pass, size_t ___passlen, const unsigned char * ___salt, size_t ___saltlen, unsigned long ___N, unsigned long ___r, unsigned long ___p, uint64_t ___maxmem, unsigned char * ___key, size_t ___keylen) {
    (void)0;
    return 0;
}

int LIB_EVP_PKEY_security_bits(struct Library * _base, const EVP_PKEY * ___pkey) {
    (void)0;
    return 0;
}

int LIB_EVP_PKEY_set1_tls_encodedpoint(struct Library * _base, EVP_PKEY * ___pkey, const unsigned char * ___pt, size_t ___ptlen) {
    (void)0;
    return 0;
}

size_t LIB_EVP_PKEY_get1_tls_encodedpoint(struct Library * _base, EVP_PKEY * ___pkey, unsigned char ** ___ppt) {
    (void)0;
    return 0;
}

int LIB_RAND_DRBG_instantiate(struct Library * _base, RAND_DRBG * ___drbg, const unsigned char * ___pers, size_t ___perslen) {
    (void)0;
    return 0;
}

int LIB_RAND_DRBG_uninstantiate(struct Library * _base, RAND_DRBG * ___drbg) {
    (void)0;
    return 0;
}

int LIB_RAND_DRBG_set(struct Library * _base, RAND_DRBG * ___drbg, int ___type, unsigned int ___flags) {
    (void)0;
    return 0;
}

RAND_DRBG * LIB_RAND_DRBG_new(struct Library * _base, int ___type, unsigned int ___flags, RAND_DRBG * ___parent) {
    (void)0;
    return NULL;
}

int LIB_RAND_DRBG_set_reseed_interval(struct Library * _base, RAND_DRBG * ___drbg, unsigned int ___interval) {
    (void)0;
    return 0;
}

void LIB_RAND_DRBG_free(struct Library * _base, RAND_DRBG * ___drbg) {
    (void)0;
}

int LIB_RAND_DRBG_generate(struct Library * _base, RAND_DRBG * ___drbg, unsigned char * ___out, size_t ___outlen, int ___prediction_resistance, const unsigned char * ___adin, size_t ___adinlen) {
    (void)0;
    return 0;
}

int LIB_RAND_DRBG_reseed(struct Library * _base, RAND_DRBG * ___drbg, const unsigned char * ___adin, size_t ___adinlen, int ___prediction_resistance) {
    (void)0;
    return 0;
}

int LIB_RAND_DRBG_set_ex_data(struct Library * _base, RAND_DRBG * ___drbg, int ___idx, void * ___arg) {
    (void)0;
    return 0;
}

void * LIB_RAND_DRBG_get_ex_data(struct Library * _base, const RAND_DRBG * ___drbg, int ___idx) {
    (void)0;
    return NULL;
}

RAND_DRBG * LIB_RAND_DRBG_get0_public(struct Library * _base) {
    (void)0;
    return NULL;
}

RAND_DRBG * LIB_RAND_DRBG_get0_private(struct Library * _base) {
    (void)0;
    return NULL;
}

RAND_DRBG * LIB_RAND_DRBG_get0_master(struct Library * _base) {
    (void)0;
    return NULL;
}

int LIB_RAND_DRBG_set_reseed_time_interval(struct Library * _base, RAND_DRBG * ___drbg, time_t ___interval) {
    (void)0;
    return 0;
}

int LIB_RAND_DRBG_bytes(struct Library * _base, RAND_DRBG * ___drbg, unsigned char * ___out, size_t ___outlen) {
    (void)0;
    return 0;
}

RAND_DRBG * LIB_RAND_DRBG_secure_new(struct Library * _base, int ___type, unsigned int ___flags, RAND_DRBG * ___parent) {
    (void)0;
    return NULL;
}

int LIB_RAND_DRBG_set_reseed_defaults(struct Library * _base, unsigned int ___master_reseed_interval, unsigned int ___slave_reseed_interval, time_t ___master_reseed_time_interval, time_t ___slave_reseed_time_interval) {
    (void)0;
    return 0;
}

int LIB_RAND_DRBG_set_defaults(struct Library * _base, int ___type, unsigned int ___flags) {
    (void)0;
    return 0;
}

int LIB_EVP_PKEY_set_alias_type(struct Library * _base, EVP_PKEY * ___pkey, int ___type) {
    (void)0;
    return 0;
}

#endif /* __AROS__ */
