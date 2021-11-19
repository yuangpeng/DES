#include <iostream>
#include "des.h"

int main() {

    uint64_t pt  = 0x3031323334353637;
    uint64_t key = 0x3132333435363738;
    uint64_t ct  = DES(pt, key, 'e');
    printf("ciphertext: %llx\n", ct);

    uint64_t dpt = DES(ct, key, 'd');
    printf("plaintext:  %llx\n", dpt);

    return 0;
}


