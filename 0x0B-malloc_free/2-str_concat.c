#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

	newstring = malloc(strlen(s1) + 1 + strlen(s2) + 1);
	if (newstring == NULL)
		return (NULL);

	strcat(strcat(newstring, s1), s2);

	return (newstring);
}
