#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - measure string length.
 * @s: value to size.
 * Return: string length.
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; s[count] != 0; count++)
		;
	return (count);
}
/**
 * _isdigit - check for digits
 * Description: return 1 or 0 if character
 * is digit or not
 * @c: Digit to check
 * Return: On success 1, 0 on reject.
 */
int _isdigit(char *c)
{
	int i;

	for (i = 0; c[i]; i++)
	{
		if (!(c[i] >= '0' && c[i] <= '9'))
			return (1);
	}
	return (0);
}
/**
 * check_zero - Check if array has plenty zeros.
 * @zeros: Array to check
 * Return: 1 or 0.
 */
int check_zero(char *zeros)
{
	if (zeros[0] == 0 && zeros[1] == 0 && zeros[1] == 0)
		return (1);
	return (0);
}
/**
 * main - Multiplies two numbers.
 * @ac: Arguments number
 * @av: Array containing arguments
 * Return: Multiplication.
 */
int main(int ac, char **av)
{
	int e, i, j, carry, total_size, size_n1, size_n2, res_m;
	char err[6] = "Error", *f_res;

	if (ac != 3 || _isdigit(av[1]) == 1 || _isdigit(av[2]) == 1)
	{
		for (e = 0; err[e] != '\0'; e++)
			_putchar(err[e]);
		_putchar('\n');
		exit(98);
	}
	size_n1 = _strlen(av[1]), size_n2 = _strlen(av[2]);
	total_size = size_n1 + size_n2;
	f_res = malloc(sizeof(int *) * (size_n1 + size_n2));
	if (f_res == NULL)
		return (1);
	for (i = size_n2 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = size_n1 - 1; j >= 0; j--)
		{
			res_m = (av[2][i] - '0') * (av[1][j] - '0');
			carry = (res_m / 10);
			f_res[(i + j) + 1] += (res_m % 10);
			if (f_res[(i + j) + 1] > 9)
			{
				f_res[i + j] += f_res[(i + j) + 1] / 10;
				f_res[(i + j) + 1] = f_res[(i + j) + 1] % 10;
			}
			f_res[i + j] += carry;
		}
	}
	i = f_res[0] == 0 ? 1 : 0;
	if (check_zero(f_res) == 1)
		_putchar('0');
	else
		for (; i < total_size; i++)
			_putchar(f_res[i] + '0');
	_putchar('\n');
	free(f_res);
	return (0);
}
