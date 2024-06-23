all: equal getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
equal: getHash
	$(CC) $(CFLAGS) equal.c getHash.o -o equal


clean:
	rm equal getHash.o
