#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * main - print 98 first fibonacci, n = n-1 + n-2
 * Return: 0 if suceed
 */
int main(void)
{
	int i = 2;
	unsigned long int n = 0, a = 1, b = 2, n1 = 0, n2 = 0;
	unsigned long int n3 = 0, a1 = 0, a2 = 1, b1 = 0, b2 = 2;

	printf("1"), printf(", 2");
	while (i < 98)
	{
		if (n < 10000000000)
		{
			n = a + b;
			a = b;
			b = n;
			printf(", %lu", n);
		}
		else
		{
			n1 = ((a1 + b1) / 10000000000);
			n2 = ((a2 + b2) % 10000000000);
			a1 = (b1 / 10000000000);
			a2 = (b2 % 10000000000);
			b1 = (n1 / 10000000000);
			b2 = (n2 % 10000000000);
			if ((n2 / 10000000000) != 0)
			{
				n3 = n2 / 10000000000;
				printf(", %lu", (n1 + 1)), printf("%lu", n3);
			}
		}
		i++;
	}
	printf("\n");
	return (0);
}
