#include <proto/exec.h>
#include <proto/dos.h>
#include <openssl/x509.h>
#include <openssl/asn1t.h>
long __stack = 1024 * 1024;
int main(void) {
    const ASN1_ITEM *item = ASN1_ITEM_rptr(X509);
    Printf("X509_it returned: %p\n", item);
    if (item) {
        Printf("itype: %d size: %ld\n", item->itype, (long)item->size);
    }
    return item ? 0 : 1;
}
