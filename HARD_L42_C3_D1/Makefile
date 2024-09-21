all: HARD_L42_C3_D1 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
HARD_L42_C3_D1: getHash
	$(CC) $(CFLAGS) HARD_L42_C3_D1.c getHash.o -o HARD_L42_C3_D1


clean:
	rm HARD_L42_C3_D1 getHash.o
