#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * exit is the same as return but we can't use return because 98 is an int
 * malloc should return a pointer
 * @b: size allocate
 * Return: a pointer
 */

void *malloc_checked(unsigned int b)
{
	int *place = malloc(b);

	if (place == NULL)
	{
		free(place);
		exit(98);
	}
	return (place);
}
