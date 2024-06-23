CC = /AFLplusplus/afl-clang-fast 
CXX = /AFLplusplus/afl-clang-fast++

all: equal2 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
equal2: getHash
	$(CC) $(CFLAGS) equal2.c getHash.o -o equal2


clean:
	rm equal2 getHash.o
