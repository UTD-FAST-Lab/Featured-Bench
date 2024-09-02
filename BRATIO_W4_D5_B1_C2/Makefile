all: BRATIO_W4_D5_B1_C2 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
BRATIO_W4_D5_B1_C2: getHash
	$(CC) $(CFLAGS) BRATIO_W4_D5_B1_C2.c getHash.o -o BRATIO_W4_D5_B1_C2


clean:
	rm BRATIO_W4_D5_B1_C2 getHash.o
