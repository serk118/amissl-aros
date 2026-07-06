AmiSSL 5.27 for AROS x86_64 — Installation Guide
=================================================

Build date: June 15, 2026
OpenSSL 3.6.2 based

== Files ==

  amissl_v362.library     (13 MB) — Main AmiSSL library
  amisslmaster.library    (24 KB) — AmiSSL Master library

== Installation ==

Copy both files to your AROS Libs directory:

  Copy amissl_v362.library   SYS:Libs/
  Copy amisslmaster.library  SYS:Libs/

== Usage ==

Programs that use AmiSSL should work automatically after the
libraries are installed. The master library (amisslmaster.library)
is opened by applications first to obtain the AmiSSL version,
then amissl_v362.library is opened for SSL/TLS operations.

If an application needs version 5 of the master library:

  OpenLibrary("amisslmaster.library", 5)

If an application needs version 362 of the main library:

  OpenLibrary("amissl_v362.library", 0)

== Test ==

From an AROS Shell:

  Execute SYS:tests/amissl_simple_test   (basic SSL_CTX test)
  Execute SYS:tests/httpget https://example.com  (HTTP test)

== What Works ==

  - Library opens and initializes
  - SSL_CTX_new() creates valid contexts
  - Ciphers: AES-128-CBC, AES-256-CBC, AES-GCM, CHACHA20,
    Camellia, SEED, ARIA, DES, 3DES, RC4
  - Digests: MD5, SHA1, SHA256, SHA384, SHA512, etc.
  - TLS_client_method(), TLS_server_method()
  - All legacy EVP_* cipher/digest functions

== Known Limitations ==

  - GOST, MAGMA, KUZNYECHIK ciphers are disabled (their
    lookup functions hang on AROS x86_64)
  - Provider-based functions (EVP_CIPHER_fetch,
    EVP_MD_fetch, OSSL_PROVIDER_load) are unavailable
  - ECDSA, DSA, DH key exchange are disabled (their
    lookup functions hang on AROS x86_64)
  - Certificate verification may be limited
  - InitAmiSSLA() returns 0 (non-fatal)

== Build Notes ==

The library was built with:
  - -mcmodel=large to eliminate PLT32 relocations
  - Integrated AROS semaphore locking
  - Legacy OBJ_NAME cipher/digest database
  - OPENSSL_RAND_SEED_NONE for entropy

Source tree: amissl-5.27/
Build command:
  export PATH="/path/to/toolchain-core-x86_64:$PATH"
  export SYSROOT="--sysroot=/path/to/AROS/Development"
  make OS=aros-x86_64 CROSS_PREFIX=x86_64-aros- DEBUG=

== Contact ==

AmiSSL Project: https://github.com/jens-maus/amissl
AROS: https://aros.sourceforge.io/
