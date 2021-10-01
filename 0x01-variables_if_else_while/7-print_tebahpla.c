#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - generate a random number and print the alphabet
 * in reverse
 * Return: 0 if succeed
 */

int main(void)
{
	char abc;

	abc = 'z';
	while (abc >= 'a')
	{
		putchar(abc);
		abc--;
	}
	putchar('\n');
	return (0);
}
