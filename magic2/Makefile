CC = /AFLplusplus/afl-clang-fast 
CXX = /AFLplusplus/afl-clang-fast++

all: magic2 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
magic2: getHash
	$(CC) $(CFLAGS) magic2.c getHash.o -o magic2


clean:
	rm magic2 getHash.o
