CC = /AFLplusplus/afl-clang-fast 
CXX = /AFLplusplus/afl-clang-fast++

all: recursive getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
recursive: getHash
	$(CC) $(CFLAGS) recursive.c getHash.o -o recursive


clean:
	rm recursive getHash.o
