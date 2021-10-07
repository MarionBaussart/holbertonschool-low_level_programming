#include "main.h"

/**
 * more_numbers - print 0 to 14
 */

void more_numbers(void)
{
	int i = 0, j = 0;

	while (i < 10)
	{
		while (j < 15)
		{
			if (j > 9)
			{
				_putchar((j / 10) + 48);
			}
			_putchar((j % 10) + 48);
			j++;
		}
		i++;
		j = 0;
		_putchar('\n');
	}
}
