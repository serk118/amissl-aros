/* Apply relocations to an ET_REL AROS library, output relocated version */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <sys/mman.h>
#include <sys/stat.h>

static inline uint64_t r64(const unsigned char *p) { uint64_t v; memcpy(&v,p,8); return v; }
static inline void w64(unsigned char *p, uint64_t v) { memcpy(p,&v,8); }

int main(int argc, char **argv)
{
    if (argc < 2) { printf("Usage: %s <input.elf> [output.elf]\n", argv[0]); return 1; }

    const char *inpath = argv[1];
    const char *outpath = argc > 2 ? argv[2] : "/tmp/relocated.elf";

    int fd = open(inpath, O_RDONLY);
    if (fd < 0) { perror("open"); return 1; }
    struct stat st; fstat(fd, &st);
    unsigned char *data = mmap(NULL, st.st_size, PROT_READ|PROT_WRITE, MAP_PRIVATE, fd, 0);
    close(fd);

    Elf64_Ehdr *ehdr = (Elf64_Ehdr *)data;
    if (data[0] != 0x7f || data[1]!='E' || data[2]!='L' || data[3]!='F') {
        printf("Not ELF\n"); return 1;
    }

    Elf64_Shdr *shdr = (Elf64_Shdr *)(data + ehdr->e_shoff);
    int shnum = ehdr->e_shnum;
    char *shstrtab = (char *)data + shdr[ehdr->e_shstrndx].sh_offset;

    printf("Applying relocations to %s...\n", inpath);

    /* Pre-relocate: assign sequential addresses to sections, then apply relocs.
       Simulate what AROS loader does: load sections at sequential addresses,
       apply R_X86_64_64 relocations to compute absolute addresses. */

    /* Step 1: Assign base addresses to each loaded section */
    unsigned long next_addr = 0x100000; /* Start address */
    unsigned long *sec_base = calloc(shnum, sizeof(unsigned long));
    int n_loaded = 0;

    for (int i = 0; i < shnum; i++) {
        if (shdr[i].sh_type == SHT_PROGBITS && (shdr[i].sh_flags & SHF_ALLOC)) {
            sec_base[i] = next_addr;
            next_addr += shdr[i].sh_size;
            next_addr = (next_addr + 15) & ~15;
            n_loaded++;
        }
    }
    printf("  Assigned %d loaded sections, total image size ~0x%lx bytes\n", n_loaded, next_addr - 0x100000);

    /* Step 2: Apply relocations */
    int relocs = 0;
    for (int ri = 0; ri < shnum; ri++) {
        if (shdr[ri].sh_type != SHT_RELA) continue;
        int target = shdr[ri].sh_info;
        if (!sec_base[target]) continue; /* target not loaded */

        Elf64_Rela *rel = (Elf64_Rela *)(data + shdr[ri].sh_offset);
        int nrels = shdr[ri].sh_size / shdr[ri].sh_entsize;

        Elf64_Sym *symtab = NULL;
        char *strtab = NULL;
        if (shdr[ri].sh_link < (unsigned)shnum) {
            int symidx = shdr[ri].sh_link;
            symtab = (Elf64_Sym *)(data + shdr[symidx].sh_offset);
            if (shdr[symidx].sh_link < (unsigned)shnum)
                strtab = (char *)data + shdr[shdr[symidx].sh_link].sh_offset;
        }

        for (int r = 0; r < nrels; r++) {
            unsigned char *p = data + shdr[target].sh_offset + rel[r].r_offset;
            unsigned type = ELF64_R_TYPE(rel[r].r_info);
            unsigned sym_idx = ELF64_R_SYM(rel[r].r_info);
            unsigned long s = 0;

            if (symtab && sym_idx) {
                Elf64_Sym *sym = &symtab[sym_idx];
                int shndx = sym->st_shndx;
                if (shndx > 0 && shndx < shnum && sec_base[shndx])
                    s = sec_base[shndx] + sym->st_value;
                else if (shndx == SHN_ABS)
                    s = sym->st_value;
                else if (shndx != SHN_UNDEF) {
                    printf("  WARN: sym %d in section %d (unloaded)\n", sym_idx, shndx);
                }
            }

            switch (type) {
                case 1: /* R_X86_64_64 */
                    w64(p, s + rel[r].r_addend);
                    break;
                case 2: /* R_X86_64_PC32 */
                    *(unsigned *)p = (unsigned)(s + rel[r].r_addend - (sec_base[target] + rel[r].r_offset + 4));
                    break;
                case 10: /* R_X86_64_32S */
                    *(int *)p = (int)(s + rel[r].r_addend - sec_base[0]); /* relative to base */
                    break;
                case 11: /* R_X86_64_32 */
                    *(unsigned *)p = (unsigned)(s + rel[r].r_addend);
                    break;
                default:
                    break; /* ignore other types */
            }
            relocs++;
        }
    }
    printf("  Applied %d relocations\n", relocs);

    /* Step 3: Remove relocation sections so AROS doesn't re-apply them */
    for (int i = 0; i < shnum; i++) {
        if (shdr[i].sh_type == SHT_RELA || shdr[i].sh_type == SHT_REL) {
            shdr[i].sh_type = SHT_NULL;
            shdr[i].sh_size = 0;
            shdr[i].sh_flags = 0;
        }
    }

    /* Step 4: Write output */
    fd = open(outpath, O_WRONLY|O_CREAT|O_TRUNC, 0644);
    if (fd < 0) { perror("open output"); return 1; }
    write(fd, data, st.st_size);
    close(fd);
    printf("  Written to %s (%ld bytes)\n", outpath, (long)st.st_size);

    /* Step 5: Verify the ROMTag */
    for (int i = 0; i < shnum; i++) {
        if (!sec_base[i]) continue;
        unsigned char *sec = data + shdr[i].sh_offset;
        for (unsigned off = 0; off + 72 <= shdr[i].sh_size; off += 2) {
            if (r64(sec+off) == 0x4AFC) { /* RTC_MATCHWORD in little endian */
                unsigned char *rt = sec + off;
                unsigned long match_tag = r64(rt + 8);
                unsigned long expected = sec_base[i] + off;
                printf("\nROMTag in [%s]+0x%x: MatchTag=0x%lx expected=0x%lx %s\n",
                       shstrtab + shdr[i].sh_name, off, match_tag, expected,
                       match_tag == expected ? "OK" : "MISMATCH!");
                if (match_tag == expected)
                    printf("  *** This library should now load correctly! ***\n");
                break;
            }
        }
    }

    free(sec_base);
    munmap(data, st.st_size);
    return 0;
}
