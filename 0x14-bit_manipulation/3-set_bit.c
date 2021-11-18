#include "main.h"
#include <stdio.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: unsigned long int
 * @index: index start at 0 (right to left)
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = *n;

    if (index > 32)
        return (-1);

    if (index == 0)
    {
        if ((*n & 1) == 0)
            *n = *n + 1;
        else
            return (-1);      
    }

    else
    {
        bit = bit >> index;

        if ((bit & 1) == 0)
        {
            bit = bit + 1;
            bit = bit << index;
            *n = *n | bit;
        }
    }

	return (1);
}
