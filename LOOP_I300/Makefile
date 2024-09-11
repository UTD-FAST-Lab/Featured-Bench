all: LOOP_I300 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
LOOP_I300: getHash
	$(CC) $(CFLAGS) LOOP_I300.c getHash.o -o LOOP_I300


clean:
	rm LOOP_I300 getHash.o
