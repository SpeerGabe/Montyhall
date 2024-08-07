CC = g++
CFLAGS = -g -Wall -Wextra

default: monty

monty:	 monty.o main.o
	$(CC) $(CFlags) -o monty monty.o main.o
monty.o: monty.cpp monty.h
	$(CC) $(CFLAGS) -c monty.cpp
main.o:	main.cpp monty.h
	$(CC) $(CFLAGS) -c main.cpp

clean:
	$(RM) monty *.o *~
