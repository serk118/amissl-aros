#include <proto/exec.h>
#include <proto/dos.h>
#include <proto/amisslmaster.h>
#include <libraries/amisslmaster.h>
#include <stdio.h>
#include <string.h>

struct Library *AmiSSLMasterBase = NULL;
struct ExecBase *SysBase = NULL;
struct DosLibrary *DOSBase = NULL;

static void test_open(CONST_STRPTR name, ULONG version)
{
    struct Library *lib = OpenLibrary(name, version);
    printf("  OpenLibrary(\"%s\", %lu) = %p", name, version, lib);
    if (lib) {
        printf("  [OK] lib_Version=%u lib_Revision=%u",
               lib->lib_Version, lib->lib_Revision);
        CloseLibrary(lib);
    } else {
        printf("  [FAIL]");
    }
    printf("\n");
}

static void scan_file(CONST_STRPTR path)
{
    BPTR fh = Open(path, MODE_OLDFILE);
    if (!fh) {
        printf("  Cannot open: %s\n", path);
        return;
    }
    UBYTE buf[512];
    LONG n, total = 0;
    while ((n = Read(fh, buf, sizeof(buf))) > 0) {
        for (LONG i = 0; i < n - 72; i++) {
            /* Check for RTC_MATCHWORD in both byte orders */
            if ((buf[i] == 0xFC && buf[i+1] == 0x4A) ||
                (buf[i] == 0x4A && buf[i+1] == 0xFC)) {
                printf("  ROMTag candidate at offset %ld\n", total + i);
            }
        }
        total += n;
    }
    Close(fh);
    printf("  Scanned %ld bytes\n", total);
}

int main(void)
{
    printf("=== AmiSSL Loading Diagnostic ===\n\n");

    printf("1. Basic OpenLibrary tests:\n");
    test_open("amisslmaster.library", 0);
    test_open("amisslmaster.library", 1);
    test_open("libs:amisslmaster.library", 0);
    test_open("AmiSSL/amissl_v362.library", 0);
    test_open("amissl_v362.library", 0);

    printf("\n2. FindResident checks:\n");
    printf("  FindResident(\"amisslmaster.library\") = %p\n",
           FindResident("amisslmaster.library"));
    printf("  FindResident(\"amissl_v362.library\") = %p\n",
           FindResident("amissl_v362.library"));

    printf("\n3. Disk file ROMTag scan:\n");
    scan_file("LIBS:amisslmaster.library");
    scan_file("LIBS:AmiSSL/amissl_v362.library");

    printf("\n4. Attempting to load amissl_v362 via master library...\n");
    AmiSSLMasterBase = OpenLibrary("amisslmaster.library", 0);
    if (AmiSSLMasterBase) {
        printf("  master library opened, calling InitAmiSSLMaster\n");
        InitAmiSSLMaster(AMISSL_V2, TRUE);
        CloseLibrary(AmiSSLMasterBase);
    } else {
        printf("  master library not available\n");
    }

    printf("\n=== Done ===\n");
    return 0;
}
