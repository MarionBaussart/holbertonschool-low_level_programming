#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array
 * @size: size of the array
 * @cmp: pointer to a function to be used to compare values
 * that take an int as parameter and returns an int
 * Return:  index of the first element for which the cmp function
 * does not return 0 , If no element matches, return -1
 * If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	if (array != 0 && cmp != NULL)
	{
		while (i < size)
		{
			if (cmp(array[i]) != 0)
				return (i);
			i++;
		}
	}
	return (-1);
}
