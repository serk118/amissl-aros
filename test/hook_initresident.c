/* AROS kernel module that hooks InitResident to log ROMTag checks */
#include <exec/types.h>
#include <exec/resident.h>
#include <exec/execbase.h>
#include <proto/exec.h>
#include <aros/libcall.h>
#include <aros/symbolsets.h>
#include <stdio.h>

/* We need to call the original InitResident */
static APTR orig_InitResident = NULL;

static APTR hook_InitResident(struct Resident *resident, BPTR segList)
{
    bug("[HOOK] InitResident called: ROMTag at 0x%p, name='%s'\n", resident,
         resident->rt_Name ? resident->rt_Name : "(null)");
    bug("[HOOK]   rt_MatchWord=0x%04x (expected 0x4AFC)\n", resident->rt_MatchWord);
    bug("[HOOK]   rt_MatchTag=0x%p resident=0x%p %s\n",
         resident->rt_MatchTag, resident,
         resident->rt_MatchTag == resident ? "MATCH" : "MISMATCH");
    bug("[HOOK]   rt_Flags=0x%02x rt_Version=%d rt_Type=%d\n",
         resident->rt_Flags, resident->rt_Version, resident->rt_Type);

    /* Call original via SetFunction'd vector */
    return ((APTR (*)(struct Resident *, BPTR))orig_InitResident)(resident, segList);
}

/* Called when module is initialized */
static int InitHook(struct ExecBase *SysBase)
{
    struct Library *ExecBase = (struct Library *)SysBase;

    bug("[HOOK] InitHook: Installing InitResident hook\n");

    /* Hook exec's InitResident (function #17) */
    orig_InitResident = SetFunction(ExecBase, 17,
        (APTR)hook_InitResident);

    bug("[HOOK] InitResident hooked: original at 0x%p, hook at 0x%p\n",
         orig_InitResident, hook_InitResident);

    return TRUE;
}

ADD2INITLIB(InitHook, 0);
