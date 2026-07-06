# AROS x86_64 Build Notes

Build command:
```
make -j1 OS=aros-x86_64 CROSS_PREFIX=x86_64-aros- SYSROOT="--sysroot=/path/to/sysroot" DEBUG=
```

Output:
- `build_aros-x86_64/amissl_v362.library` (12 MB, main library)
- `build_aros-x86_64/amisslmaster.library` (134 KB, master library)

Release: `release/AmiSSL/Libs/AROS-x86_64/AmiSSL/amissl_v362.library` (5.5 MB stripped)
          `release/AmiSSL/Libs/AROS-x86_64/amisslmaster.library` (39 KB stripped)

## Changes Made

### 1. `src/amissl_stubs_aros_gen.h` — Generated AROS EXT stubs header
- Removed 139 empty comma-only lines (`^,$`) that broke `AROS_LD*` macros (causing 7 args to 6-param macros)
- Added missing `OSSL_trace_enabled` stub (`AROS_LD1(int, OSSL_trace_enabled, ...)`)

### 2. `src/amissl_stubs_aros_gen.c` — Generated AROS EXT stubs source
- Removed 139 empty comma-only lines (same issue as gen.h)
- Added `OSSL_trace_enabled` function definition matching the header

### 3. `src/amissl_stubs_aros_new.h` — New EXT stubs declarations
- Contains `AROS_LD*` declarations for EXT library functions (OpenSSL 3.x additions)

### 4. `src/amissl_stubs_aros_new.c` — New EXT stubs definitions
- Contains `AROS_LH*` definitions for EXT library functions
- Added socket and UI function stubs for AROS
- Added alias functions to fix mismatched names between stubs and glue code
- Fixed `CALL_LFUNC` → `CALL_LFUNC_NP` for zero-argument functions (trailing comma fix)

### 5. `src/amissl_missing_lib_stubs.c` — Auto-generated stubs (NEW FILE)
- 65 stub implementations for missing `LIB_*` functions (RAND_DRBG, EVP_CIPHER, OCSP, CRYPTO, etc.)
- AROS runtime symbol stubs (`__LIBS__`, `__EXIT__`, `__INIT__` symbol handlers)
- `__ctype_table` placeholder

### 6. `src/libstubs.c` — Application stub functions
- Added `ERR_print_errors` override using `AROS_LC1NR` (GCC 10.5 `__builtin_choose_expr` parses both branches, `void __ret;` is invalid)

### 7. `src/appsoutput.c` — Application output stubs
- Guarded `#undef AMISSL_COMPILE` with `#ifndef __AROS__` (AROS inline headers can't handle complex function pointer return types)

### 8. `src/amissl_library.c` — Main library init
- Changed `struct Library *UtilityBase` to `struct UtilityBase *UtilityBase` for AROS (type mismatch with `<proto/utility.h>`)

### 9. `libcmt/libcmt.h` — Compatibility library header
- Added `#define _STDC_NOINLINE_DEPRECATED` before `bcopy`/`bzero` declarations (conflict with AROS SDK `_strings.h` static inlines)

### 10. `openssl/Configurations/15-amissl.conf` — OpenSSL build config
- Added `"AMISSL_COMPILE"` to `amiga-aros-x86_64` target `defines` list

### 11. `Makefile` — Build system
- Added `$(SYSROOT)` to OpenSSL Configure command line
- Change OpenSSL build target from `build_sw build_programs` to `libcrypto.a libssl.a`
- Added `-L$(patsubst --sysroot=%,%/lib,$(SYSROOT))` to AROS LDFLAGS
- Added `-lcrt -lautoinit -larossupport -lstdlib` to AROS LDLIBS
- Added `-lamisslapps -lamisslstubs -lamisslauto -lamissldebug` to AROS LDLIBS

### 12. `src/amissl_stubs_aros.h` — Main stub header
- Added `#include "amissl_stubs_aros_new.h"` for EXT stubs

### 13. `src/amissl_stubs_aros.c` — Main stub source
- Added `#include "amissl_stubs_aros_new.c"` for EXT stub definitions

### 14. `src/amissl_missing_lib_stubs.c` — Auto-generated stub file (NEW)
- 65 stub implementations for missing `LIB_*` functions (RAND_DRBG, EVP, OCSP, FIPS, etc.)
- AROS runtime symbols (`__LIBS__`, `__EXIT__`, `__INIT__` handlers, `__ctype_table`)

### 15. `src/amisslmaster_libinit.c` — Master library init
- Added AROS to `MULTIBASE` child allocation block (`AllocVec`/`CopyMem` clone)
- Added AROS data segment copy for child library base
- Added AROS cleanup block (`FreeVec`)
- Fixed `SLIB_ENTRY` to pass 3 args to `AROS_SLIB_ENTRY`
- Changed `ULONG` to `IPTR` for pointer arithmetic (64-bit compatibility)
- Added AROS `newLib` declaration

### 16. `src/amisslmaster_library.c` — Master library
- Guarded `#include <inline/macros.h>` with `#if !defined(__AROS__)`
- Added AROS `AROS_LC1NR` call for `InternalInitAmiSSL`

### 17. `src/amisslmaster_stubs_aros.h` — Master library AROS stubs header
- Added `OpenAmiSSLTagList` `AROS_LD2` declaration

### 18. `src/amisslmaster_stubs_aros.c` — Master library AROS stubs source
- Added `OpenAmiSSLTagList` `AROS_LH2` definition
- Added `CloseAmiSSL` wrapper (calls `LIB_CloseAmiSSL`)
- Added `__LIBS__symbol_set_handler_missing` stub

### 19. `Makefile` — Build system
- Added `$(LIBS)` to master library link command (for `-L$(BUILD_D)` path)

## Remaining Issues

### EXT library (amisslext)
The EXT library (`amisslext_libinit.c`) compiles but is not linked into `amissl_v362.library`. It's built separately as `build_aros-x86_64/amisslext_libinit.o`.

### OpenSSL apps
The OpenSSL command-line tools are not built (target changed to `libcrypto.a libssl.a` only). The `build_programs` target would fail on AROS.

### Stub quality
Many `LIB_*` function stubs in `amissl_missing_lib_stubs.c` return dummy values (0/NULL). These should be properly implemented if the corresponding functionality is needed at runtime.

## To Resume Later
1. Source tree is at: `amissl-5.27/`
2. Build command: `make -j1 OS=aros-x86_64 CROSS_PREFIX=x86_64-aros- SYSROOT="--sysroot=/path/to/sysroot" DEBUG=`
3. Re-run OpenSSL configure if needed: `rm -f build_aros-x86_64/openssl/Makefile && make ...`
4. Force object rebuilds: `rm -f build_aros-x86_64/amissl_stubs_aros.o build_aros-x86_64/amissl_v362.library build_aros-x86_64/amisslmaster_stubs_aros.o build_aros-x86_64/amisslmaster.library`
5. Full rebuild: `rm -rf build_aros-x86_64 && make ...`
6. Release packaging: `mkdir -p release/AmiSSL/Libs/AROS-x86_64/AmiSSL && cp build_aros-x86_64/amissl_v362.library release/AmiSSL/Libs/AROS-x86_64/AmiSSL/ && cp build_aros-x86_64/amisslmaster.library release/AmiSSL/Libs/AROS-x86_64/ && x86_64-aros-strip -s release/AmiSSL/Libs/AROS-x86_64/AmiSSL/amissl_v362.library && x86_64-aros-strip --strip-unneeded release/AmiSSL/Libs/AROS-x86_64/amisslmaster.library`
