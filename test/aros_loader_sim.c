/* Full AROS ELF loader simulation: load, relocate, scan for ROMTag */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <sys/mman.h>
#include <sys/stat.h>

#define RTC_MATCHWORD 0x4AFC
#define MEMF_31BIT 0
#define MEMF_PUBLIC 0
#define MEMF_CLEAR 0
#define AROS_ROUND_UP(x,a) (((x) + (a) - 1) & ~((a) - 1))

typedef unsigned long IPTR;

struct hunk {
    struct hunk *next;
    unsigned long size;
    unsigned char data[];
};

static void *load_file(const char *path, size_t *size)
{
    int fd = open(path, O_RDONLY);
    if (fd < 0) { perror("open"); return NULL; }
    struct stat st;
    fstat(fd, &st);
    void *data = mmap(NULL, st.st_size, PROT_READ|PROT_WRITE, MAP_PRIVATE, fd, 0);
    close(fd);
    *size = st.st_size;
    return data;
}

static inline uint16_t r16(const unsigned char *p) { uint16_t v; memcpy(&v,p,2); return v; }
static inline uint32_t r32(const unsigned char *p) { uint32_t v; memcpy(&v,p,4); return v; }
static inline uint64_t r64(const unsigned char *p) { uint64_t v; memcpy(&v,p,8); return v; }
static inline void w64(unsigned char *p, uint64_t v) { memcpy(p,&v,8); }

