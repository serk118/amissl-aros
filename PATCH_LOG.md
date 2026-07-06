# AmiSSL AROS x86_64 Build & Runtime Fixes

## Files Changed (Session 1 — June 8-13)

### `src/amisslmaster_libinit.c`

| # | Change | Lines |
|---|--------|-------|
| 1 | Added AROS forward declarations for `LibOpen`/`LibClose`/`LibExpunge` using `AROS_LD*` macros (must appear before `LibVectors[]`) | 116-126 |
| 2 | Added missing `LibNull()` function body (was declared but never defined) | 130-133 |
| 3 | Replaced `VECTORFUNC(LibOpen)` etc. with `SLIB_ENTRY(Func, Lib, Lvo)` — on AROS maps to `AROS_SLIB_ENTRY`, on other platforms falls back to `VECTORFUNC` | 135-148 |
| 4 | Changed `FORCED_CONST` on AROS from `const __attribute__((section(".text.romtag")))` to plain `const` — ROMTag now placed in `.rodata` (matching TTEngine) | 71-76 |
| 5 | Added `RTF_EXTENDED` flag to ROMTag flags (`RTF_AUTOINIT | RTF_EXTENDED`) — matches TTEngine, was missing before | 165 |

## Files Changed (Session 2 — June 14)

### `src/amissl_libinit.c` / `src/amisslmaster_libinit.c` / `src/amisslext_libinit.c`

| # | Change | Lines |
|---|--------|-------|
| 6 | **REVERTED Change 4**: Restored `FORCED_CONST` to put ROMTag in `.text` section on AROS. The kernel only scans `.text` (and `.text.romtag` sub-sections) for ROMTags via `RTC_MATCHWORD` scan. ROMTag in `.rodata` is invisible to the kernel's `InitResident`, causing `OpenLibrary()` to return NULL. Changed from `#if defined(__amigaos3__) && __GNUC__ < 3` to `#if defined(__GNUC__) && (defined(__amigaos3__) || defined(__AROS__))` using `__attribute__((section(".text")))`. | 80-88 |

### `libcmt/malloc.c` / `libcmt/free.c`

| # | Change |
|---|--------|
| 7 | Fixed `malloc()` and `free()` to fall back to `AllocVec()`/`FreeVec()` when `__mem_pool` is NULL (before libcmt pool is initialized). When `-nostartfiles` is used, constructors don't run, so `__mem_pool` stays NULL. Previously `malloc()` returned NULL in this case, causing crashes during early initialization. |

### `test/relocate.c`

| # | Change |
|---|--------|
| 8 | Fixed `R_X86_64_PC32` relocation formula: added +4 correction. The displacement is relative to the NEXT instruction (always 4 bytes past the displacement field), not the displacement field itself. Without this fix, all PC32 relocations had a +4 byte error. |

### `tools/fix_plt_relocs.py`

| # | Change |
|---|--------|
| 9 | Added +4 correction for `R_X86_64_PC32` relocations (same formula fix as relocate.c). PC32 displacement is relative to next instruction (r_offset + 4), not r_offset. |

## Build Status (June 8, 2026)

```
make OS=aros-x86_64 CROSS_PREFIX=x86_64-aros- SYSROOT="--sysroot=..." DEBUG=
```

- `amisslmaster.library`: 23KB — **0 errors, 0 warnings (new)**
- `amissl_v362.library`: 12MB — **0 errors**
- Test apps: `amisslmaster_test`, `amissl_v362_test`, `httpget`, `https` — all build

## Root Cause Analysis — PC32 Relocation Bug in AROS Kernel

**File:** `rom/dos/internalloadseg_elf.c` (lines 431-433)

The AROS kernel handles `R_X86_64_PC32` (type 2) and `R_X86_64_PLT32` (type 4) with the same formula:

```c
case R_X86_64_PLT32:
case R_X86_64_PC32: /* PC relative 32 bit signed */
    *(ULONG *)p = s + rel->addend - (IPTR) p;
    break;
```

**This formula is correct for PLT32 (addend=-4) but WRONG for PC32 (addend=0).**

The relocation offset `p` points to the displacement field of the instruction. The correct displacement should be relative to the NEXT instruction address, which is always `p + 4` (the displacement field itself is at `p`, and the instruction length puts the next instruction at `p + 4` for all x86-64 opcodes using PC32).

For PLT32, the addend is -4, which coincidentally compensates: `s + (-4) - p = s - (p + 4)` ✓
For PC32, the addend is 0: `s + 0 - p = s - p` ✗ (off by +4)

