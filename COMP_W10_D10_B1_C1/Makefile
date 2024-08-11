all: COMP_W10_D10_B1_C1 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
COMP_W10_D10_B1_C1: getHash
	$(CC) $(CFLAGS) COMP_W10_D10_B1_C1.c getHash.o -o COMP_W10_D10_B1_C1


clean:
	rm COMP_W10_D10_B1_C1 getHash.o
