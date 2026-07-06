/*
 * Copyright 2019-2025 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the Apache License 2.0 (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#include "crypto/cryptlib.h"
#include <openssl/conf.h>
#include <openssl/trace.h>
#include "internal/thread_once.h"
#include "internal/property.h"
#include "internal/cryptlib.h"
#include "internal/core.h"
#include "internal/bio.h"
#include "internal/provider.h"
#include "internal/threads_common.h"
#include "crypto/decoder.h"
#include "crypto/context.h"

struct ossl_lib_ctx_st {
    CRYPTO_RWLOCK *lock;
    OSSL_EX_DATA_GLOBAL global;

    void *property_string_data;
    void *evp_method_store;
    void *provider_store;
    void *namemap;
    void *property_defns;
    void *global_properties;
    void *drbg;
    void *drbg_nonce;
#ifndef FIPS_MODULE
    void *provider_conf;
    void *bio_core;
    void *child_provider;
    OSSL_METHOD_STORE *decoder_store;
    void *decoder_cache;
    OSSL_METHOD_STORE *encoder_store;
    OSSL_METHOD_STORE *store_loader_store;
    void *self_test_cb;
    void *indicator_cb;
#endif
#if defined(OPENSSL_THREADS)
    void *threads;
#endif
#ifdef FIPS_MODULE
    void *fips_prov;
#endif
    STACK_OF(SSL_COMP) *comp_methods;

    int ischild;
    int conf_diagnostics;
};

int ossl_lib_ctx_write_lock(OSSL_LIB_CTX *ctx)
{
    if ((ctx = ossl_lib_ctx_get_concrete(ctx)) == NULL)
        return 0;
    return CRYPTO_THREAD_write_lock(ctx->lock);
}

int ossl_lib_ctx_read_lock(OSSL_LIB_CTX *ctx)
{
    if ((ctx = ossl_lib_ctx_get_concrete(ctx)) == NULL)
        return 0;
    return CRYPTO_THREAD_read_lock(ctx->lock);
}

int ossl_lib_ctx_unlock(OSSL_LIB_CTX *ctx)
{
    if ((ctx = ossl_lib_ctx_get_concrete(ctx)) == NULL)
        return 0;
    return CRYPTO_THREAD_unlock(ctx->lock);
}

int ossl_lib_ctx_is_child(OSSL_LIB_CTX *ctx)
{
    ctx = ossl_lib_ctx_get_concrete(ctx);

    if (ctx == NULL)
        return 0;
    return ctx->ischild;
}

static void context_deinit_objs(OSSL_LIB_CTX *ctx);

static int context_init(OSSL_LIB_CTX *ctx)
{
    ctx->lock = CRYPTO_THREAD_lock_new();
    if (ctx->lock == NULL)
        return 0;
    ctx->global.ex_data_lock = CRYPTO_THREAD_lock_new();
    if (ctx->global.ex_data_lock == NULL)
        return 0;
    ctx->evp_method_store = ossl_method_store_new(ctx);
    if (ctx->evp_method_store == NULL)
        return 0;
    ctx->provider_store = ossl_provider_store_new(ctx);
    if (ctx->provider_store == NULL)
        return 0;
    ctx->namemap = ossl_stored_namemap_new(ctx);
    if (ctx->namemap == NULL)
        return 0;
    ctx->property_string_data = ossl_property_string_data_new(ctx);
    if (ctx->property_string_data == NULL)
        return 0;
    ctx->property_defns = ossl_property_defns_new(ctx);
    if (ctx->property_defns == NULL)
        return 0;
    ctx->drbg = ossl_rand_ctx_new(ctx);
    if (ctx->drbg == NULL)
        return 0;
    ossl_provider_disable_fallback_loading(ctx);
    return 1;
}

static void context_deinit_objs(OSSL_LIB_CTX *ctx)
{
    /* P2. We want evp_method_store to be cleaned up before the provider store */
    if (ctx->evp_method_store != NULL) {
        ossl_method_store_free(ctx->evp_method_store);
        ctx->evp_method_store = NULL;
    }

    /* P2. */
    if (ctx->drbg != NULL) {
        ossl_rand_ctx_free(ctx->drbg);
        ctx->drbg = NULL;
    }

