#include "holberton.h"
/**
 * _islower - check the code for Holberton School students.
 * @a: variable
 * Return: Always 0.
 */
int _islower(int a)
{
	if (a >= 'a' && a <= 'z')
		return (1);
	else
		return (0);
}
