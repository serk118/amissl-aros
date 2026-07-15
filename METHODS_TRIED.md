# Methods Tried — SSL_connect Handshake Failure on AROS x86_64

## Problem Evolution
1. Original: SSL_R_NO_SUITABLE_KEY_SHARE (ctx->ext.supportedgroups NULL)
2. After group-list fix: SSL_R_UNSUPPORTED_SSL_VERSION (server rejects)
3. After LCG RNG: HANG (curve25519.c arithmetic still hangs)
4. After static key bypass: WORKS (no hang, server rejects)
5. Real AROS test: CRASH (needs EVP_PKEY but EVP_PKEY path hangs)

## Approaches Attempted

### 1. ctx->ext.supportedgroups population
- Added SSL_CTX_set1_groups_list call → ✅ groups populated
- **File:** t1_lib.c:440-445

### 2. EVP_PKEY provider path
- EVP_PKEY_CTX_new_from_name → ❌ HANG (AUTOINIT stubs)
- EVP_PKEY_new_raw_private_key → ❌ HANG (calls EVP_PKEY_CTX_new_from_name)
- **Status:** Avoid entirely on AROS

### 3. EVP_PKEY legacy path
- EVP_PKEY_CTX_new_id + EVP_PKEY_keygen → ❌ HANG (RAND_priv_bytes_ex → DRBG)
- EVP_PKEY_CTX_new_id + EVP_PKEY_keygen (with LCG) → ❌ HANG on hosted, ❓ sent to real AROS
- **Status:** On hosted, even with LCG, the keygen still hangs. Reason unknown — RAND_priv_bytes_ex with LCG should use fast-path but doesn't seem to.

### 4. Manual key creation (internal APIs)
- ossl_ecx_key_op(KEY_OP_PRIVATE, RAND_bytes) → ❌ HANG
- ossl_ecx_key_op(KEY_OP_KEYGEN) → ❌ HANG
- ossl_ecx_key_new + ossl_ecx_key_allocate_privkey + memcpy + ossl_ecx_public_from_private → ❌ HANG
- EC_KEY_new_by_curve_name + EC_KEY_generate_key → ❌ HANG
- RAND_bytes + BN_bin2bn + EC_POINT_mul → ❌ HANG
- **Status:** Any curve25519.c function call hangs

### 5. curve25519.c specific debug
- x25519_fe64_eligible() → missing symbol, added stub returning 0 → still hangs
- Generic fe51 path → hangs
- Generic fe (int32) path → hangs
- **Root cause:** Both 64-bit and 32-bit arithmetic paths in curve25519.c hang

### 6. Inline X25519 (standalone)
- Montgomery ladder with __int128 → ❌ HANG
- Montgomery ladder with uint64_t schoolbook (no __int128) → ❌ HANG
- Even basic uint64_t multiply+add across 5 limbs hangs
- **Root cause:** Not curve25519.c specific — even our own minimal uint64 arithmetic hangs

### 7. key_share_key NULL approach
- RAND_bytes as pubkey + key_share_key = NULL → ✅ No hang on hosted
- Server rejects with internal_error (invalid pubkey)
- On real AROS server might accept → crash in ECDHE (no private key)
- **Status:** Working on hosted for testing, not viable for production

### 8. Final attempt (current, on USB)
- EVP_PKEY_CTX_new_id(EVP_PKEY_X25519) + EVP_PKEY_keygen + LCG
- Uses legacy EVP path with LCG for RNG
- Works on standard platforms
- On hosted: likely hangs (same reason as before)
- On real AROS: ❓ Awaiting user test
- **File:** extensions_clnt.c:662-696

### Additional fixes applied along the way
- x25519_fe64_eligible stub in curve25519.c (inside #if X25519_ASM — not compiled without asm)
- #include <crypto/ecx.h> in extensions_clnt.c
- #include <openssl/ec.h> in s3_lib.c (later reverted)
- GROUP list simplified to "P-256:P-384:P-521:X25519:X448"

## What Works
- RAND_bytes with LCG ✅
- RAND_priv_bytes with LCG ✅
- TCP connect + send/recv ✅
- ClientHello construction and sending ✅
- Server response reception ✅
- test_output.txt capture ✅
- Build system ✅

## What Doesn't Work
- Any curve25519.c function call ❌
- EC_POINT_mul ❌
- EC_KEY_generate_key ❌
- EVP_PKEY_keygen (legacy or provider) on hosted AROS ❌
- Even our own inline uint64-only X25519 ❌

## Key Unresolved Question
Why do uint64_t arithmetic operations hang in deadwood's AROS environment,
but RAND_bytes LCG (which also uses uint64_t multiplication) works fine?

## July 15 Session — BIO write path investigation

### Root cause of max_send_fragment=0
- After SSL_clear, sc->max_send_fragment becomes 0
- Suspect: memset(&sc->s3, 0, sizeof(sc->s3)) in ssl3_clear (called via
  tls1_new → ssl3_new → tls1_clear → ssl3_clear during SSL_new) runs
  AFTER ossl_ssl_connection_new_int sets it at line 824
- **Fix:** ssl_get_max_send_fragment returns SSL3_RT_MAX_PLAIN_LENGTH when val==0

### Root cause of record version 0x10000
- ossl_ssl_connection_reset (called by SSL_clear) sets:
  `sc->version = s->method->version` = TLS_ANY_VERSION = 0x10000
- But tls1_clear would have set it to TLS1_3_VERSION
- This version leaks into the TLS record header → server drops connection
- **Fix:** Same logic as tls1_clear (use TLS_MAX_VERSION_INTERNAL)

### Root cause of recv() hang
- ssl_init_wbio_buffer pushes BIO_f_buffer on wbio
- Handshake writes go to the buffer but are NEVER flushed
- State machine transitions to MSG_FLOW_READING and calls recv()
- recv() blocks forever because server never received the ClientHello
- **Fix:** Skip ssl_init_wbio_buffer on AROS; use socket BIO directly

### BIO_write on socket BIO still hangs (with buffer BIO skipped)
- send() works standalone but BIO_write → send() inside SSL_connect hangs
- Tested: raw send(4, buf, 4, 0) returns 4 successfully
- Tested: BIO_write(wbio, buf, 4) also works standalone
- But inside tls_retry_write_records, BIO_write(rl->bio, buf, len) hangs
- rl->bio is the socket BIO
- Possible causes: invalid write buffer (TLS_BUFFER_get_left returns
  garbage), BIO chain corruption, or AROS-specific socket issue
- **Status:** UNRESOLVED — needs further investigation
