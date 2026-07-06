#include <proto/exec.h>
#include <proto/dos.h>
#include <string.h>

int main(void)
{
    struct Library *lib;
    BPTR out = Output();

    FWrite(out, "Starting...\n", 12, 1);

    lib = OpenLibrary("amisslmaster.library", 0);
    if (lib)
    {
        FWrite(out, "amisslmaster: OK\n", 17, 1);
        CloseLibrary(lib);
    }
    else
        FWrite(out, "amisslmaster: NULL\n", 19, 1);

    lib = OpenLibrary("AmiSSL/amissl_v362.library", 0);
    if (lib)
    {
        FWrite(out, "amissl_v362: OK\n", 16, 1);
        CloseLibrary(lib);
    }
    else
        FWrite(out, "amissl_v362: NULL\n", 18, 1);

    FWrite(out, "Done.\n", 6, 1);
    return 0;
}
