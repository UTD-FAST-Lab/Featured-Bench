all: BRATIO_W8_D5_B1_C3 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
BRATIO_W8_D5_B1_C3: getHash
	$(CC) $(CFLAGS) BRATIO_W8_D5_B1_C3.c getHash.o -o BRATIO_W8_D5_B1_C3


clean:
	rm BRATIO_W8_D5_B1_C3 getHash.o