The fix is in `test/relocate.c` and `tools/fix_plt_relocs.py` but these cannot be applied to the binary definitively because:
- `fix_plt_relocs.py` patches instruction bytes, kernel overwrites them with the wrong displacement
- `relocate.c` pre-applies all relocations but kernel assigns different runtime addresses

## Verification via `test/relocate.c` (runs on Linux host)

Simulates AROS ELF loader's `R_X86_64_64` relocation pass:

```
ROMTag in [.rodata]+0x0: MatchTag=0x101380 expected=0x101380 OK
  *** This library should now load correctly! ***
```

TTEngine comparison (same result):
```
ROMTag in [.rodata]+0x1580: MatchTag=0x13c650 expected=0x13c650 OK
  *** This library should now load correctly! ***
```

After applying all `R_X86_64_64` relocations, the ROMTag `rt_MatchTag` self-pointer is
correctly set to the runtime address. The relocation logic itself is correct.

## Files Changed (Session 3 — June 15)

### `openssl/crypto/context.c`

| # | Change | Lines |
|---|--------|-------|
| 10 | Added missing `get_default_context()` function. In the AmiSSL port of OpenSSL 3.6.2, `ossl_lib_ctx_get_concrete()` and `ossl_lib_ctx_is_default()` called `get_default_context()` which was never defined anywhere. Implemented it inline with `RUN_ONCE` → `CRYPTO_THREAD_get_local` → fallback to `&default_context_int`. | 273-286 |
| 11 | Fixed `context_init()` to initialize `ctx->lock` with `CRYPTO_THREAD_lock_new()`. Previously returned 1 without setting any struct fields, causing `default_context_int.lock` to be NULL. When code called `ossl_lib_ctx_write_lock()` on the default context, it passed NULL to `CRYPTO_THREAD_write_lock()` → `ossl_crypto_mutex_lock(NULL)` → segfault. | 90-94 |

### `openssl/crypto/threads_amissl.c`

| # | Change | Lines |
|---|--------|-------|
| 12 | Fixed `CRYPTO_THREAD_lock_new()` to return a real AROS signal semaphore lock via `ossl_crypto_mutex_new()` instead of NULL. Previously returned NULL unconditionally, which caused `OPENSSL_init_ssl()` → `ossl_init_base()` (init.c:68) to fail immediately, making `SSL_CTX_new()` return NULL at ssl_lib.c:4007. With a real lock, `OPENSSL_init_ssl()` succeeds and `SSL_CTX_new()` proceeds to the actual allocation. | 153-156 |

### `src/aros/amissl_missing_stubs.c` (NEW FILE)

| # | Change |
|---|--------|
| 13 | Created stub implementations for symbols that the AROS linker cannot resolve from any archive: `OSSL_LIB_CTX_new/free/set0_default/get0_global_default/load_config`, `ossl_release_default_drbg_ctx`, `ossl_crypto_thread_native_spawn/perform_join`, and a weak `SocketBase`. The `SocketBase` weak stub allows the linker to produce the final .library without requiring the bsdsocket library at build time. |

### `Makefile`

| # | Change |
|---|--------|
| 14 | For `aros-x86_64` target: skip the merged-object intermediate step (`ld -r`). Instead link the AmiSSL `.o` files directly with the `.a` archives, letting the linker resolve cross-file references. Add `amissl_missing_stubs.o` to resolve SocketBase and OSSL_LIB_CTX stubs. Patch ELF header bytes 7 (EI_OSABI = 0x0F for AROS) and 8 (EI_ABIVERSION = 11) after link. |

### Build Recipe

```makefile
# Recompile patched source files
$(CC) $(LIB_CFLAGS) $(LIB_CPPFLAGS) -I... -c openssl/crypto/context.c
$(CC) $(LIB_CFLAGS) $(LIB_CPPFLAGS) -I... -c openssl/crypto/threads_amissl.c
# Update archive
$(AR) r libcrypto.a context.o threads_amissl.o

# Compile stubs
$(CC) -c src/aros/amissl_missing_stubs.c

# Final link (NO ld -r — let linker resolve cross-file refs)
$(CC) -nostartfiles $(SYSROOT) \
  -o amissl_v362.library \
  amissl_libinit.o amisslext_libinit.o amissl_library.o amissl_norestore.o amissl_init.o \
  debug.o amissl_glue.o amissl_stubs_aros.o amissl_glue_extra.o \
  amissl_missing_stubs.o \
  -L. -Lopenssl -Llibcmt \
  -lamisslapps -lamisslstubs -lamisslauto -lamissldebug \
  -lssl -lcrypto -lcmt \
  -ldebug -lcrt -lautoinit -larossupport -lamiga -lstdlib -lm -lstdc.static -lgcc

# Patch AROS identification bytes
printf '\x0f' | dd of=$@ bs=1 seek=7 count=1 conv=notrunc
printf '\x0b' | dd of=$@ bs=1 seek=8 count=1 conv=notrunc
```

