all: HARD_L16_C1_D1 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
HARD_L16_C1_D1: getHash
	$(CC) $(CFLAGS) HARD_L16_C1_D1.c getHash.o -o HARD_L16_C1_D1


clean:
	rm HARD_L16_C1_D1 getHash.o
