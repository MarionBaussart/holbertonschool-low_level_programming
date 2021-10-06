#include "main.h"
#include <stdio.h>

/**
 * main - print sum of all the multiples of 3 and 5 below
 * 1024(excluded)
 *
 * Return: 0 if suceed
 */
int main(void)
{
	int i, sum;

	i = sum = 0;
	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