#ifndef FIPS_MODULE
    /* P2. */
    if (ctx->provider_conf != NULL) {
        ossl_prov_conf_ctx_free(ctx->provider_conf);
        ctx->provider_conf = NULL;
    }

    /*
     * P2. We want decoder_store/decoder_cache to be cleaned up before the
     * provider store
     */
    if (ctx->decoder_store != NULL) {
        ossl_method_store_free(ctx->decoder_store);
        ctx->decoder_store = NULL;
    }
    if (ctx->decoder_cache != NULL) {
        ossl_decoder_cache_free(ctx->decoder_cache);
        ctx->decoder_cache = NULL;
    }

    /* P2. We want encoder_store to be cleaned up before the provider store */
    if (ctx->encoder_store != NULL) {
        ossl_method_store_free(ctx->encoder_store);
        ctx->encoder_store = NULL;
    }

    /* P2. We want loader_store to be cleaned up before the provider store */
    if (ctx->store_loader_store != NULL) {
        ossl_method_store_free(ctx->store_loader_store);
        ctx->store_loader_store = NULL;
    }
#endif

    /* P1. Needs to be freed before the child provider data is freed */
    if (ctx->provider_store != NULL) {
        ossl_provider_store_free(ctx->provider_store);
        ctx->provider_store = NULL;
    }

    /* Default priority. */
    if (ctx->property_string_data != NULL) {
        ossl_property_string_data_free(ctx->property_string_data);
        ctx->property_string_data = NULL;
    }

    if (ctx->namemap != NULL) {
        ossl_stored_namemap_free(ctx->namemap);
        ctx->namemap = NULL;
    }

    if (ctx->property_defns != NULL) {
        ossl_property_defns_free(ctx->property_defns);
        ctx->property_defns = NULL;
    }

    if (ctx->global_properties != NULL) {
        ossl_ctx_global_properties_free(ctx->global_properties);
        ctx->global_properties = NULL;
    }

#ifndef FIPS_MODULE
    if (ctx->bio_core != NULL) {
        ossl_bio_core_globals_free(ctx->bio_core);
        ctx->bio_core = NULL;
    }
#endif

    if (ctx->drbg_nonce != NULL) {
        ossl_prov_drbg_nonce_ctx_free(ctx->drbg_nonce);
        ctx->drbg_nonce = NULL;
    }

#ifndef FIPS_MODULE
    if (ctx->indicator_cb != NULL) {
        ossl_indicator_set_callback_free(ctx->indicator_cb);
        ctx->indicator_cb = NULL;
    }

    if (ctx->self_test_cb != NULL) {
        ossl_self_test_set_callback_free(ctx->self_test_cb);
        ctx->self_test_cb = NULL;
    }
#endif

#ifdef FIPS_MODULE
    ossl_thread_event_ctx_free(ctx);

    if (ctx->fips_prov != NULL) {
        ossl_fips_prov_ossl_ctx_free(ctx->fips_prov);
        ctx->fips_prov = NULL;
    }
#endif

#ifndef OPENSSL_NO_THREAD_POOL
    if (ctx->threads != NULL) {
        ossl_threads_ctx_free(ctx->threads);
        ctx->threads = NULL;
    }
#endif

    /* Low priority. */
#ifndef FIPS_MODULE
    if (ctx->child_provider != NULL) {
        ossl_child_prov_ctx_free(ctx->child_provider);
        ctx->child_provider = NULL;
    }
#endif

#ifndef FIPS_MODULE
    if (ctx->comp_methods != NULL) {
        ossl_free_compression_methods_int(ctx->comp_methods);
        ctx->comp_methods = NULL;
    }
#endif
}

static int context_deinit(OSSL_LIB_CTX *ctx)
{
    if (ctx == NULL)
        return 1;

    ossl_ctx_thread_stop(ctx);

    context_deinit_objs(ctx);

    ossl_crypto_cleanup_all_ex_data_int(ctx);

    CRYPTO_THREAD_lock_free(ctx->lock);
    ctx->lock = NULL;
    return 1;
}

#ifndef FIPS_MODULE
/* The default default context */
static OSSL_LIB_CTX default_context_int;

static CRYPTO_ONCE default_context_init = CRYPTO_ONCE_STATIC_INIT;
static CRYPTO_THREAD_LOCAL default_context_thread_local;
static int default_context_inited = 0;

