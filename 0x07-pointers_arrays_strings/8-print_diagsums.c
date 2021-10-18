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
	int row = 0, column = 0, sum1 = 0, sum2 = 0;

	while (row < size)
	{
		sum1 += *((a + row) + column);
		row++;
		column++;
	}
	row = 0;
	column = size - 1;
	while (row < size && column >= 0)
	{
		sum2 += *((a + row) + column);
		row++;
		column--;
	}
	printf("%d, %d\n", sum1, sum2);
}
