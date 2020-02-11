#include "holberton.h"
/**
 * _isalpha - check the code for Holberton School students.
 * @b: variable
 * Return: Always 0.
 */
int _isalpha(int b)
{
	if ((b >= 'a' && b <= 'z') || (b >= 'A' && b <= 'Z'))
		return (1);
	else
		return (0);
}
