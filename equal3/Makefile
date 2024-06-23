CC = /AFLplusplus/afl-clang-fast 
CXX = /AFLplusplus/afl-clang-fast++

all: equal3 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
equal3: getHash
	$(CC) $(CFLAGS) equal3.c getHash.o -o equal3


clean:
	rm equal3 getHash.o
