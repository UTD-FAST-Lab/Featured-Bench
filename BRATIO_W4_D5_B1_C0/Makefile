all: BRATIO_W4_D5_B1_C0 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
BRATIO_W4_D5_B1_C0: getHash
	$(CC) $(CFLAGS) BRATIO_W4_D5_B1_C0.c getHash.o -o BRATIO_W4_D5_B1_C0


clean:
	rm BRATIO_W4_D5_B1_C0 getHash.o
