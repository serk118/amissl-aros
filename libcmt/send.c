#include <sys/types.h>
#include <netinet/in.h>

#include "libcmt.h"

#if defined(__AROS__)
#include <proto/bsdsocket.h>
int (send)(int sockfd, const void *buf, int len, int flags)
{
  extern struct Library *SocketBase;
  if(SocketBase) return send(sockfd, buf, len, flags);
  else return -1;
}
#elif defined(__amigaos4__)
#undef __USE_INLINE__
#include <proto/bsdsocket.h>
ssize_t (send)(int sockfd, const void *buf, size_t len, int flags)
{
  GETISOCKET();
  if(ISocket) return ISocket->send(sockfd, (void *)buf, len, flags);
  else return -1;
}
#elif defined(__MORPHOS__)
LONG (send)(LONG sockfd, const UBYTE *buf, LONG len, LONG flags)
{
  GETSOCKET();
  if(SocketBase) return send(sockfd, buf, len, flags);
  else return -1;
}
#else
#define AMITCP_NEW_NAMES
#include <errno.h>
#include "multitcp.h"
#include <internal/amissl.h>

ssize_t (send)(int sockfd, const void *buf, size_t len, int flags)
{
	GETSTATE();

	if (state->SocketBase)
	{
		switch(state->TCPIPStackType)
		{
			case TCPIP_Roadshow:
			case TCPIP_Miami:
			case TCPIP_AmiTCP:
			case TCPIP_MLink:
				return amitcp_Send(sockfd, buf, len, flags);
				break;
			case TCPIP_IN225:
				return in225_send(sockfd, buf, len, flags);
				break;
			case TCPIP_Termite:
				return termite_send(sockfd, (void *)buf, len, flags);
				break;
		}
	}

	return(-1);
}
#endif
