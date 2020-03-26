#include "holberton.h"
#include <stdio.h>
#include <limits.h>
/**
 * print_binary - prints the binary representation of an unsigned lont
 * @n: number to convert
 * Return: none
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask, temp, flag;
	int count;

	count = sizeof(unsigned long int) * 8 - 1;
	mask = 1;
	flag = 0;
	while (count >= 0)
	{
		temp = n >> count;
		if ((temp & mask) == 0)
		{
			if (flag == 1)
				_putchar('0');
		}
		else
		{
			flag = 1;
			_putchar('1');
		}
		count--;
	}
	if (n == 0)
		_putchar('0');
}
