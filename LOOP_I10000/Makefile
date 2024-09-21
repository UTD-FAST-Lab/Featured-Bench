all: LOOP_I10000 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
LOOP_I10000: getHash
	$(CC) $(CFLAGS) LOOP_I10000.c getHash.o -o LOOP_I10000


clean:
	rm LOOP_I10000 getHash.o
