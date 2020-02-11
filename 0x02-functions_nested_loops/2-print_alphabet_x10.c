#include "holberton.h"
/**
 * print_alphabet_x10 - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int a, b = 0;

	while (b < 10)
	{
		for (a = 'a' ; a <= 'z'; a++)
			_putchar(a);
		_putchar('\n');
		b++;
	}

}
