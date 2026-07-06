#include <proto/exec.h>
#include <proto/dos.h>

int main(void)
{
    struct Library *sb;
    Printf("Opening bsdsocket.library...\n");
    sb = OpenLibrary("bsdsocket.library", 4);
    if (!sb) {
        Printf("FAILED\n");
        return 1;
    }
    Printf("OK: %p\n", sb);
    CloseLibrary(sb);
    Printf("Done\n");
    return 0;
}
