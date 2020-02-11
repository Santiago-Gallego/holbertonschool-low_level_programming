#include "holberton.h"
/**
 * _isalpha - check the code for Holberton School students.
 * @a: variable
 * Return: Always 0.
 */
int _isalpha(int a)
{
	if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
		return (1);
	else
		return (0);
}
