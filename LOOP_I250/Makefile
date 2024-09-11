all: LOOP_I250 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
LOOP_I250: getHash
	$(CC) $(CFLAGS) LOOP_I250.c getHash.o -o LOOP_I250


clean:
	rm LOOP_I250 getHash.o
