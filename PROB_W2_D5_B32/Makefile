all: PROB_W2_D5_B32 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
PROB_W2_D5_B32: getHash
	$(CC) $(CFLAGS) PROB_W2_D5_B32.c getHash.o -o PROB_W2_D5_B32


clean:
	rm PROB_W2_D5_B32 getHash.o
