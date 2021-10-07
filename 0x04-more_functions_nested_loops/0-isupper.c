#include "main.h"

/**
 * _isupper - say if it is lower or upper letter
 * @c: variable c corresponding to the number ASCII of the letter or character
 * Return: 1 if is upper, 0 otherwise
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
