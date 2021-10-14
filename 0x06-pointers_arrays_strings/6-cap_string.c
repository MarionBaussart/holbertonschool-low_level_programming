/**
 * charspecial - is a special character
 * @c: character
 * Return: 1 if special, 0 otherwise
 */

int charspecial(char c)
{
	int i = 0;
	char chars[13] = " \t\n,;.!?\"(){}";

	while (chars[i])
	{
		if (chars[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

/**
 * cap_string - capitalizes all words of a string
 * @str: string of character
 * Return: str
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		else if (charspecial(str[i]) && str[i + 1] >= 'a' && str[i + 1] <= 'z'
					&& str[i + 1])
		{
			str[i + 1] -= 32;
		}
		i++;
	}
	return (str);
}
