all: MEMO_W2_D10_B1_M5_1 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
MEMO_W2_D10_B1_M5_1: getHash
	$(CC) $(CFLAGS) MEMO_W2_D10_B1_M5_1.c getHash.o -o MEMO_W2_D10_B1_M5_1


clean:
	rm MEMO_W2_D10_B1_M5_1 getHash.o
