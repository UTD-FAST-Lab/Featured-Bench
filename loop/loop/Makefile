CC = /AFLplusplus/afl-clang-fast 
CXX = /AFLplusplus/afl-clang-fast++

all: loop getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
loop: getHash
	$(CC) $(CFLAGS) loop.c getHash.o -o loop


clean:
	rm loop getHash.o
