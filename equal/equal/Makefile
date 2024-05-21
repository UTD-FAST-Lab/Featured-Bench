CC = /AFLplusplus/afl-clang-fast 
CXX = /AFLplusplus/afl-clang-fast++

all: equal getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
equal: getHash
	$(CC) $(CFLAGS) equal.c getHash.o -o equal


clean:
	rm equal getHash.o
