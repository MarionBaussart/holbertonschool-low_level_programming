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
	unsigned long int bit = 0;

    if (index == 0)
    {
        if (n & 1)
            n = n - 1;
        else
            return (-1);      
    }

	while (index > 0)
	{
		if (bit > 0)
		{
			bit = n >> 1;
		}
		else
			return (-1);
		index--;
	}
    if (bit & 1)
    {
        bit = bit - 1;
        
    }
        
    else
        return (-1);

	return (1);
}
