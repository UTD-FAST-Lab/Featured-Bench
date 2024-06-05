CC = /AFLplusplus/afl-clang-fast 
CXX = /AFLplusplus/afl-clang-fast++

all: dataDeps2 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
dataDeps2: getHash
	$(CC) $(CFLAGS) dataDeps2.c getHash.o -o dataDeps2


clean:
	rm dataDeps2 getHash.o
