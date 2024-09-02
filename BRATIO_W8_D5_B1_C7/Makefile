all: BRATIO_W8_D5_B1_C7 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
BRATIO_W8_D5_B1_C7: getHash
	$(CC) $(CFLAGS) BRATIO_W8_D5_B1_C7.c getHash.o -o BRATIO_W8_D5_B1_C7


clean:
	rm BRATIO_W8_D5_B1_C7 getHash.o
