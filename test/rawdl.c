/* Raw TCP download via Linux syscalls with DNS resolution
   Usage: rawdl <host> <port> <path> <outfile>
   Example: rawdl aminet.net 80 /pub/aminet/Links/a-e.html RAM:test.html
*/
#include <proto/exec.h>
#include <proto/dos.h>
#include <dos/dos.h>

static void my_memset(void *p, int c, int n)
{
    unsigned char *q = (unsigned char *)p;
    while (n--) *q++ = (unsigned char)c;
}

#define SYS_socket 41
#define SYS_connect 42
#define SYS_write 1
#define SYS_read 0
#define SYS_close 3
#define SYS_bind 49
#define SYS_sendto 44
#define SYS_recvfrom 45
#define SYS_open 2

#define AF_INET 2
#define SOCK_STREAM 1
#define SOCK_DGRAM 2

static long syscall7(long n, long a1, long a2, long a3, long a4, long a5, long a6)
{
    long ret;
    register long r10 asm("r10") = a4;
    register long r8 asm("r8") = a5;
    register long r9 asm("r9") = a6;
    __asm__ __volatile__("syscall"
        : "=a"(ret)
        : "a"(n), "D"(a1), "S"(a2), "d"(a3), "r"(r10), "r"(r8), "r"(r9)
        : "rcx","r11","memory");
    return ret;
}
static long syscall6(long n, long a1, long a2, long a3, long a4, long a5) { return syscall7(n,a1,a2,a3,a4,a5,0); }
static long syscall(long n, long a1, long a2, long a3) { return syscall7(n,a1,a2,a3,0,0,0); }

/* Parse a dotted IP string (e.g. "49.13.59.190") to 4-byte binary */
static int parse_ip(const char *s, unsigned char *ip)
{
    int v, n = 0;
    while (*s) {
        v = 0;
        while (*s >= '0' && *s <= '9') { v = v * 10 + (*s - '0'); s++; }
        if (n >= 4) return 0;
        ip[n++] = (unsigned char)v;
        if (*s == '.') s++;
        else if (*s) return 0;
    }
    return n == 4;
}

/* Simple DNS A-record query via UDP to 8.8.8.8:53 */
static int dns_query(const char *hostname, unsigned char *ip)
{
    unsigned char pkt[512];
    unsigned char rsp[512];
    int i, j, pos;

    /* Build DNS query header */
    pkt[0] = 0x12; pkt[1] = 0x34; /* ID */
    pkt[2] = 0x01; pkt[3] = 0x00; /* flags: recursion desired */
    pkt[4] = 0x00; pkt[5] = 0x01; /* QDCOUNT: 1 question */
    pkt[6] = 0x00; pkt[7] = 0x00; /* ANCOUNT */
    pkt[8] = 0x00; pkt[9] = 0x00; /* NSCOUNT */
    pkt[10] = 0x00; pkt[11] = 0x00; /* ARCOUNT */

    /* Encode hostname as DNS labels */
    pos = 12;
    i = 0;
    while (hostname[i]) {
        j = i;
        while (hostname[j] && hostname[j] != '.') j++;
        pkt[pos++] = j - i;
        while (i < j) { pkt[pos++] = hostname[i++]; }
        if (hostname[j] == '.') i = j + 1;
    }
    pkt[pos++] = 0;

    /* QTYPE: A (1), QCLASS: IN (1) */
    pkt[pos++] = 0; pkt[pos++] = 1;
    pkt[pos++] = 0; pkt[pos++] = 1;

    /* Create UDP socket and send query to 8.8.8.8:53 */
    int fd = (int)syscall(SYS_socket, AF_INET, SOCK_DGRAM, 0);
    if (fd < 0) return 0;

    unsigned char sa[16] = {2,0, 0,0x35, 8,8,8,8, 0,0,0,0,0,0,0,0};
    sa[2] = 0; sa[3] = 0x35;

    int n = (int)syscall7(SYS_sendto, fd, (long)pkt, pos, 0, (long)sa, 16);
    if (n < 0) { syscall(SYS_close, fd,0,0); return 0; }

    /* Receive response (timeout via loop) */
    for (i = 0; i < 200; i++) {
        long r = syscall7(SYS_recvfrom, fd, (long)rsp, sizeof(rsp), 0, 0, 0);
        if (r > 0) {
            /* Parse response - skip header, find A record */
            int rcode = rsp[3] & 0x0f;
            if (rcode != 0) { syscall(SYS_close, fd,0,0); return 0; }
            int ancnt = (rsp[6] << 8) | rsp[7];
            if (ancnt == 0) { syscall(SYS_close, fd,0,0); return 0; }
            /* Skip question section */
            pos = 12;
            while (pos < r && rsp[pos] != 0) {
                if ((rsp[pos] & 0xc0) == 0xc0) pos += 2;
                else pos += rsp[pos] + 1;
            }
            pos += 5;
            /* Scan answer records for A record */
            for (j = 0; j < ancnt; j++) {
                /* Skip name pointer/len */
                if ((rsp[pos] & 0xc0) == 0xc0) pos += 2;
                else { while (pos < r && rsp[pos]) pos++; pos++; }
                int type = (rsp[pos] << 8) | rsp[pos+1]; pos += 2;
                int cls = (rsp[pos] << 8) | rsp[pos+1]; pos += 2;
                int ttl = (rsp[pos] << 24) | (rsp[pos+1] << 16) | (rsp[pos+2] << 8) | rsp[pos+3]; pos += 4;
                int rdlen = (rsp[pos] << 8) | rsp[pos+1]; pos += 2;
                (void)ttl;
                if (type == 1 && cls == 1 && rdlen == 4) {
                    ip[0] = rsp[pos]; ip[1] = rsp[pos+1];
                    ip[2] = rsp[pos+2]; ip[3] = rsp[pos+3];
                    syscall(SYS_close, fd,0,0);
                    return 1;
                }
                pos += rdlen;
            }
            break;
        }
        /* delay ~5ms (busy-loop for simplicity) */
        for (volatile int k = 0; k < 5000000; k++);
    }
    syscall(SYS_close, fd,0,0);
    return 0;
}