int main(int argc, char **argv)
{
    if (argc < 2) { printf("Usage: %s <library.elf>\n", argv[0]); return 1; }

    size_t file_size;
    void *filedata = load_file(argv[1], &file_size);
    if (!filedata) return 1;

    unsigned char *d = filedata;
    Elf64_Ehdr *ehdr = (Elf64_Ehdr *)d;
    if (d[0] != 0x7f || d[1] != 'E' || d[2] != 'L' || d[3] != 'F') {
        printf("Not ELF\n"); return 1;
    }
    printf("File: %s\n", argv[1]);
    printf("Type: %s\n", ehdr->e_type == ET_REL ? "ET_REL (relocatable)" : "other");

    Elf64_Shdr *shdr = (Elf64_Shdr *)(d + ehdr->e_shoff);
    int shnum = ehdr->e_shnum;
    char *shstrtab = (char *)d + shdr[ehdr->e_shstrndx].sh_offset;

    /* Allocate memory for each PROGBITS section with SHF_ALLOC */
    struct sheader {
        Elf64_Shdr *sh;
        unsigned char *load_addr;
        unsigned long alloc_size;
    } *sections = calloc(shnum, sizeof(*sections));

    printf("\nPhase 1: Load sections\n");
    for (int i = 0; i < shnum; i++) {
        sections[i].sh = &shdr[i];
        if (shdr[i].type == SHT_PROGBITS && (shdr[i].flags & SHF_ALLOC)) {
            unsigned long size = shdr[i].size + sizeof(struct hunk) + 4096;
            struct hunk *h = calloc(1, size);
            h->size = size;
            /* Simulate alignment */
            unsigned char *data = (unsigned char *)AROS_ROUND_UP((unsigned long)h->data, 16);
            /* Copy section data */
            if (shdr[i].size && shdr[i].offset + shdr[i].size <= file_size) {
                memcpy(data, d + shdr[i].offset, shdr[i].size);
            }
            sections[i].load_addr = data;
            sections[i].alloc_size = size;
            printf("  [%2d] %-20s loaded at %p size=0x%lx\n",
                   i, shstrtab + shdr[i].sh_name, data, (unsigned long)shdr[i].size);
        }
    }

    printf("\nPhase 2: Apply relocations\n");
    int relocs_applied = 0;
    int relocs_total = 0;
    for (int ri = 0; ri < shnum; ri++) {
        if (shdr[ri].sh_type != SHT_RELA) continue;
        int target = shdr[ri].sh_info;
        if (!sections[target].load_addr) {
            printf("  Skipping %s (target not loaded)\n", shstrtab + shdr[ri].sh_name);
            continue;
        }
        Elf64_Rela *rel = (Elf64_Rela *)(d + shdr[ri].sh_offset);
        int nrels = shdr[ri].sh_size / shdr[ri].sh_entsize;
        relocs_total += nrels;

        Elf64_Sym *symtab = NULL;
        char *strtab = NULL;
        if (shdr[ri].sh_link < (unsigned)shnum) {
            int symidx = shdr[ri].sh_link;
            symtab = (Elf64_Sym *)(d + shdr[symidx].sh_offset);
            if (shdr[symidx].sh_link < (unsigned)shnum)
                strtab = (char *)d + shdr[shdr[symidx].sh_link].sh_offset;
        }

        int count = 0;
        for (int r = 0; r < nrels; r++) {
            unsigned char *p = sections[target].load_addr + rel[r].r_offset;
            unsigned type = ELF64_R_TYPE(rel[r].r_info);
            unsigned sym_idx = ELF64_R_SYM(rel[r].r_info);
            IPTR s = 0;

            if (symtab && sym_idx) {
                Elf64_Sym *sym = &symtab[sym_idx];
                int shndx = sym->st_shndx;
                if (shndx > 0 && shndx < shnum && sections[shndx].load_addr)
                    s = (IPTR)sections[shndx].load_addr + sym->st_value;
                else if (shndx == SHN_ABS)
                    s = sym->st_value;
                else if (sym->st_shndx != SHN_UNDEF) {
                    printf("  WARN: sym %s target section %d not loaded\n",
                           strtab ? strtab + sym->st_name : "?", shndx);
                }
            }

            switch (type) {
                case 1: /* R_X86_64_64 */
                    w64(p, s + rel[r].r_addend);
                    break;
                case 2: /* R_X86_64_PC32 */
                    *(uint32_t *)p = s + rel[r].r_addend - (IPTR)p;
                    break;
                case 10: /* R_X86_64_32S */
                    *(int32_t *)p = (int64_t)(s + rel[r].r_addend);
                    break;
                case 11: /* R_X86_64_32 */
                    *(uint32_t *)p = s + rel[r].r_addend;
                    break;
                default:
                    if (count < 5)
                        printf("  Unhandled reloc type %lu at [%s+0x%lx]\n",
                               type, shstrtab + shdr[ri].sh_name,
                               (unsigned long)rel[r].r_offset);
                    break;
            }
            count++;
        }
        relocs_applied += count;
        printf("  %s: %d relocs applied (out of %d)\n",
               shstrtab + shdr[ri].sh_name, count, nrels);
    }
    printf("  Total: %d/%d relocs applied\n", relocs_applied, relocs_total);

    printf("\nPhase 3: Scan loaded sections for ROMTag\n");
    int found = 0;
    for (int si = 0; si < shnum; si++) {
        if (!sections[si].load_addr) continue;
        unsigned char *sec = sections[si].load_addr;
        size_t sec_size = shdr[si].size;
        const char *sec_name = shstrtab + shdr[si].sh_name;

        for (size_t off = 0; off + 72 <= sec_size; off += 2) {
            if (r16(sec + off) != RTC_MATCHWORD) continue;
            unsigned char *rt = sec + off;
            uint64_t match_tag = r64(rt + 8);

            printf("\nROMTag #%d at [%s]+0x%lx (runtime %p):\n",
                   ++found, sec_name, (unsigned long)off, rt);
            printf("  MatchWord = 0x%04X %s\n", r16(rt),
                   r16(rt) == RTC_MATCHWORD ? "OK" : "BAD");
            printf("  MatchTag  = 0x%016lx %s\n", match_tag,
                   match_tag == 0 ? "NOT RELOCATED" :
                   match_tag == (uint64_t)rt ? "SELF-POINTER OK" :
                   "WRONG ADDRESS");
            printf("  EndSkip   = 0x%016lx\n", r64(rt + 16));
            printf("  Flags     = 0x%02x [%s%s%s%s]\n", rt[24],
                   (rt[24] & 0x80) ? "AUTOINIT " : "",
                   (rt[24] & 0x01) ? "COLDSTART " : "",
                   (rt[24] & 0x02) ? "SINGLETASK " : "",
                   (rt[24] & 0x04) ? "AFTERDOS " : "");
            printf("  Version   = %d Type=%d Pri=%d\n", rt[25], rt[26], (char)rt[27]);
            printf("  rt_Init   = 0x%016lx\n", r64(rt + 48));

            if (match_tag == (uint64_t)rt) {
                printf("  *** AROS LDInit would ACCEPT this ROMTag ***\n");
            } else if (match_tag == 0) {
                printf("  *** AROS LDInit would SKIP (not relocated) ***\n");
            } else {
                printf("  *** AROS LDInit would SKIP (bad self-pointer) ***\n");
            }

            /* Check InitTable for AUTOINIT */
            if (rt[24] & 0x80) {
                unsigned char *init = (unsigned char *)r64(rt + 48);
                printf("  InitTable at %p:\n", init);
                printf("    dSize   = 0x%lx\n", r64(init));
                printf("    vectors = 0x%lx\n", r64(init + 8));
                printf("    struct  = 0x%lx\n", r64(init + 16));
                printf("    init    = 0x%lx\n", r64(init + 24));
            }

            break;
        }
    }
    if (!found)
        printf("  NO ROMTag found!\n");

    /* Cleanup */
    for (int i = 0; i < shnum; i++)
        free(sections[i].load_addr ? (void *)((unsigned long)sections[i].load_addr & ~0xfff) : NULL);
    free(sections);
    munmap(filedata, file_size);
    return found ? 0 : 1;
}
