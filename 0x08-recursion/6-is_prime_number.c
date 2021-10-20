#include "main.h"

/**
 * prime - prime number or not
 * @n: number
 * @i: multiple
 * Return: 1, otherwise 0
 */

int prime(int n, int i)
{
	if (i <= n)
	{
		if (n == 1 || n < 0)
		{
			return (0);
		}
		if (n % i == 0 && i != n)
		{
			return (0);
		}
		if (n % i == 0 && i == n)
		{
			return (1);
		}
		if (n % i != 0)
		{
			return (prime(n, i + 1));
		}
	}
	return (0);
}

/**
 * is_prime_number - prime number ?
 * @n: number
 * Return: returns 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	int i = 2;

	return (prime(n, i));
}
