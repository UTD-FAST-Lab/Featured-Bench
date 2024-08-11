all: PROB_W10_D10_P3 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
PROB_W10_D10_P3: getHash
	$(CC) $(CFLAGS) PROB_W10_D10_P3.c getHash.o -o PROB_W10_D10_P3


clean:
	rm PROB_W10_D10_P3 getHash.o
