all: PROB_W20_D20_P15 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
PROB_W20_D20_P15: getHash
	$(CC) $(CFLAGS) PROB_W20_D20_P15.c getHash.o -o PROB_W20_D20_P15


clean:
	rm PROB_W20_D20_P15 getHash.o
