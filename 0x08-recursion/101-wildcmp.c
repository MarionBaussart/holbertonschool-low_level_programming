#include "main.h"
#include <stdio.h>

/**
 * wildcmp - compares two strings and returns 1 if the strings
 * can be considered identical, otherwise return 0
 * @s1: first string
 * @s2: second string
 * Return: 1 if equal, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2 && *s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s2 == '*' && *(s2 + 1) == '*')
	{
		return (wildcmp(s1, s2 + 1));
	}
	if (*s2 == '*' && *(s2 + 1) != *s1 && *(s1 + 1) == '\0' && *(s2 + 2) == '\0')
	{
		return (1);
	}
	if (*s2 == '*' && *(s2 + 1) != *s1)
	{
		return (wildcmp(s1 + 1, s2));
	}
/**
 * tests
 */
	if (*s2 == '*' && *(s2 + 1) == *s1)
	{
		return (wildcmp(s1, s2 + 1));
	}
	return (0);
}