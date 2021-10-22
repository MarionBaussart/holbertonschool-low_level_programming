#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 * (void) argv; significate that argc is empty and we are not gonna use it
 * @argc: number of character, character can be more than one
 * @argv: name of the string
 * Return: 0 if succeed
 */

int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
