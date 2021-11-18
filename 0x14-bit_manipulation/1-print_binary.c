#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned long int to convert into binary
 * Return: the converted number
 */

void print_binary(unsigned long int n)
{
	unsigned long int num = n, exp = 1, i = 0;

/* choose the power of 2 max */
	while (num > exp)
		exp = exp * 2;

	while (n != 0)
	{
		if (n >= exp)
		{
			_putchar('1');
			n = n - exp;
			i++;
		}
		else
			if (i > 0)
			_putchar('0');
		exp = exp / 2;
	}
	while (exp > 0)
	{
		_putchar('0');
		exp = exp / 2;
	}
}
