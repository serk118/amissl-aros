#include <sys/types.h>
#include <netinet/in.h>

#include "libcmt.h"

#if defined(__AROS__)
#include <proto/bsdsocket.h>
struct servent *(getservbyname)(char *name, char *proto)
{
  GETSOCKET();
  if(SocketBase) return getservbyname(name, proto);
  else return NULL;
}
#elif defined(__amigaos4__)
#undef __USE_INLINE__
#include <proto/bsdsocket.h>
struct servent *(getservbyname)(const char *name, const char *proto)
{
  GETISOCKET_NOERRNO();
  if(ISocket) return ISocket->getservbyname((char *)name, (char *)proto);
  else return NULL;
}
#elif defined(__MORPHOS__)
struct servent *(getservbyname)(const UBYTE *name, const UBYTE *proto)
{
  GETSOCKET();
  if(SocketBase) return getservbyname(name, proto);
  else return NULL;
}
#else
#define AMITCP_NEW_NAMES
#include <errno.h>
#include "multitcp.h"
#include <internal/amissl.h>
struct servent *(getservbyname)(const char *name, const char *proto)
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
				return amitcp_GetServByName(name, proto);
				break;
			case TCPIP_IN225:
				return in225_getservbyname(name, proto);
				break;
			case TCPIP_Termite:
				return termite_getservbyname(name, proto);
				break;
		}
	}

	return(NULL);
}
#endif
