#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
char *str_concat(char *s1, char *s2)
{
	int i = 0, I = 0, a = 0, b = 0;

	char *p;

	while(s1[i] != '\0')
		i++;
	while(s2[I] != '\0')
		I++;

	p = malloc(sizeof(char) * (i) + (I + 1));

	while(s1[a] != '\0')
	{
		if(s1[a] != '\0')
		{
			p[a] = s1[a];
			a++;
		}
	}
	while(s2[b] != '\0')
	{
		p[a] = s2[b];
		a++;
		b++;
	}
	p[a] = '\0';
	return (p);
}
