#include <stdio.h>
#include <stdlib.h>

#include "getHash.h"

void loopError(unsigned hash)
{
    for (unsigned int i = 0; i < hash; i++) {
        if (i == 59) {
            printf("this is branch %d\n", i);
            int *p = NULL;
            *p = 10; 
        } else {
            printf("this is branch %d\n", i);
        } 
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

    loopError(getHash(data, size));

    free(data);

    return 0;
}
