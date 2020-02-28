#include "holberton.h"

/**
 * _strncpy - copies one string (or bytes given)
 * @dest: where to copy;
 * @src: string to copy or bytes to copy
 * @n: how many bytes
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (i != n)
	{
		dest[j] = src[i];
		if (src[i] == '\0')
		{
			dest[j] = '\0';
			break;
		}
		j++;
		i++;
	}
	while (j != n)
		dest[j++] = '\0';
	return (dest);
}
