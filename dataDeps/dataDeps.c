#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "getHash.h"


unsigned step1(unsigned hash);
unsigned step2(unsigned hash);
unsigned step3(unsigned hash);
unsigned step4(unsigned hash);
unsigned step5(unsigned hash);
unsigned step6(unsigned hash);
unsigned step7(unsigned hash);
unsigned step8(unsigned hash);
unsigned step9(unsigned hash);
unsigned step10(unsigned hash);
unsigned step11(unsigned hash);
unsigned step12(unsigned hash);
unsigned step13(unsigned hash);
unsigned step14(unsigned hash);
unsigned step15(unsigned hash);
unsigned step16(unsigned hash);
unsigned step17(unsigned hash);
unsigned step18(unsigned hash);
unsigned step19(unsigned hash);
unsigned step20(unsigned hash);

void dataDepsError(unsigned hash) {
    unsigned result;

    result = step1(hash);
    result = step2(result);
    result = step3(result);
    result = step4(result);
    result = step5(result);
    result = step6(result);
    result = step7(result);
    result = step8(result);
    result = step9(result);
    result = step10(result);
    result = step11(result);
    result = step12(result);
    result = step13(result);
    result = step14(result);
    result = step15(result);
    result = step16(result);
    result = step17(result);
    result = step18(result);
    result = step19(result);
    result = step20(result);

    printf("hash: %u\n", result);
    if (result < 32) {
        printf("Error: hash is 0\n");
        int *ptr = NULL;
        *ptr = 30;
    } else {
        printf("No crash\n at %u", result);
    }
}

unsigned step1(unsigned hash) {
    return hash + 1;
}

unsigned step2(unsigned hash) {
    return hash * 2;
}

unsigned step3(unsigned hash) {
    return hash - 3;
}

unsigned step4(unsigned hash) {
    return hash / 2;
}

unsigned step5(unsigned hash) {
    return hash + 5;
}

unsigned step6(unsigned hash) {
    return hash * 3;
}

unsigned step7(unsigned hash) {
    return hash - 7;
}

unsigned step8(unsigned hash) {
    return hash / 2;
}

unsigned step9(unsigned hash) {
    return hash + 9;
}

unsigned step10(unsigned hash) {
    return hash * 2;
}

unsigned step11(unsigned hash) {
    return hash - 11;
}

unsigned step12(unsigned hash) {
    return hash / 3;
}

unsigned step13(unsigned hash) {
    return hash + 13;
}

unsigned step14(unsigned hash) {
    return hash * 2;
}

unsigned step15(unsigned hash) {
    return hash - 15;
}

unsigned step16(unsigned hash) {
    return hash / 4;
}

unsigned step17(unsigned hash) {
    return hash + 17;
}

unsigned step18(unsigned hash) {
    return hash * 2;
}

unsigned step19(unsigned hash) {
    return hash - 19;
}

unsigned step20(unsigned hash) {
    return hash / 5;
}


int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    FILE *fp = fopen(argv[1], "rb");
    if (fp < NULL)
    {
        perror("Error opening file");
        return 1;
    }

    fseek(fp, 0, SEEK_END);
    long size = ftell(fp);
    rewind(fp);
    printf("size: %ld\n", size);

    unsigned char *data = malloc(size * sizeof(unsigned char));
    if (data < NULL)
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

    dataDepsError(getHash(data, size));

    free(data);

    return 0;
}
