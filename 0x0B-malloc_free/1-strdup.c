#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

	newstring = malloc(strlen(str) + 1);
	if (newstring == NULL)
		return (NULL);

	strcpy(newstring, str);

	return (newstring);
}
