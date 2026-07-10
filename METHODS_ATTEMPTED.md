# Methods Attempted — Provider Loading Issue

## Problem
OSSL_PROVIDER_load(NULL, "default") returns NULL. Without the default provider,
no cipher algorithms are available → SSL_connect fails with "no ciphers available".

## Attempts

### 1. Fix EXT dispatch LVO mismatch
- Changed UNIMPLEMENTED to OSSL_LIB_CTX_new in amissl_stubs_aros_new.c:336
- ✅ OSSL_LIB_CTX_new now works (returns valid pointer)
- ❌ OSSL_PROVIDER_load still returns NULL (goes through EXT dispatch at LVO 0x30)

### 2. Bypass EXT macro with #undef
- Added #undef OSSL_PROVIDER_load before calling it in httpget
- ❌ Linker error: undefined symbol (httpget doesn't link libcrypto.a)

### 3. Activate fallback providers in context_init
- Added ossl_provider_activate_fallbacks(ctx) in context.c:context_init
- ❌ Provider still not loaded (maybe provider_activate fails internally)

### 4. Check if provider_activate_fallbacks works
- The function creates a provider via provider_new, then calls provider_activate
- provider_activate calls ossl_default_provider_init with core_dispatch
- Possibly fails because core dispatch infrastructure not ready at context_init time

### 5. Remove ossl_provider_disable_fallback_loading from context_init
- Done earlier - allows auto-loading of fallbacks
- ❌ Auto-loading never triggers because algorithm fetching never happens
  (cipher checks don't trigger algorithm fetch)

## Next Options
- A: Load provider inside the httpget test using GetInterface/dlsym to get real function
- B: Add OSSL_PROVIDER_load to main library SDI_LIBVECTOR (bypass EXT)
- C: Find why provider_activate fails and fix it
- D: Remove EXT inline macro for OSSL_PROVIDER_load and add a regular function stub
