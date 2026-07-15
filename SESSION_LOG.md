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
export SYSROOT="--sysroot=/home/serk118/work/arosbuilds/core-linux-x86_64-d/bin/linux-x86_64/AROS/Development"
make OS=aros-x86_64 CROSS_PREFIX=x86_64-aros- DEBUG=
```
