#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * atoi : transforme in int : take all digits
 * of the number character if more than one digit
 * @argc: number of character, character can be more than one
 * @argv: name of the string
 * Return: 0 if succeed
 */

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
