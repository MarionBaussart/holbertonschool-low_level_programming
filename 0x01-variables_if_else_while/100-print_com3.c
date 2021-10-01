#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - 01, 02, ...
 * Return: 0 if succeed
 */

int main(void)
{
	int n1;
	int n2;

	n1 = 48;
	n2 = 48;
	while (n1 < 58)
	{
		while (n2 < 58)
		{
			if (n1 != n2 && n1 < n2)
			{
				putchar(n1);
				putchar(n2);
				if (n1 != 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
			n2++;
		}
		n1++;
		n2 = 48;
	}
	putchar('\n');
	return (0);
}
