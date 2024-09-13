all: LOCA_W2_D10_B672 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
LOCA_W2_D10_B672: getHash
	$(CC) $(CFLAGS) LOCA_W2_D10_B672.c getHash.o -o LOCA_W2_D10_B672


clean:
	rm LOCA_W2_D10_B672 getHash.o
