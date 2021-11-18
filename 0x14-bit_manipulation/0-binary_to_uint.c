#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: string of character
 * Return: i, number of character
 */

int _strlen(const char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: number
 * @y: power
 * Return: x^y, if y < 0 its return -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number to convert
 * Return: the converted number, or 0 if there is one or more
 * chars in the string b that is not 0 or 1 || b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int length = _strlen(b), exp = 0;
	unsigned int uintnum = 0;

	if (b == NULL)
		return (0);

	while (length > 0)
	{
		if (b[length - 1] == '1')
			uintnum += _pow_recursion(2, exp);

		else if (b[length - 1] != '0' && b[length - 1] != '1')
			return (0);

		exp++;
		length--;
	}

	return (uintnum);
}
