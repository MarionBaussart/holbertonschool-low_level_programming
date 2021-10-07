#include "main.h"

/**
 * print_line - print ______, 1_ = n lines
 * @n: number of line
 */

void print_line(int n)
{
	int i = 1;

	if (n > 0)
	{
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}
