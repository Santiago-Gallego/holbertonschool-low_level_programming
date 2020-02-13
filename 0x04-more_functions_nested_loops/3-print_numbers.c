#include "holberton.h"
/**
 * print_numbers - Print Numbers.
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
