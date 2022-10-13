#PROGS = eps sc
CC = gcc
CFLAGS = -pthread -o

#all: $(PROGS)

main: eps.o sc.o
	$(CC) $(CFLAGS) main eps.o sc.o 


eps.o: eps.c eps.h sc.h
	$(CC) -c -lpthread eps.c
	
sc.o : sc.c sc.h
	$(CC) -c sc.c


#clean:
	#rm $(PROGS) *.o main
