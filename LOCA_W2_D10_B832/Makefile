all: LOCA_W2_D10_B832 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
LOCA_W2_D10_B832: getHash
	$(CC) $(CFLAGS) LOCA_W2_D10_B832.c getHash.o -o LOCA_W2_D10_B832


clean:
	rm LOCA_W2_D10_B832 getHash.o
