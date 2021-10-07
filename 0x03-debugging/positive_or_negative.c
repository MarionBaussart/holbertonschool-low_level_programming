#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - generate a random number and say its signe
 * Return: 0 if succeed
 */

void positive_or_negative(int n)
{
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		if (n < 0)
		{
			printf("%d is negative\n", n);
		}
		else
		{
			printf("%d is zero\n", n);
		}
	}
}
