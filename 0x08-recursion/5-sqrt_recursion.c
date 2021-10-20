#include "main.h"
#include <stdio.h>

/**
 * _square - search the square equal to n
 * @n: number
 * @i: square
 * Return: i, otherwise -1
 */

int _square(int n, int i)
{
	if (i > 0)
	{
		if (i * i != n)
		{
			i = _square(n, i - 1);
		}
	}
	else
		return (-1);
	return (i);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: square root of n, if n < 0 or square root not integer its return -1
 */

int _sqrt_recursion(int n)
{
	int i = n;

	if (n < 0)
	{
		return (-1);
	}
	return (_square(n, i));
}
