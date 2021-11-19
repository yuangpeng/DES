#ifndef DES_DES_H
#define DES_DES_H

#include <iostream>

/*
 * The DES function
 * plaintext: 64 bits message
 * key:       64 bits key for encryption/decryption
 * mode:      'e' = encryption, 'd' = decryption
 */
uint64_t DES(uint64_t plaintext, uint64_t key, char mode);

#endif //DES_DES_H
