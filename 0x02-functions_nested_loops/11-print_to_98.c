# incluye  " holberton.h "
# include  < stdio.h >

/ * *
 * print_to_98: imprime números naturales de n a 98
 * *
 * @n: punto de partida
 * Regreso: nulo
 * /
vacío  print_to_98 ( int n)
{
	si (n> 98 )
		mientras que (n> 98 )
			_putnumber (n--);
	si (n < 98 )
		mientras que (n < 98 )
			_putnumber (n ++);
	si (n == 98 )
		_putnumber ( 98 );
}

/ * *
 * _putnumber - pone el número a la salida, formateado con una coma
 * *
 * @n: número para imprimir a salida
 * Regreso: nulo
 * /
nulo  _putnumber ( int n)
{
	si (n < 0 )
	{
		_putchar ( ' - ' );
	}
	si (n == 98 )
	{
		_putchar ( ' 9 ' );
		_putchar ( ' 8 ' );
		_putchar ( 10 );
	}
	si (n == - 98 )
	{
		_putchar ( ' 9 ' );
		_putchar ( ' 8 ' );
		_putchar ( ' , ' );
		_putchar ( '  ' );
	}
	si (n <= 0 )
		n = (n - (n * 2 ));
	si (n < 10 )
	{
		_putchar (n + ' 0 ' );
		_putchar ( ' , ' );
		_putchar ( '  ' );
	}
	más  si (n> = 10 && n! = 98 && n < 100 )
	{
		_putchar (n / 10 + ' 0 ' );
		_putchar (n% 10 + ' 0 ' );
		_putchar ( ' , ' );
		_putchar ( '  ' );
	}
	más  si (n> = 100 )
	{
		_putchar (n / 100 + ' 0 ' );
		_putchar (n / 10 % 10 + ' 0 ' );
		_putchar (n% 10 + ' 0 ' );
		_putchar ( ' , ' );
		_putchar ( '  ' );
	}
}
