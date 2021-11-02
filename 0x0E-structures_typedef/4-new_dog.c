#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: string of character
 * Return: i, number of character
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

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
		return (NULL);
	}

	if (newdog->name == name)
		newdog->name = malloc(sizeof(char) * _strlen(name) + 1);
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}

	if (newdog->owner == owner)
	newdog->owner = malloc(sizeof(char) * _strlen(owner) + 1);
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
