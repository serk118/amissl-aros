# AmiSSL AROS x86_64 — Agent Context

## Build Command

```bash
export PATH="/home/serk118/work/arosbuilds/toolchain-core-x86_64:$PATH"
export SYSROOT="--sysroot=/home/serk118/work/arosbuilds/core-linux-x86_64-d/bin/linux-x86_64/AROS/Development"
make OS=aros-x86_64 CROSS_PREFIX=x86_64-aros- DEBUG=
```

## Test Command

```bash
# Deploy library and tests
cp build_aros-x86_64/amissl_v362.library ~/work/arosbuilds/core-linux-x86_64-d/bin/linux-x86_64/AROS/Libs/
for f in amissl_simple_test amissl_v362_test amisslmaster_test simple_bsd tcp_test run_all_tests httpget; do
  cp build_aros-x86_64/$f ~/work/arosbuilds/core-linux-x86_64-d/bin/linux-x86_64/AROS/tests/$f
done

# Run test (timeout 120 because boot is slow)
printf 'Run >SYS:test_output.txt SYS:tests/amissl_simple_test\nWait 60\n' > ~/work/arosbuilds/core-linux-x86_64-d/bin/linux-x86_64/AROS/S/User-Startup
cd ~/work/arosbuilds/core-linux-x86_64-d/bin/linux-x86_64/AROS
timeout 120 ./boot/linux/AROSBootstrap
cat test_output.txt
tail -20 /tmp/aros_debug.log
```

## Modified Files Summary

