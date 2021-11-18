#include "main.h"
#include <stdio.h>

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: unsigned long int
 * @index: index start at 0 (right to left)
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (n == 0)
		return (0);

	if (index == 0)
		return (n & 1);

	while (index > 0)
	{
		if (n > 0)
		{
			n = n >> 1;
		}
		else if (n == 0)
			return (0);
		else
			return (-1);
		index--;
	}

	return (n & 1);
}
