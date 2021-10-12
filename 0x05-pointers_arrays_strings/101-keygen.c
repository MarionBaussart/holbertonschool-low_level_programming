#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - cle keygen
 * Return: 0 if succeed
 */

int main(void)
{
	int cle, n;

	srand(time(NULL));
	for (cle = 2772; cle > 127;)
	{
		n = (rand() % 127);
		printf("%c", cle);
		cle -= n;
	}
	printf("%c", cle);
	return (0);
}
