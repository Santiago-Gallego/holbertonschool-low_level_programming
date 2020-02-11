#include "holberton.h"
/**
 * _abs - check the code for Holberton School students.
 * @a: is variable
 * Return: Always 0.
 */
int _abs(int a)
{
	if (a >= 0)
	{
		return (a);
	}
	else
	{
		a = -1 * a;
		return (a);
	}
	return (0);
}
/**
 * print_last_digit - check the code for Holberton School students.
 * @a: is variable
 * Return: Always 0.
 */
int print_last_digit(int a)
{
	a = _abs(a);
	a %= 10;
	_putchar(a + '0');
	return (a);
}
