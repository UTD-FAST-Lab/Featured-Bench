all: COMP_W5_D5_B1_C0 getHash

getHash:
	echo $(CC)
	$(CC) $(CFLAGS) -c getHash.c -o getHash.o
COMP_W5_D5_B1_C0: getHash
	$(CC) $(CFLAGS) COMP_W5_D5_B1_C0.c getHash.o -o COMP_W5_D5_B1_C0


clean:
	rm COMP_W5_D5_B1_C0 getHash.o
