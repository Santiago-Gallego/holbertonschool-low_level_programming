#include "holberton.h"

/**
 * string_toupper - func that changes all lowercase letters
 * of a string to uppercase
 * @c: character to change
 * Return: character
 */

char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] = c[i] - 32;
	}
	return (c);
}
