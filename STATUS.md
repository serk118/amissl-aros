# AmiSSL v5.27 AROS x86_64 — Current Status

Last updated: July 13, 2026 (late)

## Build
```sh
export PATH="/home/serk118/work/arosbuilds/toolchain-core-x86_64:$PATH"
export SYSROOT="--sysroot=/home/serk118/work/arosbuilds/core-linux-x86_64-d/bin/linux-x86_64/AROS/Development"
make OS=aros-x86_64 CROSS_PREFIX=x86_64-aros- DEBUG=
```

## What Works ✅
- Library loads and initializes (InitAmiSSLA)
- SSL_CTX_new works (60 ciphers, groups populated, sigalgs populated)
- SSL_new works
- DNS resolution via gethostbyname
- TCP connect via bsdsocket macros
- LCG RNG (bypasses DRBG entropy hang)
- Raw send/recv work (send=37, recv=255)
- Clean startup/shutdown
- Hardcoded group fallback (P-256, P-384, P-521, X25519, X448)
- Hardcoded sigalg fallback (ecdsa_secp256r1_sha256, rsa_pkcs1_sha256)
- EVP_add_digest/EVP_add_cipher legacy registration
- ssl_set_sig_mask finds sigalgs (no longer disables all auth types)
- **ClientHello IS SENT** (handshake reaches server)

## What Fails ❌
- **SSL_connect** → `SSL_R_SSL_HANDSHAKE_FAILURE` (reason 101) — server rejects
- With TLS 1.2 forced: `SSL_R_UNSUPPORTED_SSL_VERSION` (reason 259)

## Root Cause Analysis

### Primary Issue (FIXED): SSL_CTX_new was a stub
AmiSSL's `SSL_CTX_new` never called `ssl_load_groups`, `ssl_load_sigalgs`, or `ssl_setup_sigalgs`. `ctx->tls12_sigalgs_len` stayed 0, causing `ssl_set_sig_mask` to disable all auth types, causing `ssl_cipher_disabled` to block all ciphers, causing `SSL_R_NO_CIPHERS_AVAILABLE`.

### Remaining Issue: Server rejects ClientHello
The handshake now gets to the network, but Cloudflare at example.com rejects the ClientHello. Likely causes:
1. Key share extension failure (EC key generation needs provider)
2. Cipher/group mismatch between what we send and what the server expects
3. TLS 1.3 negotiation fails due to missing provider capabilities

## Source Files Modified
- `openssl/ssl/ssl_lib.c` — SSL_CTX_new calls ssl_load_groups/sigalgs/setup_sigalgs
- `openssl/ssl/t1_lib.c` — AROS guards for provider calls
- `test/httpget_simple.c` — EVP_add calls, cipher list, version debug

## Critical Note
When running `AROSBootstrap`, do NOT use `2>/dev/null` — it hangs. Use `2>&1` or no redirect.
