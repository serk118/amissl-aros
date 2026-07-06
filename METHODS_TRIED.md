# Methods Tried — AmiSSL AROS x86_64

Track approaches that were tried and their results to avoid repeating dead ends.

---

## Library Fails to Open (OpenLibrary returns NULL)

| # | Date | Method | Result | Notes |
|---|------|--------|--------|-------|
| 1 | June 8 | OSABI patch via dd (byte 7=0x0F, byte 8=0x0B) | ✅ Fixed | dd was unreliable; switched to python3 |
| 2 | June 8 | Added weak SocketBase = NULL stub | ✅ Fixed unresolved symbol | Removed later (July 5) — AROS SDK provides it |
| 3 | June 8 | CRYPTO_THREAD_lock_new returns real lock | ✅ Advanced past init | Moved from crash to next issue |
| 4 | June 15 | context_init() initializes ctx->lock | ✅ Fixed NULL lock crash | |
| 5 | June 16 | ex_data lock: changed shared→exclusive semaphore | ❌ Still hung | Root cause was ssl_cert_new missing |
| 6 | June 17 | ssl_cert_new() in SSL_CTX_new | ✅ SSL_new works | |
| 7 | July 5 | Moved OSSL_PROVIDER_load to init.c | PENDING on real AROS | Fixes SSL_CTX_new on real AROS |

## BIO_do_connect hangs (Hosted AROS)

| # | Date | Method | Result | Notes |
|---|------|--------|--------|-------|
| 1 | June 17 | Direct Linux syscalls (rawdl, rawhttp_test) | ✅ Works | Bypasses bsdsocket forwarder entirely |
| 2 | July 5 | bsdsocket forwarder sockaddr fix (sa_len vs sa_family) | ❌ Not yet built | Need to rebuild bsdsocket.library |

## High PLT32 Relocation Count

| # | Date | Method | Result | Notes |
|---|------|--------|--------|-------|
| 1 | June 8 | Pre-applied PC32 with +4 correction (relocate.c) | ❌ Kernel overwrites | Kernel applies its own formula at runtime |
| 2 | June 8 | Skip PLT32-to-PC32 conversion | Won't fix | AROS kernel handles PLT32 correctly |
| 3 | June 17 | 12546 PLT32 relocs (accept as-is) | ✅ Works | AROS kernel handles them |

## Library Open Fails Specifically on Real AROS (but works on Hosted)

| # | Date | Method | Result | Notes |
|---|------|--------|--------|-------|
| 1 | July 6 | Check for undefined symbols | Awaiting test | nm -u shows no undefs on hosted build |
| 2 | July 6 | ROMTag section check | ✅ ROMTag in .text | Verified at .text+0x560 |

## Things NOT to try again

1. **PC32 relocation fix in the binary** — AROS kernel overwrites with its own (buggy) formula at runtime. The fix would need to be in the AROS kernel ELF loader (`rom/dos/internalloadseg_elf.c`), not in the binary.
2. **Skip PLT32 relocations** — They work fine on both hosted and real AROS. No issue.
3. **ld -r merge** — Abandoned in favor of direct link (too many symbols, linker handles it better without merge).
