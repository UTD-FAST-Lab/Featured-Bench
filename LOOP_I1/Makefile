all: LOOP_I1 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
LOOP_I1: getHash
	$(CC) $(CFLAGS) LOOP_I1.c getHash.o -o LOOP_I1


clean:
	rm LOOP_I1 getHash.o
