all: LOOP_I250_R getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
LOOP_I250_R: getHash
	$(CC) $(CFLAGS) LOOP_I250_R.c getHash.o -o LOOP_I250_R


clean:
	rm LOOP_I250_R getHash.o
