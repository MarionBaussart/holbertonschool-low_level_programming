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

	i = 1;
	n = 0;
	a = 0;
	b = 1;
	printf("0");
	while (i < 50)
	{
		n = a + b;
		a = b;
		b = a + b;
		printf(", %ld", n);
		i++;
	}
	printf("\n");
	return (0);
}
