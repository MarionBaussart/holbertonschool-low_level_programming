#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
 * _strcpy - copy string to another
 * @dest: string receveuse
 * @src: string to copy
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}


/**
 * _strdup - copy of the string given as a parameter
 * @str: string to copy
 * Return: a pointer to a newly allocated space in memory
 */

char *_strdup(char *str)
{
	char *newstring;

	if (!str)
		return (NULL);

	newstring = malloc(_strlen(str) + 1);
	if (newstring == NULL)
		return (NULL);

	_strcpy(newstring, str);

	return (newstring);
}
