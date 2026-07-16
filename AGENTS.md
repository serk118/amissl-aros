# AmiSSL AROS x86_64 — Agent Context (July 16, 2026 end)

## Build & Deploy
```bash
export PATH="/home/serk118/work/arosbuilds/toolchain-core-x86_64:$PATH"
export SYSROOT="--sysroot=/home/serk118/work/arosbuilds/core-linux-x86_64-d/bin/linux-x86_64/AROS/Development"
make OS=aros-x86_64 CROSS_PREFIX=x86_64-aros- DEBUG=

# Deploy to deadwood's hosted AROS:
cp build_aros-x86_64/amissl_v362.library ~/work/arosbuilds/deadwood-core-x86_64/AROS-20250418-1-linux-x86_64-system/Libs/
cp build_aros-x86_64/httpget_simple ~/work/arosbuilds/deadwood-core-x86_64/AROS-20250418-1-linux-x86_64-system/tests/

# Deploy to USB for real AROS:
cp build_aros-x86_64/amissl_v362.library /media/serk118/C24B-10A6/toMiker/Libs/
cp build_aros-x86_64/httpget_simple /media/serk118/C24B-10A6/toMiker/tests/
```

## Test on hosted AROS
```bash
printf 'Assign "AmiSSL:" "SYS:AmiSSL"\nRun >SYS:test_output.txt SYS:tests/httpget_simple\nWait 180\n' > ~/work/arosbuilds/deadwood-core-x86_64/AROS-20250418-1-linux-x86_64-system/S/Startup-Sequence
cd ~/work/arosbuilds/deadwood-core-x86_64/AROS-20250418-1-linux-x86_64-system/
timeout 120 ./boot/linux/AROSBootstrap 2>&1
cat test_output.txt
```

## Current Status (July 16 end)
| Test | Result |
|------|--------|
| HTTP connect + raw send | ✅ Works |
| SSL_connect (TLS 1.2) | ❌ `SSL_R_UNKNOWN_CIPHER_RETURNED` (248) — Google sends ServerHello but picks cipher we don't recognize |
| SSL_connect (TLS 1.3) | ❌ `SSL_R_UNSUPPORTED_SSL_VERSION` (259) — `ssl_generate_session_id` rejects `s->version` (probably 0) |

## Fixes Applied (this session)

### Fix 4: ssl3_finish_mac bypass on AROS
- **File:** openssl/ssl/s3_enc.c:249-254
- `BIO_write` to memory BIO hangs on AROS (provider/mem issue). Bypassed with `#if defined(__AROS__)` that skips handshake hash accumulation.

### Fix 5: TLS 1.3 → TLS 1.2 record version mapping
- **File:** openssl/ssl/record/rec_layer_s3.c:1483-1491
- `ssl_set_record_protocol_version` maps `TLS1_3_VERSION` to `TLS1_2_VERSION` for record layer (RFC 8446).

### Fix 6: X25519-only key share with full group list
- **File:** openssl/ssl/statem/extensions_clnt.c:660-714
- AROS `add_key_share` only generates key for X25519 (0x001D); non-X25519 groups are silently skipped.
- Full group list restored in `t1_lib.c` for proper cipher suite negotiation.

### Fix 7: SNI added to test
- **File:** test/httpget_simple.c:69
- Added `SSL_set_tlsext_host_name(ssl, "google.com")` — Google requires SNI.

## Root Causes Discovered (July 16)
1. **ssl3_finish_mac → BIO_write to memory BIO hangs** — The `handshake_dgst` memory BIO write (`BIO_write(s->s3.handshake_buffer, ...)`) hangs on AROS. Suspect underlying malloc/OPENSSL_zalloc issue.
2. **Key share group mismatch** — AROS `add_key_share` always generated X25519 key but wrote whatever `group_id` was passed. First group in list (P-256, group 23) got an X25519 32-byte key → server sees malformed key_share.
3. **`ssl_set_record_protocol_version` never called for TLS path** — Only called inside DTLS branch of `ssl_set_client_hello_version`. Record layer stays at `TLS_ANY_VERSION`.
4. **rl->version = 0x10000 (TLS_ANY_VERSION)** — Record validation accepts any major-version-3 record, but the version never gets updated to the negotiated value.

## Remaining Issues
1. **TLS 1.3: `ssl_generate_session_id` fails with `UNSUPPORTED_SSL_VERSION`** — `s->version` is probably 0 when `ssl_get_new_session(s, 1)` is called during ServerHello processing in `extensions.c:1004`. Root cause unknown.
2. **TLS 1.2: Google picks cipher we don't recognize** — `ssl_get_cipher_by_char` returns NULL for the cipher Google selected. Possibly because Google chose a TLS 1.3 cipher despite our TLS 1.2 max.
3. **`ssl3_digest_cached_records` may also hang** — Calls `EVP_DigestInit_ex`/`EVP_DigestUpdate` through provider layer, same issue as `ssl3_finish_mac`.

## Build Notes
- Clean build takes 10+ min (OpenSSL reconfigures)
- **Incremental builds on dirty directories produce corrupted libraries on AROS** — always clean build! (`make clean` first)
- After modifying SSL source, the Makefile detects changes and recompiles incrementally.
- Incremental build of just the modified SSL files is fast (~30s for a few .c files).

## To Resume
1. Build: `export PATH="..." && export SYSROOT="..." && make OS=aros-x86_64 CROSS_PREFIX=x86_64-aros- DEBUG=`
2. If OpenSSL build fails (Makefile out of date), run `make` again
3. Deploy: `cp build_aros-x86_64/amissl_v362.library ~/.../Libs/ && cp build_aros-x86_64/httpget_simple ~/.../tests/`
4. Test: `cd ~/work/arosbuilds/deadwood-core-x86_64/AROS-.../ && timeout 60 ./boot/linux/AROSBootstrap`
5. Check: `cat test_output.txt`

## Next Session Priority
1. **Fix `s->version` being 0 in `ssl_generate_session_id`** — Investigate why version is not set when `ssl_get_new_session(s, 1)` is called from `extensions.c:1004` during ServerHello processing.
2. **Fix `ssl3_digest_cached_records`** — May also hang via `EVP_DigestInit_ex`/`EVP_DigestUpdate` on AROS (same provider issue as `ssl3_finish_mac`). May need similar `#if defined(__AROS__)` bypass.
3. **Fix TLS 1.2 cipher mismatch** — Google may be picking TLS 1.3 cipher suites because we include them in the ClientHello even with TLS 1.2 max. Filter them out or use explicit TLS 1.2 method.

All changes committed at SHA `9aa635a`.
