#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 if succeed
 *
 * printf - printf("what we want to write %d", what write instead of %d);
 * %d is for a number
 * sizeof evaluates the size of a variable
 */
int main(void)
{
char charType;
int intType;
long int longintType;
long long int longlongintType;
float floatType;

printf("Size of a char: %d byte(s)\n", sizeof(charType));
printf("Size of an int: %d byte(s)\n", sizeof(intType));
printf("Size of a long int: %d byte(s)\n", sizeof(longintType));
printf("Size of a long long int: %d byte(s)\n", sizeof(longlongintType));
printf("Size of a float: %d byte(s)\n", sizeof(floatType));
	return (0);
}
