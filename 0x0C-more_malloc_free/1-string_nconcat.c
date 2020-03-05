#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - check the code for Holberton School students.
 * @s1: pointer
 * @s2: pointer
 * @n: variable unsigned
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{}
	ptr = malloc((i + (n * sizeof(*s2) + 1) * sizeof(*ptr)));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (k = 0; s2[k] != '\0' && k < n; k++, i++)
		ptr[i] = s2[k];
	ptr[i] = '\0';
	return (ptr);
}
