# incluye  " holberton.h"
# include  < stdio.h >
/**
 * print_to_98 - check the code for Holberton School students.
 * @n: variable
 * Return: Always 0.
 */
void  print_to_98(int n)
{
	if (n > 98)
		while (n > 98)
			_putnumber(n--);
	if (n < 98)
		while (n < 98)
			_putnumber(n++);
	if (n == 98)
		_putnumber(98);
}
/**
 * _putnumber - check the code for Holberton School students.
 * @n: variable
 * Return: Always 0.
 */
void  _putnumber(int n)
{
	if (n < 0)
	{
		_putchar('-');
	}
	else if (n == 98)
	{
		_putchar('9');
		_putchar('8');
		_putchar(10);
	}
	else if (n == -98)
	{
		_putchar('9');
		_putchar('8');
		_putchar(',');
		_putchar(' ');
	}
	else if (n <= 0)
		n = (n - (n * 2));
	else if (n < 10)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
	}
	else if (n >= 10 && n != 98 && n < 100)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
		_putchar(',');
		_putchar(' ');
	}
	else if (n >= 100)
	{
		_putchar(n / 100 + '0');
		_putchar(n / 10 % 10 + '0');
		_putchar(n % 10 + '0');
		_putchar(',');
		_putchar(' ');
	}
}
