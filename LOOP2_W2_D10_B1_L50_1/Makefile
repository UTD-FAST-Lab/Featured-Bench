all: LOOP2_W2_D10_B1_L50_1 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
LOOP2_W2_D10_B1_L50_1: getHash
	$(CC) $(CFLAGS) LOOP2_W2_D10_B1_L50_1.c getHash.o -o LOOP2_W2_D10_B1_L50_1


clean:
	rm LOOP2_W2_D10_B1_L50_1 getHash.o
