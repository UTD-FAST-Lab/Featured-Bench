all: PROB_W16_D5_B13 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
PROB_W16_D5_B13: getHash
	$(CC) $(CFLAGS) PROB_W16_D5_B13.c getHash.o -o PROB_W16_D5_B13


clean:
	rm PROB_W16_D5_B13 getHash.o
