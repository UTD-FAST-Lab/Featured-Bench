all: LOOP_I200_R getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
LOOP_I200_R: getHash
	$(CC) $(CFLAGS) LOOP_I200_R.c getHash.o -o LOOP_I200_R


clean:
	rm LOOP_I200_R getHash.o
