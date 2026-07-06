# Change Log — AmiSSL AROS x86_64

All changes beyond the upstream AmiSSL v5.27 source are logged here with revert instructions.

---

## Entry: 2026-07-06 — Initial check of current build

- Built from clean (rm -rf build_aros-x86_64)
- Build succeeded: library 13MB, PLT32=21, OSABI=0x0F, ABI_VER=0x0B
- ROMTag verified: RTC_MATCHWORD=0x4AFC (AROS), in .text section, 72 bytes
- Created HOSTED_AROS_GUIDE.md, CHANGE_LOG.md, METHODS_TRIED.md

---

## July 5, 2026 Fixes (from SESSION_LOG.md)

### Fix 1: Missing public API functions in context.c
- **Files:** `openssl/crypto/context.c`
- **Changes:** Added OSSL_LIB_CTX_new, OSSL_LIB_CTX_free, OSSL_LIB_CTX_set0_default, OSSL_LIB_CTX_get0_global_default, OSSL_LIB_CTX_load_config, OSSL_LIB_CTX_new_child, OSSL_LIB_CTX_new_from_dispatch, ossl_release_default_drbg_ctx
- **Revert:** Restore original AmiSSL-patched context.c from backup

### Fix 2: Provider loading moved to ossl_init_base
- **Files:** `openssl/crypto/init.c`
- **Changes:** Added OSSL_PROVIDER_load(NULL, "default") in ossl_init_base()
- **Revert:** Remove that line from init.c

### Fix 3: gethostbyname → BIO_gethostbyname
- **Files:** `openssl/crypto/bio/bio_addr.c`
- **Changes:** Changed gethostbyname(host) → BIO_gethostbyname(host) at line 843
- **Revert:** Change BIO_gethostbyname back to gethostbyname

### Fix 4: Removed weak SocketBase
- **Files:** `src/aros/amissl_missing_stubs.c`
- **Changes:** Removed `struct Library *SocketBase = NULL;` definition
- **Revert:** Add back `struct Library *SocketBase = NULL;`

### Fix 5: Build system fixes
- **Files:** `Makefile`
- **Changes:** Added mstackrealign, mcmodel=large; context.o/threads_amissl.o rebuild; python3 ELF patching; proper stub compilation flags
- **Revert:** Restore original Makefile

---

## June 17, 2026 Fixes (from PATCH_LOG.md)

### SSL_new hang fix
- **Files:** `openssl/ssl/ssl_lib.c:4547`
- **Changes:** Added ssl_cert_new() call to SSL_CTX_new()
- **Revert:** Remove the ssl_cert_new() call

### YAM build fixes (not in AmiSSL tree)
- AROS SDK header fixes, YAM-specific workarounds

---

## June 15-16, 2026 Fixes

### context.c — get_default_context + context_init lock fix
- **Files:** `openssl/crypto/context.c`
- **Changes:** Added get_default_context(), fixed context_init() to init ctx->lock

### threads_amissl.c — CRYPTO_THREAD_lock_new returns real lock
- **Files:** `openssl/crypto/threads_amissl.c`

### amissl_missing_stubs.c — Created stub file
- **Files:** `src/aros/amissl_missing_stubs.c` (NEW)

### Makefile — Direct link + ELF patching
- **Files:** `Makefile`

## June 8-14, 2026 Fixes

### amisslmaster_libinit.c — ROMTag section fix
- **Files:** `src/amisslmaster_libinit.c`
- **Changes:** FORCED_CONST changed to use `.text` section for ROMTag

### libcmt — malloc/free fallback when __mem_pool is NULL
- **Files:** `libcmt/malloc.c`, `libcmt/free.c`

### relocate.c / fix_plt_relocs.py — PC32 +4 correction
- **Files:** `test/relocate.c`, `tools/fix_plt_relocs.py`
