#include "holberton.h"
/**
 * create_file - check the code for Holberton School students.
 * @filename: file to create
 * @text_content:string to write
 * Return: 1 itext_contentn case of exit
 */
int create_file(const char *filename, char *text_content)
{
	int pf;
	int i = 0;
	int var;

	if (filename == NULL)
		return (-1);

	pf = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (pf == -1)
		return (-1);

		while (text_content[i])
			i++;
		if (text_content == NULL)
		{
			close(pf);
			return (-1);
		}

		var = write(pf, text_content, i);
		if (var == -1)
			return (-1);

		close(pf);
		return (1);
}
