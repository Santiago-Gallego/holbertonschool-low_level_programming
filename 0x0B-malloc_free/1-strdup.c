#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - check the code for Holberton School students.
 * @str: pointer
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	int c = 0, s = 0;

	char *d;

	if (str == NULL)
		return (NULL);
	while (str[s] != '\0')
	{
		s++;
		c++;
	}
	c = 0;
	d = malloc(sizeof(char) * (s + 1));
	if (d == NULL)
		return (NULL);
	while (c < (s + 1))
	{
		d[c] = str[c];
		c++;
	}

	if (str == NULL)
		return (NULL);
	return (d);
}
