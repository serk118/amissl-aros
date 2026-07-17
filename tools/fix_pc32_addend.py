#!/usr/bin/env python3
"""Fix R_X86_64_PC32 addends in AROS ET_REL library.

The AROS Exec ELF loader uses formula:  *(ULONG*)p = s + addend - p
This is correct for PLT32 (addend=-4) but wrong for PC32 (addend=0)
because x86-64 displacement is relative to next instruction (p+4).

Fix: change PC32 addend from 0 to -4 so the kernel formula produces
the correct result:  s + (-4) - p  ==  s - (p+4)
"""
import struct, sys, os

path = sys.argv[1]
with open(path, 'rb') as f:
    data = bytearray(f.read())

# Parse ELF header
e_shoff = struct.unpack_from('<Q', data, 40)[0]
e_shnum = struct.unpack_from('<H', data, 60)[0]
e_shentsize = struct.unpack_from('<H', data, 58)[0]
e_shstrndx = struct.unpack_from('<H', data, 62)[0]

# Parse section headers
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

# Section name helper
shstr_sec = secs[e_shstrndx]
def sec_name(i):
    off = shstr_sec['offset'] + secs[i]['name_off']
    return data[off:off+60].split(b'\x00')[0].decode('latin-1')

# Find all SHT_RELA sections
rela_secs = []
for i, s in enumerate(secs):
    if s['type'] == 4:  # SHT_RELA
        name = sec_name(i)
        target = sec_name(s['info'])
        rela_secs.append((name, target, s))

total = 0
fixed = 0
for rname, tname, s in rela_secs:
    num = s['size'] // s['entsize']
    for j in range(num):
        off = s['offset'] + j * s['entsize']
        d = data[off:off+24]
        r_info = struct.unpack_from('<Q', d, 8)[0]
        r_type = r_info & 0xFFFFFFFF
        r_addend = struct.unpack_from('<q', d, 16)[0]
        
        if r_type == 2:  # R_X86_64_PC32
            total += 1
            if r_addend != -4:
                struct.pack_into('<q', data, off + 16, -4)
                fixed += 1

print(f"PC32 relocs: {total} total, {fixed} addend fixes applied")

out = path + ".fixed"
with open(out, 'wb') as f:
    f.write(data)
os.chmod(out, 0o755)
print(f"Written: {out}")
