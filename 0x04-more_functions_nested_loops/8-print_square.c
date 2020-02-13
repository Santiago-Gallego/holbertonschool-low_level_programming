#include "holberton.h"
/**
 * print_square - Print a Square.
 * @size: Size of the square.
 * Return: Always 0.
 */
void print_square(int size)
{
	int a = 0, b = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (a < size)
		{
			while (b < size)
			{
				_putchar(35);
				b++;
			}
			b = 0;
			_putchar('\n');
			a++;
		}
	}
}
