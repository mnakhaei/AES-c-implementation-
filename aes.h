#ifndef ENC_H
#define ENC_H

#define BLOCK_SIZE 16
#define KEY_SIZE 16 

void expand_key(const unsigned char *masterKey, unsigned char ** roundKeys);

void encrypt(unsigned char const *  key,unsigned char const *  plainText,unsigned char * cipherText);
void decrypt(unsigned char const *  key,unsigned char const *  cipherText,unsigned char * plainText);

#endif