#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - locates a character in a string an delete char before
 * @s: string
 * @accept: character accepted
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;

	while (s[i])
	{
		while (accept[j] && s[i] != accept[j])
		{
			j++;
		}
		if (s[i] == accept[j])
		{
			return (s + i);
		}
		j = 0;
		i++;
	}
	return (0);
}
