#include "holberton.h"
/**
 * print_most_numbers - Print numbers without 2 and 4.
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		if (a == '2' || a == '4')
		{

		}
		else
		{
			_putchar(a);
		}
	}
	_putchar('\n');

}
