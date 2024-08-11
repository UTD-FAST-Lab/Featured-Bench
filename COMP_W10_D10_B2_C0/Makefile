all: COMP_W10_D10_B2_C0 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
COMP_W10_D10_B2_C0: getHash
	$(CC) $(CFLAGS) COMP_W10_D10_B2_C0.c getHash.o -o COMP_W10_D10_B2_C0


clean:
	rm COMP_W10_D10_B2_C0 getHash.o
