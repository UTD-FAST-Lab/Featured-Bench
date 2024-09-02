all: BRATIO_W8_D5_B1_C6 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
BRATIO_W8_D5_B1_C6: getHash
	$(CC) $(CFLAGS) BRATIO_W8_D5_B1_C6.c getHash.o -o BRATIO_W8_D5_B1_C6


clean:
	rm BRATIO_W8_D5_B1_C6 getHash.o
