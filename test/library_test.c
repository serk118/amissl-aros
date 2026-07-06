#include <proto/exec.h>
#include <proto/amissl.h>
#include <proto/amisslmaster.h>
#include <libraries/amissl.h>
#include <libraries/amisslmaster.h>
#include <stdio.h>

struct Library *AmiSSLBase = NULL;
struct Library *AmiSSLMasterBase = NULL;

int main(void)
{
	printf("=== AmiSSL Library Test ===\n");

	AmiSSLMasterBase = OpenLibrary("amisslmaster.library", 0);
	printf("OpenLibrary(amisslmaster.library, 0) = %p\n", AmiSSLMasterBase);

	if (AmiSSLMasterBase)
	{
		printf("  -> amisslmaster.library opened OK\n");
		InitAmiSSLMaster(AMISSL_V2, TRUE);
		printf("  -> InitAmiSSLMaster OK\n");

		AmiSSLBase = OpenLibrary("AmiSSL/amissl_v362.library", 0);
		printf("OpenLibrary(AmiSSL/amissl_v362.library, 0) = %p\n", AmiSSLBase);

		if (AmiSSLBase)
		{
			printf("  -> amissl_v362.library opened OK\n");
			InitAmiSSL(TAG_DONE);
			printf("  -> InitAmiSSL OK\n");
			CleanupAmiSSL(TAG_DONE);
			printf("  -> CleanupAmiSSL OK\n");
			CloseLibrary(AmiSSLBase);
			printf("  -> amissl_v362.library closed OK\n");
		}
		else
		{
			printf("  -> FAILED to open amissl_v362.library\n");
		}

		CloseLibrary(AmiSSLMasterBase);
		printf("  -> amisslmaster.library closed OK\n");
	}
	else
	{
		printf("  -> FAILED to open amisslmaster.library\n");
	}

	printf("=== Test Complete ===\n");
	return (AmiSSLMasterBase && AmiSSLBase) ? 0 : 1;
}
