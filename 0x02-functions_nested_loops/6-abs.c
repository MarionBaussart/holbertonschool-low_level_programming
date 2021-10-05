#include "main.h"

/**
 * _abs - absolute value of the number
 * @n: variable n corresponding to a number
 * Return: 0 if suceed
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = n * (-1);
	}
	return (n);
}
