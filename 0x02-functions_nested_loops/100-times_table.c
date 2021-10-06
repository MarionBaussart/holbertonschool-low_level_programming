#include "main.h"
#include <stdio.h>

/**
 * print_times_table - print a particular multiplication table
 * @n: number of the table
 */

void print_times_table(int n)
{
	int i, j, num;

	i = j = 0;
	if (n <= 15 && n > 0)
	{
		while (i <= n)
		{
			while (j <= n)
			{
				num = i * j;

				if (j == 0)
					printf("%d", num);
				else if (i == 0 && j > 0)
					printf("   0");
				else
					printf("%4.d", num);

				if (j != n)
					printf(",");

				j++;
			}
			printf("\n");
			i++;
			j = 0;
		}
	}
}
