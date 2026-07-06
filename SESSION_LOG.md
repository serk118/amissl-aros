# Session Log — July 5, 2026

## Fix 1: Missing public API functions in patched context.c
**Root Cause:** The AmiSSL-patched `openssl/crypto/context.c` lost the public API functions (`OSSL_LIB_CTX_new`, `OSSL_LIB_CTX_free`, `OSSL_LIB_CTX_set0_default`, `OSSL_LIB_CTX_get0_global_default`, `OSSL_LIB_CTX_load_config`, `OSSL_LIB_CTX_new_child`, `OSSL_LIB_CTX_new_from_dispatch`, `ossl_release_default_drbg_ctx`) when the patching added `get_default_context()` and fixed `context_init()`. These functions were never restored.

**Fix Applied (`openssl/crypto/context.c`):**
- Added all missing public API function implementations after `#endif /* FIPS_MODULE */`
- `OSSL_LIB_CTX_new()` — allocates and calls `context_init()`
- `OSSL_LIB_CTX_free()` — calls `context_deinit()` then `OPENSSL_free()` (no-op for default context)
- `OSSL_LIB_CTX_set0_default()` / `OSSL_LIB_CTX_get0_global_default()` — default context management
- `OSSL_LIB_CTX_load_config()` — stub (returns 1)
- `OSSL_LIB_CTX_new_from_dispatch()` / `OSSL_LIB_CTX_new_child()` — fallback to `OSSL_LIB_CTX_new()`
- `ossl_release_default_drbg_ctx()` — releases DRBG from default context

## Fix 2: Provider loading moved to ossl_init_base
**Root Cause:** `context_init()` in `context.c` calls `ossl_provider_disable_fallback_loading()` which prevents auto-loading of the default provider. When `EVP_RAND_fetch(NULL, "CTR-DRBG", NULL)` is called during SSL init, no provider is available → "unsupported" error → `SSL_CTX_new` returns NULL.

**Fix Applied (`openssl/crypto/init.c`):**
- Added `OSSL_PROVIDER_load(NULL, "default")` in `ossl_init_base()` so the default provider is loaded during `OPENSSL_init_crypto` — BEFORE any algorithm fetches and BEFORE `context_init` disables fallbacks
- Provider loading in `InitAmiSSLA` (amissl_library.c) was DUPLICATE and caused a hang on hosted AROS — removed it

## Fix 3: gethostbyname crash on AROS
**Root Cause:** OpenSSL's `bio_addr.c:842` calls `gethostbyname(host)` directly as a plain C function. On AROS, `gethostbyname` is a MACRO (in `<defines/bsdsocket.h>`) that dispatches through SocketBase via `AROS_LC1`. The OpenSSL code doesn't get this macro, so it calls an implicit function → crash.

**Fix Applied (`openssl/crypto/bio/bio_addr.c`):**
- Changed `gethostbyname(host)` → `BIO_gethostbyname(host)` at line 843 (only for `OPENSSL_SYS_AMIGA`/`__AROS__`)
- `BIO_gethostbyname` is the AmiSSL public API that properly wraps the call

## Fix 4: Removed weak SocketBase definition
**Root Cause:** `amissl_missing_stubs.c` defined `struct Library *SocketBase = NULL;` which overrode the AROS SDK's SocketBase. On AROS, SocketBase should be provided by `-lamiga` or `-larossupport` for proper bsdsocket.library dispatch.

**Fix Applied (`src/aros/amissl_missing_stubs.c`):**
- Removed `struct Library *SocketBase = NULL;` definition
- SocketBase is now resolved from AROS SDK link libraries (`-lamiga`)

## Fix 5: Clean build failure after `rm -rf build_aros-x86_64`
**Root Cause:** The build system had issues:
1. `amissl_missing_stubs.c` compiled WITHOUT proper flags (no `$(CFLAGS)`, no `-DAMISSL_COMPILE`)
2. OpenSSL libcrypto.a didn't include patched `context.o`/`threads_amissl.o`
3. ELF OSABI patching with `dd` was unreliable (bytes not written)

**Fix Applied (`Makefile`):**
- Added proper flags to amissl_missing_stubs.c compilation
- Added patched context.o/threads_amissl.o rebuild and inject into libcrypto.a
- Changed ELF patching from `dd` to `python3` for reliability
- Fixed `|| true` chaining so dd/patch runs after successful link

## Build Command
```sh
export PATH="/home/serk118/work/arosbuilds/toolchain-core-x86_64:$PATH"
export SYSROOT="--sysroot=/home/serk118/work/arosbuilds/core-linux-x86_64-d/bin/linux-x86_64/AROS/Development"
make OS=aros-x86_64 CROSS_PREFIX=x86_64-aros- DEBUG=
```
- Library: 13MB, PLT32=21
- httpget: 216KB, with `long __stack = 1024*1024`

## USB Deployment
- `/media/serk118/C24B-10A6/toMiker/amissl_v362.library` — 13MB, OSABI=0x0F, ABI_VER=0x0B
- `/media/serk118/C24B-10A6/toMiker/Libs/amisslmaster.library` — 24KB
- Test binaries: `amissl_simple_test`, `run_all_tests`, `httpget`
- Config: `openssl.cnf`
