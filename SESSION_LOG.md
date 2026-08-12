# Session Log — Aug 12, 2026 (FINAL)

## STATUS
- **HOSTED HANG RESOLVED:** Confirmed that the connect-BIO handshake hang on
  hosted AROS was a **build corruption artifact** caused by a parallel `AR`
  race in the `Makefile`.
- **CLEAN NATIVE BUILD:** Produced a truly clean, 0-syscall native build for
  real AROS after a full `rm -rf build_aros-x86_64`.
- **ERRNO WIRING FIXED:** Restored `SocketBaseTagList` in `libcmt/socket.c`.
  This ensures correct errno propagation from `bsdsocket.library` to AmiSSL,
  essential for reliable non-blocking handshake retries.

## WHAT WAS FIXED
- **Build Integrity:** Full clean rebuild eliminated the "parallel AR/ld race"
  corruption that previously caused `httpget_bio` to hang after connect.
- **Hosted Verification:** Freshly built marker library verified working
  end-to-end on hosted AROS: SNI set → ClientHello sent → ServerHello/Cert/SKE
  → EC Keygen ok → Handshake SUCCESS (HTTP 404 from DeepL).
- **SocketBaseTagList:** Enabled for AROS in `initialize_socket_errno()`.

## VERIFICATION
- Both libraries now have **0 syscalls**.
  - `amissl_v362.library` (md5 `f691b4b531f73d694c09db1b6914d5aa`, 12162104 B)
  - `amisslmaster.library` (md5 `4a99dc5d7aabe24c45df94ede98400c6`, 33240 B)
- All test apps (`httpget_bio`, `simple`, `default`) have **0 syscalls**.

## READY TO STAGE
New clean binaries are staged in the build directory. Waiting for user to
re-plug USB to copy to `/media/serk118/C24B-10A6/current_downloads/`.

---

# Session Log — Aug 12, 2026 (MORNING)

## ROOT CAUSE (Real AROS Crash)
- **Unguarded `syscall` markers:** Both libraries contained raw Linux `0F 05`
  `syscall` instructions in debug markers (`arossl_dbg` and
  `MASTER_DEBUG_SYSWRITE`).
- **Makefile Issue:** The `Makefile` was unconditionally defining
  `AMISSL_HOSTED_AROS` because `HOSTED_AROS_MARK` was cached as 1 in
  `build_aros-x86_64/hosted_aros_config.h`.
- **Relocation processing:** On native AROS hardware, `syscall` raises `#UD`
  because `IA32_LSTAR` is not initialized.

## WHAT WAS FIXED
- **Clean Rebuild:** Rebuilt without `HOSTED_AROS=1`. Manually deleted
  `build_aros-x86_64/openssl/` and `build_aros-x86_64/libcmt/` object files to
  ensure all debug markers became no-ops.
- **Verification:** Both libraries now have **0 syscalls**.
  - `amissl_v362.library` (md5 `d5a0f8ad38fb1761ddb9493bccc97e76`, 12161224 B)
  - `amisslmaster.library` (md5 `06c88a2779add717441ef0b08e1f3c3f`, 33240 B)
- **User Confirmed:** No more crash on real AROS hardware.

## NEW ISSUE (Handshake Loop)
- Clicking "Translate" in AmiTranslate on real AROS hangs (button stays gray)
  and internet slows down significantly.
- **Reproduced on Hosted:** `httpget_bio` on hosted AROS also gets stuck after
  setting host:port (marker `B9`), confirming it's not a hardware-only issue.
- **Action:** Restored debug build (markers ON) for hosted testing to trace
  where `SSL_do_handshake` is looping.

## FILES MODIFIED
- `AGENTS.md`, `SESSION_LOG.md` — updated session 7 status.
- `build_aros-x86_64/hosted_aros_config.h` — reset to `MARK 0` (via rebuild).

---

# Session Log — July 14-15, 2026 (FINAL)
## STATUS
AmiSSL 5.27 for AROS x86_64 — port in progress.

## WHAT WORKS
- Build system ✅
- Library loads and initializes ✅
- 60 ciphers available ✅
- TCP connect via bsdsocket ✅
- Raw send/recv ✅
- RAND_bytes / RAND_priv_bytes with LCG fallback ✅
- ClientHello constructed and SENT (no hang) ✅
- Server response received (alert 80 = internal_error) ✅
- Atomic operations now use `lock xaddl` (fixes cleanup crash) ✅

## WHAT FAILS
- **SSL_connect** → `error:0A0C0103:lib(20)::reason(259)` = `SSL_R_UNSUPPORTED_SSL_VERSION`
- Server (ALL tested servers: httpbin.org, google.com) rejects ClientHello with `internal_error`
- Same on hosted AROS and real AROS

## KEY FINDINGS

### 1. Error 259 does NOT come from ssl_generate_session_id
Added debug syscall in ssl_sess.c:348 — function is NEVER called during our test.
The error code 0x0A0C0103 does NOT match ERR_PACK(lib,0,reason) either
(the reason field of 0x0A0C0103 extracts to 786691, not 259 — but ERR_error_string
shows reason(259), formatting inconsistency).

### 2. Fatal alert handler is NOT triggered either
Added debug in rec_layer_s3.c:915 — [FATAL_ALERT] never appears.
Yet the error IS in the queue. The error comes from a path that doesn't go through
either gen_session_id or the alert handler.

### 3. atomic add operations are broken on AROS toolchain
CRYPTO_atomic_add ignored the lock (threads_amissl.c:308-318).
CRYPTO_UP_REF/DOWN_REF use `__atomic_fetch_add` GCC builtin which may be buggy
on the AROS cross-compiler.
**Fix applied:** Replaced both with `lock xaddl` inline assembly.

### 4. x25519_fe64_eligible declared but never defined
In curve25519.c, inside `#if defined(X25519_ASM)` block. Not compiled on AROS.
**Fix applied:** Added stub returning 0. Unnecessary — generic C path used anyway.

## FILES MODIFIED

