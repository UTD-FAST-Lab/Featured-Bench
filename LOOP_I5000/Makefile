all: LOOP_I5000 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
LOOP_I5000: getHash
	$(CC) $(CFLAGS) LOOP_I5000.c getHash.o -o LOOP_I5000


clean:
	rm LOOP_I5000 getHash.o
