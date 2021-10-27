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
	int i = 0, j = 0, k = 0, length = 0, lengthw = 0, nbword = 0;

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
			{
				i++;
				length++;
				printf("i : %d, length : %d\n", i, length);
			}
			nbword++;
			printf("nbword : %d\n", nbword);
			if (lengthw < length)
				lengthw = length;
			length = 0;
			printf("lenght : %d, lenghtw : %d", length, lengthw);
		}
		printf("exit secnd wile\n");
	}
	printf("exit first wile\n");

/* allocate memory and verificate if memory is allowed */
	newstring = malloc(sizeof(char *) * nbword + 1);
	if (newstring == NULL)
	{
		free(newstring);
		return (NULL);
	}
	for (i = 0; i < nbword + 1; i++)
	{
		newstring[i] = malloc(sizeof(int) * lengthw);
		if (newstring[i] == NULL)
		{
			for (i = 0; i < nbword + 1; i++)
				free(newstring[i]);
			free(newstring);
			return (NULL);
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
				i++;
				k++;
			}
			newstring[j][k] = '\n';
			k++;
			newstring[j][k] = '\0';
		}
		k = 0;
		j++;
	}

	return (newstring);
}
