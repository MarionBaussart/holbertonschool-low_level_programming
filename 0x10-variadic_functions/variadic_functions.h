#ifndef HEADER_FILE
#define HEADER_FILE variadic_functions.h
#include <stddef.h>
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct list_format - Struct list_format
 *
 * @tf: type of format
 * @nfunc: name of the function to use
 */
typedef struct list_format
{
	char *tf;
	void (*nfunc)(va_list);
} format_t;

void print_char(va_list list);
void print_integer(va_list list);
void print_float(va_list list);
void print_string(va_list list);

#endif
