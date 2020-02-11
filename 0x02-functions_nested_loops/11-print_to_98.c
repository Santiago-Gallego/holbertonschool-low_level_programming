# incluye  " holberton.h"
# include  < stdio.h >
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void  print_to_98 ( int n)
{
	if (n> 98)
		while (n > 98 )
			_putnumber (n--);
	if (n < 98)
	        while que (n < 98 )
			_putnumber (n ++);
	if (n == 98)
		_putnumber ( 98 );
}

void  _putnumber ( int n)
{
	if (n < 0)
	{
		_putchar ( ' - ' );
	}
	if (n == 98)
	{
		_putchar ( ' 9 ' );
		_putchar ( ' 8 ' );
		_putchar ( 10 );
	}
	if (n == - 98 )
	{
		_putchar ( ' 9 ' );
		_putchar ( ' 8 ' );
		_putchar ( ' , ' );
		_putchar ( '  ' );
	}
	if (n <= 0 )
		n = (n - (n * 2 ));
	if (n < 10 )
	{
		_putchar (n + ' 0 ' );
		_putchar ( ' , ' );
		_putchar ( '  ' );
	}
	else if (n> = 10 && n! = 98 && n < 100 )
	{
		_putchar (n / 10 + ' 0 ' );
		_putchar (n% 10 + ' 0 ' );
		_putchar ( ' , ' );
		_putchar ( '  ' );
	}
	else if (n> = 100 )
	{
		_putchar (n / 100 + ' 0 ' );
		_putchar (n / 10 % 10 + ' 0 ' );
		_putchar (n% 10 + ' 0 ' );
		_putchar ( ' , ' );
		_putchar ( '  ' );
	}
}
