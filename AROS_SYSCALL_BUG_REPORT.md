# Bug Report: `syscall` instruction crashes with "Illegal instruction" on real AROS x86_64 hardware

**Reporter:** serk118
**Date:** 2026-08-06
**Target:** AROS x86_64 kernel (rom/dos/)
**Severity:** High — blocks any AROS-native application from using shared libraries that rely on kernel syscalls

---

## Summary

On real AROS x86_64 hardware, the `syscall` instruction (opcode `0F 05`) crashes with
error `0x80000004` (Illegal instruction). The same `syscall` instruction works correctly
on hosted AROS (Linux bootstrap). This means any program that calls into the AROS kernel
via `syscall` will crash on real hardware.

## Reproduction

1. Build AmiSSL v5.27 for AROS x86_64
2. Deploy `amisslmaster.library` + `amissl_v362.library` to real AROS hardware
3. Run any 3rd-party tool that opens `amisslmaster.library` (e.g., AmiFox)
4. The tool crashes immediately with "Illegal instruction"

## Crash Log (from AmiFox)

```
Program failed
Task : 0x0000000049BC3770 - AmiFox
Error: 0x80000004 - Illegal instruction
PC   : 0x0000000049F9C8B8
Module amisslmaster.library Segment 1 .text (0x0000000049F9C2E0) Offset 0x00000000000005D8
Function OpenAmiSSLBase (0x0000000049F9C7BD) Offset 0x00000000000000FB

Disassembly at crash point:
  -20 : e8e70d0000    call OpenAmiSSLBase+3512
  -15 : bf02000000    mov $0x2, edi
  -10 : 4c89ee        mov r13, rsi
   -7 : 89c2          mov eax, edx
   -5 : b801000000    mov $0x1, eax
    0*: 0f05           syscall        <-- CRASH HERE
```

## Root Cause

The `syscall` instruction on x86_64 relies on the `IA32_LSTAR` MSR (Model-Specific
Register at index `0xC0000082`) to determine the kernel entry point address. When a
user-mode program executes `syscall`, the CPU reads `IA32_LSTAR` and jumps to that
address.

On hosted AROS (Linux bootstrap), the Linux kernel sets up `IA32_LSTAR` properly, so
`syscall` works. On real AROS hardware, the AROS kernel does not set up `IA32_LSTAR`
(or sets it to an invalid/unmapped address), so the `syscall` instruction faults as
an illegal instruction.

## Expected Behavior

`syscall` should work on real AROS x86_64 hardware, just as it does on hosted AROS.
The kernel should set up `IA32_LSTAR` during boot to point to the AROS syscall handler.

## Fix

The fix needs to be in the AROS x86_64 kernel initialization code (likely in
`rom/dos/internalloadseg_elf.c` or the kernel's platform init code):

1. During kernel init, write the address of the AROS syscall handler to the
   `IA32_LSTAR` MSR using `wrmsr` instruction.
2. The syscall handler should be a function that reads the syscall number from `eax`,
   dispatches to the appropriate kernel service, and returns via `sysret`.
3. Ensure the syscall handler is mapped into user-mode accessible memory (not a
   kernel-only address).

Alternatively, if the AROS kernel uses a different syscall mechanism (e.g., software
interrupts `int 0x80` or `sysenter`), the `syscall` instruction path should be
implemented or the existing mechanism should be properly initialized for x86_64.

## Workaround

Programs can avoid the `syscall` instruction by using the AROS `int 0x80` software
interrupt path instead (if available), or by using direct function calls into the
kernel via the library base pointer (which is what hosted AROS does).

## Additional Notes

- The crash only affects real AROS x86_64 hardware, not hosted AROS (Linux bootstrap)
- The `syscall` instruction is the standard x86_64 system call mechanism
- The `IA32_LSTAR` MSR is the standard way to set up `syscall` on x86_64
- This is a kernel-level issue, not an AmiSSL issue
- The same crash would affect any program that uses `syscall` on real AROS x86_64 hardware
