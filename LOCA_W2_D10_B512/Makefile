all: LOCA_W2_D10_B512 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
LOCA_W2_D10_B512: getHash
	$(CC) $(CFLAGS) LOCA_W2_D10_B512.c getHash.o -o LOCA_W2_D10_B512


clean:
	rm LOCA_W2_D10_B512 getHash.o
