#include "holberton.h"
/**
 * print_triangle - Print a triangle.
 * @size: Integer as a number that acts like size.
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int i = 1;
	int j = 1;
	int espacios = 1;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
		while (i <= size)
		{
			espacios = 1;
			j = 1;
			while (espacios <= (size - i))
			{
				_putchar(' ');
				espacios++;
			}
			while (j <= i)
			{
				_putchar('#');
				j++;
			}
			i++;
			_putchar('\n');
		}
}
