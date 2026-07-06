#include <proto/exec.h>
#include <aros/debug.h>

int main(void)
{
    struct Library *lib;
    bug("[TEST] Starting\n");
    
    lib = OpenLibrary("amisslmaster.library", 0);
    bug("[TEST] amisslmaster (ROM) = %p\n", lib);
    if (lib) CloseLibrary(lib);
    
    lib = OpenLibrary("AmiSSL/amissl_v362.library", 0);
    bug("[TEST] amissl_v362 (ROM) = %p\n", lib);
    if (lib) CloseLibrary(lib);
    
    bug("[TEST] Done\n");
    return 0;
}
