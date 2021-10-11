#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string
 * Return: num, number
 */

int _atoi(char *s)
{
	 unsigned int i = 0, nbmoins = 0, num = 0;

	while ((s[i] < '0' || s[i] > '9') && s[i] != '\0')
	{
		if (s[i] == '-')
		{
			nbmoins = nbmoins + 1;
		}
		i++;
	}
	while (s[i] > 47 && s[i] < 58 && s[i] != '\0')
	{
		num = (num * 10) + (s[i] - 48);
		i++;
	}
	if (nbmoins % 2 != 0)
		num = num * (-1);
	return (num);
}
