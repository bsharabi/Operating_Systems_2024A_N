CC = gcc
FLAGS = -Wall -g



run:clean intro introP q1 q2

intro:
	$(CC) $(FLAGS) -o intro intro.c


introP:
	$(CC) $(FLAGS) -o introP introPointer.c

q1:
	$(CC) $(FLAGS) -o q1 Q1.c

q2:
	$(CC) $(FLAGS) -o q2 Q2.c

clean:
	rm -f *.o *.out  intro introP q1 q2