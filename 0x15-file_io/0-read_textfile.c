#include "holberton.h"
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * read_textfile - reads a text file
 * @filename: file to read
 * @letters: number of letters it should read
 * Return: actual numbers it could read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp, cl, num, counter;
	char *buffer;

	if (filename == NULL)
		return (0);
	/* malloc buffer */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	/* open the file and check if fails */
	fp = open(filename, O_RDWR);
	if (fp == -1)
	{
		free(buffer);
		return (0);
	}
	/* read files and check if fails */
	counter = read(fp, buffer, letters);
	num = write(STDOUT_FILENO, buffer, (ssize_t)counter);
	if (num == -1)
	{
		free(buffer);
		return (0);
	}
	if (counter != n)
		return (0);
	free(buffer);
	cl = close(fp);
	if (cl == -1)
		return (0);
	return (num);
}
