/* Raw TCP HTTP GET via Linux syscalls -- save to RAM:test.html */
#include <proto/exec.h>
#include <proto/dos.h>
#include <dos/dos.h>

#define SYS_socket 41
#define SYS_connect 42
#define SYS_write 1
#define SYS_read 0
#define SYS_close 3

static long syscall6(long n, long a1, long a2, long a3, long a4, long a5)
{
    long ret;
    register long r10 asm("r10") = a4;
    register long r8 asm("r8") = a5;
    __asm__ __volatile__("syscall"
        : "=a"(ret)
        : "a"(n), "D"(a1), "S"(a2), "d"(a3), "r"(r10), "r"(r8)
        : "rcx","r11","memory");
    return ret;
}
static long syscall(long n, long a1, long a2, long a3) { return syscall6(n,a1,a2,a3,0,0); }

int main(void)
{
    Printf("[R1] raw HTTP test\n");

    /* Connect to aminet.net:80 (49.13.59.190) */
    unsigned char raddr[16] = {2,0, 0x00,0x50, 49,13,59,190, 0,0,0,0,0,0,0,0};
    int fd = (int)syscall(SYS_socket, 2, 1, 0);
    Printf("[R2] socket=%d\n", fd);
    if (fd < 0) return 1;

    Printf("[R3] connecting...\n");
    int rc = (int)syscall(SYS_connect, fd, (long)raddr, 16);
    if (rc < 0) { Printf("connect failed errno=%d\n", -rc); return 1; }
    Printf("[R4] connected!\n");

    /* Send HTTP GET */
    const char *req = "GET /pub/aminet/Links/a-e.html HTTP/1.0\r\nHost: aminet.net\r\n\r\n";
    int reqlen = 0; while (req[reqlen]) reqlen++;
    syscall(SYS_write, fd, (long)req, reqlen);
    Printf("[R5] request sent\n");

    /* Read response into buffer */
    char buf[8192];
    int total = 0;
    while (1) {
        int n = (int)syscall(SYS_read, fd, (long)(buf + total), sizeof(buf) - total);
        if (n <= 0) break;
        total += n;
        if (total >= (int)sizeof(buf)) break;
    }
    buf[total] = '\0';
    Printf("[R6] received %d bytes\n", total);

    /* Save to RAM:test.html */
    BPTR fh = Open("RAM:test.html", MODE_NEWFILE);
    if (fh) {
        Write(fh, buf, total);
        Close(fh);
        Printf("[R7] Saved to RAM:test.html\n");
    } else {
        Printf("[R7] Failed to open RAM:test.html\n");
    }

    syscall(SYS_close, fd, 0, 0);
    Printf("[R8] Done\n");
    return 0;
}