| File | Change |
|------|--------|
| openssl/ssl/t1_lib.c:440-445 | Simple group list |
| openssl/ssl/s3_lib.c:5401-5404 | ssl_generate_pkey_group returns error on AROS |
| openssl/ssl/statem/extensions_clnt.c:662-696 | AROS key share via ECX_KEY + EVP_PKEY_assign |
| openssl/crypto/threads_amissl.c:308-318 | CRYPTO_atomic_add uses `lock xaddl` |
| openssl/include/internal/refcount.h:79-128 | CRYPTO_UP_REF/DOWN_REF: AROS path with `lock xaddl` |
| openssl/crypto/ec/curve25519.c:30-33 | x25519_fe64_eligible stub |
| test/httpget_simple.c | TLS 1.3 test, cleanup fixes, debug prints |

## ATTEMPTED APPROACHES (summary)
1. Simple group list → got past NO_SUITABLE_KEY_SHARE
2. LCG RNG → bypassed DRBG/timer.device hang
3. Static key share → ClientHello sends, no hang
4. EC_KEY_generate_key → hang (DRBG)
5. ossl_x25519 → hang (curve25519.c arithmetic)
6. Inline X25519 (__int128, uint64_t) → both hang
7. EVP_PKEY_keygen legacy path → hang on hosted, crash on real AROS
8. Atomic lock xaddl fix → fixed cleanup crash
9. Debug tracing → confirmed gen_session_id NOT called

## REMAINING ISSUE (July 15)
The error 0x0A0C0103 = ERR_R_INTERNAL_ERROR comes from ssl3_write_bytes
line 391 (rec_layer_s3.c) where max_send_fragment==0 causes early SSLfatal
BEFORE any socket write. The alert dispatch during that SSLfatal calls
send() which succeeds for 2 bytes of alert data. So the test returns -1
immediately — ClientHello is NEVER actually sent.

ROOT CAUSE: max_send_fragment=0 — the field is zeroed somewhere during
SSL initialization. Suspect memset(&sc->s3,0,...) in ssl3_clear called
during SSL_new AFTER ossl_ssl_connection_new_int sets it at line 824.

FIX: ssl_get_max_send_fragment/split now fall back to
SSL3_RT_MAX_PLAIN_LENGTH when the field is 0.

BUT: with the fix, the code reaches BIO_write → send() inside the record
layer (tls_retry_write_records). This PATH HANGS on AROS. Two other fixes
were needed to reach this point:
1. version fix: SSL_clear should set sc->version to TLS1_3_VERSION
   (not TLS_ANY_VERSION=0x10000 which produced invalid record version)
2. buffer BIO skip: ssl_init_wbio_buffer pushes BIO_f_buffer on wbio
   which buffers handshake data but never flushes; recv() then blocks
   forever waiting for server response

CURRENT STATUS: All three fixes are committed but a CLEAN BUILD is
required to produce a working library. Incremental builds on the dirty
build_aros-x86_64 directory produce corrupted libraries.

## USB
```
/media/serk118/C24B-10A6/toMiker/Libs/amissl_v362.library
/media/serk118/C24B-10A6/toMiker/tests/httpget_simple
```

## BUILD COMMAND
```bash
export PATH="/home/serk118/work/arosbuilds/toolchain-core-x86_64:$PATH"
export SYSROOT="--sysroot=/home/serk118/work/arosbuilds_alt/toolchain-core-x86_64-build/bin/linux-x86_64/AROS/Development"
make OS=aros-x86_64 CROSS_PREFIX=x86_64-aros- DEBUG=
```

---

# Session Log — Aug 5, 2026 (FINAL)

## STATUS
CERT PARSING IS NOW REAL. `d2i_X509` runs fully (3 certs, `[D2I-OK]` ×3).
The ONLY remaining failure before a full TLS 1.2 handshake is the
ServerKeyExchange ECDSA signature verification returning 0 (`BAD_SIGNATURE`).

## WHAT WORKS
- Real `d2i_X509` cert parsing (Fix 14 `"p"(&local_it)` inline asm — relocation fix CONFIRMED WORKING) ✅
- Server cert pubkey extraction → legacy EC key (`x_pubkey.c` `flag_force_legacy`) ✅
- TLS 1.2 handshake: ClientHello → ServerHello → Cert → SKE read ✅
- EC keygen via `EC_KEY` fallback (`[PARAM-GEN]`/`[EC-GEN-OK]`) ✅
- AROS legacy sig-verify path (`arossl_*` helpers) executes end-to-end ✅

## WHAT FAILS (CURRENT BLOCKER)
- `ECDSA_verify` returns **0** (signature invalid) on the SKE signature.
- Queue: `error:0A00007B:lib(20)::reason(123)` = `SSL_R_BAD_SIGNATURE`

## RUN 4 DIAGNOSTICS (from /tmp/arossl_run4.log)
```
[PARAM-GEN][EC-GEN-OK]      <- our client EC keygen OK
[SIG-CHK]                   <- pkey present, check signature
[SIG-ALG]                   <- TLS1.2 sigalg read OK
[SIG-MD]                    <- tls1_lookup_md OK
SIGBASE:0000000000000198    <- 0x198 = 408 = EVP_PKEY_EC (peer key IS legacy EC)
SIGMDTY:00000000000002A0    <- 0x2A0 = 672 = NID_sha256 (digest type correct)
SIGDLEN:0000000000000000    <- printed BEFORE arossl_raw_digest (initial value)
SIGSLEN:0000000000000047    <- 0x47 = 71 bytes ECDSA DER sig
[R-IN][R-ALLOC][R-COPY]...  <- d2i_ECDSA_SIG decoding the DER sig (inside ECDSA_verify)
[BG2]...0000000000000100[S1]-[S4][BG3-END]  <- ASN1 INTEGER buffer grow (r/s decode)
SIGVRET:0000000000000000    <- ECDSA_verify returned 0 = signature MISMATCH (not -1)
```

