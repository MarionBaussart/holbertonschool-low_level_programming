#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: variable n corresponding to a number
 * Return: 0 if suceed
 */

int print_last_digit(int n)
{
	if (n > 0)
	{
		n = n % 10;
	}
	else
	{
		n = -n % 10;
	}
	_putchar(n + 48);
	return (n);
}
