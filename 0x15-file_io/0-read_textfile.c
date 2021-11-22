#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to print
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 * 0 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t read_number, write_number;

	fd = open(filename, O_RDONLY);

	if (fd == -1 || filename == NULL)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
	{
		return (0);
	}

	read_number = read(fd, buf, letters);
	write_number = write(STDOUT_FILENO, buf, read_number);

	close(fd);

	free(buf);

	return (write_number);
}
