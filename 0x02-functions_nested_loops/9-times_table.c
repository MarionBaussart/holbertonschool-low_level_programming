#include "main.h"

/**
 * times_table - print multiplication tables
 */

void times_table(void)
{
	int i, j, num, unum, dnum;

	i = j = 0;
	while (i < 10)
	{
		while (j < 10)
		{
			num = i * j;
			dnum = (num / 10) + 48;
			unum = (num % 10) + 48;
			if (dnum == 48)
			{
				_putchar(unum);
			}
			else
			{
				_putchar(dnum);
				_putchar(unum);
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
		j = 0;
	}
}
