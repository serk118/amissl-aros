#include <exec/types.h>
#include <exec/resident.h>
#include <proto/exec.h>
#include <proto/dos.h>
#include <proto/amissl.h>
#include <proto/amisslmaster.h>
#include <libraries/amisslmaster.h>
#include <libraries/amissl.h>

#ifdef __AROS__
#define SAVEDS
#else
#define SAVEDS __saveds
#endif

struct Library *AmiSSLMasterBase;
struct Library *AmiSSLBase;
struct Library *AmiSSLExtBase;
struct Library *SocketBase;

int main(void)
{
    LONG err;
    struct Library *lib;
    BPTR fh;
    struct Resident *res;

    Printf("\n============================================\n");
    Printf("[DIAG] AmiSSL v5.27 AROS Diagnostic Test\n");
    Printf("============================================\n\n");

    /* Step 1: Check library files on disk */
    Printf("[DIAG] --- Step 1: Checking library files on disk ---\n\n");

    fh = Open("LIBS:amisslmaster.library", MODE_OLDFILE);
    Printf("[DIAG] LIBS:amisslmaster.library: ");
    Printf(fh ? "EXISTS\n" : "NOT FOUND\n");
    if (fh) Close(fh);

    fh = Open("LIBS:AmiSSL/amissl_v362.library", MODE_OLDFILE);
    Printf("[DIAG] LIBS:AmiSSL/amissl_v362.library: ");
    Printf(fh ? "EXISTS\n" : "NOT FOUND\n");
    if (fh) Close(fh);

    fh = Open("LIBS:AmiSSL/amissl_v361.library", MODE_OLDFILE);
    Printf("[DIAG] LIBS:AmiSSL/amissl_v361.library: ");
    Printf(fh ? "EXISTS\n" : "NOT FOUND\n");
    if (fh) Close(fh);

    fh = Open("LIBS:AmiSSL/amissl_v360.library", MODE_OLDFILE);
    Printf("[DIAG] LIBS:AmiSSL/amissl_v360.library: ");
    Printf(fh ? "EXISTS\n" : "NOT FOUND\n");
    if (fh) Close(fh);

    Printf("\n");

    /* Step 2: Check if libraries are resident */
    Printf("[DIAG] --- Step 2: Checking resident libraries ---\n");
    res = FindResident("amisslmaster.library");
    Printf("[DIAG] FindResident(amisslmaster.library): ");
    Printf(res ? "FOUND\n" : "NULL\n");
    res = FindResident("amissl_v362.library");
    Printf("[DIAG] FindResident(amissl_v362.library): ");
    Printf(res ? "FOUND\n" : "NULL\n");
    res = FindResident("amissl.library");
    Printf("[DIAG] FindResident(amissl.library): ");
    Printf(res ? "FOUND\n" : "NULL\n");
    Printf("\n");

    /* Step 3: Try opening bsdsocket.library */
    Printf("[DIAG] --- Step 3: Opening bsdsocket.library ---\n");
    SocketBase = OpenLibrary("bsdsocket.library", 4);
    Printf("[DIAG] bsdsocket.library v4: ");
    Printf(SocketBase ? "OK\n" : "FAIL\n");
    Printf("\n");

    /* Step 4: Try opening amisslmaster.library */
    Printf("[DIAG] --- Step 4: Opening amisslmaster.library ---\n");
    lib = OpenLibrary("amisslmaster.library", 0);
    Printf("[DIAG] amisslmaster.library v0: ");
    Printf(lib ? "OK\n" : "FAIL\n");
    if (lib) CloseLibrary(lib);

    lib = OpenLibrary("amisslmaster.library", 5);
    Printf("[DIAG] amisslmaster.library v5: ");
    Printf(lib ? "OK\n" : "FAIL\n");
    if (lib) CloseLibrary(lib);

    AmiSSLMasterBase = OpenLibrary("amisslmaster.library", 5);
    Printf("[DIAG] AmiSSLMasterBase (v5): ");
    Printf(AmiSSLMasterBase ? "OK\n" : "FAIL\n");
    if (!AmiSSLMasterBase) {
        AmiSSLMasterBase = OpenLibrary("amisslmaster.library", 0);
        Printf("[DIAG] AmiSSLMasterBase (v0 fallback): ");
        Printf(AmiSSLMasterBase ? "OK\n" : "FAIL\n");
    }
    if (!AmiSSLMasterBase) {
        Printf("[DIAG] FATAL: Cannot open amisslmaster.library at all!\n");
        goto done;
    }
    Printf("\n");

    /* Step 5: Try opening amissl_v362.library directly */
    Printf("[DIAG] --- Step 5: Opening amissl_v362.library directly ---\n");
    lib = OpenLibrary("amissl_v362.library", 0);
    Printf("[DIAG] amissl_v362.library (no path) v0: ");
    Printf(lib ? "OK\n" : "FAIL\n");
    if (lib) CloseLibrary(lib);

    lib = OpenLibrary("LIBS:AmiSSL/amissl_v362.library", 0);
    Printf("[DIAG] LIBS:AmiSSL/amissl_v362.library v0: ");
    Printf(lib ? "OK\n" : "FAIL\n");
    if (lib) CloseLibrary(lib);

    lib = OpenLibrary("LIBS:AmiSSL/amissl_v362.library", 5);
    Printf("[DIAG] LIBS:AmiSSL/amissl_v362.library v5: ");
    Printf(lib ? "OK\n" : "FAIL\n");
    if (lib) CloseLibrary(lib);
    Printf("\n");

    /* Step 6: Test OpenAmiSSLTagList directly (no variadic macro, build tag list manually) */
    Printf("[DIAG] --- Step 6: Testing OpenAmiSSLTagList (manual taglist) ---\n");

    if (!SocketBase) {
        SocketBase = OpenLibrary("bsdsocket.library", 4);
        Printf("[DIAG] bsdsocket.library (retry): ");
        Printf(SocketBase ? "OK\n" : "FAIL\n");
    }

    if (!SocketBase) {
        Printf("[DIAG] FATAL: No bsdsocket.library, skipping OpenAmiSSLTags\n");
        goto done;
    }

    {
        /* Build tag list manually using IPTR to avoid 32-bit truncation on 64-bit */
        struct TagItem tags[12];
        LONG idx = 0;
        IPTR ptr;

        tags[idx].ti_Tag = AmiSSL_UsesOpenSSLStructs;
        tags[idx].ti_Data = FALSE;
        idx++;

        tags[idx].ti_Tag = AmiSSL_GetAmiSSLBase;
        ptr = (IPTR)&AmiSSLBase;
        tags[idx].ti_Data = (ULONG)(ptr & 0xFFFFFFFF);
        Printf("[DIAG]   &AmiSSLBase = ");
        Printf((ptr & 0xFFFFFFFF) == (IPTR)&AmiSSLBase ? "LOW32 OK\n" : "LOW32 TRUNCATED - wont work\n");
        idx++;

        tags[idx].ti_Tag = AmiSSL_GetAmiSSLExtBase;
        ptr = (IPTR)&AmiSSLExtBase;
        tags[idx].ti_Data = (ULONG)(ptr & 0xFFFFFFFF);
        idx++;

        tags[idx].ti_Tag = AmiSSL_SocketBase;
        ptr = (IPTR)SocketBase;
        tags[idx].ti_Data = (ULONG)(ptr & 0xFFFFFFFF);
        idx++;

        tags[idx].ti_Tag = AmiSSL_ErrNoPtr;
        ptr = (IPTR)&errno;
        tags[idx].ti_Data = (ULONG)(ptr & 0xFFFFFFFF);
        idx++;

        tags[idx].ti_Tag = TAG_DONE;
        tags[idx].ti_Data = 0;
        idx++;

        Printf("[DIAG]   Calling OpenAmiSSLTagList with manual taglist...\n");

        err = OpenAmiSSLTagList(AMISSL_CURRENT_VERSION, tags);
    }

    if (err == 0) {
        Printf("[DIAG] OpenAmiSSLTagList: SUCCESS\n");
        if (AmiSSLBase)
            Printf("[DIAG] AmiSSLBase initialized\n");
    } else if (err == 1) {
        Printf("[DIAG] FAIL: InitAmiSSLMaster failed (APIVersion too high)\n");
    } else if (err == 2) {
        Printf("[DIAG] FAIL: OpenAmiSSL() couldn't locate amissl_v362.library\n");
    } else if (err == 3) {
        Printf("[DIAG] FAIL: InitAmiSSLA() failed (OpenSSL init crashed)\n");
    } else {
        Printf("[DIAG] FAIL: Unknown error code\n");
    }

    /* Step 7: Also test with the variadic macro (which has the truncation bug) */
    Printf("[DIAG] --- Step 7: Testing OpenAmiSSLTags macro (variadic) ---\n");
    AmiSSLBase = NULL;
    AmiSSLExtBase = NULL;
    err = OpenAmiSSLTags(AMISSL_CURRENT_VERSION,
                         AmiSSL_UsesOpenSSLStructs, FALSE,
                         AmiSSL_GetAmiSSLBase, &AmiSSLBase,
                         AmiSSL_GetAmiSSLExtBase, &AmiSSLExtBase,
                         AmiSSL_SocketBase, SocketBase,
                         AmiSSL_ErrNoPtr, &errno,
                         TAG_DONE);

    if (err == 0) {
        Printf("[DIAG] OpenAmiSSLTags macro: SUCCESS\n");
    } else if (err == 1) {
        Printf("[DIAG] OpenAmiSSLTags macro: InitAmiSSLMaster failed\n");
    } else if (err == 2) {
        Printf("[DIAG] OpenAmiSSLTags macro: amissl_v362.library not found\n");
    } else if (err == 3) {
        Printf("[DIAG] OpenAmiSSLTags macro: InitAmiSSLA failed\n");
    } else {
        Printf("[DIAG] OpenAmiSSLTags macro: Unknown error\n");
    }

done:
    Printf("\n============================================\n");
    Printf("[DIAG] Diagnostic test complete.\n");
    Printf("============================================\n");

    if (AmiSSLBase)
        CloseAmiSSL();
    if (AmiSSLMasterBase)
        CloseLibrary(AmiSSLMasterBase);
    if (SocketBase)
        CloseLibrary(SocketBase);

    return 0;
}
