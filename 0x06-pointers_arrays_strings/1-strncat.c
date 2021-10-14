#include "main.h"

/**
 * _strncat - concatenates two strings dest + n character of src
 * @dest: string 1
 * @src: string 2
 * @n : number of characters to copy of src
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0, k = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[k] != '\0')
	{
		k++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (k > n)
		dest [i] = '\0';
	return (dest);
}
