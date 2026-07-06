#include <proto/exec.h>
#include <proto/dos.h>
#include <stdio.h>
#include <string.h>

struct Library *AmiSSLMasterBase = NULL;
struct Library *AmiSSLBase = NULL;

int main(void)
{
    BPTR fh;
    UBYTE buf[4096];
    LONG i, found = 0;
    LONG filesize;

    printf("=== AmiSSL Library Diagnostic ===\n\n");

    /* 1. Check if library is in Exec library list */
    printf("1. Checking Exec library list...\n");
    AmiSSLMasterBase = OpenLibrary("amisslmaster.library", 0);
    printf("   OpenLibrary(amisslmaster.library, 0) = %p\n", AmiSSLMasterBase);
    if (AmiSSLMasterBase)
        CloseLibrary(AmiSSLMasterBase);

    AmiSSLBase = OpenLibrary("AmiSSL/amissl_v362.library", 0);
    printf("   OpenLibrary(AmiSSL/amissl_v362.library, 0) = %p\n", AmiSSLBase);
    if (AmiSSLBase)
        CloseLibrary(AmiSSLBase);

    /* 2. Check if resident exists */
    printf("\n2. Checking Resident list...\n");
    {
        struct Resident *res;
        res = FindResident("amisslmaster.library");
        printf("   FindResident(amisslmaster.library) = %p\n", res);
        res = FindResident("amissl_v362.library");
        printf("   FindResident(amissl_v362.library) = %p\n", res);
    }

    /* 3. Scan the library file for ROMTag pattern */
    printf("\n3. Scanning library files for ROMTag (0x4AFC)...\n");

    fh = Open("LIBS:amisslmaster.library", MODE_OLDFILE);
    if (fh)
    {
        printf("   Scanning amisslmaster.library...\n");
        filesize = 0;
        while ((i = Read(fh, buf, sizeof(buf))) > 0)
        {
            LONG j;
            for (j = 0; j < i - 8; j++)
            {
                if (buf[j] == 0xFC && buf[j+1] == 0x4A)
                {
                    /* Found potential ROMTag */
                    UBYTE *rt = &buf[j];
                    printf("   ROMTag found at file offset 0x%08x\n", filesize + j);
                    printf("     rt_MatchWord: 0x%04x (expected 0x4AFC)\n",
                           rt[0] | (rt[1] << 8));
                    printf("     rt_MatchTag:  0x%02x%02x%02x%02x%02x%02x%02x%02x\n",
                           rt[8], rt[9], rt[10], rt[11], rt[12], rt[13], rt[14], rt[15]);
                    printf("     rt_Flags:     0x%02x\n", rt[24]);
                    printf("     rt_Type:      %d (NT_LIBRARY=%d)\n", rt[26], NT_LIBRARY);
                    found++;
                    break;
                }
            }
            filesize += i;
        }
        Close(fh);
        if (!found)
            printf("   No ROMTag found!\n");
    }
    else
    {
        printf("   Cannot open LIBS:amisslmaster.library\n");
    }

    fh = Open("LIBS:AmiSSL/amissl_v362.library", MODE_OLDFILE);
    if (fh)
    {
        found = 0;
        printf("\n   Scanning AmiSSL/amissl_v362.library...\n");
        filesize = 0;
        while ((i = Read(fh, buf, sizeof(buf))) > 0)
        {
            LONG j;
            for (j = 0; j < i - 8; j++)
            {
                if (buf[j] == 0xFC && buf[j+1] == 0x4A)
                {
                    UBYTE *rt = &buf[j];
                    printf("   ROMTag found at file offset 0x%08x\n", filesize + j);
                    printf("     rt_MatchWord: 0x%04x\n",
                           rt[0] | (rt[1] << 8));
                    printf("     rt_Flags:     0x%02x", rt[24]);
                    if (rt[24] & 0x80) printf(" (RTF_AUTOINIT)");
                    if (rt[24] & 0x01) printf(" (RTF_COLDSTART)");
                    if (rt[24] & 0x02) printf(" (RTF_SINGLETASK)");
                    printf("\n");
                    found++;
                    break;
                }
            }
            filesize += i;
        }
        Close(fh);
        if (!found)
            printf("   No ROMTag found!\n");
    }
    else
    {
        printf("   Cannot open LIBS:AmiSSL/amissl_v362.library\n");
    }

    printf("\n4. Checking library file existence...\n");
    {
        BPTR lock;
        lock = Lock("LIBS:amisslmaster.library", ACCESS_READ);
        if (lock) {
            printf("   amisslmaster.library - FOUND in LIBS:\n");
            LONG size = 0;
            struct FileInfoBlock *fib = AllocDosObject(DOS_FIB, NULL);
            if (fib) {
                if (Examine(lock, fib))
                    size = fib->fib_Size;
                FreeDosObject(DOS_FIB, fib);
            }
            UnLock(lock);
            printf("     File exists, size: %ld bytes\n", size);
        } else {
            printf("   amisslmaster.library - NOT FOUND in LIBS:\n");
        }
    }

    printf("\n=== Diagnostic Complete ===\n");
    return 0;
}
