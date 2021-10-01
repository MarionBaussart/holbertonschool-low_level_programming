#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - generate a random number and print the alphabet
 * in lowert case without q and e
 * Return: 0 if succeed
 */

int main(void)
{
	char abc;

	abc = 'a';
	while (abc <= 'z')
	{
		if (abc != 'e' && abc != 'q')
		{
			putchar(abc);
		}
		else
		{
			abc++;
		}
		abc++;
	}
	putchar('\n');
	return (0);
}
