#include "main.h"
#include <stdio.h>

/**
 * main - prints the largest prime factor
 * of the number 612852475143
 *
 * Return: 0 if succeed
 */
int main(void)
{
	long int i = 2;
	long int num = 612852475143;

	while (num > 1)
	{
		if (num % i == 0)
		{
			num = num / i;
		}
		else
			i++;
	}
	printf("%ld\n", i);
	return (0);
}
