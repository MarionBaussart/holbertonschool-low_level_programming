#include "main.h"

/**
 * is_prime_number - prime number = divided by 1 and himself
 * @n: number
 * Return: returns 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	if (n == 1 || n < 0)
	{
		return (0);
	}
	if (n / 1)
	{
		return (is_prime_number(n));
	}
}
