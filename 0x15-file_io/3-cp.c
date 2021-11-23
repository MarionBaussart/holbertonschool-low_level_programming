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
		exit_procedure(97, 0, av);
/* open files */
	file_from = open(av[1], O_RDONLY);
	file_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_from == -1)
		exit_procedure(98, file_from, av);
	if (file_to == -1)
		exit_procedure(99, file_to, av);
/* copy : read and write */
	while ((read_return = read(file_from, buf, 1024)) != 0)
	{
		if (read_return == -1)
			exit_procedure(98, file_from, av);
		write_return = write(file_to, buf, read_return);
		if (write_return == -1)
			exit_procedure(99, file_to, av);
	}
/* close the files */
	close_return = close(file_from);
	if (close_return == -1)
		exit_procedure(100, file_from, av);
	close_return = close(file_to);
	if (close_return == -1)
		exit_procedure(100, file_to, av);
	return (0);
}

/**
 * exit_procedure - procedure for writting the exit message
 * @code: number of arguments
 * @fd: file descriptor
 * @av: list of arguments
 * Return: no return
 */

void exit_procedure(int code, int fd, char **av)
{
	if (code == 97)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (code == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (code == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	if (code == 100)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
		exit(100);
	}
}
