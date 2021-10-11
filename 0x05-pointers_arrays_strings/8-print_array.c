#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: array of integer
 * @n: size of array
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n - 1)
	{
		printf("%d, ", *(a + i));
		i++;
	}
	if (i == n - 1)
	{
		printf("%d\n", *(a + i));
	}
}
