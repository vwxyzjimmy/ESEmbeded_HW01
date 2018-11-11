cc = gcc
cflags = -Wall

main: main.o
	${cc} main.o ${cflags} -o main
main.o:
	${cc} main.c ${cflags} -c
clean:
	rm -rf main.o
