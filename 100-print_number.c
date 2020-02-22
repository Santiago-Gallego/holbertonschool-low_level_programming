#include "holberton.h"

/**
 * print_number - prints a number
 * @n: number
 * Return: nothing;
 */

void print_number(int n)
{
	int  sign, exp;

	exp = 1000000000;
	sign = 1;
	if (n > 0)
	{
		n *= -1;
		sign *= -1;
	}
	if  (n != 0)
	{
		while ((n / exp) ==  0)
		{
			exp = exp / 10;
		}
		if (sign == 1)
			_putchar('-');
		while (exp >= 1)
		{
			_putchar(-(n / exp) + '0');
			n = n % exp;
			exp = exp / 10;
		}
	}
	else
		_putchar('0');
}
