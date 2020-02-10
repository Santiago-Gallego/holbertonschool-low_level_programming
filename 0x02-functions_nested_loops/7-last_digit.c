#include "holberton.h"
int _abs(int a)
{
	if(a <= 0)
	{
		a = -1 * a;
		return (a)
	}
	else
	{
		return (a);
	}
}

int print_last_digit(int a)
{
	a = _abs(a);
	a %= 10;
	_putchar(a + '0');
	return (a);
}
