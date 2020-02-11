#include "holberton.h"
/**
 * _abs - check the code for Holberton School students.
 * @c: variable
 * Return: Always 0.
 */
int _abs(int c)
{
	if (c < 0)
		c *= -1;
	return (c);
}
