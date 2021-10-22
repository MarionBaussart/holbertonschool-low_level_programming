#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * atoi : transforme in int : take all digits
 * of the number character if more than one digit
 * @argc: number of character, character can be more than one
 * @argv: name of the string
 * Return: 0 if succeed
 */

int main(int argc, char **argv)
{
	int car = 1, digit = 0, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else if (argv)
	{
		while (car < argc)
		{
			while (argv[car][digit])
			{
				if (isdigit(argv[car][digit]) == 0)
				{
					printf("Error\n");
					return (1);
				}
				digit++;
			}
			sum += atoi(argv[car]);
			car++;
			digit = 0;
		}
		printf("%d\n", sum);
	}
	return (0);
}
