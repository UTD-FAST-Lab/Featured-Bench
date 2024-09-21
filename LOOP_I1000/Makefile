all: LOOP_I1000 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
LOOP_I1000: getHash
	$(CC) $(CFLAGS) LOOP_I1000.c getHash.o -o LOOP_I1000


clean:
	rm LOOP_I1000 getHash.o
