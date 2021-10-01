#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - 0123456789 with putchar
 * Return: 0 if succeed
 */

int main(void)
{
	char n;

	n = 48;
	while (n < 58)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
