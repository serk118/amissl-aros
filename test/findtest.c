#include <proto/exec.h>
#include <stdio.h>

int main(void)
{
    printf("FIND_TEST: checking resident list...\n");
    
    struct Resident *r;
    r = FindResident("amisslmaster.library");
    printf("  FindResident(amisslmaster.library) = %p\n", r);
    
    r = FindResident("expansion.library");
    printf("  FindResident(expansion.library)   = %p\n", r);
    
    r = FindResident("dos.library");
    printf("  FindResident(dos.library)          = %p\n", r);
    
    printf("FIND_TEST: done\n");
    return 0;
}