### Build Status (June 15, 2026)

```
make OS=aros-x86_64 CROSS_PREFIX=x86_64-aros- SYSROOT="--sysroot=..." DEBUG=
```

- `amissl_v362.library`: 12.4MB — **0 undefined symbols, ~89K PLT32 relocs**
- Test: OpenLibrary() ✅ → OPENSSL_init_ssl() ✅ → TLS_client_method() ✅ → SSL_CTX_new() 🟡 (crash/trap, same pre-existing bug as working library)

### What Was Fixed

| Issue | Root Cause | Fix |
|-------|-----------|------|
| `OpenLibrary()` returned NULL | OS/ABI byte was 0x00 (System V) instead of 0x0F (AROS); ABI Version was 0 instead of 11 | Post-link patch of ELF header bytes 7 and 8 |
| `OpenLibrary()` returned NULL (continued) | Undefined symbols with non-zero reloc types in ELF caused `LoadSeg` in `internalloadseg_elf.c:380-386` to return `ERROR_BAD_HUNK` | Added `SocketBase` weak stub; linked with full CRT/autoinit libraries |
| `SSL_CTX_new()` returned NULL | `CRYPTO_THREAD_lock_new()` returned NULL → `ossl_init_base()` failed → `OPENSSL_init_ssl()` failed → `SSL_CTX_new()` returned early | Made `CRYPTO_THREAD_lock_new()` return a real AROS semaphore via `ossl_crypto_mutex_new()` |
| `SSL_CTX_new()` segfault (trap 11) | `get_default_context()` returned zero-initialized `default_context_int` with NULL `lock` field → `ossl_lib_ctx_write_lock()` → `ossl_crypto_mutex_lock(NULL)` | `context_init()` now calls `CRYPTO_THREAD_lock_new()` to initialize `ctx->lock` |
| Linker refused to produce output | `SocketBase` referenced from `libcrypto/bio_sock.c` but no definition available | Added weak `void *SocketBase = 0` in stub file |

### Remaining

- `SSL_CTX_new()` still crashes (trap 5/11) after progressing past our fixes — this is the same pre-existing AmiSSL bug that affects the working USB reference library. Both crash at the same stage with 89K PLT32 relocations. The root cause is likely an uninitialized struct field, incomplete provider infrastructure, or the PLT32 relocation resolution in the AROS kernel ELF loader.

## June 16, 2026 — httpget debugging

### Root Cause Analysis
The `CRYPTO_new_ex_data()` function in libcrypto hangs. This affects `BIO_new()`, `SSL_new()`, and any OpenSSL function that allocates internal objects with ex_data.

**Call chain**: `BIO_new` -> `BIO_new_ex` -> `CRYPTO_new_ex_data` -> `ossl_crypto_new_ex_data_ex` -> `get_and_lock` -> `CRYPTO_THREAD_read_lock` -> `ObtainSemaphoreShared` -> **hang**

**Stub fixes applied** (in `src/amissl_stubs_aros.c`):
1. `BIO_s_mem`, `BIO_s_connect`, `BIO_s_file`, `BIO_f_ssl` — call `(func)()` directly
2. `BIO_new`, `BIO_free`, `BIO_free_all` — call `(func)(args)` directly
3. `CRYPTO_new_ex_data`, `CRYPTO_free_ex_data` — call `(func)(args)` directly

**Lock fix applied** (in `openssl/crypto/threads_amissl.c`):
- Changed `OBTAIN_SHARED_LOCK` from `ObtainSemaphoreShared` to `ossl_crypto_mutex_lock` (shared->exclusive)

**Remaining**: Even with all fixes, `CRYPTO_new_ex_data` still hangs. Likely cause: the `ex_data_lock` semaphore in the default OSSL_LIB_CTX is corrupted or not properly initialized.

