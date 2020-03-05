#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - check the code for Holberton School students.
 * @nmemb: variable
 * @size: variable
 * Return: Always 0.
 */
int *array_range(int min, int max)
{
	int *ptr;
	int diferencia, i;

	if (min > max)
		return (NULL);
        diferencia = max - min;
	ptr = malloc((diferencia + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= diferencia; min++, i++)
	{
		ptr[i] = min;
	}
	return (ptr);
}
