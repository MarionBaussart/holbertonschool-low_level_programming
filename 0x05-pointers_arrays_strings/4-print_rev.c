#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string of character
 */

void print_rev(char *s)
{
	int i = 0, nbchar = 0;

	while (*(s + i) != '\0')
	{
		nbchar = i;
		i++;
	}
	if (nbchar != 0)
	{
		while (nbchar >= 0)
		{
			_putchar(s[nbchar]);
			nbchar--;
		}
		_putchar('\n');
	}
}
