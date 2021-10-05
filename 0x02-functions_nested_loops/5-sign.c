#include "main.h"

/**
 * print_sign - sign of the number
 * @n: variable n corresponding to a number
 * Return: 1 if is >0, 0 if it's 0, -1 if it's negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
