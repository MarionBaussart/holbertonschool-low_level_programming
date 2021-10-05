#include "main.h"

/**
 * jack_bauer - print every minutes of 24 hours
 */

void jack_bauer(void)
{
int d1, u1, d2, u2, num1, num2;

num1 = num2 = 0;

while (num1 < 24)
{
	while (num2 < 60)
	{
		d1 = (num1 / 10) + 48;
		u1 = (num1 % 10) + 48;
		d2 = (num2 / 10) + 48;
		u2 = (num2 % 10) + 48;
		_putchar(d1);
		_putchar(u1);
		_putchar(':');
		_putchar(d2);
		_putchar(u2);
		_putchar('\n');
		num2++;
	}
	num1++;
	num2 = 0;
}
}
