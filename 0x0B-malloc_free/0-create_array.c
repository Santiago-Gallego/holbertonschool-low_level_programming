#include "holberton.h"
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
	if (!ar)
		return (NULL);
	for (i = 0; i < size; i++)
		ar[i] = c;
	return (ar);
}
