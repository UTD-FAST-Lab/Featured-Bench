all: BRATIO_W2_D5_B1_C1 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
BRATIO_W2_D5_B1_C1: getHash
	$(CC) $(CFLAGS) BRATIO_W2_D5_B1_C1.c getHash.o -o BRATIO_W2_D5_B1_C1


clean:
	rm BRATIO_W2_D5_B1_C1 getHash.o
