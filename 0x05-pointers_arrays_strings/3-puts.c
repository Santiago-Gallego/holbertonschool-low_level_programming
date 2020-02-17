#include <stdio.h>
#include "holberton.h"

/**
 * _puts - prints a string followed by a new line
 * @str: string to print
 * Return: nothing;
 */

void _puts(char *str)
{
	int i;
	char letter;

	for (i = 0; str[i] != 0; i++)
	{
		letter = str[i];
		_putchar(letter);
	}
	_putchar('\n');
}