### Working Primitives
- `SSL_CTX_new(TLS_client_method())` — WORKS
- `InitAmiSSLA(NULL)` — WORKS
- `OpenLibrary("amissl_v362.library")` — WORKS
- Direct Linux syscalls for TCP socket/connect — WORKS (proven in tcp_test)
- `BIO_s_mem()`, `BIO_s_connect()` — return valid pointers (after stub fixes)
- `OPENSSL_malloc()` — WORKS
- `SSL_new()` — ✅ NOW FIXED (June 17)

## June 17, 2026 — SSL_new hang FIXED

### Root Cause
`SSL_CTX_new()` in `ssl_lib.c:4530` was a simplified stub that **never called `ssl_cert_new()`**, leaving `ctx->cert = NULL`. When `SSL_new(ctx)` called `ssl_cert_dup(ctx->cert)`, the NULL `cert` pointer caused reading `cert->ssl_pkey_num` to hang (the AROS kernel's page fault handler hangs instead of crashing).

### Fix Applied
**File:** `openssl/ssl/ssl_lib.c:4547`
Added `ssl_cert_new()` call to `SSL_CTX_new()`:

```c
if ((ret->cert = ssl_cert_new(SSL_PKEY_NUM + ret->sigalg_list_len)) == NULL)
    return NULL;
```

### Test Results
- `SSL_new(ctx)` now returns a valid SSL object ✅
- `SSL_free(ssl)` / `SSL_CTX_free(ctx)` / `CleanupAmiSSLA()` all clean ✅
- `httpget` now gets past SSL init to BIO_do_connect (still blocked by bsdsocket.library connect() forwarder bug, not an SSL issue)

### Remaining
- `BIO_do_connect()` hangs — bsdsocket.library forwarder recursion bug with connect(). Use direct Linux syscalls for TCP.

## June 17, 2026 — YAM built from source for AROS x86_64

### Fixes Applied

**AROS SDK fix:** `aros/libcall.h:896-903` — Added `#ifndef` guards around `AROS_LC0NR`/`AROS_LC1NR`/`AROS_LC2NR` macros so x86_64-specific definitions (from `aros/x86_64/libcall.h`) aren't overridden by the generic header.

**YAM header fixes:**

| # | File | Change |
|---|------|--------|
| 1 | `yam-master/src/include/proto/miami.h:41` | Added `!defined(__AROS__)` guard to prevent including 68k-style `inline/miami.h` |
| 2 | `yam-master/src/include/proto/genesis.h:44` | Same `!defined(__AROS__)` guard |
| 3 | `yam-master/src/include/proto/bsdsocket.h` (netinclude):74 | Same guard for `inline/bsdsocket.h` |
| 4 | `yam-master/src/include/proto/amissl.h:89` | Added `#include <openssl/stack.h>` + `#include <openssl/safestack.h>` before `inline.h` |
| 5 | `yam-master/src/include/defines/amissl.h:5` | Added `#include <aros/x86_64/libcall.h>` (for NR macros) |
| 6 | `yam-master/src/include/defines/codesets.h` | Patched `AROS_LC2(void` → `AROS_LC2NR(void` for void functions |
| 7 | All `defines/*.h` in YAM | Scripted: added `#ifdef __x86_64__` include + replaced void LC macros with NR variants |
| 8 | `yam-master/src/extrasrc/vastubs.c:166` | Fixed `long` → `LONG` for `OpenAmiSSLTags` (32/64-bit type mismatch) |

**AmiSSL changes:**
- `openssl/ssl/ssl_lib.c:4547` — Added `ssl_cert_new()` call to `SSL_CTX_new()` (ctx->cert fix)
- `src/amissl_stubs_aros.c` — CRYPTO_malloc/CRYPTO_free use AllocVec/FreeVec directly

### Build Status (June 17)
- `amissl_v362.library` — ✅ Builds, all tests pass (12546 PLT32 relocs)
- `httpget` — ✅ Builds, SSL init works, TCP blocked by bsdsocket.library
- `YAM.aros-x86_64` — ✅ **Compiles and links with 0 errors** (2MB stripped)
- `YAM` runtime — 🟡 RIP=0 crash during MUI class init (separate from AmiSSL)

### YAM Remaining Issue
The newly built YAM crashes at `RIP=0` (NULL function pointer) during MUI custom class registration. The pre-built YAM binary (May 29) crashes in `Terminate` with NULL `G`. Both are YAM startup bugs unrelated to AmiSSL. Likely fixes:

1. Register MUI classes after all libraries are open
2. Add NULL checks in `yam_exitfunc`/`Terminate` before accessing `G`
3. Ensure `__initcommandline` passes correct argc/argv
