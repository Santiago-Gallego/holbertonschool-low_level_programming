#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if(size == 0)
		return(0);
	ar = malloc(sizeof(char) * size);
	if(ar == NULL)
		return(NULL);
	for(count = 0; count < size; count++)
		ar[count] = c;
	return (ar);
}
