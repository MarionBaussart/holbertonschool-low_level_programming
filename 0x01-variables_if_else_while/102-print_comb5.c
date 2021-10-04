#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - 00 01, 00 02, ...
 * Return: 0 if succeed
 */

int main(void)
{
int n1, n2, m1, m2, num1, num2;

n1 = n2 = m1 = m2 = 48;
while (n1 < 58)
{
	while (n2 < 58)
	{
		while (m1 < 58)
		{
			while (m2 < 58)
			{
				num1 = (n1 * 10) + n2;
				num2 = (m1 * 10) + m2;
				if (num1 < num2)
				{
					putchar(n1);
					putchar(n2);
					putchar(' ');
					putchar(m1);
					putchar(m2);
					if (n1 == 57 && n2 == 56 && m1 == 57 && m2 == 57)
						break;
					putchar(',');
					putchar(' ');
				}
				m2++;
			}
			m1++;
			m2 = 48;
		}
		n2++;
		m1 = 48;
	}
	n1++;
	n2 = 48;
}
putchar('\n');
return (0);
}
