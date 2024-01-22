CC = gcc
FLAGS = -Wall -g

all:clean q1
	./q1

run:clean string
	./string

string:
	$(CC) $(FLAGS) -o string string.c



q1:
	$(CC) $(FLAGS) -o q1 Q1.c


clean:
	rm -f *.o *.out  string q1