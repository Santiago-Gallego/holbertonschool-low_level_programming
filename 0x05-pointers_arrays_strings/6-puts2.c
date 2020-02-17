#include "holberton.h"

/**
 * puts2 - prints one char out of 2 of a string
 * @str: string to print out
 * Return: none
 */

void puts2(char *str)
{
	int i;
	char letter;

	for (i = 0; str[i] != 0; i++)
	{
		if (i % 2 == 0)
		{
			letter = str[i];
			_putchar(letter);
		}
	}
	_putchar('\n');
}
