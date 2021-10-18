#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum
 * of the two diagonals of a square matrix of integers
 * @a: matrix
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int i = 0, sum1 = 0, sum2 = 0;

	while (i < size)
	{
		sum1 += *(a + (size * i) + i);
		sum2 += *(a + size + (size * i) - (i + 1));
		i++;
	}
	printf("%d, %d\n", sum1, sum2);
}
