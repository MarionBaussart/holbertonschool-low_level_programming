#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - printf 0123456789
 * Return: 0 if succeed
 */

int main(void)
{
	int a;

	a = 0;
	while (a < 10)
	{
		printf("%d", a);
		a++;
	}
	putchar('\n');
	return (0);
}
