all: LOOP_I50_R getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
LOOP_I50_R: getHash
	$(CC) $(CFLAGS) LOOP_I50_R.c getHash.o -o LOOP_I50_R


clean:
	rm LOOP_I50_R getHash.o
