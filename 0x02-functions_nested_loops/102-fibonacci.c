#include "main.h"
#include <stdio.h>

/**
 * main - print fibonacci, n = n-1 + n-2
 *
 * Return: 0 if suceed
 */
int main(void)
{
	int i;
	long int n, a, b;

	i = 2;
	n = 0;
	a = 1;
	b = 2;
	printf("1");
	printf(", 2");
	while (i < 50)
	{
		n = a + b;
		a = b;
		b = n;
		printf(", %ld", n);
		i++;
	}
	printf("\n");
	return (0);
}
