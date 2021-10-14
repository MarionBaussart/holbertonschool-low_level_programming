/**
 * leet - encodes a string into 1337
 * @str: string of character
 * Return: s
 */

char *leet(char *str)
{
	int i = 0, j = 0;
	char letter[10] = "aAeEoOtTlL";
	char number[10] = "4433007711";

	while (str[i])
	{
		while (letter[j])
		{
			if (str[i] == letter[j])
			{
				str[i] = number[j];
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (str);
}
