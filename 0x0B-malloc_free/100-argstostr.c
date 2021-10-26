#include "main.h"
#include <stdlib.h>
#include<stdio.h>

/**
 * argstostr - display all the arguments of your program
 * @ac: the grid we want to free
 * @av: height of the grid
 * Return: newstring concatenates
 */

char *argstostr(int ac, char **av)
{
	char *newstring = NULL;
	int i = 0, j = 0, k = 0, length = 0;

/* condition of tasks */
	if (ac == 0 || av == NULL)
		return (NULL);

/* count the length of **av */
	while (i < ac)
	{
		while (av[i][j])
		{
			length++, j++;
		}
		i++, length++, j = 0;
	}

/* allocate memory and verificate if memory is allowed */
	newstring = malloc(sizeof(char) * length + 1);
	if (newstring == NULL)
	{
		free(newstring);
		return (NULL);
	}

/* concatener arguments of av and \n in newstring */
	i = 0, j = 0;
	while (i < ac)
	{
		while (av[i][j])
		{
			newstring[k] = av[i][j];
			k++, j++;
		}
		newstring[k] = '\n';
		k++, i++, j = 0;
	}

	return (newstring);
}
