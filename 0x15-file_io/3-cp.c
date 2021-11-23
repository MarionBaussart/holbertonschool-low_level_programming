#include "main.h"

/**
 * main - program that copies the content of a file to another file
 * @ac: number of arguments
 * @av: list of the arguments
 * Return: no return
 */

int main(int ac, char **av)
{
	int file_from, file_to;
	ssize_t read_return, write_return, close_return;
	char buf[1024];

/* number of argument is not the correct one */
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
/* open file_from and read */
	file_from = open(av[1], O_RDONLY);

	if (file_from == -1 || av[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	read_return = read(file_from, buf, 1024);
	if (read_return == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
/* open file_to, create if doesn't exist and write */
	file_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	write_return = write(file_to, buf, read_return);
	if (file_to == -1 || write_return == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
/* close the files */
	close_return = close(file_from);
	if (close_return == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file_from);
		exit(100);
	}
	close_return = close(file_to);
	if (close_return == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file_to);
		exit(100);
	}
	return (0);
}
