#include "main.h"

/**
 * _isalpha - letter or not
 * @c: variable c corresponding to the number ASCII of the letter or character
 * Return: 1 if is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
