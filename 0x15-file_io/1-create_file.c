#include "main.h"

/**
 * create_file - creates a file
 * @filename: file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_return;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1 || filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
		write_return = write(fd, text_content, _strlen(text_content));

	if (write_return == -1)
	{
		return (-1);
	}

	close(fd);

	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string of character
 * Return: i, number of character
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
