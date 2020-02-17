#include "holberton.h"

/**
 * print_rev- prints a string in reverse
 * @s: string to reverse
 * Return: nonel
 */

void print_rev(char *s)
{
	int j;
	char letter;

	for (j = 0; s[j] != 0; j++)
	{
	}
	for (j = j - 1; j >= 0; j--)
	{
		letter = s[j];
		_putchar(letter);
	}
	_putchar('\n');
}
