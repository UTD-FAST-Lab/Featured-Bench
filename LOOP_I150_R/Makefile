all: LOOP_I150_R getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
LOOP_I150_R: getHash
	$(CC) $(CFLAGS) LOOP_I150_R.c getHash.o -o LOOP_I150_R


clean:
	rm LOOP_I150_R getHash.o
