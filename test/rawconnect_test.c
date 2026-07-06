/* Test raw Linux syscall TCP connect - localhost */
#include <proto/exec.h>
#include <proto/dos.h>

#define SYS_socket 41
#define SYS_connect 42
#define SYS_close 3
#define SYS_write 1

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
    Printf("[R1] Start\n");

    /* Try connecting to localhost:9999 (fast fail) */
    unsigned char addr[16] = {2,0, 0x27,0x0f, 127,0,0,1, 0,0,0,0,0,0,0,0}; /* AF_INET=2, port=9999, ip=127.0.0.1 */

    int fd = (int)syscall(SYS_socket, 2, 1, 0);
    Printf("[R2] socket=%d\n", fd);
    if (fd < 0) { Printf("socket failed\n"); return 1; }

    Printf("[R3] connecting to 127.0.0.1:9999...\n");
    int ret = (int)syscall(SYS_connect, fd, (long)addr, 16);
    Printf("[R4] connect=%d\n", ret);
    if (ret < 0) {
        int e = -ret;
        Printf("[R5] connect failed errno=%d\n", e);
        if (e == 111) Printf("[R6] ECONNREFUSED - expected, Linux syscalls work!\n");
        else if (e == 110) Printf("[R6] Timed out\n");
        else if (e == 101) Printf("[R6] Network unreachable\n");
    } else {
        Printf("[R5] connected!\n");
    }

    syscall(SYS_close, fd, 0, 0);
    Printf("[R7] Done\n");
    return 0;
}
