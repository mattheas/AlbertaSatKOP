TARGET = main
CC = gcc
CFLAGS = -pthread -o

objects = eps.o sc.o

.PHONY : clean

$(TARGET): clean $(objects)
	$(CC) $(CFLAGS) $(TARGET) $(objects)

eps.o: ./eps/eps.c ./eps/eps.h ./sc/sc.h
	$(CC) -I./eps -I./sc -c ./eps/eps.c
	
sc.o : ./sc/sc.c ./sc/sc.h
	$(CC) -c ./sc/sc.c



