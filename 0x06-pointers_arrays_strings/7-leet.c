#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string into 1337
 * @str: string of character
 * Return: s
 */

char *leet(char *str)
{
	int i = 0, j = 0;
	char letter[11] = "aAeEoOtTlL";
	char number[11] = "4433007711";

	while (str[i])
	{
		j = 0;
		while (letter[j])
		{
			if (str[i] == letter[j])
			{
				str[i] = number[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}
