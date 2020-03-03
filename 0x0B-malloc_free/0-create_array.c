#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - check the code for Holberton School students.
 * @size: size
 * @c: pointer
 *Return: pointer.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size == 0)
		return (NULL);
	ar = malloc(sizeof(char) * size);
	if (ar == NULL)
		return (NULL);
	for (count = 0; count < size; count++)
		ar[count] = c;
	return (ar);
}
