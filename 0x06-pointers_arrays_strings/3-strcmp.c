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

	while (s1[i] == s2[i] && s1[i] && s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
