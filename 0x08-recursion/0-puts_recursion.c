#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string
 * @s: string to print
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}