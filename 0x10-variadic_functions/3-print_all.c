#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_char - print a char
 * @c: char
 * Return: No return.
 */

void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_integer - print an integer
 * @i: integer
 * Return: No return.
 */

void print_integer(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_float - print a float
 * @f: float
 * Return: No return.
 */

void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_chars - print a string
 * @s: string
 * Return: No return.
 */

void print_string(va_list list)
{
	char *string = va_arg(list, char *);

	if (string == NULL)
		printf("(nil)");
	else
		printf("%s", string);
}

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * Return: No return.
 */

void print_all(const char * const format, ...)
{
	format_t list_format[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	int i = 0, j = 0;
	char *separator = "";
/* pointer of the list named print_a */
	va_list list;

/* parcourir the list which the last argument is format */
	va_start(list, format);

	while (format[i] && format)
	{
		while (list_format[j].tf != NULL)
		{
			if (format[i] == *list_format[j].tf)
			{
				printf("%s", separator);
				separator = ", ";
				list_format[j].nfunc(list);
			}
			j++;
		}
		j = 0;
		i++;
	}
	printf("\n");
}
