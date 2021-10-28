#include "main.h"
#include <stdlib.h>

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

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to the memory previously allocated
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 * Return: the pointer to the newly created array
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newptr = NULL;

/* return conditions */
	if (new_size == old_size)
		return (ptr);
/* allocate memory */
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	newptr = malloc(new_size);
	if (newptr == NULL)
	{
		free(newptr);
		return (NULL);
	}
/* copy ptr in newprt */
	if (new_size > old_size)
		_memcpy(newptr, ptr, old_size);
	else
		_memcpy(newptr, ptr, new_size);
	free(ptr);
	return (newptr);
}
