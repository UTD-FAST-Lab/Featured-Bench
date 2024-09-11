all: LOOP_I300_R getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
LOOP_I300_R: getHash
	$(CC) $(CFLAGS) LOOP_I300_R.c getHash.o -o LOOP_I300_R


clean:
	rm LOOP_I300_R getHash.o
