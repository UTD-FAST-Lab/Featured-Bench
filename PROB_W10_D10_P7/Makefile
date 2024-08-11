all: PROB_W10_D10_P7 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
PROB_W10_D10_P7: getHash
	$(CC) $(CFLAGS) PROB_W10_D10_P7.c getHash.o -o PROB_W10_D10_P7


clean:
	rm PROB_W10_D10_P7 getHash.o
