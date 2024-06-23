all: magic3 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
magic3: getHash
	$(CC) $(CFLAGS) magic3.c getHash.o -o magic3


clean:
	rm magic3 getHash.o
