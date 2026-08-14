#!/bin/bash
# x86_64-aros FPC cross-compiler setup (uses ALB42 prebuilt FPC 3.3.1)
# Run once after downloading the two tarballs from https://build.alb42.de/fpcbin/
#   1) fpc-3.3.1.x86_64-linux.tar.gz   (host compiler - provides ppcx64)
#   2) fpc-3.3.1.x86_64-aros.tar.gz    (AROS target units/rtl)
# Requires the x86_64-aros binutils+as+ld on PATH (e.g. the AROS cross toolchain,
#   /home/serk118/work/arosbuilds_alt/toolchain-core-x86_64/).

set -euo pipefail

FPC_LNX_DIR="$(cd "$(dirname "$0")" && pwd)/fpcln"
FPC_ARX_DIR="$(cd "$(dirname "$0")" && pwd)/fpcx64"
AROS_BINUTILS=/home/serk118/work/arosbuilds_alt/toolchain-core-x86_64

export FPC="$FPC_LNX_DIR/lib/fpc/3.3.1/ppcx64"
export PATH="$FPC_LNX_DIR/bin:$FPC_LNX_DIR/lib/fpc/3.3.1:$AROS_BINUTILS:$PATH"

fpc_aros() {
    "$FPC_LNX_DIR/bin/fpc" -Px86_64 -Taros \
        -Fu"$FPC_ARX_DIR/units/x86_64-aros/rtl" \
        -Fu"$FPC_ARX_DIR/units/x86_64-aros/rtl-console" \
        -Fu"$FPC_ARX_DIR/units/x86_64-aros/rtl-objpas" \
        -Fu"$FPC_ARX_DIR/units/x86_64-aros/rtl-extra" \
        -Fu"$FPC_ARX_DIR/units/x86_64-aros/rtl-generics" \
        -Fu"$FPC_ARX_DIR/units/x86_64-aros/fcl-net" \
        -Fu"$FPC_ARX_DIR/units/x86_64-aros/fcl-json" \
        -Fu"$FPC_ARX_DIR/units/x86_64-aros/fcl-base" \
        -Fu"$FPC_ARX_DIR/units/x86_64-aros/fcl-xml" \
        -Fu"$FPC_ARX_DIR/units/x86_64-aros/rtl-unicode" \
        -XPx86_64-aros- \
        "$@"
}

if [ "$#" -gt 0 ] && [ "$1" = "env" ]; then
    echo "export FPC=$FPC"
    echo "export PATH=$PATH"
else
    echo "fpc_aros() available for cross-compiling to x86_64-aros."
    echo "Usage: source $0 env   (then call: fpc_aros <compiler-args>)"
fi
