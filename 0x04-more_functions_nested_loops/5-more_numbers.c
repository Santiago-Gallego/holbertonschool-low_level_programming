#include "holberton.h"
/**
 * more_numbers - Print 10x numbers.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int a, c = '1', cont2;
	int b = '0';
	int tiempo = 0;
	int cont = 14;

	while (tiempo < 10)
	{
		a = 0, c = '1', b = '0', cont = 14, cont2 = '0';
		for (a = 0; a <= cont; a++)
		{
			if (a > 9)
			{
				a = 0;
				cont = 4;
				b = '0';
				cont2 = 0;
			}
			if (a == cont2)
			{
				_putchar(c);
				cont2++;
			}
			_putchar(b);
			b++;
		}
		_putchar('\n');
		tiempo++;
	}
}
