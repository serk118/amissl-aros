#!/usr/bin/env python3
"""Fix only PLT32 relocations to NAMED symbols (not section-relative).
These are the calls from LIB_* wrappers to real OpenSSL functions.
Mark fixed relocs as R_X86_64_NONE to prevent kernel from overwriting."""
import struct, sys, os

path = sys.argv[1]
with open(path, 'rb') as f:
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
        'type': struct.unpack_from('<I', d, 4)[0],
        'addr': struct.unpack_from('<Q', d, 16)[0],
        'offset': struct.unpack_from('<Q', d, 24)[0],
        'size': struct.unpack_from('<Q', d, 32)[0],
        'entsize': struct.unpack_from('<Q', d, 56)[0],
        'info': struct.unpack_from('<I', d, 44)[0],
    })

rela_text_sec = None
for i, s in enumerate(secs):
    if s['type'] == 4 and i == 2:  # .rela.text is usually section 2
        rela_text_sec = s
        break

if not rela_text_sec:
    print("Can't find .rela.text", file=sys.stderr)
    sys.exit(1)

total = rela_text_sec['size'] // rela_text_sec['entsize']
fixed = 0

for i in range(total):
    off = rela_text_sec['offset'] + i * rela_text_sec['entsize']
    d = data[off:off+24]
    r_offset = struct.unpack_from('<Q', d, 0)[0]
    r_info = struct.unpack_from('<Q', d, 8)[0]
    r_addend = struct.unpack_from('<q', d, 16)[0]
    r_type = r_info & 0xFFFFFFFF
    r_sym = r_info >> 32
    
    # Only fix PLT32 to symbols with value != 0 (named functions)
    if r_type != 4:  # PLT32
        continue
    
    # We need the symbol value. Read the symbol table to check.
    # For efficiency, parse symbols on-demand.
    # But for simplicity, let's just try to read the symbol table.
    # Skip this check and do it in a more detailed pass below.
    pass

# Actually, we need the symbol table. Let me read it.
symtab_sec = None
strtab_sec = None
for i, s in enumerate(secs):
    name = ''
    if s['type'] == 2:
        symtab_sec = s
    elif s['type'] == 3:
        strtab_sec = s

# Read string table to find appropriate strtab
if strtab_sec:
    import struct
    strtab_data = data[strtab_sec['offset']:strtab_sec['offset']+strtab_sec['size']]

# Read symbols
syms = []
if symtab_sec:
    for i in range(symtab_sec['size'] // symtab_sec['entsize']):
        off_s = symtab_sec['offset'] + i * symtab_sec['entsize']
        d = data[off_s:off_s+24]
        st_name = struct.unpack_from('<I', d, 0)[0]
        st_shndx = struct.unpack_from('<H', d, 6)[0]
        st_value = struct.unpack_from('<Q', d, 8)[0]
        name = ''
        if st_name > 0 and strtab_sec:
            end = data[strtab_sec['offset']+st_name:].index(b'\x00')
            name = data[strtab_sec['offset']+st_name:strtab_sec['offset']+st_name+end].decode('latin-1')
        syms.append({'name': name, 'value': st_value, 'shndx': st_shndx})

if not syms:
    print("No symbols found", file=sys.stderr)
    sys.exit(1)

text_offset = secs[1]['offset']  # .text section file offset

for i in range(total):
    off = rela_text_sec['offset'] + i * rela_text_sec['entsize']
    d = data[off:off+24]
    r_offset = struct.unpack_from('<Q', d, 0)[0]
    r_info = struct.unpack_from('<Q', d, 8)[0]
    r_addend = struct.unpack_from('<q', d, 16)[0]
    r_type = r_info & 0xFFFFFFFF
    r_sym = r_info >> 32
    
    if r_type != 4:  # Only PLT32
        continue
    
    sym = syms[r_sym]
    if sym['value'] == 0 or sym['name'] == '':
        continue  # Skip undefined or section-relative
    
    # File offset in .text section where displacement lives
    file_off = text_offset + r_offset
    
    # displacement = sym_value + addend - r_offset
    disp = sym['value'] + r_addend - r_offset
    disp_s32 = disp & 0xFFFFFFFF
    if disp_s32 >= 0x80000000:
        disp_s32 -= 0x100000000
    
    # Patch the instruction
    struct.pack_into('<i', data, file_off, disp_s32)
    
    # Change relocation type to R_X86_64_NONE so kernel doesn't overwrite
    new_info = (r_sym << 32)  # type 0 = R_X86_64_NONE
    struct.pack_into('<Q', data, off + 8, new_info)
    
    fixed += 1

print(f"Fixed {fixed} PLT32 relocs (named functions only)")

out = path + ".fixed"
with open(out, 'wb') as f:
    f.write(data)
os.chmod(out, 0o755)
print(f"Written: {out}")
