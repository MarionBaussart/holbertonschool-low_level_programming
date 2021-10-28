#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array with memory set to zero
 * @nmemb: number of elements of the array
 * @size: size of one element
 * Return: a pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

/* allocate memory */
	array = malloc(size * nmemb + 1);
	if (array == NULL)
		return (NULL);

/* memory set to 0 */
	while (i < nmemb - 1)
	{
		array[i] = 0;
		i++;
	}
	return (array);
}
