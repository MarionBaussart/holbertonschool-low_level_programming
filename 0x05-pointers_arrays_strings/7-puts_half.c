#include "main.h"

/**
 * puts_half - prints  the second half of a string
 * @str: string of character
 */

void puts_half(char *str)
{
	int nbchar = 0, i = 0;

	while (*(str + nbchar) != '\0')
	{
		nbchar++;
	}
	if (nbchar % 2 == 0)
	{
		i = nbchar / 2;
	}
	else
	{
		i = (nbchar - 1) / 2;
	}
	if (nbchar != 0)
	{
		while (i < nbchar)
		{
			_putchar(str[i]);
			i++;
		}
	}
	_putchar('\n');
}
