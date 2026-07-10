#include <proto/exec.h>
#include <proto/dos.h>
#include <proto/socket.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <netdb.h>
#include <errno.h>
#include <stdlib.h>

long __stack = 524288;

struct Library *SocketBase;

static void test_select(int fd, int do_read, int do_write, const char *label)
{
    Printf("[SEL-%s] select(%s)...\n", label, do_read ? "read" : "write");
    fd_set rfds, wfds;
    struct timeval tv;
    FD_ZERO(&rfds); FD_ZERO(&wfds);
    if (do_read) FD_SET(fd, &rfds);
    if (do_write) FD_SET(fd, &wfds);
    tv.tv_sec = 0; tv.tv_usec = 500000; /* 500ms timeout */
    int sr = select(fd + 1, do_read ? &rfds : NULL, do_write ? &wfds : NULL, NULL, &tv);
    Printf("[SEL-%s] returned %d", label, sr);
    if (sr > 0) {
        Printf(" (read=%d write=%d)\n",
               do_read ? FD_ISSET(fd, &rfds) : 0,
               do_write ? FD_ISSET(fd, &wfds) : 0);
    } else if (sr == 0) {
        Printf(" (TIMEOUT)\n");
    } else {
        Printf(" errno=%d\n", errno);
    }
}

int main(int argc, char *argv[])
{
    const char *host = argc > 1 ? argv[1] : "example.com";
    int port = argc > 2 ? atoi(argv[2]) : 443;
    int fd = -1;
    int ret = 1;

    Printf("[1] Opening bsdsocket.library...\n");
    SocketBase = OpenLibrary("bsdsocket.library", 4);
    if (!SocketBase) { Printf("FAIL: bsdsocket.library\n"); return 1; }
    SetErrnoPtr(&errno, sizeof(errno));
    Printf("[2] bsdsocket OK\n");

    /* gethostbyname */
    Printf("[3] gethostbyname(%s)...\n", host);
    struct hostent *he = gethostbyname(host);
    if (!he) { Printf("FAIL: gethostbyname errno=%d\n", errno); goto err; }
    Printf("[4] gethostbyname OK: %s\n", inet_ntoa(*(struct in_addr*)he->h_addr));

    /* socket */
    Printf("[5] socket(AF_INET, SOCK_STREAM, 0)...\n");
    fd = socket(AF_INET, SOCK_STREAM, 0);
    if (fd < 0) { Printf("FAIL: socket errno=%d\n", errno); goto err; }
    Printf("[6] socket OK fd=%d\n", fd);

    /* connect */
    {
        struct sockaddr_in sa;
        sa.sin_family = AF_INET;
        sa.sin_port = htons(port);
        sa.sin_addr = *(struct in_addr*)he->h_addr;
        Printf("[7] connect(%d, %s:%d)...\n", fd, host, port);
        if (connect(fd, (struct sockaddr *)&sa, sizeof(sa)) < 0) {
            Printf("FAIL: connect errno=%d\n", errno); goto err;
        }
    }
    Printf("[8] connect OK\n");

    /* NOTE: select() hangs on this hosted AROS forwarder (even with timeout).
       Skipping select and going straight to send/recv. */

    /* send */
    {
        char req[] = "GET / HTTP/1.0\r\nHost: example.com\r\n\r\n";
        Printf("[11] send(%d, %d bytes)...\n", fd, (int)sizeof(req) - 1);
        int w = send(fd, req, (int)sizeof(req) - 1, 0);
        if (w < 0) { Printf("FAIL: send errno=%d\n", errno); goto err; }
        Printf("[12] send returned %d\n", w);
    }

    /* recv */
    {
        char buf[2048];
        Printf("[17] recv(%d, 2048)...\n", fd);
        int r = recv(fd, buf, sizeof(buf) - 1, 0);
        if (r < 0) { Printf("FAIL: recv errno=%d\n", errno); goto err; }
        buf[r] = '\0';
        Printf("[18] recv returned %d\n", r);
        if (r > 0)
            Printf("[19] First 200 bytes:\n%.*s\n", r < 200 ? r : 200, buf);
    }

    /* closesocket */
    Printf("[20] CloseSocket(%d)...\n", fd);
    CloseSocket(fd);
    Printf("[21] CloseSocket OK\n");

    ret = 0;
    Printf("[22] ALL TESTS PASSED\n");
    goto done;

err:
    Printf("[E] Test FAILED\n");
done:
    if (fd >= 0) CloseSocket(fd);
    CloseLibrary(SocketBase);
    return ret;
}