DEFINE_RUN_ONCE_STATIC(default_context_do_init)
{
    if (!CRYPTO_THREAD_init_local(&default_context_thread_local, NULL))
        goto err;

    if (!context_init(&default_context_int))
        goto deinit_thread;

    default_context_inited = 1;
    return 1;

deinit_thread:
    CRYPTO_THREAD_cleanup_local(&default_context_thread_local);
err:
    return 0;
}

void ossl_lib_ctx_default_deinit(void)
{
    if (!default_context_inited)
        return;
    context_deinit(&default_context_int);
    CRYPTO_THREAD_cleanup_local(&default_context_thread_local);
    default_context_inited = 0;
}

OSSL_LIB_CTX *get_default_context(void)
{
    if (!RUN_ONCE(&default_context_init, default_context_do_init))
        return &default_context_int;
    if (!default_context_inited)
        return &default_context_int;
    {
        OSSL_LIB_CTX *ctx = CRYPTO_THREAD_get_local(&default_context_thread_local);
        return ctx != NULL ? ctx : &default_context_int;
    }
}

OSSL_LIB_CTX *ossl_lib_ctx_get_concrete(OSSL_LIB_CTX *ctx)
{
#ifndef FIPS_MODULE
    if (ctx == NULL)
        return get_default_context();
#endif
    return ctx;
}

int ossl_lib_ctx_is_default(OSSL_LIB_CTX *ctx)
{
#ifndef FIPS_MODULE
    if (ctx == NULL || ctx == get_default_context())
        return 1;
#endif
    return 0;
}

int ossl_lib_ctx_is_global_default(OSSL_LIB_CTX *ctx)
{
#ifndef FIPS_MODULE
    if (ossl_lib_ctx_get_concrete(ctx) == &default_context_int)
        return 1;
#endif
    return 0;
}

void *ossl_lib_ctx_get_data(OSSL_LIB_CTX *ctx, int index)
{
    ctx = ossl_lib_ctx_get_concrete(ctx);
    if (ctx == NULL)
        return NULL;

    switch (index) {
    case OSSL_LIB_CTX_PROPERTY_STRING_INDEX:
        return ctx->property_string_data;
    case OSSL_LIB_CTX_EVP_METHOD_STORE_INDEX:
        return ctx->evp_method_store;
    case OSSL_LIB_CTX_PROVIDER_STORE_INDEX:
        return ctx->provider_store;
    case OSSL_LIB_CTX_NAMEMAP_INDEX:
        return ctx->namemap;
    case OSSL_LIB_CTX_PROPERTY_DEFN_INDEX:
        return ctx->property_defns;
    case OSSL_LIB_CTX_GLOBAL_PROPERTIES:
        return ctx->global_properties;
    case OSSL_LIB_CTX_DRBG_INDEX:
        return ctx->drbg;
    case OSSL_LIB_CTX_DRBG_NONCE_INDEX:
        return ctx->drbg_nonce;
#ifndef FIPS_MODULE
    case OSSL_LIB_CTX_PROVIDER_CONF_INDEX:
        return ctx->provider_conf;
    case OSSL_LIB_CTX_BIO_CORE_INDEX:
        return ctx->bio_core;
    case OSSL_LIB_CTX_CHILD_PROVIDER_INDEX:
        return ctx->child_provider;
    case OSSL_LIB_CTX_DECODER_STORE_INDEX:
        return ctx->decoder_store;
    case OSSL_LIB_CTX_DECODER_CACHE_INDEX:
        return ctx->decoder_cache;
    case OSSL_LIB_CTX_ENCODER_STORE_INDEX:
        return ctx->encoder_store;
    case OSSL_LIB_CTX_STORE_LOADER_STORE_INDEX:
        return ctx->store_loader_store;
    case OSSL_LIB_CTX_SELF_TEST_CB_INDEX:
        return ctx->self_test_cb;
    case OSSL_LIB_CTX_INDICATOR_CB_INDEX:
        return ctx->indicator_cb;
#endif
#ifndef OPENSSL_NO_THREAD_POOL
    case OSSL_LIB_CTX_THREAD_INDEX:
        return ctx->threads;
#endif

#ifdef FIPS_MODULE
    case OSSL_LIB_CTX_FIPS_PROV_INDEX:
        return ctx->fips_prov;
#endif

    case OSSL_LIB_CTX_COMP_METHODS:
        return (void *)&ctx->comp_methods;

    default:
        return NULL;
    }
}

