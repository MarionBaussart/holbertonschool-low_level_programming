#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int a = 0;
	int b = 97;

	while (a < 10)
	{
		while (b < 123)
		{
			_putchar(b);
			b++;
		}
		_putchar('\n');
		a++;
		b = 97;
	}
}
