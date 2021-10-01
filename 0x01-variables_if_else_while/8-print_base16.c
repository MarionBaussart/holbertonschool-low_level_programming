#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - hexadecimal
 * Return: 0 if succeed
 */

int main(void)
{
	char n;
	char a;

	n = 48;
	a = 97;
	while (n < 58)
	{
		putchar(n);
		n++;
	}
	while (a < 103)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
