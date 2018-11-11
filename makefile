CC = gcc
CFLAGS = -Wall

all: main.elf function_pointer.elf print_a_to_z.elf

main.elf: main.c
	$(CC) $(CFLAGS) main.c -o main.elf

function_pointer.elf:
	$(CC) $(CFLAGS) function_pointer.c -o function_pointer.elf
print_a_to_z.elf:
	$(CC) $(CFLAGS) print_a_to_z.c -o print_a_to_z.elf

clean:
	rm -f *.o *.elf
