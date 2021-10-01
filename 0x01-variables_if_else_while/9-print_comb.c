#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - 0, 1, 2, ...
 * Return: 0 if succeed
 */

int main(void)
{
	int n;

	n = 48;
	while (n < 58)
	{
		if (n < 57)
		{
			putchar(n);
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar(n);
		}
		n++;
	}
	return (0);
}
