#include <proto/exec.h>
#include <proto/dos.h>
#include <proto/bsdsocket.h>
#include <stdio.h>

struct Library *SocketBase = NULL;

int main(void)
{
    printf("[BSD] Opening bsdsocket.library...\n");
    SocketBase = OpenLibrary("bsdsocket.library", 4);
    if (!SocketBase) {
        printf("[BSD] FAILED: Cannot open bsdsocket.library\n");
        return 1;
    }
    printf("[BSD] OK: SocketBase=%p\n", SocketBase);
    CloseLibrary(SocketBase);
    printf("[BSD] Done\n");
    return 0;
}
