all: PROB_W20_D20_P1 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
PROB_W20_D20_P1: getHash
	$(CC) $(CFLAGS) PROB_W20_D20_P1.c getHash.o -o PROB_W20_D20_P1


clean:
	rm PROB_W20_D20_P1 getHash.o
