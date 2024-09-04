#include <stdio.h>
#include <stdlib.h>

#include "getHash.h"

void PROB_W20_D5_B1(unsigned hash)
{
    if (hash < 160000) {
        if (hash < 8000) {
            if (hash < 400) {
                if (hash < 20) {
                    if (hash < 1) {
                        int *ptr = NULL;
                        *ptr = 10;
                        printf("this is branch 1\n");
                    } else {
                        printf("this is branch 2\n");
                    }
                } else {
                    if (hash < 39) {
                        printf("this is branch 3\n");
                    } else {
                        printf("this is branch 4\n");
                    }
                }
            } else {
                if (hash < 780) {
                    if (hash < 419) {
                        printf("this is branch 5\n");
                    } else {
                        printf("this is branch 6\n");
                    }
                } else {
                    if (hash < 1141) {
                        printf("this is branch 7\n");
                    } else {
                        printf("this is branch 8\n");
                    }
                }
            }
        } else {
            if (hash < 15600) {
                if (hash < 8380) {
                    if (hash < 8019) {
                        printf("this is branch 9\n");
                    } else {
                        printf("this is branch 10\n");
                    }
                } else {
                    if (hash < 8741) {
                        printf("this is branch 11\n");
                    } else {
                        printf("this is branch 12\n");
                    }
                }
            } else {
                if (hash < 22820) {
                    if (hash < 15961) {
                        printf("this is branch 13\n");
                    } else {
                        printf("this is branch 14\n");
                    }
                } else {
                    if (hash < 29679) {
                        printf("this is branch 15\n");
                    } else {
                        printf("this is branch 16\n");
                    }
                }
            }
        }
    } else {
        if (hash < 312000) {
            if (hash < 167600) {
                if (hash < 160380) {
                    if (hash < 160019) {
                        printf("this is branch 17\n");
                    } else {
                        printf("this is branch 18\n");
                    }
                } else {
                    if (hash < 160741) {
                        printf("this is branch 19\n");
                    } else {
                        printf("this is branch 20\n");
                    }
                }
            } else {
                if (hash < 174820) {
                    if (hash < 167961) {
                        printf("this is branch 21\n");
                    } else {
                        printf("this is branch 22\n");
                    }
                } else {
                    if (hash < 181679) {
                        printf("this is branch 23\n");
                    } else {
                        printf("this is branch 24\n");
                    }
                }
            }
        } else {
            if (hash < 456400) {
                if (hash < 319220) {
                    if (hash < 312361) {
                        printf("this is branch 25\n");
                    } else {
                        printf("this is branch 26\n");
                    }
                } else {
                    if (hash < 326079) {
                        printf("this is branch 27\n");
                    } else {
                        printf("this is branch 28\n");
                    }
                }
            } else {
                if (hash < 593580) {
                    if (hash < 463259) {
                        printf("this is branch 29\n");
                    } else {
                        printf("this is branch 30\n");
                    }
                } else {
                    if (hash < 723901) {
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

    PROB_W20_D5_B1(getHash(data, size));

    free(data);

    return 0;
}
