#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int _islower(int a)
{
	if (a >= 'a' && a <= 'z')
		return (1);
	else
		return (0);
}
