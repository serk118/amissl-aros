/* Simulate AROS ELF loader's relocate + LDInit on a library file */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <sys/mman.h>
#include <sys/stat.h>

#define RTC_MATCHWORD 0x4AFC

static void *load_file(const char *path, size_t *size)
{
    int fd = open(path, O_RDONLY);
    if (fd < 0) { perror("open"); return NULL; }
    struct stat st;
    fstat(fd, &st);
    void *data = mmap(NULL, st.st_size, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_POPULATE, fd, 0);
    close(fd);
    *size = st.st_size;
    return data;
}

/* Safe read of unaligned 64-bit */
static inline uint64_t rd64(const unsigned char *p) {
    uint64_t v;
    memcpy(&v, p, 8);
    return v;
}
static inline uint16_t rd16(const unsigned char *p) {
    uint16_t v;
    memcpy(&v, p, 2);
    return v;
}

int main(int argc, char **argv)
{
    if (argc < 2) {
        printf("Usage: %s <library.elf>\n", argv[0]);
        return 1;
    }

    size_t file_size;
    void *data = load_file(argv[1], &file_size);
    if (!data) return 1;

    if (file_size < 64) {
        printf("File too small\n");
        munmap(data, file_size);
        return 1;
    }

    unsigned char *d = (unsigned char *)data;

    /* Verify ELF magic */
    if (d[0] != 0x7f || d[1] != 'E' || d[2] != 'L' || d[3] != 'F') {
        printf("Not an ELF file\n");
        munmap(data, file_size);
        return 1;
    }

    Elf64_Ehdr *ehdr = (Elf64_Ehdr *)data;
    printf("ELF: type=%d (REL=%d) machine=%d entries=%d shoff=%ld\n",
           ehdr->e_type, ET_REL, ehdr->e_machine,
           ehdr->e_shnum, (long)ehdr->e_shoff);

    if (ehdr->e_shoff + ehdr->e_shentsize * ehdr->e_shnum > file_size) {
        printf("Section headers beyond file\n");
        munmap(data, file_size);
        return 1;
    }

    Elf64_Shdr *shdr = (Elf64_Shdr *)(d + ehdr->e_shoff);
    int shnum = ehdr->e_shnum;
    char *shstrtab = (char *)data + shdr[ehdr->e_shstrndx].sh_offset;

    printf("\nSections:\n");
    for (int i = 0; i < shnum && i < 20; i++) {
        printf("  [%2d] %-20s type=%-3d flags=0x%02lx size=0x%lx off=0x%lx\n",
               i, shstrtab + shdr[i].sh_name,
               shdr[i].sh_type, (unsigned long)shdr[i].sh_flags,
               (unsigned long)shdr[i].sh_size,
               (unsigned long)shdr[i].sh_offset);
    }
    if (shnum > 20) printf("  ... (%d sections total)\n", shnum);

    printf("\n--- ROMTag Scan ---\n");
    int romtag_count = 0;

    for (int si = 0; si < shnum; si++) {
        if (shdr[si].sh_type != SHT_PROGBITS) continue;
        if (!(shdr[si].sh_flags & SHF_ALLOC)) continue;

        unsigned char *sec = d + shdr[si].sh_offset;
        size_t sec_size = shdr[si].sh_size;
        const char *sec_name = shstrtab + shdr[si].sh_name;

        for (size_t off = 0; off + 72 <= sec_size; off += 2) {
            if (rd16(sec + off) != RTC_MATCHWORD) continue;

            /* Found candidate */
            unsigned char *rt = sec + off;
            romtag_count++;

            uint64_t match_tag = rd64(rt + 8);
            uint64_t end_skip = rd64(rt + 16);
            unsigned char flags = rt[24];
            unsigned char ver = rt[25];
            unsigned char type = rt[26];
            char pri = (char)rt[27];
            uint64_t name_ptr = rd64(rt + 32);
            uint64_t id_ptr = rd64(rt + 40);
            uint64_t init_ptr = rd64(rt + 48);

            printf("\nROMTag #%d in [%s]+0x%lx:\n", romtag_count, sec_name, (unsigned long)off);
            printf("  MatchWord=0x%04X %s\n", rd16(rt), rd16(rt) == RTC_MATCHWORD ? "OK" : "BAD");
            printf("  MatchTag =0x%016lx (%s)\n", match_tag,
                   match_tag == 0 ? "NOT RELOCATED (will FAIL at runtime)" :
                   match_tag == (uint64_t)(sec + off) ? "RELOCATED correctly" :
                   "RELOCATED to wrong address");
            printf("  EndSkip  =0x%016lx\n", end_skip);
            printf("  Flags    =0x%02x [%s%s%s%s]\n", flags,
                   (flags & 0x80) ? "AUTOINIT " : "",
                   (flags & 0x01) ? "COLDSTART " : "",
                   (flags & 0x02) ? "SINGLETASK " : "",
                   (flags & 0x04) ? "AFTERDOS " : "");
            printf("  Version  =%d Type=%d Pri=%d\n", ver, type, pri);
            printf("  Name     =0x%016lx\n", name_ptr);
            printf("  IdString =0x%016lx\n", id_ptr);
            printf("  Init     =0x%016lx\n", init_ptr);

            /* Show associated relocations */
            printf("\n  Relocations covering this ROMTag:\n");
            int rel_found = 0;
            for (int ri = 0; ri < shnum; ri++) {
                if (shdr[ri].sh_type != SHT_RELA) continue;
                if ((int)shdr[ri].sh_info != si) continue;

                Elf64_Rela *rel = (Elf64_Rela *)(d + shdr[ri].sh_offset);
                int nrels = shdr[ri].sh_size / shdr[ri].sh_entsize;
                Elf64_Sym *symtab = NULL;
                char *strtab = NULL;
                if (shdr[ri].sh_link < (unsigned)shnum) {
                    int symidx = shdr[ri].sh_link;
                    symtab = (Elf64_Sym *)(d + shdr[symidx].sh_offset);
                    if (shdr[symidx].sh_link < (unsigned)shnum)
                        strtab = (char *)d + shdr[shdr[symidx].sh_link].sh_offset;
                }

                for (int r = 0; r < nrels; r++) {
                    if (rel[r].r_offset >= off && rel[r].r_offset < off + 72) {
                        const char *symname = "";
                        unsigned sym_idx = ELF64_R_SYM(rel[r].r_info);
                        if (symtab && strtab)
                            symname = strtab + symtab[sym_idx].st_name;
                        printf("    [%s+0x%lx] type=%lu \"%s\" addend=0x%lx\n",
                               shstrtab + shdr[ri].sh_name,
                               (unsigned long)rel[r].r_offset,
                               (unsigned long)ELF64_R_TYPE(rel[r].r_info),
                               symname,
                               (unsigned long)rel[r].r_addend);
                        rel_found++;
                    }
                }
            }
            if (!rel_found) printf("    (none found)\n");

            break;
        }
    }

    if (!romtag_count)
        printf("  NO ROMTag FOUND in any section!\n");

    munmap(data, file_size);
    return romtag_count ? 0 : 1;
}
