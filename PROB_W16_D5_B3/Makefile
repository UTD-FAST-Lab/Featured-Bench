all: PROB_W16_D5_B3 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
PROB_W16_D5_B3: getHash
	$(CC) $(CFLAGS) PROB_W16_D5_B3.c getHash.o -o PROB_W16_D5_B3


clean:
	rm PROB_W16_D5_B3 getHash.o
