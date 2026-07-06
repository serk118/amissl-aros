/*
 * fix_pc32_addend.c — Fix PC32 relocation addends for AROS kernel bug
 *
 * The AROS kernel (internalloadseg_elf.c) computes PC32 relocations as:
 *     *(ULONG *)p = s + addend - p
 * instead of the correct:
 *     *(ULONG *)p = s + addend - (p + 4)
 *
 * This means the effective target is s + addend + 4 instead of s + addend.
 * PLT32 relocations (addend=-4) cancel the error, but PC32 with other
 * addends are off by +4.
 *
 * Fix: Subtract 4 from every PC32 addend that isn't already -4.
 * After this correction, the kernel will compute:
 *     s + (addend - 4) - p  →  CPU: p+4 + s + addend - 4 - p = s + addend  ✓
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

int main(int argc, char **argv) {
    if (argc != 3) {
        fprintf(stderr, "Usage: %s <input.library> <output.library>\n", argv[0]);
        return 1;
    }

    FILE *fin = fopen(argv[1], "rb");
    if (!fin) { perror("fopen input"); return 1; }

    fseek(fin, 0, SEEK_END);
    long fsize = ftell(fin);
    fseek(fin, 0, SEEK_SET);

    uint8_t *data = malloc(fsize);
    if (!data) { fprintf(stderr, "malloc failed\n"); return 1; }
    fread(data, 1, fsize, fin);
    fclose(fin);

    Elf64_Ehdr *eh = (Elf64_Ehdr *)data;
    if (memcmp(eh->e_ident, ELFMAG, SELFMAG) != 0) {
        fprintf(stderr, "Not an ELF file\n");
        return 1;
    }

    Elf64_Shdr *sh = (Elf64_Shdr *)(data + eh->e_shoff);
    int count = 0;

    for (int i = 0; i < eh->e_shnum; i++) {
        if (sh[i].sh_type != SHT_RELA) continue;

        Elf64_Rela *rela = (Elf64_Rela *)(data + sh[i].sh_offset);
        int nrels = sh[i].sh_size / sh[i].sh_entsize;

        for (int j = 0; j < nrels; j++) {
            if (ELF64_R_TYPE(rela[j].r_info) == R_X86_64_PC32) {
                /*
                 * Kernel formula: *(ULONG *)p = s + addend - p
                 * CPU computes:    p+4 + (s + addend - p) = s + addend + 4
                 * Intended target: s + addend
                 *
                 * For addend = -4 (common for function calls and external
                 * symbol refs), the error cancels: s + (-4) + 4 = s.  ✓
                 *
                 * For other addends, we must subtract 4 to compensate:
                 *   new_addend = addend - 4
                 *   CPU result: s + (addend - 4) + 4 = s + addend  ✓
                 */
                if (rela[j].r_addend != -4) {
                    rela[j].r_addend -= 4;
                    count++;
                }
            }
        }
    }

    FILE *fout = fopen(argv[2], "wb");
    if (!fout) { perror("fopen output"); return 1; }
    fwrite(data, 1, fsize, fout);
    fclose(fout);

    printf("Fixed %d PC32 addends\n", count);
    free(data);
    return 0;
}
