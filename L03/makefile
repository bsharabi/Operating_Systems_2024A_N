CC = gcc
FLAGS = -Wall -g


function:
	$(CC) $(FLAGS) -o runFunction function.c

array:
	$(CC) $(FLAGS) -o runArray arrays.c

run:clean array
	./runArray

clean:
	rm -f *.o *.out runFile runArray