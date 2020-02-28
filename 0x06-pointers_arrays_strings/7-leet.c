#include "holberton.h"

/**
 * leet - encodes a string into 1337
 * @s: string to be encoded
 *
 * Return: pointer to encoded string
 */
char *leet(char *s)
{
	int i, j;

	char *letters = "aeotlAEOTL";
	char *numbers = "4307143071";

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (s[i] == letters[j])
				s[i] = numbers[j];
		}

	return (s);
}
