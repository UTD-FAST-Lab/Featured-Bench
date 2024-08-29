all: COMP_W10_D4_B1 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
COMP_W10_D4_B1: getHash
	$(CC) $(CFLAGS) COMP_W10_D4_B1.c getHash.o -o COMP_W10_D4_B1


clean:
	rm COMP_W10_D4_B1 getHash.o
