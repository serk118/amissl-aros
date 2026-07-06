# AmiSSL v5.27 AROS x86_64 — Resume Later

Last worked: July 5, 2026

## Current Status
- **amissl_simple_test** ✅ passes on hosted AROS (all checks)
- **amissl_simple_test** ✅ passes on real AROS (1 recoverable guru, exits clean)
- **httpget** 🟡 SSL_CTX_new fails on real AROS with CTR-DRBG error (provider not loaded)
- **httpget** 🟡 hangs at BIO_do_connect on hosted AROS (bsdsocket forwarder bug)

## Last Fix Applied
Added `OSSL_PROVIDER_load(NULL, "default")` in `init.c:ossl_init_base()`. Previously the provider was loaded in `InitAmiSSLA()` but that caused hangs on hosted AROS. The provider needs to be loaded BEFORE `context_init()` disables fallback provider loading.

## Next Steps (Real AROS Testing)
1. Test `amissl_simple_test` with the latest build (should pass with 1 guru)
2. Test `httpget https://example.com/` — the provider fix should make SSL_CTX_new work
3. If httpget works past SSL init, BIO_do_connect should connect on real AROS (real bsdsocket)

## Next Steps (Hosted AROS)
1. Fix bsdsocket.library forwarder's connect() bug (sockaddr conversion)
2. Fix SSL_do_handshake hang in write_state_machine

## USB Files
`/media/serk118/C24B-10A6/toMiker/` — latest build
