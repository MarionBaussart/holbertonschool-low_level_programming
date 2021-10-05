#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print to 98
 * @n: number of depart
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		if (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		else if (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		
	}
	printf("%d\n", n);
}
