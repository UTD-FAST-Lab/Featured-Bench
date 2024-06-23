all: callDeps getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
callDeps: getHash
	$(CC) $(CFLAGS) callDeps.c getHash.o -o callDeps


clean:
	rm callDeps getHash.o
