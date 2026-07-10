#include <sys/types.h>
#include <netinet/in.h>

#include "libcmt.h"

#if defined(__AROS__)
#include <proto/bsdsocket.h>
int (recv)(int sockfd, void *buf, int len, int flags)
{
  extern struct Library *SocketBase;
  if(SocketBase) return recv(sockfd, buf, len, flags);
  else return -1;
}
#elif defined(__amigaos4__)
#undef __USE_INLINE__
#include <proto/bsdsocket.h>
ssize_t (recv)(int sockfd, void *buf, size_t len, int flags)
{
  GETISOCKET();
  if(ISocket) return ISocket->recv(sockfd, buf, len, flags);
  else return -1;
}
#elif defined(__MORPHOS__)
LONG (recv)(LONG sockfd, UBYTE *buf, LONG len, LONG flags)
{
  GETSOCKET();
  if(SocketBase) return recv(sockfd, buf, len, flags);
  else return -1;
}
#else
#define AMITCP_NEW_NAMES
#include <errno.h>
#include "multitcp.h"
#include <internal/amissl.h>

ssize_t (recv)(int sockfd, void *buf, size_t len, int flags)
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
				return amitcp_Recv(sockfd, buf, len, flags);
				break;
			case TCPIP_IN225:
				return in225_recv(sockfd, buf, len, flags);
				break;
			case TCPIP_Termite:
				return termite_recv(sockfd, buf, len, flags);
				break;
		}
	}

	return(-1);
}
#endif