static int my_strlen(const char *s)
{
    int n = 0;
    while (*s++) n++;
    return n;
}

static void my_memcpy(unsigned char *d, const unsigned char *s, int n)
{
    while (n--) *d++ = *s++;
}

int main(int argc, char *argv[])
{
    const char *host, *path, *outfile;
    int port;
    unsigned char ip[4];
    char buf[16384];
    int total;
    BPTR fh;

    if (argc < 5) {
        Printf("Usage: rawdl <host> <port> <path> <outfile>\n");
        Printf("  e.g. rawdl aminet.net 80 /pub/aminet/Links/a-e.html RAM:test.html\n");
        return 1;
    }

    host = argv[1];
    port = 0;
    { const char *p = argv[2]; while (*p) { port = port * 10 + (*p - '0'); p++; } }
    path = argv[3];
    outfile = argv[4];

    Printf("[D1] Resolving %s...\n", host);

    if (!parse_ip(host, ip)) {
        if (!dns_query(host, ip)) {
            Printf("[D1a] DNS resolution failed\n");
            return 1;
        }
        Printf("[D1b] Resolved to %d.%d.%d.%d\n", ip[0], ip[1], ip[2], ip[3]);
    } else {
        Printf("[D1b] Using IP %d.%d.%d.%d\n", ip[0], ip[1], ip[2], ip[3]);
    }

    /* Build sockaddr_in */
    unsigned char raddr[16];
    my_memset(raddr, 0, 16);
    raddr[0] = 2; raddr[1] = 0;
    raddr[2] = (unsigned char)(port >> 8);
    raddr[3] = (unsigned char)(port & 0xff);
    raddr[4] = ip[0]; raddr[5] = ip[1];
    raddr[6] = ip[2]; raddr[7] = ip[3];

    Printf("[D2] Connecting to %s:%d...\n", host, port);
    int fd = (int)syscall(SYS_socket, AF_INET, SOCK_STREAM, 0);
    if (fd < 0) { Printf("socket failed\n"); return 1; }

    int rc = (int)syscall(SYS_connect, fd, (long)raddr, 16);
    if (rc < 0) {
        Printf("connect failed errno=%d\n", -rc);
        syscall(SYS_close, fd,0,0);
        return 1;
    }
    Printf("[D3] Connected!\n");

    /* Build and send HTTP GET */
    {
        char req[1024];
        int pos = 0, i;
        const char *get = "GET ";
        const char *httpver = " HTTP/1.0\r\nHost: ";
        const char *crlf = "\r\n\r\n";
        for (i = 0; get[i]; i++) req[pos++] = get[i];
        for (i = 0; path[i]; i++) req[pos++] = path[i];
        for (i = 0; httpver[i]; i++) req[pos++] = httpver[i];
        for (i = 0; host[i]; i++) req[pos++] = host[i];
        for (i = 0; crlf[i]; i++) req[pos++] = crlf[i];
        syscall(SYS_write, fd, (long)req, pos);
    }
    Printf("[D4] Request sent\n");

    /* Read response */
    total = 0;
    my_memset(buf, 0, sizeof(buf));
    while (1) {
        int n = (int)syscall(SYS_read, fd, (long)(buf + total), sizeof(buf) - total - 1);
        if (n <= 0) break;
        total += n;
        if (total >= (int)sizeof(buf) - 1) break;
    }
    buf[total] = '\0';
    Printf("[D5] Received %d bytes\n", total);

    if (total == 0) {
        Printf("[D6] No data received\n");
        syscall(SYS_close, fd,0,0);
        return 1;
    }

    /* Strip HTTP headers: find \r\n\r\n */
    int start = 0;
    {
        int i;
        for (i = 0; i < total - 3; i++) {
            if (buf[i] == '\r' && buf[i+1] == '\n' && buf[i+2] == '\r' && buf[i+3] == '\n') {
                start = i + 4;
                break;
            }
        }
    }

    /* Save body to file */
    fh = Open(outfile, MODE_NEWFILE);
    if (fh) {
        int body_len = total - start;
        if (body_len > 0) {
            Write(fh, buf + start, body_len);
            Printf("[D6] Saved %d bytes to %s\n", body_len, outfile);
        } else {
            Write(fh, buf, total);
            Printf("[D6] Saved %d bytes (no headers stripped) to %s\n", total, outfile);
        }
        Close(fh);
    } else {
        Printf("[D6] Failed to open %s\n", outfile);
    }

    syscall(SYS_close, fd,0,0);
    Printf("[D7] Done\n");
    return 0;
}
