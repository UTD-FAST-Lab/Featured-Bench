all: LOCA_W2_D10_B64 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
LOCA_W2_D10_B64: getHash
	$(CC) $(CFLAGS) LOCA_W2_D10_B64.c getHash.o -o LOCA_W2_D10_B64


clean:
	rm LOCA_W2_D10_B64 getHash.o
