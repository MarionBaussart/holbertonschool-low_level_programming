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
		putchar(n);
		if (n < 57)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
