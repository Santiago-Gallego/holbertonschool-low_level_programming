#include "holberton.h"
/**
 * printNun - check the code for Holberton School students.
 * @a: is variable
 * Return: Always 0.
 */
int printNun(int a)
{
	if (a < 10)
		_putchar(a + '0');
	else
	{
		_putchar(a / 10 + '0');
		_putchar(a % 10 + '0');
	}
}
/**
 * times_table - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int num1, num2, exp;

	for (num1 = 0 ; num1 < 10 ; num1++)
	{
		for (num2 = 0 ; num2 < 10 ; num2++)
		{
			exp = num1 * num2;
			if (exp < 10 && num2 != 0)
				_putchar(32);
			printNum(exp);
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
