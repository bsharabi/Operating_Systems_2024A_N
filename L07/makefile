CC = gcc
FLAGS = -Wall -g



run:clean allocate Q1 allocateF


run2:
	valgrind --leak-check=full ./allocateF

allocate:
	$(CC) $(FLAGS) -o allocate allocate.c

allocateF:
	$(CC) $(FLAGS) -o allocateF allocateF.c

Q1:
	$(CC) $(FLAGS) -o q1 Q1.c

clean:
	rm -f *.o *.out  allocate q1 allocateF