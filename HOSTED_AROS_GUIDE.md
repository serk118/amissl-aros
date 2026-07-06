# Hosted AROS Testing Guide

## Cross-Compiler

```
PATH="/home/serk118/work/arosbuilds/toolchain-core-x86_64:$PATH"
SYSROOT="--sysroot=/home/serk118/work/arosbuilds/core-linux-x86_64-d/bin/linux-x86_64/AROS/Development"
```

## Build

```sh
export PATH="/home/serk118/work/arosbuilds/toolchain-core-x86_64:$PATH"
export SYSROOT="--sysroot=/home/serk118/work/arosbuilds/core-linux-x86_64-d/bin/linux-x86_64/AROS/Development"
make OS=aros-x86_64 CROSS_PREFIX=x86_64-aros- DEBUG=
```

## Deploy to Hosted AROS

```sh
cp build_aros-x86_64/amissl_v362.library ~/work/arosbuilds/core-linux-x86_64-d/bin/linux-x86_64/AROS/Libs/
for f in amissl_simple_test amissl_v362_test amisslmaster_test simple_bsd tcp_test run_all_tests httpget; do
  cp build_aros-x86_64/$f ~/work/arosbuilds/core-linux-x86_64-d/bin/linux-x86_64/AROS/tests/$f
done
```

## Run Test (Basic)

```sh
printf 'Run >SYS:test_output.txt SYS:tests/amissl_simple_test\nWait 60\n' > ~/work/arosbuilds/core-linux-x86_64-d/bin/linux-x86_64/AROS/S/User-Startup
cd ~/work/arosbuilds/core-linux-x86_64-d/bin/linux-x86_64/AROS
timeout 120 ./boot/linux/AROSBootstrap
cat test_output.txt
tail -20 /tmp/aros_debug.log
```

## Run All Tests

```sh
printf 'Run >SYS:test_output.txt SYS:tests/run_all_tests\nWait 60\n' > ~/work/arosbuilds/core-linux-x86_64-d/bin/linux-x86_64/AROS/S/User-Startup
cd ~/work/arosbuilds/core-linux-x86_64-d/bin/linux-x86_64/AROS
timeout 120 ./boot/linux/AROSBootstrap
cat test_output.txt
```

## Debug Log

```sh
tail -100 /tmp/aros_debug.log
```

## Quick Download Test (Direct Linux Syscall - bypasses bsdsocket bug)

```sh
printf 'Run >SYS:test_output.txt SYS:tests/rawdl aminet.net 80 /pub/aminet/Links/a-e.html RAM:test.html\nWait 25\n' > ~/work/arosbuilds/core-linux-x86_64-d/bin/linux-x86_64/AROS/S/User-Startup
cd ~/work/arosbuilds/core-linux-x86_64-d/bin/linux-x86_64/AROS && timeout 35 ./boot/linux/AROSBootstrap
cat test_output.txt
```

## AROS Environment Details

- AROS root: `~/work/arosbuilds/core-linux-x86_64-d/bin/linux-x86_64/AROS/`
- Bootstrap: `boot/linux/AROSBootstrap`
- Config: `boot/linux/AROSBootstrap.conf`
- Debug log: `/tmp/aros_debug.log`
- User-Startup: `S/User-Startup`
- Library deploy: `Libs/`
- Tests deploy: `tests/`
