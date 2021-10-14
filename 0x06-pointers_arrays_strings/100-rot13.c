#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string using rot13
 * @str: string of character
 * Return: str
 */

char *rot13(char *str)
{
	int i = 0, j = 0;
	char letter[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char yrggre[53] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[i])
	{
		j = 0;
		while (letter[j])
		{
			if (str[i] == letter[j])
			{
				str[i] = yrggre[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
