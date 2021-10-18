#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: character accepted
 * Return: s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0;

	while (s[i])
	{
		while (accept[j])
		{
			if (s[i] = accept[j])
			{
				break;
			}
			else
				s[i] = '\0';
			j++;
		}
		j = 0;
		i++;
	}
	return (s);
}
