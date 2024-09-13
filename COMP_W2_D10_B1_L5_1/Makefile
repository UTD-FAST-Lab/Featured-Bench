all: COMP_W2_D10_B1_L5_1 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
COMP_W2_D10_B1_L5_1: getHash
	$(CC) $(CFLAGS) COMP_W2_D10_B1_L5_1.c getHash.o -o COMP_W2_D10_B1_L5_1


clean:
	rm COMP_W2_D10_B1_L5_1 getHash.o
