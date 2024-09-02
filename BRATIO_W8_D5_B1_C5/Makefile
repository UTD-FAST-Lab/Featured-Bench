all: BRATIO_W8_D5_B1_C5 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
BRATIO_W8_D5_B1_C5: getHash
	$(CC) $(CFLAGS) BRATIO_W8_D5_B1_C5.c getHash.o -o BRATIO_W8_D5_B1_C5


clean:
	rm BRATIO_W8_D5_B1_C5 getHash.o
