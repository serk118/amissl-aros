/* AROS x86_64 workaround linker script
 * Merge .text, .rodata, .data into one section
 * to eliminate cross-section R_X86_64_PC32 relocations
 * that the AROS Exec ELF loader doesn't process correctly.
 */
SECTIONS
{
    . = 0;
    .text : {
        *(.text*)
        *(.rodata*)
        *(.data*)
        *(.got*)
        *(.got.plt*)
    }
    .bss : { *(.bss*) }
    .stab : { *(.stab*) }
    /DISCARD/ : { *(.comment*) *(.note*) *(.debug*) }
}