void *OSSL_LIB_CTX_get_data(OSSL_LIB_CTX *ctx, int index)
{
    return ossl_lib_ctx_get_data(ctx, index);
}

OSSL_EX_DATA_GLOBAL *ossl_lib_ctx_get_ex_data_global(OSSL_LIB_CTX *ctx)
{
    ctx = ossl_lib_ctx_get_concrete(ctx);
    if (ctx == NULL)
        return NULL;
    return &ctx->global;
}

const char *ossl_lib_ctx_get_descriptor(OSSL_LIB_CTX *libctx)
{
#ifdef FIPS_MODULE
    return "FIPS internal library context";
#else
    if (ossl_lib_ctx_is_global_default(libctx))
        return "Global default library context";
    if (ossl_lib_ctx_is_default(libctx))
        return "Thread-local default library context";
    return "Non-default library context";
#endif
}

int OSSL_LIB_CTX_get_conf_diagnostics(OSSL_LIB_CTX *libctx)
{
    libctx = ossl_lib_ctx_get_concrete(libctx);
    if (libctx == NULL)
        return 0;
    return libctx->conf_diagnostics;
}

void OSSL_LIB_CTX_set_conf_diagnostics(OSSL_LIB_CTX *libctx, int value)
{
    libctx = ossl_lib_ctx_get_concrete(libctx);
    if (libctx == NULL)
        return;
    libctx->conf_diagnostics = value;
}

#endif /* FIPS_MODULE */

/* Public API: allocate a new library context */
OSSL_LIB_CTX *OSSL_LIB_CTX_new(void)
{
    OSSL_LIB_CTX *ctx = OPENSSL_zalloc(sizeof(*ctx));
    if (ctx == NULL)
        return NULL;
    if (!context_init(ctx)) {
        OPENSSL_free(ctx);
        return NULL;
    }
    return ctx;
}

#ifndef FIPS_MODULE
/* Public API: create from dispatch (stub - falls back to OSSL_LIB_CTX_new) */
OSSL_LIB_CTX *OSSL_LIB_CTX_new_from_dispatch(const OSSL_CORE_HANDLE *handle,
                                             const OSSL_DISPATCH *in)
{
    return OSSL_LIB_CTX_new();
}

/* Public API: create child context (stub - falls back to OSSL_LIB_CTX_new) */
OSSL_LIB_CTX *OSSL_LIB_CTX_new_child(const OSSL_CORE_HANDLE *handle,
                                     const OSSL_DISPATCH *in)
{
    return OSSL_LIB_CTX_new();
}
#endif

/* Public API: free a library context (no-op for default context) */
void OSSL_LIB_CTX_free(OSSL_LIB_CTX *ctx)
{
    if (ctx == NULL)
        return;
#ifndef FIPS_MODULE
    if (ctx == &default_context_int || ctx == get_default_context())
        return;
#endif
    context_deinit(ctx);
    OPENSSL_free(ctx);
}

#ifndef FIPS_MODULE
/* Public API: set the thread-local default context */
OSSL_LIB_CTX *OSSL_LIB_CTX_set0_default(OSSL_LIB_CTX *ctx)
{
    OSSL_LIB_CTX *old = get_default_context();
    if (!CRYPTO_THREAD_set_local(&default_context_thread_local, ctx))
        return NULL;
    return old;
}

/* Public API: get the global default context */
OSSL_LIB_CTX *OSSL_LIB_CTX_get0_global_default(void)
{
    return &default_context_int;
}

/* Public API: load config file (stub - does nothing) */
int OSSL_LIB_CTX_load_config(OSSL_LIB_CTX *ctx, const char *config_file)
{
    return 1;
}
#endif /* FIPS_MODULE */

/* Internal: release default DRBG context */
void ossl_release_default_drbg_ctx(void)
{
#ifndef FIPS_MODULE
    if (default_context_int.drbg != NULL) {
        ossl_rand_ctx_free(default_context_int.drbg);
        default_context_int.drbg = NULL;
    }
#endif
}