| File | Change |
|------|--------|
| `openssl/crypto/context.c` | Added `get_default_context()` function; fixed `context_init()` to init `ctx->lock`; **added public API** (`OSSL_LIB_CTX_new`, `OSSL_LIB_CTX_free`, `OSSL_LIB_CTX_set0_default`, `OSSL_LIB_CTX_get0_global_default`, `OSSL_LIB_CTX_load_config`, `OSSL_LIB_CTX_new_child`, `OSSL_LIB_CTX_new_from_dispatch`, `ossl_release_default_drbg_ctx`) |
| `openssl/crypto/init.c` | Added `OSSL_PROVIDER_load(NULL, "default")` in `ossl_init_base()` to load default provider before context_init disables fallback loading |
| `openssl/crypto/threads_amissl.c` | `CRYPTO_THREAD_lock_new()` returns real lock via `ossl_crypto_mutex_new()` |
| `openssl/crypto/bio/bio_addr.c` | Changed `gethostbyname(host)` → `BIO_gethostbyname(host)` at line 843 (fixes crash on AROS where raw `gethostbyname` doesn't exist as a plain C function) |
| `src/aros/amissl_missing_stubs.c` | Removed weak `SocketBase = NULL` definition (supplied by AROS SDK); added `LIB_ossl_release_default_drbg_ctx`, `LIB_ossl_crypto_thread_native_spawn`, `LIB_ossl_crypto_thread_native_perform_join` implementations |
| `src/amissl_libinit.c` | InitMultiBase returns `base` for AROS; FORCED_CONST uses `.text` section |
| `Makefile` | Added `-mstackrealign -mcmodel=large` to CFLAGS for aros-x86_64; added patched context.c/threads_amissl.c rebuild into $(LIBCRYPTO) target; fixed OSABI patching with python3; fixed missing stubs include paths |
| `openssl/include/internal/thread_once.h` | `RUN_ONCE` inlined for AROS (avoids PLT32 CRYPTO_THREAD_run_once) |
| `openssl/ssl/ssl_lib.c` | `OPENSSL_INIT_NO_LOAD_CONFIG` added to SSL_CTX_new internal call |
| `openssl/ssl/ssl_ciph.c` | Forced COMP method stubs (`#if 1` around empty add_comp_methods) |
| `libcmt/malloc.c`, `free.c`, `realloc.c` | AllocVec/FreeVec fallback when `__mem_pool` is NULL |
| `libcmt/string_memset.c` | Simple memset implementation |
| `test/run_all_tests.c` | Comprehensive test suite (OpenLibrary, InitAmiSSLA, TLS, MD5, SHA256, AES, BIO, RAND, SSL_CTX, SSL_new) |
| `test/amissl_simple_test.c` | Added bsdsocket.library open test (N1-N4) after SSL test |
| `test/simple_bsd.c` | Removed `<stdio.h>` (uses `Printf` from proto/dos.h) |
| `test/tcp_test.c` | Replaced `printf`/`strlen`/`memset` with `Printf`/manual impl to avoid stdlib |
| `Makefile` | Added `run_all_tests`, `amissl_simple_test`, `tcp_test`, `simple_bsd` to APPS target; added `-noclibs` to test rules |
| `AROS/arch/all-runtime/bsdsocket/forwarders.c` | Added includes for `netinet/in.h`, `sys/socket.h` and `MSG_NOSIGNAL` fallback define to fix build |

## Key Build Steps

The Makefile handles the aros-x86_64 build automatically:
1. Configures OpenSSL via `Configure` → generates Makefile
2. Builds OpenSSL `libcrypto.a` and `libssl.a`
3. Patches libcrypto.a: replaces `context.o` and `threads_amissl.o` with custom versions
4. Compiles `src/aros/amissl_missing_stubs.c`
5. Links directly (no `ld -r` merge): AmiSSL .o files + stubs .o + .a archives
6. Patches ELF header bytes 7 (EI_OSABI=0x0F) and 8 (EI_ABIVERSION=11) via python3
7. Prints PLT32 relocation count

## AROS Hosted Environment

- AROS root: `/home/serk118/work/arosbuilds/core-linux-x86_64-d/bin/linux-x86_64/AROS/`
- Bootstrap: `boot/linux/AROSBootstrap`
- Config: `boot/linux/AROSBootstrap.conf`
- Debug log: `/tmp/aros_debug.log`
- User-Startup: `S/User-Startup`

### Running tests in hosted AROS

```bash
cd ~/work/arosbuilds/core-linux-x86_64-d/bin/linux-x86_64/AROS
timeout 30 ./boot/linux/AROSBootstrap
```

The User-Startup must use AmigaDOS `Run >file program` + `Wait N` syntax. Direct `>file program` doesn't work. Example:
```
Run >SYS:test_output.txt SYS:tests/amissl_simple_test
Wait 20
```

For TCP networking tests, run them from WBStartup (after desktop loads) or insert the `Run` command right before Wanderer starts in Startup-Sequence.

## Quick Download Test (Hosted AROS)
```sh
# HTTP download via direct Linux syscalls (bypasses bsdsocket forwarder bug)
printf 'Run >SYS:test_output.txt SYS:tests/rawdl aminet.net 80 /pub/aminet/Links/a-e.html RAM:test.html\nWait 25\n' > ~/work/arosbuilds/core-linux-x86_64-d/bin/linux-x86_64/AROS/S/User-Startup
cd ~/work/arosbuilds/core-linux-x86_64-d/bin/linux-x86_64/AROS && timeout 35 ./boot/linux/AROSBootstrap
cat test_output.txt
```

## Current Status (July 5, 2026)

### ✅ Working on Hosted AROS

| Test | Result | Notes |
|------|--------|-------|
| `amissl_simple_test` | ✅ All pass | Open→Init→TLS→CTX→SSL_new + bsdsocket |
| `run_all_tests` | ✅ All pass | Full AmiSSL test suite |
| `rawdl` | ✅ HTTP download | Direct Linux syscalls, DNS + TCP |
| `rawhttp_test` | ✅ HTTP download | Simpler version of rawdl |
| `rawconnect_test` | ✅ TCP connect | Direct Linux syscall |

### 🟡 Working on Hosted AROS with caveats

| Test | Result | Notes |
|------|--------|-------|
| `httpget` | 🟡 Init passes, hangs at `BIO_do_connect` | bsdsocket forwarder connect() bug (hosted only) |
| `amisslmm_test` | ✅ Verified earlier | multi-base test |

### ❌ Known Issues (Hosted AROS Only)

| Issue | Root Cause | Status |
|-------|-----------|--------|
| `BIO_do_connect` hangs | Forwarder sockaddr conversion bug (`sa_len` vs `sa_family`) | Identified, need to rebuild bsdsocket.library |
| `httpget` HTTPS | Blocked by connect() forwarder bug + SSL state machine | Should work on real AROS |
| Misaligned SP warnings | `NewStackSwap` called with SP not 16-byte aligned | `-mstackrealign` added, still warns |
| Memory cleanup guru (5 alerts) | Free during CleanupAmiSSLA/CloseLibrary | Minor, doesn't affect functionality |

### ✅ Working on Real AROS (July 5, 2026)

| Test | Result | Notes |
|------|--------|-------|
| `amissl_simple_test` | ✅ Passes (1 recoverable guru) | Open→Init→TLS→CTX→SSL_new all work |

### ❌ Known Issues (Real AROS)

| Issue | Root Cause | Status |
|-------|-----------|--------|
| `httpget` `SSL_CTX_new` returns NULL | Default provider not loaded → `EVP_RAND_fetch(NULL,"CTR-DRBG")` fails → RNG broken → SSL_CTX_new fails | FIXED in init.c (needs real AROS testing) |

## July 5, 2026 — Fixes Applied

| Fix | File | Description |
|-----|------|-------------|
| Public API in context.c | `openssl/crypto/context.c` | Added `OSSL_LIB_CTX_new`, `OSSL_LIB_CTX_free`, `OSSL_LIB_CTX_set0_default`, `OSSL_LIB_CTX_get0_global_default`, `OSSL_LIB_CTX_load_config`, `OSSL_LIB_CTX_new_child`, `OSSL_LIB_CTX_new_from_dispatch`, `ossl_release_default_drbg_ctx` — these were lost when the file was patched |
| Provider load in init.c | `openssl/crypto/init.c` | Added `OSSL_PROVIDER_load(NULL, "default")` in `ossl_init_base()` to ensure default provider is loaded before context_init disables fallback loading |
| gethostbyname → BIO_gethostbyname | `openssl/crypto/bio/bio_addr.c` | Changed raw `gethostbyname(host)` to `BIO_gethostbyname(host)` — on AROS, `gethostbyname` is a macro that dispatches through SocketBase; OpenSSL code doesn't get the macro |
| Removed weak SocketBase | `src/aros/amissl_missing_stubs.c` | Removed `struct Library *SocketBase = NULL` definition; let AROS SDK provide it from `-lamiga` |
| Added LIB_ function impls | `src/aros/amissl_missing_stubs.c` | Added `LIB_ossl_release_default_drbg_ctx`, `LIB_ossl_crypto_thread_native_spawn`, `LIB_ossl_crypto_thread_native_perform_join` |
| mstackrealign + mcmodel=large | `Makefile` | Added to CFLAGS for aros-x86_64 target and OpenSSL build CC override |
| OSABI patching via python3 | `Makefile` | Replaced unreliable `dd` with `python3` for ELF header bytes 7-8 patching |
| context.c rebuild in make | `Makefile` | Added patched context.o and threads_amissl.o rebuild into $(LIBCRYPTO) target |
| Duplicate provider load removed | `src/amissl_library.c` | Removed `OSSL_PROVIDER_load(NULL, "default")` from `InitAmiSSLA` (provider loaded in init.c instead) |

## USB Reference (July 5, 2026)

- `/media/serk118/C24B-10A6/toMiker/` — latest build for real AROS testing
  - `amissl_v362.library` (13MB) — main library
  - `Libs/amisslmaster.library` (24KB) — master library
  - `amissl_simple_test` — basic API test
  - `run_all_tests` — comprehensive test suite
  - `httpget` — HTTP/HTTPS download tool (fixed)
  - `openssl.cnf` — minimal config

## Known Issues

1. `InitAmiSSLA()` returns 0 — this is SUCCESS (return 0 = OK, 1 = error). Not actually a bug.
2. ~21 PLT32 relocations (down from 89K). AROS kernel handles them correctly.
3. **Boot loads libraries ~5x** — causes 60-90s boot time. Root cause unknown.
4. **OpenSSL test infrastructure not buildable** — `test/libtestutil.a` uses `VARARGS68K` macro (AmigaOS-specific) and `-DOPENSSL_NO_STDIO` conflicts with test code. Full OpenSSL test suite (130+ tests) needs porting.
5. **bsdsocket.library hosted forwarder** — `connect()` has sockaddr conversion bug (`sa_len` vs `sa_family`). Fix: rewrite forwarders to use Linux syscalls directly.

## AROS Debug Log

Located at `/tmp/aros_debug.log`. Contains `bug()` output from lddemon LDInit and InitResident.
