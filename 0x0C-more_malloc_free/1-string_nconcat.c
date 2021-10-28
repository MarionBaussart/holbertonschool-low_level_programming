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
	unsigned int length_s1, length_s2;

	length_s1 = s1 == NULL ? 0 : _strlen(s1);
	length_s2 = s2 == NULL ? 0 : _strlen(s2);
	length_s2 = n > length_s2 ? length_s2 : n;

/* allocate memory */
	newstring = malloc(sizeof(char) * (length_s1 + length_s2 + 1));
	if (newstring == NULL)
		return (NULL);

/* concatenates two strings */
	while (i < length_s1)
	{
		newstring[i] = s1[i];
		i++;
	}
	while (j < length_s2)
	{
		newstring[i] = s2[j];
		i++;
		j++;
	}
	newstring[i] = '\0';

	return (newstring);
}
