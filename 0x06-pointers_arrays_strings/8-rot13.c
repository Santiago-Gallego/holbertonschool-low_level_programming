#include "holberton.h"
/**
 * rot13 - encode a string using rot13
 * @s: string to be encoded
 *
 * Return: pointer to encoded string
 */
char *rot13(char *s)
{
	int i, j;

	char *letters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *encrypt = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = encrypt[j];
				break;
			}
		}
	return (s);
}
