#include "main.h"

/**
 * _islower - lower or upper letter
 * @c: variable c corresponding to the number ASCII of the letter or character
 * Return: 0 if is upper, 1 if is lower
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
