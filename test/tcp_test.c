#include <proto/exec.h>
#include <proto/dos.h>
#include <proto/bsdsocket.h>
#include <netinet/in.h>
#include <sys/socket.h>

struct Library *SocketBase = NULL;
BPTR outf;

static int my_strlen(const char *s)
{
    int n = 0;
    while (*s++) n++;
    return n;
}

static void say(CONST_STRPTR msg)
{
    Write(outf, msg, my_strlen(msg));
}

int main(void)
{
    int sock;
    int ret;

    outf = Open("SYS:test_output2.txt", MODE_NEWFILE);
    if (!outf) return 1;

    say("[1] Opening bsdsocket.library...\n");
    SocketBase = OpenLibrary("bsdsocket.library", 4);
    if (!SocketBase) {
        say("[1] FAILED\n");
        Close(outf);
        return 1;
    }
    say("[2] OK\n");

    say("[3] Calling socket()...\n");
    sock = socket(AF_INET, SOCK_STREAM, 0);
    say("[4] socket() returned\n");

    {
        char buf[64];
    }

    if (sock < 0) {
        say("[5] FAILED: socket=<");
        CloseLibrary(SocketBase);
        Close(outf);
        return 1;
    }
    say("[5] OK: socket=");
    CloseSocket(sock);
    CloseLibrary(SocketBase);
    say("[6] Done\n");
    Close(outf);
    return 0;
}
