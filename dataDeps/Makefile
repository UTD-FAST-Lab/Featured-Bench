all: dataDeps getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
dataDeps: getHash
	$(CC) $(CFLAGS) dataDeps.c getHash.o -o dataDeps


clean:
	rm dataDeps getHash.o
