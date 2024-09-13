all: LOCA_W2_D10_B864 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
LOCA_W2_D10_B864: getHash
	$(CC) $(CFLAGS) LOCA_W2_D10_B864.c getHash.o -o LOCA_W2_D10_B864


clean:
	rm LOCA_W2_D10_B864 getHash.o
