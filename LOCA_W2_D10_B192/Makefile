all: LOCA_W2_D10_B192 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
LOCA_W2_D10_B192: getHash
	$(CC) $(CFLAGS) LOCA_W2_D10_B192.c getHash.o -o LOCA_W2_D10_B192


clean:
	rm LOCA_W2_D10_B192 getHash.o
