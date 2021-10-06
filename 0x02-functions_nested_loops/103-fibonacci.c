#include "main.h"
#include <stdio.h>

/**
 * main - print sum of even fibonacci
 *
 * Return: 0 if suceed
 */
int main(void)
{
	int i;
	long int n, a, b, sum;

	i = 2;
	n = 0;
	a = 1;
	b = 2;
	sum = 2;
	while (i < 50)
	{
		n = a + b;
		a = b;
		b = n;
		if (n % 2 == 0 && n < 4000000)
		{
			sum = sum + n;
		}
		i++;
	}
	printf("%ld\n", sum);
	return (0);
}
