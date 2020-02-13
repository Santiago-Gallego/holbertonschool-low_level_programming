#include "holberton.h"
/**
 * print_diagonal - Print diagonal.
 * @n: Integer as a number.
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int a = 0;
	int spaces;

	while (a < n)
	{
		spaces = 1;
		while (spaces <= a)
		{
			_putchar(' ');
			spaces++;
		}
		_putchar(92);
		_putchar('\n');
		a++;
	}
	if (n <= 0)
		_putchar('\n');
}
