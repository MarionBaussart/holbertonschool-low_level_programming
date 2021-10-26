#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of array
 * @c: specific char
 * Return: a pointer to the array, or NULL if it fails or size = 0
 */

char *create_array(unsigned int size, char c)
{
	char *array = NULL;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(int) * size);
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
