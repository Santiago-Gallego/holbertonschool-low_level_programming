#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a, b = 0;

	while (b < 11)
	{
		for (a = 'a' ; a <= 'z'; a++)
			_putchar(a);
		_putchar('\n');
		b++;
	}
	return (0);
}
