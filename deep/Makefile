CC = /AFLplusplus/afl-clang-fast 
CXX = /AFLplusplus/afl-clang-fast++

all: deep getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
deep: getHash
	$(CC) $(CFLAGS) deep.c getHash.o -o deep


clean:
	rm deep getHash.o
