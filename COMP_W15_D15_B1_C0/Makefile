all: COMP_W15_D15_B1_C0 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
COMP_W15_D15_B1_C0: getHash
	$(CC) $(CFLAGS) COMP_W15_D15_B1_C0.c getHash.o -o COMP_W15_D15_B1_C0


clean:
	rm COMP_W15_D15_B1_C0 getHash.o
