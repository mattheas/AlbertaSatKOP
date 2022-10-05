PROGS = eps sc
CC = gcc
CFLAGS = -std=gnu99

all: $(PROGS)

main: eps.c sc.c
	$(CC) $(CFLAGS) -o main eps.c sc.c

clean:
	rm $(PROGS) *.o main