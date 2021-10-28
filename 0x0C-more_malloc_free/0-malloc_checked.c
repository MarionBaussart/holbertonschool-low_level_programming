#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: size allocate
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
