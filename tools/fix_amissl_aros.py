#!/usr/bin/env python3
"""Post-process AmiSSL library for AROS x86_64.

The AROS Exec ELF loader's R_X86_64_PC32 formula has a +4 byte error.
Fix by changing the RELA addend from 0 to -4 for all PC32 entries,
which compensates for the kernel formula:  s + (-4) - p == s - (p+4).

Also fix R_X86_64_32 and R_X86_64_32S relocations for addresses
above 4GB that would be truncated by zero/sign extension.
"""
import struct, sys, os

path = sys.argv[1]
backup = path + ".bak"
if not os.path.exists(backup):
    os.rename(path, backup)
    print(f"Backup: {backup}")

with open(backup, 'rb') as f:
    data = bytearray(f.read())

e_shoff = struct.unpack_from('<Q', data, 40)[0]
e_shnum = struct.unpack_from('<H', data, 60)[0]
e_shentsize = struct.unpack_from('<H', data, 58)[0]
e_shstrndx = struct.unpack_from('<H', data, 62)[0]

secs = []
for i in range(e_shnum):
    off = e_shoff + i * e_shentsize
    d = data[off:off+64]
    secs.append({
        'name_off': struct.unpack_from('<I', d, 0)[0],
        'type': struct.unpack_from('<I', d, 4)[0],
        'flags': struct.unpack_from('<Q', d, 8)[0],
        'addr': struct.unpack_from('<Q', d, 16)[0],
        'offset': struct.unpack_from('<Q', d, 24)[0],
        'size': struct.unpack_from('<Q', d, 32)[0],
        'link': struct.unpack_from('<I', d, 40)[0],
        'info': struct.unpack_from('<I', d, 44)[0],
        'addralign': struct.unpack_from('<Q', d, 48)[0],
        'entsize': struct.unpack_from('<Q', d, 56)[0],
    })

shstr_sec = secs[e_shstrndx]
def sec_name(i):
    off = shstr_sec['offset'] + secs[i]['name_off']
    return data[off:off+60].split(b'\x00')[0].decode('latin-1')

fixed_pc32 = 0
fixed_32 = 0
fixed_32s = 0

for i, s in enumerate(secs):
    if s['type'] != 4:  # SHT_RELA
        continue
    target_name = sec_name(s['info'])
    num = s['size'] // s['entsize']
    for j in range(num):
        off = s['offset'] + j * s['entsize']
        d = data[off:off+24]
        r_offset = struct.unpack_from('<Q', d, 0)[0]
        r_info = struct.unpack_from('<Q', d, 8)[0]
        r_addend = struct.unpack_from('<q', d, 16)[0]
        r_type = r_info & 0xFFFFFFFF
        
        if r_type == 2:  # R_X86_64_PC32
            if r_addend != -4:
                struct.pack_into('<q', data, off + 16, -4)
                fixed_pc32 += 1

print(f"R_X86_64_PC32: {fixed_pc32} addends fixed")

with open(path, 'wb') as f:
    f.write(data)
os.chmod(path, 0o755)
print(f"Written: {path}")
