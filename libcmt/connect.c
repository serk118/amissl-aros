#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

#include "libcmt.h"

#if defined(__AROS__)
#include <proto/bsdsocket.h>
int (connect)(int sockfd, struct sockaddr *addr, socklen_t addrlen)
{
  GETSOCKET();
  if(SocketBase) return connect(sockfd, addr, addrlen);
  else return -1;
}
#elif defined(__amigaos4__)
#undef __USE_INLINE__
#include <proto/bsdsocket.h>
int (connect)(int sockfd, const struct sockaddr *addr, socklen_t addrlen)
{
  GETISOCKET();
  if(ISocket) return ISocket->connect(sockfd, (struct sockaddr *)addr, addrlen);
  else return -1;
}
#elif defined(__MORPHOS__)
LONG (connect)(LONG sockfd, const struct sockaddr *addr, LONG addrlen)
{
  GETSOCKET();
  if(SocketBase) return connect(sockfd, addr, addrlen);
  else return -1;
}
#else
#define AMITCP_NEW_NAMES
#include <errno.h>
#include "multitcp.h"
#include <internal/amissl.h>
int (connect)(int sockfd, const struct sockaddr *addr, socklen_t addrlen)
{
	GETSTATE();

	if (state->SocketBase)
	{
		switch(state->TCPIPStackType)
		{
			case TCPIP_MLink:{
				int res;
				ObtainSemaphore(&state->MLinkLock->Semaphore);
				res = amitcp_Connect(sockfd, addr, addrlen);
				ReleaseSemaphore(&state->MLinkLock->Semaphore);
				return res;
				break;}
			case TCPIP_Roadshow:
			case TCPIP_Miami:
			case TCPIP_AmiTCP:
				return amitcp_Connect(sockfd, addr, addrlen);
				break;
			case TCPIP_IN225:
				return in225_connect(sockfd, (struct sockaddr *)addr, addrlen);
				break;
			case TCPIP_Termite:
				return termite_connect(sockfd, (struct sockaddr *)addr, addrlen);
				break;
		}
	}

	return(-1);
}
#endif
