all: PROB_W15_D15_P10 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
PROB_W15_D15_P10: getHash
	$(CC) $(CFLAGS) PROB_W15_D15_P10.c getHash.o -o PROB_W15_D15_P10


clean:
	rm PROB_W15_D15_P10 getHash.o
