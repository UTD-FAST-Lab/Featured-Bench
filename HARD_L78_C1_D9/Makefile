all: HARD_L78_C1_D9 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
HARD_L78_C1_D9: getHash
	$(CC) $(CFLAGS) HARD_L78_C1_D9.c getHash.o -o HARD_L78_C1_D9


clean:
	rm HARD_L78_C1_D9 getHash.o
