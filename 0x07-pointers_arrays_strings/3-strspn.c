#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: character accepted
 * Return: num
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0, num = 0;

	while (s[i])
	{
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				num += 1;
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (i);
}
