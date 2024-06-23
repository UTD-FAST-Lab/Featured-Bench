CC = ../../CDFuzz/afl-clang-fast 
CXX = ../../CDFuzz/afl-clang-fast++

all: magic getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
magic: getHash
	$(CC) $(CFLAGS) magic.c getHash.o -o magic


clean:
	rm magic getHash.o
