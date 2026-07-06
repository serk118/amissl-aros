#include <proto/exec.h>
#include <proto/dos.h>
#include <stdio.h>

int main(void)
{
    struct Library *lib;

    printf("Testing library opens...\n");

    lib = OpenLibrary("utility.library", 0);
    printf("utility.library: %08lx\n", lib);
    if (lib) CloseLibrary(lib);

    lib = OpenLibrary("dos.library", 0);
    printf("dos.library: %08lx\n", lib);

    lib = OpenLibrary("amisslmaster.library", 0);
    printf("amisslmaster.library: %08lx\n", lib);
    if (lib) CloseLibrary(lib);

    lib = OpenLibrary("AmiSSL/amissl_v362.library", 0);
    printf("AmiSSL/amissl_v362.library: %08lx\n", lib);
    if (lib) CloseLibrary(lib);

    printf("Checking AmiSSL assign...\n");
    printf("AmiSSL: assign value: ", (IPTR)0);

    return 0;
}
