#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "getHash.h"

#include <stdio.h>


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

void callDepsError(unsigned hash) {
    unsigned result;

    result = step1(hash);
    
    printf("result: %d\n", result);
    if (result > 262170) {
        printf("Error: there is a crash\n");
        int *ptr = NULL;
        *ptr = 30;
    } else {
        printf("No crash\n at %d", result);
    
    }
}

unsigned step1(unsigned hash) {
    return step2(step3(step4(step5(step6(step7(step8(step9(step10(step11(step12(step13(step14(step15(step16(step17(step18(step19(step20(hash)))))))))))))))))));
}

unsigned step2(unsigned hash) {
    return step3(step4(step5(step6(step7(step8(step9(step10(step11(step12(step13(step14(step15(step16(step17(step18(step19(step20(hash))))))))))))))))));
}

unsigned step3(unsigned hash) {
    return step4(step5(step6(step7(step8(step9(step10(step11(step12(step13(step14(step15(step16(step17(step18(step19(step20(hash)))))))))))))))));
}

unsigned step4(unsigned hash) {
    return step5(step6(step7(step8(step9(step10(step11(step12(step13(step14(step15(step16(step17(step18(step19(step20(hash))))))))))))))));
}

unsigned step5(unsigned hash) {
    return step6(step7(step8(step9(step10(step11(step12(step13(step14(step15(step16(step17(step18(step19(step20(hash)))))))))))))));
}

unsigned step6(unsigned hash) {
    return step7(step8(step9(step10(step11(step12(step13(step14(step15(step16(step17(step18(step19(step20(hash))))))))))))));
}

unsigned step7(unsigned hash) {
    return step8(step9(step10(step11(step12(step13(step14(step15(step16(step17(step18(step19(step20(hash)))))))))))));
}

unsigned step8(unsigned hash) {
    return step9(step10(step11(step12(step13(step14(step15(step16(step17(step18(step19(step20(hash))))))))))));
}

unsigned step9(unsigned hash) {
    return step10(step11(step12(step13(step14(step15(step16(step17(step18(step19(step20(hash)))))))))));
}

unsigned step10(unsigned hash) {
    return step11(step12(step13(step14(step15(step16(step17(step18(step19(step20(hash))))))))));
}

unsigned step11(unsigned hash) {
    return step12(step13(step14(step15(step16(step17(step18(step19(step20(hash)))))))));
}

unsigned step12(unsigned hash) {
    return step13(step14(step15(step16(step17(step18(step19(step20(hash))))))));
}

unsigned step13(unsigned hash) {
    return step14(step15(step16(step17(step18(step19(step20(hash)))))));
}

unsigned step14(unsigned hash) {
    return step15(step16(step17(step18(step19(step20(hash))))));
}

unsigned step15(unsigned hash) {
    return step16(step17(step18(step19(step20(hash)))));
}

unsigned step16(unsigned hash) {
    return step17(step18(step19(step20(hash))));
}

unsigned step17(unsigned hash) {
    return step18(step19(step20(hash)));
}

unsigned step18(unsigned hash) {
    return step19(step20(hash));
}

unsigned step19(unsigned hash) {
    return step20(hash);
}

unsigned step20(unsigned hash) {
    return hash + 1;
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

    callDepsError(getHash(data, size));

    free(data);

    return 0;
}
