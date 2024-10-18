all: COMP_W208_D2_B2 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
COMP_W208_D2_B2: getHash
	$(CC) $(CFLAGS) COMP_W208_D2_B2.c getHash.o -o COMP_W208_D2_B2


clean:
	rm COMP_W208_D2_B2 getHash.o
