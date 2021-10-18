#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string an delete char before
 * @s: string
 * @c: character searched
 * Return: s
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		i++;
	}
	if (*(s + i) == c)
	{
		return (s + i);
	}
	else
	{
		return (0);
	}
}
