#include <stdio.h>
#include <stdlib.h>

#include "getHash.h"

void PROB_W20_D20_P1(unsigned hash)
{
if (hash % 20 < 1) {
    if (hash < 524288) {
        printf("this is branch 1\n");
        if (hash < 262144) {
            printf("this is branch 2\n");
            if (hash < 131072) {
                printf("this is branch 3\n");
                if (hash < 65536) {
                    printf("this is branch 4\n");
                    if (hash < 32768) {
                        printf("this is branch 5\n");
                        if (hash < 16384) {
                            printf("this is branch 6\n");
                            if (hash < 8192) {
                                printf("this is branch 7\n");
                                if (hash < 4096) {
                                    printf("this is branch 8\n");
                                    if (hash < 2048) {
                                        printf("this is branch 9\n");
                                        if (hash < 1024) {
                                            printf("this is branch 10\n");
                                            if (hash < 512) {
                                                printf("this is branch 11\n");
                                                if (hash < 256) {
                                                    printf("this is branch 12\n");
                                                    if (hash < 128) {
                                                        printf("this is branch 13\n");
                                                        if (hash < 64) {
                                                            printf("this is branch 14\n");
                                                            if (hash < 32) {
                                                                printf("this is branch 15\n");
                                                                if (hash < 16) {
                                                                    printf("this is branch 16\n");
                                                                    if (hash < 8) {
                                                                        printf("this is branch 17\n");
                                                                        if (hash < 4) {
                                                                            printf("this is branch 18\n");
                                                                            if (hash < 2) {
                                                                                printf("this is branch 19\n");
                                                                                if (hash < 1) {
                                                                                    int *ptr = NULL;
                                                                                    *ptr = 10;
                                                                                    printf("this is branch 20\n");
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
} else {
    if (hash < 524288) {
        printf("this is branch 1\n");
        if (hash < 262144) {
            printf("this is branch 2\n");
            if (hash < 131072) {
                printf("this is branch 3\n");
                if (hash < 65536) {
                    printf("this is branch 4\n");
                    if (hash < 32768) {
                        printf("this is branch 5\n");
                        if (hash < 16384) {
                            printf("this is branch 6\n");
                            if (hash < 8192) {
                                printf("this is branch 7\n");
                                if (hash < 4096) {
                                    printf("this is branch 8\n");
                                    if (hash < 2048) {
                                        printf("this is branch 9\n");
                                        if (hash < 1024) {
                                            printf("this is branch 10\n");
                                            if (hash < 512) {
                                                printf("this is branch 11\n");
                                                if (hash < 256) {
                                                    printf("this is branch 12\n");
                                                    if (hash < 128) {
                                                        printf("this is branch 13\n");
                                                        if (hash < 64) {
                                                            printf("this is branch 14\n");
                                                            if (hash < 32) {
                                                                printf("this is branch 15\n");
                                                                if (hash < 16) {
                                                                    printf("this is branch 16\n");
                                                                    if (hash < 8) {
                                                                        printf("this is branch 17\n");
                                                                        if (hash < 4) {
                                                                            printf("this is branch 18\n");
                                                                            if (hash < 2) {
                                                                                printf("this is branch 19\n");
                                                                                if (hash < 1) {
                                                                                    printf("this is branch 20\n");
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
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

    PROB_W20_D20_P1(getHash(data, size));

    free(data);

    return 0;
}
