#include <stdio.h>
#include <stdlib.h>

#include "getHash.h"

void BRATIO_W2_D5_B1_C0(unsigned hash)
{
    if (hash < 16) {
        if (hash < 8) {
            if (hash < 4) {
                if (hash < 2) {
                    if (hash < 1) {
                        int *ptr = NULL;
                        *ptr = 10;
                        printf("this is branch 1\n");
                    } else if (hash < 2) {
                        printf("this is branch 2\n");
                    }
                } else if (hash < 4) {
                    if (hash < 3) {
                        printf("this is branch 3\n");
                    } else if (hash < 4) {
                        printf("this is branch 4\n");
                    }
                }
            } else if (hash < 8) {
                if (hash < 6) {
                    if (hash < 5) {
                        printf("this is branch 5\n");
                    } else if (hash < 6) {
                        printf("this is branch 6\n");
                    }
                } else if (hash < 8) {
                    if (hash < 7) {
                        printf("this is branch 7\n");
                    } else if (hash < 8) {
                        printf("this is branch 8\n");
                    }
                }
            }
        } else if (hash < 16) {
            if (hash < 12) {
                if (hash < 10) {
                    if (hash < 9) {
                        printf("this is branch 9\n");
                    } else if (hash < 10) {
                        printf("this is branch 10\n");
                    }
                } else if (hash < 12) {
                    if (hash < 11) {
                        printf("this is branch 11\n");
                    } else if (hash < 12) {
                        printf("this is branch 12\n");
                    }
                }
            } else if (hash < 16) {
                if (hash < 14) {
                    if (hash < 13) {
                        printf("this is branch 13\n");
                    } else if (hash < 14) {
                        printf("this is branch 14\n");
                    }
                } else if (hash < 16) {
                    if (hash < 15) {
                        printf("this is branch 15\n");
                    } else if (hash < 16) {
                        printf("this is branch 16\n");
                    }
                }
            }
        }
    } else if (hash < 32) {
        if (hash < 24) {
            if (hash < 20) {
                if (hash < 18) {
                    if (hash < 17) {
                        printf("this is branch 17\n");
                    } else if (hash < 18) {
                        printf("this is branch 18\n");
                    }
                } else if (hash < 20) {
                    if (hash < 19) {
                        printf("this is branch 19\n");
                    } else if (hash < 20) {
                        printf("this is branch 20\n");
                    }
                }
            } else if (hash < 24) {
                if (hash < 22) {
                    if (hash < 21) {
                        printf("this is branch 21\n");
                    } else if (hash < 22) {
                        printf("this is branch 22\n");
                    }
                } else if (hash < 24) {
                    if (hash < 23) {
                        printf("this is branch 23\n");
                    } else if (hash < 24) {
                        printf("this is branch 24\n");
                    }
                }
            }
        } else if (hash < 32) {
            if (hash < 28) {
                if (hash < 26) {
                    if (hash < 25) {
                        printf("this is branch 25\n");
                    } else if (hash < 26) {
                        printf("this is branch 26\n");
                    }
                } else if (hash < 28) {
                    if (hash < 27) {
                        printf("this is branch 27\n");
                    } else if (hash < 28) {
                        printf("this is branch 28\n");
                    }
                }
            } else if (hash < 32) {
                if (hash < 30) {
                    if (hash < 29) {
                        printf("this is branch 29\n");
                    } else if (hash < 30) {
                        printf("this is branch 30\n");
                    }
                } else if (hash < 32) {
                    if (hash < 31) {
                        printf("this is branch 31\n");
                    } else if (hash < 32) {
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

    BRATIO_W2_D5_B1_C0(getHash(data, size));

    free(data);

    return 0;
}
