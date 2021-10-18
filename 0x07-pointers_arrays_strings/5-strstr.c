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
		while (needle[j] && haystack[i + j] == needle[j])
		{
			j++;
		}
		if (needle[j] == '\0')
			return (haystack + i);
		if (needle[j])
		{
			j = 0;
			i++;
		}
	}
	return (0);
}
