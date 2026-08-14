#!/bin/bash
# Build AmiTranslate for x86_64-aros using the ALB42 FPC 3.3.1 cross toolchain.
set -e
AU=/tmp/opencode/fpcx64/units/x86_64-aros
MC=/tmp/opencode/muiclass/units/x86_64-aros
LPR=/home/serk118/Downloads/AmiTranslate-main
export PATH=/tmp/opencode/fpcln/bin:/tmp/opencode/fpcln/lib/fpc/3.3.1:/home/serk118/work/arosbuilds_alt/toolchain-core-x86_64:$PATH

# assemble -Fu for every target subdir that contains ppu
declare -a FU
for d in "$AU"/*/; do
  if compgen -G "$d"/*.ppu >/dev/null 2>&1; then
    FU+=("-Fu${d%/}")
  fi
done

cd "$LPR"
rm -rf units_aros64; mkdir -p units_aros64
exec /tmp/opencode/fpcln/bin/fpc -Px86_64 -Taros -Xs -CX -O3 \
  "${FU[@]}" \
  -Fu"$MC" \
  -Fu"$LPR/tbutf8/src" \
  -FU"$LPR/units_aros64" \
  -XPx86_64-aros- \
  -o"$LPR/AmiTranslate_x64" \
  "$LPR/AmiTranslate.lpr"
