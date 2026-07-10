#include <sys/types.h>
#include <netinet/in.h>

#include "libcmt.h"

#if defined(__AROS__)
#include <proto/bsdsocket.h>
#elif defined(__amigaos4__)
#undef __USE_INLINE__
#include <proto/bsdsocket.h>
#else
#define AMITCP_NEW_NAMES
#include <errno.h>
#include "multitcp.h"
#include <internal/amissl.h>
#endif

#if !defined(__MORPHOS__)
int (shutdown)(int sockfd, int how)
#else
LONG (shutdown)(LONG sockfd, LONG how)
#endif
{
#if defined(__AROS__)
  GETSOCKET();
  if(SocketBase) return shutdown(sockfd, how);
  else return -1;
#elif defined(__amigaos4__)
  GETISOCKET();
  if(ISocket) return ISocket->shutdown(sockfd, how);
  else return -1;
#elif __MORPHOS__
  GETSOCKET();
  if(SocketBase) return shutdown(sockfd, how);
  else return -1;
#else
	GETSTATE();

	if (state->SocketBase)
	{
		switch(state->TCPIPStackType)
		{
			case TCPIP_Roadshow:
			case TCPIP_Miami:
			case TCPIP_AmiTCP:
			case TCPIP_MLink:
				return amitcp_Shutdown(sockfd, how);
				break;
			case TCPIP_IN225:
				return in225_shutdown(sockfd, how);
				break;
			case TCPIP_Termite:
				return termite_shutdown(sockfd, how);
				break;
		}
	}

	return(-1);
#endif
}
