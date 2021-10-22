#include <stdio.h>

/**
 * main - program that prints its name
 * @argc: number of character, character can be more than one
 * @argv: name of the string
 * Return: 0 if succeed
 */

int main(int argc, char **argv)
{
/**
 * (void) argc; significate that argc is empty and we are not gonna use it
 */
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
