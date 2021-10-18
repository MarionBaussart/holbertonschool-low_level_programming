#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area of src to dest, from + number until n
 * @dest: name of buffer receveur
 * @src: name of buffer that we copy
 * @n: number of bytes of buffer src to copy
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
