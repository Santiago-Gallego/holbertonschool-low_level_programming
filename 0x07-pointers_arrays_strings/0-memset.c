#include "holberton.h"

/**
 *_memset - sets first n bytes of the memory area
 * @s: array to set
 * @b: what to set it to
 * @n: first n bytes
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
