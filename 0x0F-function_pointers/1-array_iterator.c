#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - function that executes a function
 * given as a parameter on each element of an array
 * @array: array
 * @size: size of the array
 * @action: pointer to a function that take an int as parameter
 * and returns nothing
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (size != 0 && action != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
