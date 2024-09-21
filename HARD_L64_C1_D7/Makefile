all: HARD_L64_C1_D7 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
HARD_L64_C1_D7: getHash
	$(CC) $(CFLAGS) HARD_L64_C1_D7.c getHash.o -o HARD_L64_C1_D7


clean:
	rm HARD_L64_C1_D7 getHash.o
