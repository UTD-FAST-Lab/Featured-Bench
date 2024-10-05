#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stddef.h>
#include <math.h>

void COMP_W4_D2_B2(unsigned hash)
{
    if (hash < 4) {
        if (hash < 1) {
            printf("this is branch 1\n");
        } else if (hash < 2) {
            printf("this is branch 2\n");
            int *ptr = NULL;
            *ptr = 10;
        } else if (hash < 3) {
            printf("this is branch 3\n");
        } else if (hash < 4) {
            printf("this is branch 4\n");
        }
    } else if (hash < 8) {
        if (hash < 5) {
            printf("this is branch 5\n");
        } else if (hash < 6) {
            printf("this is branch 6\n");
        } else if (hash < 7) {
            printf("this is branch 7\n");
        } else if (hash < 8) {
            printf("this is branch 8\n");
        }
    } else if (hash < 12) {
        if (hash < 9) {
            printf("this is branch 9\n");
        } else if (hash < 10) {
            printf("this is branch 10\n");
        } else if (hash < 11) {
            printf("this is branch 11\n");
        } else if (hash < 12) {
            printf("this is branch 12\n");
        }
    } else if (hash < 16) {
        if (hash < 13) {
            printf("this is branch 13\n");
        } else if (hash < 14) {
            printf("this is branch 14\n");
        } else if (hash < 15) {
            printf("this is branch 15\n");
        } else if (hash < 16) {
            printf("this is branch 16\n");
        }
    }

}

int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
    uint8_t hash = 0;
    for (size_t i = 0; i < size; ++i) {
        hash += data[i];
        printf("hash: %d\n", hash);
    }
    COMP_W4_D2_B2(hash % (int)pow(4, 2));
    return 0;
}