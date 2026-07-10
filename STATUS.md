# AmiSSL v5.27 AROS x86_64 — Current Status

Last updated: July 7, 2026

## Build
```sh
export PATH="/home/serk118/work/arosbuilds/toolchain-core-x86_64:$PATH"
export SYSROOT="--sysroot=/home/serk118/work/arosbuilds/core-linux-x86_64-d/bin/linux-x86_64/AROS/Development"
make OS=aros-x86_64 CROSS_PREFIX=x86_64-aros- DEBUG=
```

## What Works ✅
- Library loads and initializes (InitAmiSSLA)
- SSL_CTX_new works
- DNS resolution via `gethostbyname` (replaced `BIO_gethostbyname`)
- TCP connect via bsdsocket macros
- RNG via custom LCG (`RAND_set_rand_method`)
- BIO_new_socket, BIO_f_ssl, BIO_push (BIO chain creation)
- 57 ciphers configured, 27 pass security checks after sigmask fix
- Clean startup/shutdown on deadwood hosted (no network)
- No stack overflow crash anymore (4MB stack + skip-cleanup on error)

## What Fails ❌
- **SSL_connect fails** with `ssl_cipher_list_to_bytes:no ciphers available`
- **OSSL_LIB_CTX_new returns NULL** — the provider infrastructure can't initialize
- **CRYPTO_zalloc inside the library goes through broken AUTOINIT dispatch** — calls through `SysBase - 0x390` which fails, returning NULL
- **Default provider can't load** because `context_init` → `ossl_provider_store_new` → needs `CRYPTO_zalloc` which returns NULL
- Without provider, ALL ciphers are reported as "disabled" by `ssl_cipher_disabled` (it calls `ssl_security` → `ssl_security_default_cb` → checks if cipher algorithm implementation is available — which requires the provider)

## Source Files Modified

### `test/httpget.c`
- `BIO_gethostbyname(host)` → `gethostbyname(host)` (fixes connect crash)
- Added `use_lcg_rng()` → sets custom `RAND_METHOD` with LCG (avoids DRBG hang)
- Added `RAND_seed` before `SSL_connect` (seeds LCG)
- `SSL_set_fd` + `SSL_connect` directly (bypasses `BIO_do_handshake`)
- TLS 1.2 forced with `SSL_set_min/max_proto_version`
- Security level 0 with `SSL_set_security_level`
- Stack increased to 4MB (was 256KB)
- Skip cleanup on SSL_connect failure (avoids stack overflow crash)

### `Makefile`
- httpget stack size: `262144` → `2097152` → `4194304`
- PATCH step: now also deletes old `libcrypto-lib-context.o`, `libcrypto-lib-threads_amissl.o`, `libssl-lib-t1_lib.o` before adding patched versions
- `amissl_missing_stubs.o` placed at end of link (for `--allow-multiple-definition` override)

