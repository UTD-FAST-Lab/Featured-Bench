all: COMP_W176_D2_B2 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
COMP_W176_D2_B2: getHash
	$(CC) $(CFLAGS) COMP_W176_D2_B2.c getHash.o -o COMP_W176_D2_B2


clean:
	rm COMP_W176_D2_B2 getHash.o
