#include "main.h"

/**
 * print_square - print ### in square
 * @size: size of square
 */

void print_square(int size)
{
	int i = 0, j = 0;

	if (size > 0)
	{
		while (i < size)
		{
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			j = 0;
			i++;
		}
	}
	else
		_putchar('\n');
}
