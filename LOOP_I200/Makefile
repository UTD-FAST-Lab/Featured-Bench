all: LOOP_I200 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
LOOP_I200: getHash
	$(CC) $(CFLAGS) LOOP_I200.c getHash.o -o LOOP_I200


clean:
	rm LOOP_I200 getHash.o
