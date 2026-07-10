#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

#include "libcmt.h"

#if defined(__AROS__)
#include <proto/bsdsocket.h>
int (bind)(int sockfd, struct sockaddr *addr, socklen_t addrlen)
{
  GETSOCKET();
  if(SocketBase) return bind(sockfd, addr, addrlen);
  else return -1;
}
#elif defined(__amigaos4__)
#undef __USE_INLINE__
#include <proto/bsdsocket.h>
int (bind)(int sockfd, const struct sockaddr *addr, socklen_t addrlen)
{
  GETISOCKET();
  if(ISocket) return ISocket->bind(sockfd, (struct sockaddr *)addr, addrlen);
  else return -1;
}
#elif defined(__MORPHOS__)
LONG (bind)(LONG sockfd, const struct sockaddr *addr, LONG addrlen)
{
  GETSOCKET();
  if(SocketBase) return bind(sockfd, addr, addrlen);
  else return -1;
}
#else
#define AMITCP_NEW_NAMES
#include <errno.h>
#include "multitcp.h"
#include <internal/amissl.h>
int (bind)(int sockfd, const struct sockaddr *addr, socklen_t addrlen)
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
				return amitcp_Bind(sockfd, addr, addrlen);
				break;
			case TCPIP_IN225:
				return in225_bind(sockfd, (struct sockaddr *)addr, addrlen);
				break;
			case TCPIP_Termite:
				return termite_bind(sockfd, (char *)addr, addrlen);
				break;
		}
	}

	return(-1);
}
#endif
