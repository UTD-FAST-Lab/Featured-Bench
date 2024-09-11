#include <stdio.h>
#include <stdlib.h>

#include "getHash.h"

void PROB_W28_D5_B1(unsigned hash)
{
    if (hash < 614656) {
        if (hash < 21952) {
            if (hash < 784) {
                if (hash < 28) {
                    if (hash < 1) {
                        printf("this is branch 1\n");
                        int *ptr = NULL;
                        *ptr = 10;
                    } else {
                        printf("this is branch 2\n");
                    }
                } else {
                    if (hash < 55) {
                        printf("this is branch 3\n");
                    } else {
                        printf("this is branch 4\n");
                    }
                }
            } else {
                if (hash < 1540) {
                    if (hash < 811) {
                        printf("this is branch 5\n");
                    } else {
                        printf("this is branch 6\n");
                    }
                } else {
                    if (hash < 2269) {
                        printf("this is branch 7\n");
                    } else {
                        printf("this is branch 8\n");
                    }
                }
            }
        } else {
            if (hash < 43120) {
                if (hash < 22708) {
                    if (hash < 21979) {
                        printf("this is branch 9\n");
                    } else {
                        printf("this is branch 10\n");
                    }
                } else {
                    if (hash < 23437) {
                        printf("this is branch 11\n");
                    } else {
                        printf("this is branch 12\n");
                    }
                }
            } else {
                if (hash < 63532) {
                    if (hash < 43849) {
                        printf("this is branch 13\n");
                    } else {
                        printf("this is branch 14\n");
                    }
                } else {
                    if (hash < 83215) {
                        printf("this is branch 15\n");
                    } else {
                        printf("this is branch 16\n");
                    }
                }
            }
        }
    } else {
        if (hash < 1207360) {
            if (hash < 635824) {
                if (hash < 615412) {
                    if (hash < 614683) {
                        printf("this is branch 17\n");
                    } else {
                        printf("this is branch 18\n");
                    }
                } else {
                    if (hash < 616141) {
                        printf("this is branch 19\n");
                    } else {
                        printf("this is branch 20\n");
                    }
                }
            } else {
                if (hash < 656236) {
                    if (hash < 636553) {
                        printf("this is branch 21\n");
                    } else {
                        printf("this is branch 22\n");
                    }
                } else {
                    if (hash < 675919) {
                        printf("this is branch 23\n");
                    } else {
                        printf("this is branch 24\n");
                    }
                }
            }
        } else {
            if (hash < 1778896) {
                if (hash < 1227772) {
                    if (hash < 1208089) {
                        printf("this is branch 25\n");
                    } else {
                        printf("this is branch 26\n");
                    }
                } else {
                    if (hash < 1247455) {
                        printf("this is branch 27\n");
                    } else {
                        printf("this is branch 28\n");
                    }
                }
            } else {
                if (hash < 2330020) {
                    if (hash < 1798579) {
                        printf("this is branch 29\n");
                    } else {
                        printf("this is branch 30\n");
                    }
                } else {
                    if (hash < 2861461) {
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

    PROB_W28_D5_B1(getHash(data, size));

    free(data);

    return 0;
}
