#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @d: struct dog named d
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

    newdog->name = malloc(sizeof(newdog->name));
    if (newdog->name == NULL)
    {
        free(newdog->name);
        free(newdog);
        return (NULL);
    }

    newdog->owner = malloc(sizeof(newdog->owner));
    if (newdog->owner == NULL)
    {
        free(newdog->owner);
        free(newdog);
        return (NULL);
    }

/* create a new dog */
    newdog->name = name;
    newdog->age = age;
    newdog->owner = owner;

    return (newdog);
}
