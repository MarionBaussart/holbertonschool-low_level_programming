#include "main.h"

/**
 * _strcmp - compares two strings with acsii code
 * @s1: string 1
 * @s2: string 2
 * Return: diff
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int diff = 0;

	while (s1[i] && s2[i])
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			diff = s1[i] - s2[i];
		}
	}
	return (diff);
}
