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
 * _strcat - concatenates two strings
 * @dest: string 1
 * @src: string 2
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
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
	char *newstring;
	int length_s1, length_s2;

	if (s1 == NULL)
		length_s1 = 0;
	else
		length_s1 = _strlen(s1);
	if (s2 == NULL)
		length_s2 = 0;
	else
		length_s2 = _strlen(s2);

	newstring = malloc(length_s1 + length_s2 + 1);
	if (newstring == NULL)
		return (NULL);

	if (s1 != NULL && s2 != NULL)
		_strcat(_strcat(newstring, s1), s2);
	else if (s1 == NULL)
		_strcat(newstring, s2);
	else if (s2 == NULL)
		_strcat(newstring, s1);

	return (newstring);
}
