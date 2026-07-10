Hi deadwood,

Three AROS x86_64 kernel issues we've hit while porting AmiSSL 5.27:

**1. MULTIBASE data segment not copied on AROS**
`InitMultiBase()` in amissl_libinit.c for `__AROS__` just returns `base` without copying the data segment (unlike OS3/OS4/MorphOS which all copy it). This means all library openers share static/globals. When one user calls OPENSSL_cleanup(), the global state is corrupted for all other users. Simple fix would be adding a data segment copy similar to the OS3 or MorphOS implementation: AllocVec + CopyMem of the master's data segment. Happy to provide the patch.

**2. R_X86_64_PC32 relocation formula off by +4**
In `rom/dos/internalloadseg_elf.c`, the `R_X86_64_PC32` case uses the same formula as `R_X86_64_PLT32`:
```
case R_X86_64_PC32:
    *(ULONG *)p = s + rel->addend - (IPTR) p;
```
PLT32 works because the addend is always -4 (compensating). But PC32 typically has addend=0, making the displacement relative to the field address instead of the next instruction (`p + 4`). Every PC32 relocation is off by +4.

**3. -mcmodel=large causes OpenLibrary to fail on real AROS**
Building with `gcc -mcmodel=large` produces a relocatable ELF that works fine on hosted AROS but crashes during OpenLibrary on real AROS. Without `-mcmodel=large`, OpenLibrary succeeds but PLT32 count jumps from ~21 to ~89K (which the kernel handles correctly). Suspect this is related to #2 or a different ELF loader limitation with large code model relocations.

Happy to provide test binaries, crashlogs, or patches for any of these.

— serk118
