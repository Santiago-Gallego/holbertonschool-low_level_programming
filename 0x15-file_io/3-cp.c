#include "holberton.h"

/**
 * main - cps contents of one file to another
 * @ac: arguement count
 * @av: arguement list: file names
 * Return: 0;
 */
int main(int ac, char **av)
{
	int fd_from, fd_to;
	int check_in, check_out;
	char buffer[1024];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	check_in = check_out = 1;
	while (check_in)
	{
		check_in = read(fd_from, buffer, 1024);
		if (check_in == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		if (check_in > 0)
		{
			check_out = write(fd_to, buffer, check_in);
			if (check_out == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
		}
	}
	check_in = close(fd_from);
	if (check_out == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);
	check_out = close(fd_to);
	if (check_out == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);
	return (0);
}
