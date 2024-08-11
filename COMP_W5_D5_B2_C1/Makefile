all: COMP_W5_D5_B2_C1 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
COMP_W5_D5_B2_C1: getHash
	$(CC) $(CFLAGS) COMP_W5_D5_B2_C1.c getHash.o -o COMP_W5_D5_B2_C1


clean:
	rm COMP_W5_D5_B2_C1 getHash.o
