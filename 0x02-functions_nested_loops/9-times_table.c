#include "holberton.h"
/**
 * times_table - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int num1, num2, exp = 0;

	for (num1 = 0 ; num1 < 10 ; num1++)
	{
		for (num2 = 0 ; num2 < 10 ; num2++)
		{
			exp = num1 * num2;
			if ( < 10 && num2 != 0)
			{
				_putchar(32);
				if (exp < 10)
					_putchar(exp + '0');
				else
				{
					exp = exp / 10;
					exp = exp % 10;
				}
			}
			if (num2 < 9)
			{
				_putchar(44);
				_putchar(32);
			}
			else
				_putchar(10);
		}
	}
}
