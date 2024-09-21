all: HARD_L42_C1_D3 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
HARD_L42_C1_D3: getHash
	$(CC) $(CFLAGS) HARD_L42_C1_D3.c getHash.o -o HARD_L42_C1_D3


clean:
	rm HARD_L42_C1_D3 getHash.o
