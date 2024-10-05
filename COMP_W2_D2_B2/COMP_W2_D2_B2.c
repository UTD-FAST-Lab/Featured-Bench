#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stddef.h>
#include <math.h>

void COMP_W2_D2_B2(unsigned hash)
{
    if (hash < 2) {
        if (hash < 1) {
            printf("this is branch 1\n");
        } else if (hash < 2) {
            printf("this is branch 2\n");
            int *ptr = NULL;
            *ptr = 10;
        }
    } else if (hash < 4) {
        if (hash < 3) {
            printf("this is branch 3\n");
        } else if (hash < 4) {
            printf("this is branch 4\n");
        }
    }

}

int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
    uint8_t hash = 0;
    for (size_t i = 0; i < size; ++i) {
        hash += data[i];
        printf("hash: %d\n", hash);
    }
    COMP_W2_D2_B2(hash % (int)pow(2, 2));
    return 0;
}