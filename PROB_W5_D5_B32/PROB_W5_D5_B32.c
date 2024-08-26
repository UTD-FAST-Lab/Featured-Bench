#include <stdio.h>
#include <stdlib.h>

#include "getHash.h"

void PROB_W5_D5_B32(unsigned hash)
{
    if (hash < 625) {
        if (hash < 125) {
            if (hash < 25) {
                if (hash < 5) {
                    if (hash < 1) {
                        printf("this is branch 1\n");
                    } else {
                        printf("this is branch 2\n");
                    }
                } else {
                    if (hash < 9) {
                        printf("this is branch 3\n");
                    } else {
                        printf("this is branch 4\n");
                    }
                }
            } else {
                if (hash < 45) {
                    if (hash < 29) {
                        printf("this is branch 5\n");
                    } else {
                        printf("this is branch 6\n");
                    }
                } else {
                    if (hash < 61) {
                        printf("this is branch 7\n");
                    } else {
                        printf("this is branch 8\n");
                    }
                }
            }
        } else {
            if (hash < 225) {
                if (hash < 145) {
                    if (hash < 129) {
                        printf("this is branch 9\n");
                    } else {
                        printf("this is branch 10\n");
                    }
                } else {
                    if (hash < 161) {
                        printf("this is branch 11\n");
                    } else {
                        printf("this is branch 12\n");
                    }
                }
            } else {
                if (hash < 305) {
                    if (hash < 241) {
                        printf("this is branch 13\n");
                    } else {
                        printf("this is branch 14\n");
                    }
                } else {
                    if (hash < 369) {
                        printf("this is branch 15\n");
                    } else {
                        printf("this is branch 16\n");
                    }
                }
            }
        }
    } else {
        if (hash < 1125) {
            if (hash < 725) {
                if (hash < 645) {
                    if (hash < 629) {
                        printf("this is branch 17\n");
                    } else {
                        printf("this is branch 18\n");
                    }
                } else {
                    if (hash < 661) {
                        printf("this is branch 19\n");
                    } else {
                        printf("this is branch 20\n");
                    }
                }
            } else {
                if (hash < 805) {
                    if (hash < 741) {
                        printf("this is branch 21\n");
                    } else {
                        printf("this is branch 22\n");
                    }
                } else {
                    if (hash < 869) {
                        printf("this is branch 23\n");
                    } else {
                        printf("this is branch 24\n");
                    }
                }
            }
        } else {
            if (hash < 1525) {
                if (hash < 1205) {
                    if (hash < 1141) {
                        printf("this is branch 25\n");
                    } else {
                        printf("this is branch 26\n");
                    }
                } else {
                    if (hash < 1269) {
                        printf("this is branch 27\n");
                    } else {
                        printf("this is branch 28\n");
                    }
                }
            } else {
                if (hash < 1845) {
                    if (hash < 1589) {
                        printf("this is branch 29\n");
                    } else {
                        printf("this is branch 30\n");
                    }
                } else {
                    if (hash < 2101) {
                        printf("this is branch 31\n");
                    } else {
                        int *ptr = NULL;
                        *ptr = 10;
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

    PROB_W5_D5_B32(getHash(data, size));

    free(data);

    return 0;
}
