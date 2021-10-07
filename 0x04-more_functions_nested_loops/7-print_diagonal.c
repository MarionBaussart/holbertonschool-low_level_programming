#include "main.h"

/**
 * print_diagonal - print \ in diagonal, n times
 * @n: number of line
 */

void print_diagonal(int n)
{
	int i = 0, j = 0;

	if (n > 0)
	{
		while (i < n)
		{
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
			j = 0;
			i++;
		}
	}
	if (n <= 0)
	_putchar('\n');
}
