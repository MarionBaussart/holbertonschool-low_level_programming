#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - generate a random number and print the alphabet
 * in lowert case and upper case
 * Return: 0 if succeed
 */

int main(void)
{
	char abc;
	char ABC;

	abc = 97;
	ABC = 65;
	while (abc < 123)
	{
		putchar(abc);
		abc++;
	}
	while (ABC < 91)
	{
		putchar(ABC);
		ABC++;
	}
	putchar('\n');
	return (0);
}
