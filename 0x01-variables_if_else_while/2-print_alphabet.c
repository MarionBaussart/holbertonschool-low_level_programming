#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main - generate a random number and print the alphabet
  * Return: 0 if succeed
  */

int main(void)
{
	char abc;

	abc = 97;
	while (abc < 123)
	{
		putchar(abc);
		abc++;
	}
	putchar('\n');
	return (0);
}
