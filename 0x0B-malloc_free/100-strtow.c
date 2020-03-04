#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * strtow - check the code for Holberton School students.
 * @str: pointer
 * Return: 1 if an error occurred, 0 otherwise
 */
char **strtow(char *str)
{
	char **array;
	int i, j, count, len, k, m;

	count = k = 0;
	if (str == NULL || str[0] == '\0')
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
	}
	if (count == 0)
		return (NULL);
	array = malloc(((count + 1) * sizeof(char *)));
	if (array == NULL)
		return (NULL);
	for (i = 0; str[i] !=  '\0' ; i++)
	{
		if (str[i] != ' ')
		{
			len = 0;
			j = i;
			while (str[j] != ' ' && str[j] != '\0')
				j++, len++;
			array[k] = malloc((len + 1) * sizeof(char));
			if (array[k] == NULL)
			{
				for (k = k - 1; k >= 0; k++)
					free(array[k]);
				free(array);
				return (NULL);
			}
			for (m = 0; m < len; m++, i++)
				array[k][m] = str[i];
			array[k++][m] = '\0';
		}
	}
	array[k] = NULL;
	return (array);
}
