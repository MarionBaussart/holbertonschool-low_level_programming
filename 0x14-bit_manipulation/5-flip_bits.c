#include "main.h"
#include <stdio.h>

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbits = 0;
	unsigned long int num = 0;

	num = (n ^ m);

	while (num != 0)
	{
		if (num & 1)
			nbits++;

		num = num >> 1;
	}

	return (nbits);
}
