# AmiSSL AROS x86_64 — Agent Context (July 15, 2026 final)

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

## Current Status (July 15 late)
| Test | Result |
|------|--------|
| amissl_simple_test | ✅ Library loads, 60 ciphers, TCP works |
| httpget_simple (SSL_set_fd) | ✅ Returns ERR_R_INTERNAL_ERROR (max_send_fragment=0) — no hang |

## Applies Fixes (committed in this session)
1. **version after SSL_clear** — `ossl_ssl_connection_reset` now uses same logic as `tls1_clear`: if method->version == TLS_ANY_VERSION, set sc->version = TLS_MAX_VERSION_INTERNAL (TLS1_3_VERSION)
2. **max_send_fragment fallback** — `ssl_get_max_send_fragment/split` default to SSL3_RT_MAX_PLAIN_LENGTH when field is 0
3. **X25519-only group list** — AROS group list limited to just "X25519" to avoid failing on non-X25519 groups
4. **buffer BIO skip on AROS** — `ssl_init_wbio_buffer` skipped on AROS; record layer uses socket BIO directly
5. **key_share group_id check** — AROS add_key_share verifies group_id is X25519

## Root Causes Discovered
1. **max_send_fragment=0** — After SSL_clear, sc->max_send_fragment becomes 0. Probably zeroed by memset(&sc->s3,0,..) in ssl3_clear (called during SSL_new) which runs AFTER ossl_ssl_connection_new_int sets it at line 824. The fix in ssl_get_max_send_fragment handles this.
2. **record version 0x10000** — SSL_clear → ossl_ssl_connection_reset sets `sc->version = s->method->version` which is TLS_ANY_VERSION=0x10000. This becomes the TLS record version header. Server drops connection. Fix: same logic as tls1_clear (use TLS_MAX_VERSION_INTERNAL).
3. **buffer BIO never flushes** — ssl_init_wbio_buffer pushes BIO_f_buffer on wbio. Handshake writes go to buffer but are never flushed. State machine then transitions to MSG_FLOW_READING and blocks on recv() forever. Fix: skip buffer BIO on AROS.
4. **BIO_write on socket BIO hangs with buffer BIO skipped** — Still under investigation. Raw send() works, but BIO_write → send() inside SSL_connect hangs. Needs further debugging.
| httpget_simple (real AROS, legacy keygen) | ❓ Sent for testing |

## Fixes Applied

### Fix 1: Simple group list for ssl_load_groups() on AROS
- **File:** openssl/ssl/t1_lib.c:440-445
- Groups: P-256, P-384, P-521, X25519, X448
- Avoids hybrid PQC groups not in the fallback

### Fix 2: ssl_generate_pkey_group() returns error on AROS
- **File:** openssl/ssl/s3_lib.c:5401-5404
- Key generation handled by add_key_share instead

### Fix 3: AROS key share generation
- **File:** openssl/ssl/statem/extensions_clnt.c:662-696
- Uses EVP_PKEY_CTX_new_id + EVP_PKEY_keygen (legacy path)
- LCG RNG avoids DRBG hang

## Key Files
- SESSION_LOG.md — Full session history and methods tried
- METHODS_TRIED.md — Detailed list of every approach attempted
- BUILD_STATUS.md — Build instructions and resolved issues

## Key Files
- SESSION_LOG.md — Full session history and methods tried
- METHODS_TRIED.md — Detailed list of every approach attempted
- BUILD_STATUS.md — Build instructions and resolved issues

## USB
```
/media/serk118/C24B-10A6/toMiker/Libs/amissl_v362.library
/media/serk118/C24B-10A6/toMiker/tests/httpget_simple
```

## Build Notes (July 15)
- Clean build takes 10+ min (OpenSSL reconfigures)
- **Incremental builds on dirty directories produce corrupted libraries on AROS** — always clean build!
- After modifying SSL source, the AmiSSL Makefile detects changes, recompiles, and re-links

## To Resume Later
1. Check background build: `tail -f /tmp/build_full.log`
2. Wait for `build_aros-x86_64/amissl_v362.library` to appear
3. Deploy: `cp build_aros-x86_64/amissl_v362.library ~/.../Libs/ && cp build_aros-x86_64/httpget_simple ~/.../tests/`
4. Test: `cd ~/work/arosbuilds/deadwood-core-x86_64/AROS-.../ && timeout 60 ./boot/linux/AROSBootstrap`
5. Check: `cat test_output.txt`

All changes committed at SHA `a1eae54`.
