#include "main.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: string of character
 * Return: i, number of character
 */

unsigned int _strlen(char *s)
{
	unsigned int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * string_nconcat - concatenates two strings s1 + n character of s2
 * @s1: string one
 * @s2: string two
 * @n: number of characters to copy of s2
 * Return: a pointer to a newly allocated
 * space in memory which contains the contents of s1,
 * followed by the n contents of s2, and null terminated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newstring = NULL;
	unsigned int i = 0, j = 0;

/* allocate memory */
	newstring = malloc(sizeof(char) * (_strlen(s1) + n + 1));
	if (newstring == NULL)
		return (NULL);

/* concatenates two strings */
	while (i < _strlen(s1))
	{
		newstring[i] = s1[i];
		i++;
	}
	while (j < n)
	{
		newstring[i] = s2[j];
		i++;
		j++;
	}
	if (_strlen(s2) > n)
		newstring[i] = '\0';

	return (newstring);
}
