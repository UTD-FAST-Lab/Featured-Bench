all: MEMO_W2_D10_B1_M5_2 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
MEMO_W2_D10_B1_M5_2: getHash
	$(CC) $(CFLAGS) MEMO_W2_D10_B1_M5_2.c getHash.o -o MEMO_W2_D10_B1_M5_2


clean:
	rm MEMO_W2_D10_B1_M5_2 getHash.o
