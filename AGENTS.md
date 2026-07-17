# AmiSSL AROS x86_64 — Agent Context (July 17, 2026 end)

## RESUME GUIDE — when you continue:

### Option A (kernel fix — preferred)
Patch AROS x86_64 Exec ELF loader (`rom/exec/elf_loader.c` or similar) to handle:
- `R_X86_64_32` (type 1) — 32-bit absolute, zero-extended
- `R_X86_64_32S` (type 11) — 32-bit absolute, sign-extended
- `R_X86_64_PC32` (type 2) — 32-bit PC-relative

for `.text → .rodata` AND `.text → .data` cross-section references.
These are currently processed for function calls (PLT32) and string
literals (R_386_32 on i386) but NOT for static data on x86_64.
Fix this once and ALL ASN1 ITEMs (`X509_it`, etc.) work immediately.
Then undo `statem_clnt.c` bypass and restore full cert parsing.

### Option B (no kernel changes — library restructure)
Force ALL static ITEM data into `.text` section so no cross-section
relocations exist.  Add to `asn1t.h`:
```c
static const ASN1_ITEM local_it __attribute__((section(".text"))) = {
```

### Option C (fallback — manual ITEMs in amissl_missing_stubs.c)
Duplicate template/aux data for all needed ASN1 ITEMs directly in
`src/aros/amissl_missing_stubs.c` (linked first). Requires defining
template arrays, aux structs, and ITEMs for X509, X509_CINF,
X509_ALGOR, X509_VAL, X509_NAME_ENTRY, X509_EXTENSION, X509_PUBKEY,
X509_NAME — each needing correct `offsetof` and sub-ITEM pointers.

### Remaining after relocation fix
1. `EVP_PKEY_Q_keygen` provider hang → bypass in `ssl/s3_lib.c`
2. `EVP_DigestInit_ex` provider hang → already bypassed in `ssl/s3_enc.c`
3. Clean up debug `syscall` markers from all modified files
4. Remove `certbytes += cert_len` bypass in `statem_clnt.c`
5. Remove `tls_post_process_server_certificate` workarounds in `statem_clnt.c`

## Build & Deploy
```bash
export PATH="/home/serk118/work/arosbuilds/toolchain-core-x86_64:$PATH"
export SYSROOT="--sysroot=/home/serk118/work/arosbuilds/core-linux-x86_64-d/bin/linux-x86_64/AROS/Development"
make OS=aros-x86_64 CROSS_PREFIX=x86_64-aros- DEBUG=

cp build_aros-x86_64/amissl_v362.library ~/work/arosbuilds/deadwood-core-x86_64/AROS-20250418-1-linux-x86_64-system/Libs/
cp build_aros-x86_64/httpget_simple ~/work/arosbuilds/deadwood-core-x86_64/AROS-20250418-1-linux-x86_64-system/tests/
```

## Test on hosted AROS
```bash
printf 'Assign "AmiSSL:" "SYS:AmiSSL"\nRun >SYS:test_output.txt SYS:tests/httpget_simple\nWait 180\n' > ~/work/arosbuilds/deadwood-core-x86_64/AROS-20250418-1-linux-x86_64-system/S/Startup-Sequence
cd ~/work/arosbuilds/deadwood-core-x86_64/AROS-20250418-1-linux-x86_64-system/
timeout 120 ./boot/linux/AROSBootstrap 2>&1
cat test_output.txt
```

## Current Status (July 17 — session end)
| Test | Result |
|------|--------|
| HTTP connect + raw send | ✅ Works |
| SSL_connect (TLS 1.2, cert bypass) | ✅ **Returns** (SSL_R_UNABLE_TO_FIND_ECDH_PARAMETERS) |
| SSL_connect (TLS 1.2, full cert parse) | ❌ **SIGSEGV** in `d2i_X509` (R_X86_64_PC32 relocation unprocessed by AROS Exec) |
| SSL_connect (TLS 1.3, if negotiated) | ❌ `SSL_R_UNSUPPORTED_SSL_VERSION` (259) — test forces TLS 1.2, so this path is not hit |

## Fixes Applied (this session — July 16-17)

### Fix 11 (REAPPLIED to correct file): CRYPTO_zalloc calloc fallback
- **File:** `src/aros/amissl_missing_stubs.c:110-119`
- **Root cause:** The linker uses FIRST definition with `--allow-multiple-definition`. The previous Fix 11 was in `src/amissl_stubs_aros.c` which is linked SECOND. `amissl_missing_stubs.c` is linked FIRST.
- **Fix:** Added `calloc(1, num)` fallback in `CRYPTO_zalloc`, `malloc(num)` fallback in `CRYPTO_malloc` and `CRYPTO_realloc` when `AllocVec` returns NULL and `num > 0`.

### Fix 12: Embedded struct memset crash in asn1_item_embed_new
- **File:** `openssl/crypto/asn1/tasn_new.c:138-144`
- **Root cause:** AmiSSL ASN1 ITEM stubs have wrong `size` field. When `embed=true` and `*pval` non-NULL, `memset(*pval, 0, it->size)` writes out of bounds.
- **Fix:** For `embed=true`, allocate if NULL; skip memset if non-NULL (parent already zeroed).

### Fix 13: d2i_X509 + public key + EC keygen bypasses for AROS
- **File:** `openssl/ssl/statem/statem_clnt.c`
- **Three bypasses:**
  1. **d2i_X509**: `certbytes += cert_len` — skip cert DER parsing (crash in AmiSSL dispatch)
  2. **Public key extraction**: When `X509_get0_pubkey` returns NULL and `SSL_VERIFY_NONE`, create a dummy EVP_PKEY instead of failing
  3. **Cert-type check**: Skip `ssl_cert_lookup_by_pkey` / cipher-suite match check on AROS
