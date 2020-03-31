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
 * append_text_to_file - appends text ot a file.
 * @filename: name of file
 * @text_content: what to write
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	fp = open(filename, O_RDWR | O_APPEND);
	if (fp == -1)
	{
		return (-1);
	}
	if (write(fp, text_content, _len(text_content)) == -1)
	{
		close(fp);
		return (-1);
	}
	close(fp);
	return (1);
}
