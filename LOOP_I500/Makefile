all: LOOP_I500 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
LOOP_I500: getHash
	$(CC) $(CFLAGS) LOOP_I500.c getHash.o -o LOOP_I500


clean:
	rm LOOP_I500 getHash.o