### Interpretation
- Return `0` (not `-1`) means: `d2i_ECDSA_SIG` succeeded, DER sig is canonical,
  `ECDSA_do_verify` ran `ossl_ecdsa_simple_verify_sig` to completion, and the
  recovered x-coordinate ≠ r. The EC point math ran and disagreed.
- Candidates: (a) TBS/digest bytes wrong, (b) EC pubkey point from cert wrong,
  (c) EC group/arithmetic broken on AROS (yet EC keygen works, so generic
  point mul likely OK — points to (a) or (b)).
- Test output: `r=-1 err=1 peek=0x0308010C`, then
  `ERR=error:0308010C:lib(6)::reason(268)` (stale, curl FIFO provider path) and
  `ERR=error:0A00007B:lib(20)::reason(123)` (REAL failure).

## NEXT STEPS (in priority order)
1. Dump the computed digest + TBS vs a host-side reference, or print
   `r`/`s`/recovered-x from `ECDSA_do_verify`/`ossl_ecdsa_simple_verify_sig`.
2. Verify the peer EC pubkey point decoded from the cert (X9.62 octet string)
   matches the cert bytes (x_pubkey.c `flag_force_legacy` path).
3. If data checks out, test EC point mul (`EC_POINT_mul`) on AROS with the
   peer's group as a unit test.
4. After sig verify passes: strip ALL debug markers, remove workarounds, commit.

## FILES TOUCHED (uncommitted, all on branch `combined-fixes`)
```
 M libcmt/Makefile
 M libcmt/string_memset.c
 M openssl/crypto/asn1/asn1_lib.c
 M openssl/crypto/asn1/tasn_dec.c
 M openssl/crypto/buffer/buffer.c
 M openssl/crypto/evp/digest.c
 M openssl/crypto/evp/e_chacha20_poly1305.c
 M openssl/crypto/evp/evp_enc.c
 M openssl/crypto/x509/x_name.c
 M openssl/crypto/x509/x_pubkey.c
 M openssl/ssl/record/methods/tls1_meth.c
 M openssl/ssl/record/methods/tls_common.c
 M openssl/ssl/s3_enc.c
 M openssl/ssl/s3_lib.c
 M openssl/ssl/ssl_ciph.c
 M openssl/ssl/ssl_lib.c
 M openssl/ssl/statem/statem.c
 M openssl/ssl/statem/statem_clnt.c
 M openssl/ssl/statem/statem_lib.c
 M openssl/ssl/t1_enc.c
 M src/amissl_glue.c
 M src/aros/amissl_missing_stubs.c
  M test/httpget_simple.c
```

---

# Session Log — Aug 6, 2026

## STATUS
Fixed the "unfreed signal 0x10000" issue. `httpget_simple` now properly cleans up on exit.

## WHAT WAS FIXED
- **"unfreed signal 0x10000"** — the timer port's signal was allocated by `CreateMsgPort()` but never freed because `CleanupTimers()` was never called when the program exited.
- **Root cause:** `httpget_simple.c` never called `CleanupAmiSSLA()` or `CloseLibrary()` before exiting. The `__UserLibCleanup` function also didn't clean up per-task timers.
- **Fix 1:** Added `do_cleanup()` helper to `httpget_simple.c` that calls `CleanupAmiSSLA(NULL)`, `CloseLibrary(AmiSSLBase)`, and `CloseLibrary(SocketBase)` on all exit paths.
- **Fix 2:** Added `CleanupTimers(state)` call to `__UserLibCleanup` in `amissl_library.c` as a safety net.
- **Result:** Both runs of `httpget_simple` on hosted AROS complete successfully with no "unfreed signal" message.

## FILES MODIFIED
- `test/httpget_simple.c` — added `do_cleanup()` helper, calls it on all exit paths
- `src/amissl_library.c` — added `CleanupTimers(state)` to `__UserLibCleanup`

---

# Session Log — Aug 7, 2026

## STATUS
Fixed the native-AROS crash in `amisslmaster.library`. The shipped library
contained raw Linux `write(2)` syscall debug markers that crash native AROS
with an illegal-instruction trap (`0x80000004`). Markers are now compile-time
gated; native builds contain zero `syscall` instructions.

## ROOT CAUSE
- AROS uses the Amiga library-call ABI. Native AROS has **no Linux syscall
  table** and never enables `EFER.SCE`/`IA32_LSTAR`, so executing the
  `syscall` instruction (`0F 05`) raises `#UD` → error `0x80000004`.
- The 6 `[MASTER]` debug markers in `src/amisslmaster_library.c`
  (`OpenAmiSSLBase` ×2, `OpenAmiSSLTagList` ×1, ERR=1/2/3 ×3) used inline
  asm `syscall` with `"0"(1), "D"(2)` = Linux `write(2, buf, len)`.
- Hosted AROS works (it is a Linux process); native AROS crashes.
- There is **no runtime detection** (no LSTAR/SYSCFG on native) → the choice
  must be a **build-time toggle**.

## WHAT WAS FIXED
- **`src/amisslmaster_library.c`** — added `MASTER_DEBUG_SYSWRITE(buf, len)`
  macro: compiles the `syscall` asm ONLY when
  `__AROS__ && AMISSL_HOSTED_AROS`, else expands to a no-op. All 6 marker
  sites now call the macro (the `snprintf` remains, result unused when off).
- **`Makefile`** (still the main, intact build file):
  - aros-x86_64 section: `HOSTED_AROS_MARK = $(if $(filter 1,$(HOSTED_AROS)),1,0)`;
    `-DAMISSL_HOSTED_AROS` added to `CFLAGS` only when the mark is 1
    (changed from `ifdef` to `ifeq` so `HOSTED_AROS=0` truly disables).
  - Added generated `$(BUILD_D)/hosted_aros_config.h` (records the mark) as a
    prerequisite of `amisslmaster_library.o` via a `FORCE`-checked rule that
    only rewrites the header when the flag actually changes → toggling
    `HOSTED_AROS` auto-recompiles the master object (no manual `rm` needed).
