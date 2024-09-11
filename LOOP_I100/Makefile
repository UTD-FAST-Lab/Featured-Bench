all: LOOP_I100 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
LOOP_I100: getHash
	$(CC) $(CFLAGS) LOOP_I100.c getHash.o -o LOOP_I100


clean:
	rm LOOP_I100 getHash.o
