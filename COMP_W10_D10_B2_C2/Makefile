all: COMP_W10_D10_B2_C2 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
COMP_W10_D10_B2_C2: getHash
	$(CC) $(CFLAGS) COMP_W10_D10_B2_C2.c getHash.o -o COMP_W10_D10_B2_C2


clean:
	rm COMP_W10_D10_B2_C2 getHash.o
