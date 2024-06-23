#include <stdio.h>
#include <stdlib.h>

#include "getHash.h"

void deepMagicError(unsigned hash[])
{
    if (hash[0] == 524288)
    {
        printf("this is branch 1\n");
        if (hash[1] == 524288)
        {
            printf("this is branch 2\n");
            if (hash[2] == 524288)
            {
                printf("this is branch 3\n");
                if (hash[3] == 524288)
                {
                    printf("this is branch 4\n");
                    if (hash[4] == 524288)
                    {
                        printf("this is branch 5\n");
                        int *ptr = NULL;
                        *ptr = 30;
                    }
                }
            }
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

    unsigned int hash[] = {
        getHash(data, size),
        getHash(data, size),
        getHash(data, size),
        getHash(data, size),
        getHash(data, size)};
    deepMagicError(hash);

    free(data);

    return 0;
}
