#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type struct dog
 * @d: name of struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (name == NULL || age == 0 || owner == NULL)
		exit(0);
	else
	{
		(*d).name = name;
		d->age = age;
		d->owner = owner;
	}
}
