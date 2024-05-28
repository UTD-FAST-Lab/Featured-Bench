CC = /AFLplusplus/afl-clang-fast 
CXX = /AFLplusplus/afl-clang-fast++

all: deepMagic getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
deepMagic: getHash
	$(CC) $(CFLAGS) deepMagic.c getHash.o -o deepMagic


clean:
	rm deepMagic getHash.o
