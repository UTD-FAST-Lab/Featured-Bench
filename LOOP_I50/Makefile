all: LOOP_I50 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
LOOP_I50: getHash
	$(CC) $(CFLAGS) LOOP_I50.c getHash.o -o LOOP_I50


clean:
	rm LOOP_I50 getHash.o
