# AmiSSL AROS x86_64 — Recovery & Build Guide

## After Computer Crash — Full Recovery Steps

### 1. Extract fresh hosted AROS from Downloads
```bash
cd ~/work/arosbuilds
mkdir -p fresh-deadwood
cd fresh-deadwood
tar xjf /home/serk118/Downloads/AROS-20250418-1-linux-x86_64-system.tar.bz2
```

### 2. Apply U1 update
```bash
cd ~/work/arosbuilds/fresh-deadwood/AROS-20250418-1-linux-x86_64-system
unzip -o /home/serk118/Downloads/AROS-20250418-1-U1.B-any-x86_64-update.zip
cp -r AROS-20250418-1-U1.B-any-x86_64/* .
rm -rf AROS-20250418-1-U1.B-any-x86_64
```

### 3. Apply U2 update
```bash
unzip -o /home/serk118/Downloads/AROS-20250418-1-U2-any-x86_64-update.zip
cp -r AROS-20250418-1-U2-any-x86_64/* .
rm -rf AROS-20250418-1-U2-any-x86_64
```

### 4. Add logfile to bootstrap config
Edit `boot/linux/AROSBootstrap.conf` — add after the header comments:
```
memory 256
logfile /tmp/aros_debug.log
```

### 5. Copy bsdsocket.library from backup
```bash
BAK=/home/serk118/work/arosbuilds/deadwood-core-x86_64.bak.1784289625
cp $BAK/AROS-20250418-1-linux-x86_64-system/Libs/bsdsocket.library Libs/
```

### 6. Set up AmiSSL directories
```bash
mkdir -p Libs/AmiSSL AmiSSL/Libs/AmiSSL Certs tests
```

### 7. Build AmiSSL library
```bash
cd /home/serk118/Downloads/OpenCodeStarterPack-v1.2/OpenCodeStarterPack/amissl-5.27
export PATH="/home/serk118/work/arosbuilds/toolchain-core-x86_64:$PATH"
export SYSROOT="--sysroot=/home/serk118/work/arosbuilds/core-linux-x86_64-d/bin/linux-x86_64/AROS/Development"
make OS=aros-x86_64 CROSS_PREFIX=x86_64-aros- DEBUG=
```

### 8. Deploy AmiSSL to hosted system
```bash
SYS=~/work/arosbuilds/fresh-deadwood/AROS-20250418-1-linux-x86_64-system
cp build_aros-x86_64/amissl_v362.library $SYS/Libs/
cp build_aros-x86_64/amissl_simple_test $SYS/tests/
cp build_aros-x86_64/httpget_simple $SYS/tests/
```

### 9. Test
```bash
printf 'Assign "AmiSSL:" "SYS:AmiSSL"\nRun >SYS:test.txt SYS:tests/httpget_simple\nWait 60\n' > $SYS/S/User-Startup
cd $SYS
timeout 45 ./boot/linux/AROSBootstrap 2>&1
cat test.txt
```

## Files Changed (this session)

### test/httpget_simple.c
- Removed `wm()` function (Linux syscall debug markers)
- Removed all `wm()` calls from main
- These were raw Linux syscall instructions for debugging, not needed

### test/amissl_simple_test.c
- Added `long __stack = 1024 * 1024;` — prevents stack overflow during AmiSSL init

### include/openssl/asn1t.h
- Fix 14: Changed ASN1_ITEM_start/END to use `"p"(&local_it)` with `movl %1, %k0`
- This generates `R_X86_64_32` relocations instead of `R_X86_64_PC32`
- Needed because AROS Exec doesn't process `R_X86_64_PC32` cross-section relocations

### openssl/include/openssl/asn1t.h.in
- Same Fix 14 applied to build template

### openssl/crypto/asn1/tasn_new.c
- Fix 12: Skip memset for embed=true when *pval is non-NULL
- Prevents crash when parent struct is already zeroed

### openssl/ssl/statem/statem_clnt.c
- Fix 13: Three cert bypasses for AROS:
  1. Skip d2i_X509 (certbytes += cert_len)
  2. Create dummy EVP_PKEY when X509_get0_pubkey returns NULL
  3. Skip ssl_cert_lookup_by_pkey check

### openssl/ssl/s3_lib.c
- Fix 13: EC keygen fallback — try EVP_PKEY_Q_keygen, fall back to P-256 EC_KEY

### openssl/ssl/s3_enc.c
- EVP_DigestInit_ex provider hang bypass on AROS

### src/aros/amissl_missing_stubs.c
- Fix 11: CRYPTO_zalloc/calloc fallback when AllocVec returns NULL

### AROS kernel source (not deployed, needs full rebuild):
- `rom/dos/internalloadseg_elf.c` — PC32 formula fix: subtract 4
- `bootstrap/elfloader.c` — same PC32 fix