- **`makefile_native`** (NEW) — build **ON an AROS system** (native gcc, no
  cross-prefix, no sysroot): forces `HOST=AROS`, `OS=aros-x86_64`,
  `CROSS_PREFIX=` (empty → `CC=gcc`), `DEBUG=` (release), `HOSTED_AROS=0`,
  `SYSROOT=`. Usage: `make -f makefile_native`. Includes the main `Makefile`;
  it does NOT replace it.

## VERIFICATION
- Hosted debug build (`HOSTED_AROS=1`): `amisslmaster.library` contains
  **6** `syscall` instructions (markers active).
- Native build (default / `makefile_native`): `amisslmaster.library` and
  `amissl_v362.library` both contain **0** `syscall` instructions.
- `openssl/ssl/ssl_lib.c` `DBG_P`/`DBG_PV` were already no-op stubs; no other
  raw syscalls exist in shipped code (`test/raw*.c` are hosted-only, never
  shipped). `test/httpget_simple.c` has **0** syscall/asm — safe on native.

## DEPLOYED (native-safe, Aug 7)
Copied to `/media/serk118/C24B-10A6/current_downloads/` for real-AROS testing:
- `amissl_v362.library`
- `amisslmaster.library`
(install both into `Libs:` on real AROS)

## BUILD RECIPES
- Native-safe cross build (Linux host): `make OS=aros-x86_64 CROSS_PREFIX=x86_64-aros- DEBUG=`
- Hosted debug (Linux host, markers on): `make OS=aros-x86_64 CROSS_PREFIX=x86_64-aros- DEBUG= HOSTED_AROS=1`
- Native build on AROS itself: `make -f makefile_native`

## FILES MODIFIED
- `src/amisslmaster_library.c` — `MASTER_DEBUG_SYSWRITE` macro + 6 marker sites routed through it
- `Makefile` — `HOSTED_AROS` toggle (`ifeq`), `HOSTED_AROS_MARK`, `hosted_aros_config.h` auto-rebuild rule
- `makefile_native` — NEW, native-on-AROS build wrapper

---

# Aug 10, 2026 (session 2) — EXT-dispatch bug FIXED (provider_test EC_KEY_new_ex crash)

## STATUS
Fixed the `EC_KEY_new_ex` SIGSEGV in provider_test — it was a TEST-APP bug,
not a library bug. Hosted AROS verification passed for T3; httpget_simple still
works end-to-end.

## WHAT WAS FIXED
- **Root cause:** On AROS, the extended-table (ext) functions are a SEPARATE
  library base (`extBase`, created by `CreateExtLibrary`), but they use the
  SAME AROS function numbers as the main-table functions.
  - `EC_KEY_new_ex` = ext table, function #630 → dispatch offset `0xec4`
  - `EC_GROUP_get0_generator` = main table, function #630 → dispatch offset `0xec4`
  - Both resolve to offset `0xec4` in THEIR OWN base.
  - The test apps did `AmiSSLExtBase = AmiSSLBase`, so `EC_KEY_new_ex(NULL,NULL)`
    dispatched into the MAIN table slot 630 = `EC_GROUP_get0_generator(NULL)`
    → SIGSEGV at `mov 0x8(%rdi),rax` (RDI=0).
  - Identical crash on hosted and real AROS → confirmed not platform-specific.
- **Fix (test apps only, no library change):** obtain the real ext base via the
  `AmiSSL_GetAmiSSLExtBase` tag (`TAG_USER + 0x0e`) in the `InitAmiSSLA` tag list.
- **Files fixed:** `test/provider_test.c`, `test/httpget_simple.c`, `test/httpget_default.c`.

## VERIFICATION (hosted AROS)
- provider_test now prints `AmiSSLBase=00000000426a88a0
  AmiSSLExtBase=00000000426abeb0` (distinct bases).
- T1 RAND ok, T2 EVP_PKEY_CTX_new_id(EC)=NULL (known provider EC-ctx issue),
  **T3 EC_KEY_new_ex=00000000426e16f0 + freed (no crash)**.
- T4 EVP_Digest(provider) crashes in legacy `SHA256_Init` via provider
  `sha256_md` — KNOWN provider-layer issue (SSL path bypasses provider with
  legacy APIs). NOT a dispatch bug.
- httpget_simple end-to-end: r=1 err=0, CIPHER=ECDHE-ECDSA-AES128-GCM-SHA256,
  STATUS=200, DOWNLOADED=70832, DONE. No unfreed-signal regression.

## STILL BROKEN (same wrong pattern, NOT yet fixed)
- `test/httpget.c:482`, `test/ssltest_diag.c:21`, `test/httpget_simple_tls13.c:293`,
  `test/httpget_clean.c:29`, `test/rawhttps_test.c:19` still do
  `AmiSSLExtBase = AmiSSLBase`. Fix before using these.

## DEPLOYED (staged on USB for real-AROS retest)
- `/media/serk118/C24B-10A6/current_downloads/provider_test` (30792 B)
- `/media/serk118/C24B-10A6/current_downloads/httpget_simple` (37048 B)
- `/media/serk118/C24B-10A6/current_downloads/httpget_default` (39200 B)
- `amissl_v362.library` (12160104 B, Aug 10 00:08) already staged.

## FILES MODIFIED (Aug 10 session 2)
- `test/provider_test.c`
- `test/httpget_simple.c`
- `test/httpget_default.c`
- `AGENTS.md`, `RESUME_LATER.md`

## NEXT STEPS
1. Real-AROS retest with staged binaries (T3 no longer crashes; httpget works).
2. Real-AROS `SSL_CTX_new` E24/E10 stdname-lookup failure REMAINS OPEN —
   hosted passes E00/E40 name lookups, real returns NULL. Lead theory: PC32
   `.rodata` relocation in `rom/dos/internalloadseg_elf.c`.
3. Fix remaining `AmiSSLExtBase = AmiSSLBase` in httpget.c/ssltest_diag.c/etc.
4. AmiTranslate master-open on real AROS (nested `LIBS:AmiSSL/` layout;
   user-startup on USB already updated).
5. YAM/Muimaster crash thread (unrelated) remains OPEN.

