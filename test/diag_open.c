#include <proto/exec.h>
#include <proto/dos.h>

int main(void)
{
    struct Library *lib;
    BPTR fh;

    fh = Open("SYS:test_output.txt", MODE_NEWFILE);

    if (fh) Write(fh, "[D1] Start\n", 10);

    lib = OpenLibrary("amissl_v362.library", 0);
    if (fh) {
        if (lib)
            Write(fh, "[D2] amissl_v362=OK\n", 19);
        else
            Write(fh, "[D2] amissl_v362=NULL\n", 21);
    }

    if (lib) {
        if (lib->lib_Version >= 5)
            if (fh) Write(fh, "[D3] version>=5\n", 16);
        CloseLibrary(lib);
    }

    lib = OpenLibrary("amisslmaster.library", 0);
    if (fh) {
        if (lib)
            Write(fh, "[D4] amisslmaster=OK\n", 21);
        else
            Write(fh, "[D4] amisslmaster=NULL\n", 23);
    }
    if (lib) CloseLibrary(lib);

    lib = OpenLibrary("bsdsocket.library", 4);
    if (fh) {
        if (lib)
            Write(fh, "[D5] bsdsocket=OK\n", 18);
        else
            Write(fh, "[D5] bsdsocket=NULL\n", 20);
    }
    if (lib) CloseLibrary(lib);

    if (fh) {
        Write(fh, "[D6] Done\n", 9);
        Close(fh);
    }
    return 0;
}
