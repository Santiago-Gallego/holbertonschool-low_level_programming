#include "holberton.h"
/**
 * _len - returns length of string
 * @s: character of string
 * Return: length of string
 */
int _len(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
	}
	return (i);
}
/**
 * create_file - create new file
 * @filename: file name
 * @text_content: file content
 * Return: 1 success -1 failed
 */
int create_file(const char *filename, char *text_content)
{
	int fp;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fp == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	if (write(fp, text_content, _len(text_content)) == -1)
	{
		close(fp);
		return (-1);
	}
	close(fp);
	return (1);
}
