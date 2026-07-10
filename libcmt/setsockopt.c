#include <sys/types.h>
#include <netinet/in.h>

#include "libcmt.h"

#if defined(__AROS__)
#include <proto/bsdsocket.h>
int (setsockopt)(int sockfd, int level, int optname, void *optval, socklen_t optlen)
{
  GETSOCKET();
  if(SocketBase) return setsockopt(sockfd, level, optname, optval, optlen);
  else return -1;
}
#elif defined(__amigaos4__)
#undef __USE_INLINE__
#include <proto/bsdsocket.h>
int (setsockopt)(int sockfd, int level, int optname, const void *optval, socklen_t optlen)
{
  GETISOCKET();
  if(ISocket) return ISocket->setsockopt(sockfd, level, optname, (void *)optval, optlen);
  else return -1;
}
#elif defined(__MORPHOS__)
LONG (setsockopt)(LONG sockfd, LONG level, LONG optname, const void *optval, LONG optlen)
{
  GETSOCKET();
  if(SocketBase) return setsockopt(sockfd, level, optname, optval, optlen);
  else return -1;
}
#else
#define AMITCP_NEW_NAMES
#include <errno.h>
#include "multitcp.h"
#include <internal/amissl.h>
int (setsockopt)(int sockfd, int level, int optname, const void *optval, socklen_t optlen)
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
				return amitcp_SetSockOpt(sockfd, level, optname, optval, optlen);
				break;
			case TCPIP_IN225:
				return in225_setsockopt(sockfd, level, optname, optval, optlen);
				break;
			case TCPIP_Termite:
				return termite_setsockopt(sockfd, level, optname, (void *)optval, optlen);
				break;
		}
	}

	return(-1);
}
#endif
