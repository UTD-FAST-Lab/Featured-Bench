all: LOOP2_W2_D10_B1_L10_2 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
LOOP2_W2_D10_B1_L10_2: getHash
	$(CC) $(CFLAGS) LOOP2_W2_D10_B1_L10_2.c getHash.o -o LOOP2_W2_D10_B1_L10_2


clean:
	rm LOOP2_W2_D10_B1_L10_2 getHash.o
