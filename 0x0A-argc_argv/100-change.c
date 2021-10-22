#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money
 * number of coins of values 25, 10, 5, 2, and 1 cent
 * @argc: number of character, character can be more than one
 * @argv: name of the string
 * Return: 0 if succeed
 */

int main(int argc, char **argv)
{
	int i = 0, num;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num < 0)
		printf("0\n");
	while (num > 0)
	{
		if (num >= 25)
			num -= 25;
		else if (num >= 10)
			num -= 10;
		else if (num >= 5)
			num -= 5;
		else if (num >= 2)
			num -= 2;
		else if (num >= 1)
			num -= 1;
		i += 1;
	}
	printf("%d\n", i);
	return (0);
}
