all: HARD_L52_C1_D5 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
HARD_L52_C1_D5: getHash
	$(CC) $(CFLAGS) HARD_L52_C1_D5.c getHash.o -o HARD_L52_C1_D5


clean:
	rm HARD_L52_C1_D5 getHash.o
