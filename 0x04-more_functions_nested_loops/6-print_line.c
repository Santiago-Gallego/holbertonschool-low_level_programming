#include "holberton.h"
/**
 * print_line - Print straight line.
 * @n: Integer as a number.
 * Return: Always 0.
 */
void print_line(int n)
{
	int tiempo;

	if (n == 0)
	{
		_putchar('\n');
	}
	else
	{
		for (tiempo = 1; tiempo <= n; tiempo++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
