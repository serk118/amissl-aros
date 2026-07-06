/* AROS runtime support for AmiSSL:
   - gettimeofday: uses exec timer.device instead of broken CRT version
*/
#include <exec/types.h>
#include <exec/memory.h>
#include <proto/exec.h>
#include <sys/time.h>
#include <string.h>

#define TR_GETSYSTIME 2

struct TimerIOReq {
    struct IORequest ior;
    struct timeval tv;
};

int gettimeofday(struct timeval *tp, struct timezone *tzp)
{
    struct MsgPort *port;
    struct TimerIOReq *tr;
    int result = -1;

    port = CreateMsgPort();
    if (port) {
        tr = (struct TimerIOReq *)AllocVec(sizeof(struct TimerIOReq),
                                           MEMF_CLEAR | MEMF_PUBLIC);
        if (tr) {
            if (OpenDevice("timer.device", 1,
                           (struct IORequest *)tr, 0) == 0) {
                tr->ior.io_Command = TR_GETSYSTIME;
                DoIO((struct IORequest *)tr);
                if (tp) {
                    tp->tv_sec = tr->tv.tv_secs;
                    tp->tv_usec = tr->tv.tv_micro;
                }
                if (tzp) {
                    tzp->tz_minuteswest = 0;
                    tzp->tz_dsttime = 0;
                }
                result = 0;
                CloseDevice((struct IORequest *)tr);
            }
            FreeVec(tr);
        }
        DeleteMsgPort(port);
    }
    return result;
}
