all: LOOP_I100_R getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
LOOP_I100_R: getHash
	$(CC) $(CFLAGS) LOOP_I100_R.c getHash.o -o LOOP_I100_R


clean:
	rm LOOP_I100_R getHash.o
