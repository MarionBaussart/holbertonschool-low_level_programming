#include "main.h"

/**
 * _isdigit - say if it is a digit (0 to 9)
 * @c: variable c corresponding to the number ASCII of the character
 * Return: 1 if is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
