#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of argument
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int next_value = 0, sum = 0;
/* pointer of the list named list */
	va_list list;

	if (n == 0)
		return (0);

/* parcourir the list which the last argument is n */
	va_start(list, n);

	while (i < n)
	{
/* va_arg give us the next argument of the list parameter */
		next_value = va_arg(list, int);
		sum += next_value;
		i++;
	}

	return (sum);
}
