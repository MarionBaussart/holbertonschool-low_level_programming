#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to newdog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

/* allocate memory */
	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		free(newdog);
		return (NULL);
	}

	newdog->name = malloc(sizeof(newdog->name + 1));
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}

	newdog->owner = malloc(sizeof(newdog->owner + 1));
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}

/* create a new dog */
	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;

	return (newdog);
}