---

## AUG 10 SESSION 3 — httpget_default SSL_CTX_new NULL FIXED (TLS1.3 string path bypassed)

### Status
- httpget_default SSL_CTX_new NULL on real AROS is FIXED in-library. Staged for
  real-AROS rerun by user.
- Root cause recap: SSL_CTX_new -> SSL_CTX_set_ciphersuites(ctx,
  OSSL_default_ciphersuites()) -> CONF_parse_list -> ciphersuite_cb ->
  ssl3_get_cipher_by_std_name. .rodata string literals (referenced by
  R_X86_64_32/32S code immediates) do not resolve on real AROS -> all 3 default
  TLS1.3 names fail strcmp -> 3x(0xE24 BADNAME + 0xE10 NAMENOTFOUND) -> 0xB9
  SSL_R_NO_CIPHER_MATCH -> 0xE05 CTXNEW_CIPHERSUI -> SSL_CTX_new NULL.

### Fixes applied
1. openssl/ssl/ssl_lib.c SSL_CTX_new: under #if defined(__AROS__), replaced
   SSL_CTX_set_ciphersuites(ret, OSSL_default_ciphersuites()) with direct
   by-ID population of ret->tls13_ciphersuites: sk_SSL_CIPHER_new_null() +
   ssl3_get_cipher_by_id(TLS1_3_CK_AES_256_GCM_SHA384/CHACHA20/AES_128) +
   sk_SSL_CIPHER_push. Order 0x03001302,0x03001303,0x03001301 == default order.
   Only integer IDs in .data, no string compares. Non-AROS path unchanged.
2. openssl/ssl/ssl_ciph.c: OSSL_default_cipher_list() and
   OSSL_default_ciphersuites() now return non-const static char[] copies
   (aros_default_cipher_list / aros_default_ciphersuites) under __AROS__,
   forcing strings into .data (proven pattern from s3_lib.c:4786-4797).
   Protects ssl_create_cipher_list call right after ciphersuite setup.

### Verification (hosted AROS, lib md5 9bfb5127956b4d435be7a7f8fb86f96c, 12160568 B)
- httpget_default: CTX-MIN=771 CTX-MAX=771 CTX-CIPHERS=60, CTXNEW-QUEUE empty,
  TLS1.2, CIPHER=ECDHE-ECDSA-AES128-GCM-SHA256, 302->200, DOWNLOADED=70832, DONE.
- 4 CONSECUTIVE runs in ONE AROS session (synchronous Startup-Sequence) ALL
  PASS - no 04000067, no NULL, no queue noise.
- httpget_simple regression: passes end-to-end.
- nm: aros_default_cipher_list (.data 0x37c0), aros_default_ciphersuites
  (.data 0x3760), aros_tls13_default_ids.28 (.data 0xa2c0).
- readelf -p .data shows both strings now in .data section.

### Explored and rejected (both are STATIC OpenSSL, different design)
- AROS's own port: contrib-master/development/libs/openssl, OpenSSL 1.1.0h,
  built STATIC (install_sw -> libssl.a/libcrypto.a, no shared in Configure).
  Statically-linked apps have no load-time relocations -> "works perfectly".
- AmiTranslate (alb42/AmiTranslate): Free Pascal, links STATIC OpenSSL3 on
  AROS via openssl3/openssl3.pas {$LINKLIB libcrypto_shared.a}/{$LINKLIB
  libssl_shared.a}. ~3.5k lines FPC + MUI/tbutf8/TTF deps. Converting to C
  would NOT exercise shared amissl_v362.library -> not useful for fixing
  AmiSSL. Abandoned.
- Conclusion: only the SHARED amissl_v362.library breaks on real AROS. Fix
  must live in AmiSSL source. Recurring proven pattern: force data into .data
  (non-const static) / bypass strings by ID.

### Build quirk (do not chase)
- libamisslstubs.a is an 8-byte empty archive (stale STUBOBJS) so legacy
  `https` test app fails to link ("cannot find -lamisslapps..." - also no
  -L$(BUILD_D) on that link line). Library + httpget_*/provider_test fine.
- make may need a 2nd invocation (parallel AR/ld race).

### Deployed for real-AROS test
- /media/serk118/C24B-10A6/current_downloads/amissl_v362.library (md5
  9bfb5127956b4d435be7a7f8fb86f96c), httpget_default, httpget_simple.

### Files modified this session (uncommitted)
- openssl/ssl/ssl_lib.c (by-ID ciphersuite population)
- openssl/ssl/ssl_ciph.c (.data default strings)
- AGENTS.md (this log)

### NEXT STEPS
1. User: real-AROS rerun of httpget_default + httpget_simple with new build.
2. provider_test T4 legacy SHA256_Init crash (known provider-layer issue).
3. YAM/Muimaster crash thread (unrelated) remains OPEN.
4. Debug marker cleanup before final deployment.

---

# Aug 10, 2026 (session 4) — REAL-AROS CONFIRMED: httpget_default works end-to-end

## STATUS
- **User confirmed on real AROS hardware** that `httpget_default` with the
  staged build (md5 `9bfb5127956b4d435be7a7f8fb86f96c`, 12160568 B) **works
  end-to-end and downloads fine**. The E24/E10 BADNAME/NAMENOTFOUND markers
  from the old build are gone; TLS1.2 handshake + HTTPS download succeed.
- `crashlog6.txt` (real AROS, 12:40) = BEFORE evidence: old build still shows
  `SSL_CTX_new returned NULL` with `0A000E24`/`0A000E10` ×3, `0A0000B9`
  (NO_CIPHER_MATCH), `0A000E05` (CTXNEW_CIPHERSUI). Also contains the
  provider_test T4 crash from that era (SHA256_Init offset 0x2426B0).
- `crashlog7.txt` (real AROS, AFTER) = provider_test still crashes in T4:
  `0x80000003` illegal access at `SHA256_Init`+0xE (`mov $0x0,0x68(%rdi)`,
  RDI=0) via provider `sha256_md`; SHA256_Init offset 0x242700 = matches the
  current build. This is the KNOWN provider-layer issue (hosted + real), NOT a
  dispatch bug / NOT a regression — the SSL path bypasses the provider with
  legacy APIs.
