#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "getHash.h"

void HARD_L42_C1_D3(unsigned hash)
{
    if (size < 42) {
        printf("File is too small...");
        return;
    }
    if (u64(data) == sum(data+8, 8)) {
        if (u32(data+16) == average(data+20, 16)) {
            if (u16(data+36) == product(data+38, 4)) {
                printf("Found magic symbol!");
                int *ptr = NULL;
                *ptr = 10;
            }
        }
    } else {
        printf("Not magic symbol, continue...");
    }

}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    FILE *fp = fopen(argv[1], "rb");
    if (fp == NULL)
    {
        perror("Error opening file");
        return 1;
    }

    fseek(fp, 0, SEEK_END);
    long size = ftell(fp);
    rewind(fp);
    printf("size: %ld\n", size);

    unsigned char *data = malloc(size * sizeof(unsigned char));
    if (data == NULL)
    {
        fprintf(stderr, "Error allocating memory\n");
        fclose(fp);
        return 1;
    }

    if (fread(data, sizeof(unsigned char), size, fp) != size)
    {
        fprintf(stderr, "Error reading file\n");
        fclose(fp);
        free(data);
        return 1;
    }

    HARD_L42_C1_D3(getHash(data, size));

    free(data);

    return 0;
}
