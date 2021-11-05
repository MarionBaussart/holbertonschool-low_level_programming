#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: name of the string
 * Return: 0 if succeed
 */

int main(int argc, char **argv)
{
	int i = 0, nbytes = atoi(argv[1]);
	unsigned char opcode;
	int (*f)(int, char **);

	f = &main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (i < nbytes)
	{
		opcode = *(unsigned char *)f;
		printf("%02x", opcode);

		if (i != nbytes - 1)
			printf(" ");

		f++;
		i++;
	}
	printf("\n");
	return (0);
}
