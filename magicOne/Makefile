all: magicOne getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
magicOne: getHash
	$(CC) $(CFLAGS) magicOne.c getHash.o -o magicOne


clean:
	rm magicOne getHash.o