- **File:** `openssl/ssl/s3_lib.c`
  4. **EC keygen**: `ssl_generate_param_group` — try `EVP_PKEY_Q_keygen` first, fall back to cached P-256 EC_KEY

### Fix 14: ASN1_ITEM_start/end macro relocation fix (IN PROGRESS)
- **File:** `include/openssl/asn1t.h` + `openssl/include/openssl/asn1t.h.in`
- **Root cause:** AROS x86_64 Exec ELF loader does NOT process `R_X86_64_PC32` cross-section relocations (used by `lea label(%rip), %rax` for static data). On i386 the equivalent `R_386_PC32` IS processed because the Exec handles it differently.
- **Attempted fixes:**
  1. `"m"(local_it)` with `leaq %1, %0` → generates `R_X86_64_PC32 .rodata` → NOT processed
  2. `"p"(&local_it)` with `mov %1, %0` → generates `R_X86_64_32S .rodata` → POTENTIAL FIX (untested after clean rebuild)
  3. Fallback: file-scope static + `&` operator → same relocation issue

## Handshake Progress (TLS 1.2 path)
```
Before fixes:        SSL_R_UNSUPPORTED_SSL_VERSION (259)
After Fix 8:         SSL_R_UNKNOWN_CIPHER_RETURNED (248)
After Fix 8+9:       Hangs in grow_init_buf
After Fix 10:        Hangs in X509_new_ex (AllocVec failure)
After Fix 11:        Hangs in X509_new_ex (embed memset crash)
After Fix 12:        SIGSEGV in d2i_X509
After Fix 13 (basic): SSL_connect returns CERT_LENGTH_MISMATCH
After Fix 13 (full): Progresses through cert → key exchange → fails at EC keygen
After Fix 14:        [clean rebuild in progress]
```

## New Discoveries (this session)

### 5. Link order: amissl_missing_stubs before amissl_stubs_aros
First-linked `.o` wins with `--allow-multiple-definition`. The CRYPTO_zalloc override must be in `amissl_missing_stubs.c` (1st), not `amissl_stubs_aros.c` (2nd).

### 6. AROS Exec does NOT process R_X86_64_PC32 for data references
The AROS x86_64 Exec ELF loader processes `R_X86_64_PLT32` (function calls) and `R_X86_64_32`/`R_X86_64_32S` (absolute data), but NOT `R_X86_64_PC32` for cross-section data references (`.text` → `.rodata`). On i386, `R_386_PC32` IS processed, explaining why i386 works.

### 7. AmiSSL library functions are patched by NAME at init
`InitAmiSSLA` (or the AROS Exec at load time) patches functions by matching their NAME, overriding any C-level overrides. Only functions with UNIQUE NAMES not in the dispatch table survive.

### 8. OpenSSL 3.x provider layer hangs on AROS
`EVP_PKEY_Q_keygen`, `EVP_DigestInit_ex`, etc. go through the provider layer which hangs/crashes. Likely because the default provider can't be loaded or initialized on this AROS build. Workaround: bypass with legacy APIs (`EC_KEY_new_by_curve_name`), `#if defined(__AROS__)` guards.

### 9. Fix 14 approach — use `"p"` constraint in inline asm
The `"p"(&local_it)` constraint generates `mov $local_it, %rax` with `R_X86_64_32S` relocation (absolute 32-bit, sign-extended). This relocation TYPE is handled by the AROS Exec, unlike `R_X86_64_PC32` from `"m"(local_it)` + `leaq`. The fix is in `include/openssl/asn1t.h` and needs a clean rebuild.

## Remaining Issues
1. **R_X86_64_PC32 relocations** — Fix 14 (inline asm with `"p"` constraint) should resolve this. After a clean rebuild, `X509_it`, `d2i_X509`, and all other ASN1 ITEM functions should return valid ITEM pointers. Then the d2i_X509 bypass can be removed.
2. **Provider layer hangs** — Even with working ASN1 ITEMs, `EVP_PKEY_Q_keygen` will still hang. Workarounds in `ssl_generate_param_group` and `tls_post_process_server_certificate` are needed.
3. **Debug markers** — Several files have `syscall` debug markers left from the session. Should be cleaned up before final deployment.

## Key Files Modified
- `include/openssl/asn1t.h` — Fix 14 (relocation type)
- `openssl/include/openssl/asn1t.h.in` — Fix 14 (build template)
- `openssl/crypto/asn1/tasn_new.c` — Fix 12 (embed memset)
- `openssl/crypto/asn1/x_algor.c` — (stale global alias)
- `openssl/crypto/asn1/x_val.c` — (stale global alias)
- `openssl/crypto/x509/x_exten.c` — (stale global alias)
- `openssl/crypto/x509/x_name.c` — (stale global alias)
- `openssl/crypto/x509/x_x509.c` — (stale global alias)
- `openssl/ssl/s3_lib.c` — Fix 13/14 (EC keygen bypass)
- `openssl/ssl/ssl_sess.c` — cleanup (removed debug markers)
- `openssl/ssl/statem/statem_clnt.c` — Fix 13 (cert bypass trio)
- `src/aros/amissl_missing_stubs.c` — Fix 11 (CRYPTO_zalloc/calloc)
- `test/httpget_simple.c` — TLS 1.2 forced, markers added

All changes uncommitted.
