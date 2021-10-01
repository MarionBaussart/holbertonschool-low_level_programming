#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - 012, 013, ...
 * Return: 0 if succeed
 */

int main(void)
{
	int n1;
	int n2;
	int n3;

	n1 = 48;
	n2 = 48;
	n3 = 48;
	while (n1 < 58)
	{
		while (n2 < 58)
		{
			while (n3 < 58)
			{
				if (n1 != n2 && n2 != n3 && n1 < n2 && n2 < n3)
				{
					putchar(n1);
					putchar(n2);
					putchar(n3);
					if (n1 != 55)
					{
						putchar(',');
						putchar(' ');
					}
				}
				n3++;
			}
			n2++;
			n3 = 48;
		}
		n1++;
		n2 = 48;
	}
	putchar('\n');
	return (0);
}
