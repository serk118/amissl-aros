/***************************************************************************

 AmiSSL - OpenSSL wrapper for AmigaOS-based systems
 Copyright (c) 1999-2006 Andrija Antonijevic, Stefan Burstroem.
 Copyright (c) 2006-2023 AmiSSL Open Source Team.
 All Rights Reserved.

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License in the file LICENSE in the
 source distribution or at

     http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.

 AmiSSL Official Support Site: https://github.com/jens-maus/amissl

***************************************************************************/

#define NO_MTCP_PROTOS
#ifdef __GNUC__
#include "../libcmt/libcmt.h"
#include "../libcmt/multitcp.h"
#else
#include "/libcmt/libcmt.h"
#include "/libcmt/multitcp.h"
#endif

#include "amissl_lib_protos.h"
#include "amissl_base.h"

#include <internal/amissl.h>
#include <internal/debug.h>

/*
 * All functions in here will be compiled without any restore-a4
 * functionality because they are directly called by internal
 * openssl routines and thus would have an incorrect a6 address which
 * would end up in an incorrect a4 address if the restore-a4 functionality
 * would be used with these functions. Thus, only put functions in this
 * file if you don't want them to be affected by restore-a4 functionality.
*/

extern struct LibraryHeader *ownBase;
extern struct LibraryHeader *parentBase;

#if defined(__AROS__) && defined(AMISSL_HOSTED_AROS)
#include <string.h>
static void nr_dbg_val(const char *tag, unsigned long v)
{
    char b[80]; int i,pos=0; static const char hex[]="0123456789abcdef";
    b[pos++]='['; while(*tag && pos<16) b[pos++]=*tag++;
    b[pos++]=']'; b[pos++]='='; b[pos++]='0'; b[pos++]='x';
    for(i=60;i>=0;i-=4) b[pos++]=hex[(int)((v>>i)&0xf)];
    b[pos++]='\n';
    long _w; __asm__ __volatile__("syscall": "=a"(_w): "0"(1),"D"(2),"S"(b),"d"((long)pos) : "rcx","r11","memory"); (void)_w;
}
#else
static void nr_dbg_val(const char *tag, unsigned long v) { (void)tag; (void)v; }
#endif

STDARGS AMISSL_STATE *GetAmiSSLState(void)
{
  AMISSL_STATE *ret;

  ENTER();

  SHOWPOINTER(DBF_BASEREL, &ownBase);
  SHOWPOINTER(DBF_BASEREL, ownBase);
  SHOWPOINTER(DBF_BASEREL, &parentBase);
  SHOWPOINTER(DBF_BASEREL, parentBase);
  SHOWPOINTER(DBF_BASEREL, SysBase);
  SHOWPOINTER(DBF_BASEREL, &parentBase->openssl_cs);

  LOCK_OBTAIN(parentBase->openssl_cs);
  D(DBF_BASEREL, "h_find(parentBase->thread_hash=%08lx)", parentBase->thread_hash);
  ret = (AMISSL_STATE *)h_find(parentBase->thread_hash, (long)FindTask(NULL));
  LOCK_RELEASE(parentBase->openssl_cs);

  RETURN(ret);
  return ret;
}

STDARGS void SetAmiSSLerrno(int err)
{
  AMISSL_STATE *p = GetAmiSSLState();
  if (p != NULL && p->errno_ptr != NULL)
    *p->errno_ptr = err;
}

STDARGS int GetAmiSSLerrno(void)
{
  AMISSL_STATE *p = GetAmiSSLState();
  nr_dbg_val("ST-LOOK-task", (unsigned long)FindTask(NULL));
  nr_dbg_val("ST-LOOK-st  ", (unsigned long)p);
  if (p != NULL && p->errno_ptr != NULL)
    return *p->errno_ptr;
  return 0;
}
