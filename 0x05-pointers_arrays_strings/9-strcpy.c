#include "main.h"

/**
 * _strcpy - copy string to another
 * @dest: string receveuse
 * @src: string to copy
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
