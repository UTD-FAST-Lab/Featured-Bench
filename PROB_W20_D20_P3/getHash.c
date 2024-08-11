#include "getHash.h"
#include <stdio.h>
#include <stdlib.h>

unsigned
getHash(unsigned char *data, long size) {
    unsigned hash = 0;
    for (long i = 0; i < size; ++i) {
        hash += data[i];
        printf("hash: %d\n", hash);
    }
    
    return hash % 1<<20;
}
