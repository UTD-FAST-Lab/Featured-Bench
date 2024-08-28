all: PROB_W8_D5_B1 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
PROB_W8_D5_B1: getHash
	$(CC) $(CFLAGS) PROB_W8_D5_B1.c getHash.o -o PROB_W8_D5_B1


clean:
	rm PROB_W8_D5_B1 getHash.o
