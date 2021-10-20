#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: lenght of the string s
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}

/**
 * forpalindrome - fct use to compare a string
 * @s: string
 * @i: index
 * @size: size of string
 * Return: 1 if palindrome, 0 otherwise
 */

int forpalindrome(char *s, int i, int size)
{
	if (s)
	{
		if (s[i] != s[size - 1])
			return (0);
		if (s[i] == s[size - 1] && (i == size || i == size - 1))
		{
			return (1);
		}
		if (s[i] == s[size - 1] && i <= size)
		{
			return (forpalindrome(s, i + 1, size - 1));
		}
	}
	return (0);
}

/**
 * is_palindrome - palindrome or not (ex : kayak is a palindrome)
 * @s: string
 * Return: 1 if it is a palindrome, otherwise 0
 */

int is_palindrome(char *s)
{
	int i = 0, size = _strlen_recursion(s);

	if (s)
	{
		return (forpalindrome(s, i, size));
	}
	else
		return (1);
}