### `openssl/crypto/init.c`
- Removed `OSSL_PROVIDER_load(NULL, "default")` from `ossl_init_base` (was too early — provider store doesn't exist yet)

### `openssl/crypto/provider.c`
- `OSSL_PROVIDER_load_ex` now directly calls `OSSL_PROVIDER_try_load_ex(libctx, name, params, 1)` — skips the `ossl_provider_disable_fallback_loading` check

### `openssl/crypto/context.c`
- `context_init` no longer returns 0 on any allocation failure — all steps are non-fatal
- `OSSL_LIB_CTX_new` returns context even if RNG init fails

### `src/aros/amissl_missing_stubs.c`
- Added `CRYPTO_malloc`, `CRYPTO_zalloc`, `CRYPTO_free` — uses `AllocVec`/`FreeVec` directly, bypassing the broken AUTOINIT dispatch
- Undefines the AmiSSL macros before defining the functions

### `openssl/ssl/t1_lib.c` (REVERTED)
- All patches reverted via `git checkout`
- Originally patched: `ssl_cipher_disabled`, `ssl_set_client_disabled`, `tls_sigalg_compat`, `tls12_sigalg_allowed`, `tls12_copy_sigalgs`

### `src/amisslext_libinit.c`
- Added `#if defined(MULTIBASE)` guards around `dataSeg` references (for no-MULTIBASE build)

### `src/amissl_library.c` (REVERTED)
- MULTIBASE guards reverted via `git checkout`

## Root Cause Analysis

### Primary Issue: AUTOINIT dispatch for CRYPTO_zalloc is broken
The AUTOINIT build wraps ALL OpenSSL functions (including `CRYPTO_malloc`, `CRYPTO_zalloc`, `CRYPTO_free`) with dispatch stubs that go through the library interface via `SysBase - 0x390`. This dispatch fails, returning NULL.

**Evidence in disassembly:**
```
CRYPTO_malloc (0x1f093):
  push %rbx
  mov SysBase,%rax       # loads SysBase (Exec base) from GOT
  mov %r12,%rbx          # save r12
  mov %rax,%r12          # r12 = SysBase
  xor %esi,%esi          # MEMF_ANY
  callq *-0x390(%rax)    # calls through SysBase-0x390 → INVALID!
```

The call through `SysBase - 0x390` doesn't hit a valid function, returning NULL.

**Why `amissl_stubs_aros.c`'s correct implementation is overridden:**
- `amissl_stubs_aros.c` has `void *(CRYPTO_malloc)(...)` at line 5467 that returns `AllocVec(num, MEMF_ANY)` — this IS correct
- But libcrypto.a has an object (likely from `rand_meth.c` or `mem.c`) that defines `CRYPTO_malloc` as the AUTOINIT dispatch
- With `--allow-multiple-definition` in LDFLAGS, the AUTOINIT version overrides the correct one
- The correct version from `amissl_stubs_aros.o` is ignored

### Secondary Issue: amissl_missing_stubs.c override doesn't take effect
`amissl_missing_stubs.o` is placed at the end of the link command but its `CRYPTO_malloc`/`CRYPTO_zalloc` are still overridden by the AUTOINIT versions from libcrypto.a. This is because `--allow-multiple-definition` uses the LAST definition, and the AUTOINIT versions are in libcrypto.a archives that are processed AFTER the object files.

### Cascade of failures:
1. `OSSL_LIB_CTX_new()` calls `CRYPTO_zalloc(320, NULL, 431)` → returns NULL
2. `OSSL_LIB_CTX_new()` returns NULL
3. `OSSL_PROVIDER_load(NULL, "default")` → fails because no lib context
4. No default provider → no cipher implementations registered
5. `ssl_cipher_disabled()` returns 1 (ciphers disabled) for all ciphers
6. `ssl_cipher_list_to_bytes()` → "no ciphers available" error
7. `SSL_connect()` fails

## Attempted Fixes That Didn't Work

1. **Removing MULTIBASE** — too invasive, requires changing many source files
2. **Loading provider in ossl_init_base** — called before provider store exists
3. **Patched ssl_cipher_disabled** — the security check still blocks all ciphers because `lu->available` is 0 (no provider)
4. **Patched ssl_set_client_disabled** — ciphers passed (27 supported) but sigalgs failed
5. **Patched tls12_copy_sigalgs** — sigalgs passed but then `ssl3_write_bytes` failed because `send()` goes through -lamiga stub
6. **Moved amissl_missing_stubs.o to end of link** — still overridden by AUTOINIT versions in libcrypto.a

## Next Steps

### Option A: Fix the AUTOINIT dispatch for CRYPTO_malloc
The most fundamental fix. Make `SysBase - 0x390` (or whatever the dispatch function is) actually call `AllocVec`.

This requires understanding how the AmiSSL interface table is populated. The slot at offset -0x390 from the iface should contain the real `CRYPTO_malloc` implementation. If it's not initialized, the dispatch fails.

Check: how is the interface table set up? Look at `amissl_glue.c` for how `LIB_CRYPTO_malloc` is registered in the interface dispatch table.

### Option B: Remove the AUTOINIT CRYPTO_malloc from libcrypto.a
Find the object file in libcrypto.a that defines the AUTOINIT CRYPTO_malloc and delete it from the archive (using `ar d`). Then the correct version from `amissl_stubs_aros.o` would be the only definition.

The object is in `libcrypto.a` and defines: `CRYPTO_malloc`, `CRYPTO_zalloc`, `CRYPTO_realloc`, `CRYPTO_set_mem_functions`. This might be from `crypto/rand/rand_meth.c` or `crypto/mem.c`.

### Option C: Link without `--allow-multiple-definition` and resolve conflicts
Remove `--allow-multiple-definition` and fix all multiple definition errors by removing the duplicate objects.

### Option D: Use EVP_add_cipher to register ciphers manually (deprecated in 3.x but still functional)
If we can get `EVP_add_cipher` to work despite the broken provider infrastructure, we might be able to register ciphers directly.

## Hosted AROS Locations
- **Our hosted:** `~/work/arosbuilds/core-linux-x86_64-d/bin/linux-x86_64/AROS/` (has network)
- **Deadwood hosted:** `~/work/arosbuilds/deadwood-core-x86_64/AROS-20250418-1-linux-x86_64-system/` (no network)
- **Debug log:** `/tmp/aros_debug.log`
- **USB:** `/media/serk118/C24B-10A6/toMiker/`

## Test Commands
```sh
# Deploy and run on our hosted AROS:
cp build_aros-x86_64/amissl_v362.library ~/work/arosbuilds/core-linux-x86_64-d/bin/linux-x86_64/AROS/Libs/
cp build_aros-x86_64/httpget ~/work/arosbuilds/core-linux-x86_64-d/bin/linux-x86_64/AROS/tests/
printf 'Assign "AmiSSL:" "SYS:AmiSSL"\nRun >SYS:test_output.txt SYS:tests/httpget "https://example.com/"\nWait 60\n' > ~/work/arosbuilds/core-linux-x86_64-d/bin/linux-x86_64/AROS/S/Startup-Sequence
cd ~/work/arosbuilds/core-linux-x86_64-d/bin/linux-x86_64/AROS
timeout 90 ./boot/linux/AROSBootstrap
cat test_output.txt
```
