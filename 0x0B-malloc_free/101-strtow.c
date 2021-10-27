#include "main.h"
#include <stdlib.h>
#include<stdio.h>

/**
 * strtow - splits a string into words
 * @str: string to split
 * Return: newstring splited
 */

char **strtow(char *str)
{
	char **newstring = NULL;
	int i = 0, j = 0, k = 0, l = 0, length = 0, nbword = 0;

/* condition of tasks */
	if (str == 0 || str == NULL)
		return (NULL);

/* count the number of words and the lenght of words */
	while (str[i])
	{
		if (str[i] == ' ')
			i++;
		else
		{
			while (str[i] != ' ')
				i++, length++;
			nbword++;
		}
	}

/* allocate memory and verificate if memory is allowed */
	newstring = malloc(sizeof(char **) * (nbword + 1));
	if (newstring == NULL)
	{
		free(newstring);
		return (NULL);
	}

	i = 0;
	while (str[i])
	{
		if (str[i] == ' ')
			i++;
		else
		{
			while (str[i] != ' ')
				i++, length++;
			newstring[l] = malloc(sizeof(int) * length);
			if (newstring[l] == NULL)
			{
				for (i = 0; i < nbword + 1; i++)
					free(newstring[i]);
				free(newstring);
				return (NULL);
			}
			l++;
		}
	}

/* concatener arguments of av and \n in newstring */
	i = 0;
	while (str[i])
	{
		if (str[i] == ' ')
			i++;
		else
		{
			while (str[i] != ' ')
			{
				newstring[j][k] = str[i];
				i++, k++;
			}
			newstring[j][k] = '\0';
			j++;
		}
		k = 0;
	}

	return (newstring);
}
