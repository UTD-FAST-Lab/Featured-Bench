#include <stdio.h>
#include <stdlib.h>

#include "getHash.h"

void PROB_W26_D5_B1(unsigned hash)
{
    if (hash < 456976) {
        if (hash < 17576) {
            if (hash < 676) {
                if (hash < 26) {
                    if (hash < 1) {
                        int *ptr = NULL;
                        *ptr = 10;
                        printf("this is branch 1\n");
                    } else {
                        printf("this is branch 2\n");
                    }
                } else {
                    if (hash < 51) {
                        printf("this is branch 3\n");
                    } else {
                        printf("this is branch 4\n");
                    }
                }
            } else {
                if (hash < 1326) {
                    if (hash < 701) {
                        printf("this is branch 5\n");
                    } else {
                        printf("this is branch 6\n");
                    }
                } else {
                    if (hash < 1951) {
                        printf("this is branch 7\n");
                    } else {
                        printf("this is branch 8\n");
                    }
                }
            }
        } else {
            if (hash < 34476) {
                if (hash < 18226) {
                    if (hash < 17601) {
                        printf("this is branch 9\n");
                    } else {
                        printf("this is branch 10\n");
                    }
                } else {
                    if (hash < 18851) {
                        printf("this is branch 11\n");
                    } else {
                        printf("this is branch 12\n");
                    }
                }
            } else {
                if (hash < 50726) {
                    if (hash < 35101) {
                        printf("this is branch 13\n");
                    } else {
                        printf("this is branch 14\n");
                    }
                } else {
                    if (hash < 66351) {
                        printf("this is branch 15\n");
                    } else {
                        printf("this is branch 16\n");
                    }
                }
            }
        }
    } else {
        if (hash < 896376) {
            if (hash < 473876) {
                if (hash < 457626) {
                    if (hash < 457001) {
                        printf("this is branch 17\n");
                    } else {
                        printf("this is branch 18\n");
                    }
                } else {
                    if (hash < 458251) {
                        printf("this is branch 19\n");
                    } else {
                        printf("this is branch 20\n");
                    }
                }
            } else {
                if (hash < 490126) {
                    if (hash < 474501) {
                        printf("this is branch 21\n");
                    } else {
                        printf("this is branch 22\n");
                    }
                } else {
                    if (hash < 505751) {
                        printf("this is branch 23\n");
                    } else {
                        printf("this is branch 24\n");
                    }
                }
            }
        } else {
            if (hash < 1318876) {
                if (hash < 912626) {
                    if (hash < 897001) {
                        printf("this is branch 25\n");
                    } else {
                        printf("this is branch 26\n");
                    }
                } else {
                    if (hash < 928251) {
                        printf("this is branch 27\n");
                    } else {
                        printf("this is branch 28\n");
                    }
                }
            } else {
                if (hash < 1725126) {
                    if (hash < 1334501) {
                        printf("this is branch 29\n");
                    } else {
                        printf("this is branch 30\n");
                    }
                } else {
                    if (hash < 2115751) {
                        printf("this is branch 31\n");
                    } else {
                        printf("this is branch 32\n");
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

    PROB_W26_D5_B1(getHash(data, size));

    free(data);

    return 0;
}
