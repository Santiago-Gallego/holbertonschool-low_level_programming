#include "holberton.h"
#include <stdlib.h>

/**
 * _strchr - returns a pointer to the first occurence of the
 * character c in the string s
 * @c: caracter to return
 * @s: string to search character
 * Return: pointer to first occurence of character c or null if not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	else
		return (NULL);
}
