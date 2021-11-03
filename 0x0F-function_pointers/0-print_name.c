#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: name of the person
 * @f: pointer to a function that take a char as parameter
 * and returns nothing
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
