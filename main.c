#include <stdio.h>
#include <stdlib.h>
#include "aes.h"

int main(int argc, char *argv[]){

    

    const unsigned char key[16] = {
        0x01, 0x23, 0x45, 0x67, 0x89, 0xAB, 0xCD, 0xEF,
        0xFE, 0xDC, 0xBA, 0x98, 0x76, 0x54, 0x32, 0x10
    };

    const unsigned char ref[16] = {
        0x68, 0x1E, 0xDF, 0x34, 0xD2, 0x06, 0x96, 0x5E,
        0x86, 0xB3, 0xE9, 0x4F, 0x53, 0x6E, 0x42, 0x46
    };

    unsigned char * res = malloc(sizeof(unsigned char)*16);

    encrypt(key,ref,res);
   
    printf("crypted :\n");
    for (int i=0;i<16;++i)
        printf("%uc ",res[i]);

    unsigned char * res2 = malloc(sizeof(unsigned char)*16);

    decrypt(key,res,res2);

    printf("\n");

    printf("decrypted :\n");

    for (int i=0;i<16;++i)
        printf("%uc ",res2[i]);
        printf("\n");

    printf("text :\n");
    for (int i=0;i<16;++i)
        printf("%uc ",ref[i]);










}
