all: LOOP_I150 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
LOOP_I150: getHash
	$(CC) $(CFLAGS) LOOP_I150.c getHash.o -o LOOP_I150


clean:
	rm LOOP_I150 getHash.o
