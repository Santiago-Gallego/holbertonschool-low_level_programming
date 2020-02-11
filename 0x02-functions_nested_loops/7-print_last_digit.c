#include "holberton.h"
/**
 * print_last_digit - check the code for Holberton School students.
 * @a: is variable
 * Return: Always 0.
 */
int print_last_digit(int a)
{
	a = a *-1;
	a %= 10;
	_putchar(a + '0');
	return (a);
}
