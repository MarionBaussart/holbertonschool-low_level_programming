#include "main.h"

/**
 * print_triangle - print # in triangle
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int i = 1, j = 0;

	if (size > 0)
	{
		while (i <= size)
		{
			j = 0;
			while (j < size - i)
			{
				_putchar(' ');
				j++;
			}
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
