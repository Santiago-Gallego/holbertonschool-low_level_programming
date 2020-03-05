#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - check the code for Holberton School students.
 * @nmemb: variable
 * @size: variable
 * Return: Always 0.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
