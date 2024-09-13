all: LOCA_W2_D10_B288 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
LOCA_W2_D10_B288: getHash
	$(CC) $(CFLAGS) LOCA_W2_D10_B288.c getHash.o -o LOCA_W2_D10_B288


clean:
	rm LOCA_W2_D10_B288 getHash.o
