#include "main.h"
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
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: a pointer to a newly allocated
 * space in memory which contains the contents of s1,
 * followed by the contents of s2, and null terminated
 */

char *str_concat(char *s1, char *s2)
{
	char *newstring = NULL;
	int length_s1, length_s2;
	int i = 0;

	if (s1 == NULL)
		length_s1 = 0;
	else
		length_s1 = _strlen(s1);
	if (s2 == NULL)
		length_s2 = 0;
	else
		length_s2 = _strlen(s2);

	newstring = malloc(sizeof (char) * (length_s1 + length_s2 + 1));
	if (newstring == NULL)
		return (NULL);

	while (i < length_s1)
	{
		newstring[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < length_s2)
	{
		newstring[length_s1] = s1[i];
		length_s1++;
		i++;
	}

	return (newstring);
}
