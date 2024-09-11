all: LOOP_I1_R getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
LOOP_I1_R: getHash
	$(CC) $(CFLAGS) LOOP_I1_R.c getHash.o -o LOOP_I1_R


clean:
	rm LOOP_I1_R getHash.o
