#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _memcpy - check the code for Holberton School students.
 * @dest: pointer
 * @src: pointer
 * @n: new size
 * Return: Always 0.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
/**
 * _realloc - check the code for Holberton School students.
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 * Return: Always 0.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *asign;

	if (ptr == NULL)
	{
		asign = malloc(new_size);
		if (asign == NULL)
		{
			free(ptr);
			return (NULL);
		}
		free(ptr);
		return (asign);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	asign = malloc(new_size);
	if (asign == NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		_memcpy(asign, ptr, old_size);
	}
	free(ptr);
	return (asign);
}
