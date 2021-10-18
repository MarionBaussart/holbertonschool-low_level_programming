#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: characters searched
 * Return: s
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (haystack[i])
	{
		while (haystack[i] == needle[j])
		{
			return (haystack + i);
			i++;
			j++;
		}
		i++;
		j = 0;
	}
	if (haystack[i] == needle[j])
	{
		return (haystack + i);
	}
	else
	{
		return (0);
	}
}
