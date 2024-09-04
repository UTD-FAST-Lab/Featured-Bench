#include <stdio.h>
#include <stdlib.h>

#include "getHash.h"

void PROB_W22_D5_B1(unsigned hash)
{
    if (hash < 234256) {
        if (hash < 10648) {
            if (hash < 484) {
                if (hash < 22) {
                    if (hash < 1) {
                        int *ptr = NULL;
                        *ptr = 10;
                        printf("this is branch 1\n");
                    } else {
                        printf("this is branch 2\n");
                    }
                } else {
                    if (hash < 43) {
                        printf("this is branch 3\n");
                    } else {
                        printf("this is branch 4\n");
                    }
                }
            } else {
                if (hash < 946) {
                    if (hash < 505) {
                        printf("this is branch 5\n");
                    } else {
                        printf("this is branch 6\n");
                    }
                } else {
                    if (hash < 1387) {
                        printf("this is branch 7\n");
                    } else {
                        printf("this is branch 8\n");
                    }
                }
            }
        } else {
            if (hash < 20812) {
                if (hash < 11110) {
                    if (hash < 10669) {
                        printf("this is branch 9\n");
                    } else {
                        printf("this is branch 10\n");
                    }
                } else {
                    if (hash < 11551) {
                        printf("this is branch 11\n");
                    } else {
                        printf("this is branch 12\n");
                    }
                }
            } else {
                if (hash < 30514) {
                    if (hash < 21253) {
                        printf("this is branch 13\n");
                    } else {
                        printf("this is branch 14\n");
                    }
                } else {
                    if (hash < 39775) {
                        printf("this is branch 15\n");
                    } else {
                        printf("this is branch 16\n");
                    }
                }
            }
        }
    } else {
        if (hash < 457864) {
            if (hash < 244420) {
                if (hash < 234718) {
                    if (hash < 234277) {
                        printf("this is branch 17\n");
                    } else {
                        printf("this is branch 18\n");
                    }
                } else {
                    if (hash < 235159) {
                        printf("this is branch 19\n");
                    } else {
                        printf("this is branch 20\n");
                    }
                }
            } else {
                if (hash < 254122) {
                    if (hash < 244861) {
                        printf("this is branch 21\n");
                    } else {
                        printf("this is branch 22\n");
                    }
                } else {
                    if (hash < 263383) {
                        printf("this is branch 23\n");
                    } else {
                        printf("this is branch 24\n");
                    }
                }
            }
        } else {
            if (hash < 671308) {
                if (hash < 467566) {
                    if (hash < 458305) {
                        printf("this is branch 25\n");
                    } else {
                        printf("this is branch 26\n");
                    }
                } else {
                    if (hash < 476827) {
                        printf("this is branch 27\n");
                    } else {
                        printf("this is branch 28\n");
                    }
                }
            } else {
                if (hash < 875050) {
                    if (hash < 680569) {
                        printf("this is branch 29\n");
                    } else {
                        printf("this is branch 30\n");
                    }
                } else {
                    if (hash < 1069531) {
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

    PROB_W22_D5_B1(getHash(data, size));

    free(data);

    return 0;
}
