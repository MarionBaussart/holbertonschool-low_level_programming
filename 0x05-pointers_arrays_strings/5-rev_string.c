/**
 * rev_string - reverses a string
 * @s: string of characters
 */

void rev_string(char *s)
{
	int i = 0, j = 0, nbchar = 0;
	char value;

	while (*(s + i) != '\0')
	{
		nbchar = i;
		i++;
	}
	while (j < nbchar)
	{
		value = s[j];
		s[j] = s[nbchar];
		s[nbchar] = value;
		j++;
		nbchar--;
	}
}
