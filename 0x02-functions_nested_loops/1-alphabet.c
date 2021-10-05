#include "main.h"

/**
 * print_alphabet - print alphabet
 */

void print_alphabet(void)
{
	int a;

	a = 97;
	while (a < 123)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