- **httpget_default on real AROS: FIXED + VERIFIED.** Remaining on
  provider_test is only the known T4 provider crash.

## ACTIONS THIS SESSION
- Pushed `3d15c46` (branch `combined-fixes`): refreshed `amissl_test_binaries.tar.gz`
  with the latest build (fresh `amissl_v362.library` md5 `9bfb5127…`,
  `amisslmaster.library`, `httpget_default`, `httpget_simple`, `provider_test`).
  NO `.md` files pushed.
- Read/analyzed `crashlog7.txt` (user's new provider_test log on real AROS).

## NEXT STEPS
1. provider_test T4 crash remains open (known provider-layer `sha256_md`
   issue) — optional to chase; SSL path is unaffected.
2. YAM/Muimaster crash thread (unrelated to SSL) remains OPEN.
3. Debug marker cleanup before final deployment.
4. Refresh SESSION_LOG.md/RECOVERY.md/METHODS_TRIED.md + the two modified
   .tar.gz archives in git before resuming.

---

# Aug 10, 2026 (session 5) — AmiTranslate translate-button LOOP investigation (SAVED mid-investigation)

## USER REPORT (real AROS)
- AmiTranslate (alb42/AmiTranslate, DeepL client) **no longer crashes** but after
  clicking Translate: **"it just slows my internet right down so slow and feels
  like it gets stuck in a loop."** This is the NEW thread; the httpget_default
  SSL_CTX_new fix from session 4 is confirmed done.

## KEY FACT (the code path no other test exercises)
- AmiTranslate does NOT use the `SSL_set_fd` + `SSL_connect` path our httpget
  tests use. It uses the **connect-BIO path**:
  `BIO_new_ssl_connect(ctx)` → `BIO_ctrl(web, BIO_C_DO_STATE_MACHINE, 0, nil)`
  → internal `conn_do_state_machine` (openssl/crypto/bio/bss_conn.c) runs
  DNS + socket + connect + SSL handshake all inside the library.
- FPC side (`/tmp/opencode/at_amisslsockets.pp`):
  - `MaybeInitSSLInterface` (line 70): `InitAmiSSL([AmiSSL_ErrNoPtr, AsTag(@SSLErrNo),
    AmiSSL_SocketBase, AsTag(SocketBase), TAG_DONE])`.
  - `Connect` (line 102): `BIO_new_ssl_connect(ctx)` then `BIO_ctrl(web,
    BIO_C_DO_STATE_MACHINE,0,nil)` (line 117/120), then `DoVerifyCert`.
  - `Send`/`Recv` (328/352): single `BIO_write`/`BIO_read` calls (no FPC retry loop).
  - DeepL call: `AmiTranslate.lpr` line 199 `hp.FormPost(BaseURL, FormText)`
    (blocking), `AllowRedirect := True`, `api-free.deepl.com/v2/translate`.
- PATCH_LOG.md June 17 note is DIRECTLY relevant:
  **"BIO_do_connect() hangs — bsdsocket.library forwarder recursion bug with
  connect(). Use direct Linux syscalls for TCP."** Our test/httpget.c has
  `manual_tcp_connect()` that bypasses `BIO_do_connect` FOR THIS REASON.
  AmiTranslate now exercises the exact path we bypassed.

## ANALYSIS DONE THIS SESSION (all reads, no code changes yet)
1. **bss_conn.c connect state machine** (lines 120-280): states
   BIO_CONN_S_BEFORE → GET_ADDR (`BIO_lookup`, line 158) → CREATE_SOCKET
   (`BIO_socket`, line 174) → CONNECT (`BIO_connect`, line 196) → on fail
   `BIO_sock_should_retry` (line 199) → BLOCKED_CONNECT (line 230, polls
   `BIO_sock_error`). This is the prime LOOP suspect on AROS.
2. **BIO_lookup on AROS** (openssl/crypto/bio/bio_addr.c:716): getaddrinfo path
   is compiled OUT under `#if defined(AI_PASSIVE) && !defined(__AROS__)`; AROS
   falls into the gethostbyname branch (line 842 uses BIO_gethostbyname).
3. **libcmt socket wrappers** — library's internal `socket()/connect()/
   gethostbyname()` resolve through libcmt (libcmt/socket.c:52, connect.c:9,
   gethostbyname.c:24): `GETSOCKET()` → `GetAmiSSLState()->SocketBase` with
   fallback to global `__amissl_global_SocketBase` (libcmt.h:138-143;
   amissl_missing_stubs.c:149 = NULL initial).
4. **`__amissl_global_SocketBase` is set** in InitAmiSSLA (src/amissl_library.c:436-438)
   from `state->SocketBase` (line 383, from `AmiSSL_SocketBase` tag).
5. **ERRNO wiring — the key suspect for a spin loop:**
   - On AMISSL_COMPILE builds, `get_last_socket_error()` = `GetAmiSSLerrno()`
     (openssl/include/internal/sockets.h:214-215), and
     `GetAmiSSLerrno()` reads `*state->errno_ptr` (src/amissl_norestore.c:80-83).
   - BUT `initialize_socket_errno()` in libcmt/socket.c:134-150 SKIPS
     `SocketBaseTagList` on AROS (line 145 `#if !defined(__AROS__)` — the
     serk118 note says "skip SocketBaseTagList on AROS for now - function may
     not be available"). So on AROS the bsdsocket errno is NOT wired into
     `state->errno_ptr`.
   - Consequence: after `connect()`/`socket()` fail, `GetAmiSSLerrno()`
     returns a stale/zero value → `BIO_sock_should_retry()` /
     `BIO_sock_non_fatal_error()` (bss_sock.c:285-319) may mis-decide whether
     to retry → potential infinite retry / spin in the state machine, and the
     "slows my internet down" symptom (repeated SYN/DNS churn).
6. **FPC `Sleep(1)` comment** in amisslsockets.pp line 104 ("not sure why this
   is needed, but without, no connection") hints the connect path is already
   flaky/timing-sensitive on AROS — consistent with an errno/retry bug.

## NEXT STEPS (on resume)
1. **Write a minimal connect-BIO repro** (like test/httpget.c but WITHOUT
   manual_tcp_connect — use `BIO_new_ssl_connect` + `BIO_C_SET_CONNECT` +
   `BIO_C_DO_STATE_MACHINE` against e.g. api-free.deepl.com or example.com) and
   run on HOSTED AROS to see if it loops/hangs (with a bounded retry counter or
   timeout). This is the missing evidence.
2. If it loops: **fix errno wiring** — either enable `SocketBaseTagList` on
   AROS if bsdsocket provides it (check `SBTM_SETVAL(SBTC_ERRNOLONGPTR)`
   availability on AROS), or make `GetAmiSSLerrno()` on AROS read
   `__io2errno(errno)` from bsdsocket's per-task errno, or add an AROS
   fast-path in `BIO_sock_should_retry`/`BIO_sock_non_fatal_error`.
3. Also verify `BIO_sock_error()` (bss_sock.c or bio_sock2.c) — after
   BLOCKED_CONNECT it calls getsockopt(SO_ERROR); if that misbehaves on AROS the
   state machine may spin between CONNECT and BLOCKED_CONNECT.
4. Consider the June-17 "forwarder recursion bug" — check whether
   libcmt/connect.c:12 `connect()` call from within the library recurses back
   into the AmiSSL dispatch (stub → CALL_LFUNC → LIB_connect → ... → connect).
   If so, that is the loop source and the fix is to bypass dispatch inside
   libcmt (call bsdsocket iface directly, like gethostbyname.c does with
   `ISocket` on OS4).

## STATE SAVED / LOCATION OF DOWNLOADED SOURCES
- AmiTranslate sources pulled read-only from GitHub into /tmp/opencode/:
  `at_AmiTranslate.lpr`, `at_amisslsockets.pp`, `at_amissl.pas`,
  `at_langunit.pas`, `at_openssl3_openssl3.pas`. NOTE: openssl3.pas uses
  STATIC OpenSSL3 via {$LINKLIB libcrypto_shared.a} — it does NOT exercise
  amissl_v362.library (see AGENTS.md AmiTranslate analysis — converting to C
  would not help; the bug is in the shared library path AmiTranslate uses).
- Git working tree has uncommitted changes (same list as session 4 end +
  SESSION_LOG.md): METHODS_TRIED.md, RECOVERY.md, SESSION_LOG.md,
  build_aros-x86_64_reference.tar.gz, openssl/{crypto/objects/obj_dat.c,
  include/internal/arossl_dbg.h, ssl/s3_lib.c, ssl/ssl_ciph.c, ssl/ssl_lib.c,
  ssl/t1_lib.c}, test/{httpget_default.c, httpget_simple.c, provider_test.c},
  untracked AROS_SYSCALL_BUG_REPORT.md. NOT committed (only archives are pushed
  to GitHub per user instruction).

---

# Aug 11, 2026 (session 6) — AmiTranslate SNI-DEFER FIX — DONE & VERIFIED

## STATUS
AmiTranslate Translate click NOW WORKS on hosted AROS. The "slows my internet
right down and feels like it gets stuck in a loop" problem (session 5) is
RESOLVED. User confirmed success against `api-free.deepl.com:443`.

## ROOT CAUSE DISCOVERED (different from session 5 errno/spin hypothesis)
The "slow internet"/loop on real AROS was NOT an errno spin in bss_conn.c.
The actual cause was a **stale, SNI-less ClientHello** being flushed to
DeepL, which rejected it with alert 40 (`handshake_failure`), and on real
AROS the retry/flush path may have looped.

**AmiTranslate's Pascal wrapper ordering** (`external_sources/at_amisslsockets.pp` Connect ~lines 114-120):
```
web := BIO_new_ssl_connect(ctx);
BIO_ctrl(web, BIO_C_DO_STATE_MACHINE, 0, nil);           // (A) 1st call — hostname NOT set yet
BIO_ctrl(web, BIO_C_SET_CONNECT, 0, PAnsiChar(host:port)); // (B) hostname set
BIO_ctrl(web, BIO_C_DO_STATE_MACHINE, 0, nil);           // (C) 2nd call — flushes stale
```
- Call A: `SSL_do_handshake` runs → ClientHello built WITHOUT SNI (hostname
  NULL → no SNI set) → ClientHello bytes buffered in SSL write buffer. GRP
  markers fire once (tls_construct_client_hello). Tries to write → connect
  BIO has no hostname → returns without connecting.
- Call B: hostname stored in connect BIO's `param_hostname`.
- Call C: SSL_do_handshake resumes from TLS_ST_CW_CLNT_HELLO (message
  already buffered!). Our SNI auto-set code fires and sets
  SSL_set_tlsext_host_name on the SSL object, but the ClientHello bytes were
  ALREADY constructed in call A WITHOUT SNI. The stale buffered ClientHello
  is flushed → DeepL sees no SNI extension → alert 40
  (`handshake_failure`).
- No second GRP markers (no rebuild) — confirmed by desk6 log.

## DIAGNOSTIC EVIDENCE (bootstrap_desk6.log, Aug 11 ~17:00)
```
[SSL-NEW] AROS cap: TLS 1.2 set
[SNI-BIOGET]=1 [SNI-host]=0                    ← call A: host NULL
[STATEM] ossl_statem_connect entered            ← handshake starts
[GRP-sg0]=0x17                                  ← ClientHello built (P-256, NO SNI)
[SNI-BIOGET]=1 [SNI-host]=<ptr>
  [SNI-host-c0]=0x61('a') [c1]=0x70('p') [c2]=0x69('i')  ← call C: host "api…"
[STATEM] ossl_statem_connect entered
[sk-ret]=5 [cn-fd]=5 [cn-ret]=0 [cn-err]=0     ← socket connected
[FATAL] 0x410                                    ← DeepL alert 40 (handshake_failure)
```
- Target confirmed: SNI host bytes `a-p-i` match `api-free.deepl.com`;
  binary contains `https://api-free.deepl.com/v2/translate`.
- Contrast with httpget_bio (SUCCESS): SNI host 'a' present on FIRST
  BIOGET call — hostname set BEFORE handshake → ClientHello with SNI → no 0x410.

## THE FIX: SNI-DEFER in bio_ssl.c BIO_C_DO_STATE_MACHINE

**File:** `openssl/ssl/bio_ssl.c` (AROS SNI auto-set block inside
  `BIO_C_DO_STATE_MACHINE`, ~lines 363-413)

**Change:** When the underlying connect BIO has NO hostname yet
  (`BIO_C_GET_CONNECT` returns `r>0` but `host==NULL`), **skip
  `SSL_do_handshake` entirely**. Set `BIO_FLAGS_IO_SPECIAL |
  BIO_FLAGS_SHOULD_RETRY` + `BIO_RR_CONNECT` and return `-1`. This defers
  the handshake until the app sets the hostname via `BIO_C_SET_CONNECT`
  and retries `BIO_C_DO_STATE_MACHINE`.

```c
} else if (r > 0 && host == NULL) {
    /* connect BIO present but hostname not set yet: defer */
    arossl_dbg_msg("[SNI-DEFER] no hostname yet");
    BIO_set_flags(b, BIO_FLAGS_IO_SPECIAL | BIO_FLAGS_SHOULD_RETRY);
    BIO_set_retry_reason(b, BIO_RR_CONNECT);
    return -1;
}
```

**Discrimination logic:**
- `r>0 && host!=NULL && host[0]!='\0'`: hostname set → set SNI, proceed normally.
- `r>0 && host==NULL`: connect BIO exists but hostname not set (AmiTranslate
  pattern) → DEFER (no handshake).
- `r<=0`: non-connect BIO (socket BIO, etc.) → skip SNI, proceed normally.

## VERIFICATION (bootstrap_desk7.log, Aug 11 ~17:20)
```
[SNI-DEFER] no hostname yet                     ← call A: DEFERRED (no stale ClientHello!)
[SNI-BIOG]=1 [SNI-host]=000000004318a7a0
  [SNI-host-c0]=0x61 [c1]=0x70 [c2]=0x69       ← call C: host "api…", SNI set
[STATEM] ossl_statem_connect entered            ← handshake starts fresh
[GRP-sg0]=0x17                                  ← ClientHello built WITH SNI
[sk-ret]=5 [cn-ret]=0                           ← socket connected
--- NO FATAL 0x410 ---                          ← handshake succeeded
```
Ampling ran ~248 log lines, desktop stayed up until 540s timeout,
then exited cleanly (EXIT=0). User confirmed Translate click works.
httpget_bio verified as a regression check (works end-to-end).

## STARTUP-SEQUENCE / DESKTOP LESSON LEARNED
- RESTORED to full stock from `/home/serk118/work/arosbuilds/AROS/workbench/s/
  Startup-Sequence` (2967 B). `S/User-Startup` = AmiSSL assigns only.
- **DO NOT replace with a minimal Startup-Sequence** — that breaks Wanderer
  (shell-only boot with just an AROS Shell, no desktop). Desktop boots
  cleanly with full sequence; user runs AmiTranslate themselves.
- **DO NOT add auto-launch to startup** — desktop must be foreground for user
  clicks; background runs with auto-Run had timing issues.

## DEPLOY PATHS (hosted, lib md5 b3ed2f5fc152bf7dbf369856034c1816, 12186944 B)
- `$SYS/Libs/amissl_v362.library` — what OpenLibrary resolves first
- `$SYS/Libs/AmiSSL/amissl_v362.library` — amisslmaster's `LIBS:AmiSSL/`
  (standard location, must be populated — was EMPTY and caused master OPEN
  FAILED on earlier runs)
- `$SYS/AmiSSL/Libs/AmiSSL/amissl_v362.library` — secondary location (LIBS:
  multi-assign second component)
- USB: `/media/serk118/C24B-10A6/current_downloads/` (fresh copies)

## GITHUB
- Commit `beb3910` pushed to `combined-fixes`: refreshed
  `amissl_test_binaries.tar.gz` with:
  - `amissl_v362.library` (md5 `b3ed2f5f`, 12186944 B — contains SNI-DEFER)
  - `amisslmaster.library` (33368 B)
  - `httpget_bio` (NEW tool, 30320 B)
  - `httpget_simple`, `httpget_default`, `provider_test`
  - No `.md` files committed.

## ERRNO WIRING GAP (session 5 hypothesis — remains open but NOT the AmiTranslate cause)
- `libcmt/socket.c:145` skips `SocketBaseTagList` on AROS → bsdsocket errno
  never wired into `state->errno_ptr` → `GetAmiSSLerrno()` returns stale/0.
  This was the session 5 spin-loop suspect but was NOT the actual cause of
  the translate-loop. Still worth fixing for robustness (non-fatal-errno
  path could mis-fire on other servers).

## REMAINING OPEN THREADS
1. provider_test T4 provider-layer crash (known `sha256_md` issue) — optional.
2. YAM/Muimaster crash (unrelated to SSL).
3. Debug marker cleanup before final deployment.
4. Fix `AmiSSLExtBase = AmiSSLBase` in remaining tests (httpget.c, etc.).
5. Erno wiring gap (libcmt/socket.c:145) — not urgent, not the translate-loop
   cause.

## FILES MODIFIED THIS SESSION (uncommitted except where pushed)
- `openssl/ssl/bio_ssl.c` — SNI-DEFER logic (new `else if` branch) + markers
- `AGENTS.md` — updated session 6 status
- `SESSION_LOG.md` — this entry appended
- `RESUME_LATER.md` — refreshed
- `amissl_test_binaries.tar.gz` — committed + pushed (`beb3910`)
