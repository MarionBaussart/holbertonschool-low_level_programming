#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max
 * @min: integer minimum
 * @max: integer maximum
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *array;
	int i = 0;

/* return conditions */
	if (min > max)
		return (NULL);

/* allocate memory */
	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
		return (NULL);

/* create array */
	while (min <= max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}
