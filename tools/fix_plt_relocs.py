#!/usr/bin/env python3
"""Pre-resolve all R_X86_64_PLT32 relocations in an AROS ET_REL library."""
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
        'name_off': struct.unpack_from('<I', d, 0)[0],
        'type': struct.unpack_from('<I', d, 4)[0],
        'offset': struct.unpack_from('<Q', d, 24)[0],
        'size': struct.unpack_from('<Q', d, 32)[0],
        'entsize': struct.unpack_from('<Q', d, 56)[0],
    })

shstr = secs[e_shstrndx]
def sec_name(i):
    off = shstr['offset'] + secs[i]['name_off']
    return data[off:off+60].split(b'\x00')[0].decode('latin-1')

symtab = strtab_sec = rela_text = text_sec = None
for i, s in enumerate(secs):
    name = sec_name(i)
    if s['type'] == 2:
        symtab = s
    elif s['type'] == 3 and name == '.strtab':
        strtab_sec = s
    elif s['type'] == 4 and name == '.rela.text':
        rela_text = s
    elif s['type'] == 1 and name == '.text':
        text_sec = s

if not all([symtab, strtab_sec, rela_text, text_sec]):
    print("Missing sections", file=sys.stderr)
    sys.exit(1)

print(f"symtab: 0x{symtab['offset']:x}+0x{symtab['size']:x} entsize={symtab['entsize']}")
print(f"strtab: 0x{strtab_sec['offset']:x}")
print(f"rela.text: 0x{rela_text['offset']:x}+0x{rela_text['size']:x}")
print(f".text: 0x{text_sec['offset']:x}+0x{text_sec['size']:x}")

# Symbols
syms = []
num = symtab['size'] // symtab['entsize']
for i in range(num):
    off = symtab['offset'] + i * symtab['entsize']
    d = data[off:off+24]
    st_name = struct.unpack_from('<I', d, 0)[0]
    st_shndx = struct.unpack_from('<H', d, 6)[0]
    st_value = struct.unpack_from('<Q', d, 8)[0]
    name = ''
    if st_name > 0:
        end = data[strtab_sec['offset']+st_name:].index(b'\x00')
        name = data[strtab_sec['offset']+st_name:strtab_sec['offset']+st_name+end].decode('latin-1')
    syms.append({'name': name, 'value': st_value, 'shndx': st_shndx})

# Process PLT32 relocations
total = rela_text['size'] // rela_text['entsize']
fixed = 0
for i in range(total):
    off = rela_text['offset'] + i * rela_text['entsize']
    d = data[off:off+24]
    r_offset = struct.unpack_from('<Q', d, 0)[0]
    r_info = struct.unpack_from('<Q', d, 8)[0]
    r_addend = struct.unpack_from('<q', d, 16)[0]
    r_type = r_info & 0xFFFFFFFF
    r_sym = r_info >> 32
    
    if r_type == 4:
        reloc_name = 'PLT32'
    elif r_type == 2:
        reloc_name = 'PC32'
        # PC32 needs addend=-4 to match what the kernel's PLT32/PC32
        # formula expects. The kernel computes: s + addend - p.
        # For a correct result, addend must be -4 (relative to next instruction).
        # Fix the addend in the RELA entry so kernel does the right thing.
        new_addend = -4
        struct.pack_into('<q', data, off + 16, new_addend)
    else:
        continue  # skip other relocation types
    
    sym = syms[r_sym]
    if sym['value'] == 0:
        continue  # skip undefined/zero symbols
    
    # Skip external symbols (section index 0 = SHN_UNDEF) — kernel resolves these
    if sym['shndx'] == 0:
        continue
    
    # Only fix references to symbols in the .text section (section 1).
    # Cross-section references (e.g., to .bss, .data) can't have their
    # displacement pre-computed because section base addresses are
    # only known at load time by the kernel.
    if sym['shndx'] != 1:
        continue
    
    # r_offset is relative to .text section start, convert to file offset
    file_off = text_sec['offset'] + r_offset
    # displacement = sym_value + addend - r_offset_in_section
    disp = (sym['value'] + r_addend - r_offset)
    # Sign-extend 32-bit for the jmp/call displacement
    disp_s32 = disp & 0xFFFFFFFF
    if disp_s32 >= 0x80000000:
        disp_s32 -= 0x100000000
    struct.pack_into('<i', data, file_off, disp_s32)
    
    fixed += 1
    if fixed <= 8:
        print(f"  0x{r_offset:08X}: {reloc_name} {sym['name']}+{r_addend} "
              f"sym=0x{sym['value']:x} disp=0x{disp:08x}")

print(f"\nTotal: {total} relocs, {fixed} PLT32 fixed")

out = path + ".fixed"
with open(out, 'wb') as f:
    f.write(data)
os.chmod(out, 0o755)
print(f"Written: {out} ({os.path.getsize(out)} bytes)")
