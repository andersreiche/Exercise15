#-*- Makefile -*-

all: Exercise15

Exercise15: Exercise15.o
	gcc Exercise15.o -o Exercise15

Exercise15.o: Exercise15.c
	gcc -c Exercise15.c

clean:
	rm *.o Exercise15
