CFLAGS= -Og -Wall  -std=c99 -msse3

all: dynamic 

dynamic: dynamic_array.c
	gcc ${CFLAGS} -o dynamic dynamic_array.c -lm

clean:
	rm -f dynamic
