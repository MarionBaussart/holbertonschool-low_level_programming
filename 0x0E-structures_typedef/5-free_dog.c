#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees struct dog
 * @d: name of struct dog
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
