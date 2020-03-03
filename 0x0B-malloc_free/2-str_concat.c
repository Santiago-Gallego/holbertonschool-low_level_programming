#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - check the code for Holberton School students.
 * @s1: pointer
 * @s2: pointer
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, I = 0, a = 0, b = 0;

	char *p;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	while (s1[i] != '\0')
		i++;
	while (s2[I] != '\0')
		I++;
	p = malloc(sizeof(char) * (i) + (I + 1));
	if (p == NULL)
		return (NULL);
	while (s1[a] != '\0')
	{
		if (s1[a] != '\0')
		{
			p[a] = s1[a];
			a++;
		}
	}
	while (s2[b] != '\0')
	{
		p[a] = s2[b];
		a++;
		b++;
	}
	p[a] = '\0';
	return (p);
}
