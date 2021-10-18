#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte
 * @s: name of buffer
 * @b: adress of the constant byte
 * @n: first n bytes of buffer
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}