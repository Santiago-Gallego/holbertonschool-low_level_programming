#include "holberton.h"
/**
 * print_sign - check the code for Holberton School students.
 * @a: variable
 * Return: Always 0.
 */
int print_sign(int a)
{
	if (a > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (a < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
