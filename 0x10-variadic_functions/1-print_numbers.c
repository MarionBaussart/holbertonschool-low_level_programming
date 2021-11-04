#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: No return.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
/* pointer of the list named numbers */
	va_list numbers;

/* parcourir the list which the last argument is n */
	va_start(numbers, n);

	while (i < n)
	{
		printf("%d", va_arg(numbers, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
}
