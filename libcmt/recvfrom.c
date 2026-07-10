#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

#include "libcmt.h"

#if defined(__AROS__)
#include <proto/bsdsocket.h>
int (recvfrom)(int sockfd, void *buf, int len, int flags,
               struct sockaddr *src_addr, socklen_t *addrlen)
{
  GETSOCKET();
  if(SocketBase) return recvfrom(sockfd, buf, len, flags, src_addr, addrlen);
  else return -1;
}
#elif defined(__amigaos4__)
#undef __USE_INLINE__
#include <proto/bsdsocket.h>
ssize_t (recvfrom)(int sockfd, void *buf, size_t len, int flags,
                   struct sockaddr *src_addr, socklen_t *addrlen)
{
  GETISOCKET();
  if(ISocket) return ISocket->recvfrom(sockfd, buf, len, flags, src_addr, addrlen);
  else return -1;
}
#elif defined(__MORPHOS__)
LONG (recvfrom)(LONG sockfd, UBYTE *buf, LONG len, LONG flags,
                struct sockaddr *src_addr, LONG *addrlen)
{
  GETSOCKET();
  if(SocketBase) return recvfrom(sockfd, buf, len, flags, src_addr, addrlen);
  else return -1;
}
#else
#define AMITCP_NEW_NAMES
#include <errno.h>
#include "multitcp.h"
#include <internal/amissl.h>
ssize_t (recvfrom)(int sockfd, void *buf, size_t len, int flags,
                   struct sockaddr *src_addr, socklen_t *addrlen)
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
				return amitcp_RecvFrom(sockfd, buf, len, flags, src_addr, addrlen);
				break;
			case TCPIP_IN225:
				return in225_recvfrom(sockfd, buf, len, flags, src_addr, addrlen);
				break;
			case TCPIP_Termite:
				return termite_recvfrom(sockfd, buf, len, flags, src_addr, addrlen);
				break;
		}
	}

	return(-1);
}
#endif
