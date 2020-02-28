#include "holberton.h"

/**
 * _puts_recursion - print a string, followed by a new line
 * @s: string to be printed
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
	{
		_putchar('\n');
	}
}
