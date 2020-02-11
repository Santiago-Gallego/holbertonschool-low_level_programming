#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int _abs(int a)
{
	if (a >= 0)
	{
		return (a);
	}
	else
	{
		a = -1 * a;
		return (a);
	}
	return (0);
}
