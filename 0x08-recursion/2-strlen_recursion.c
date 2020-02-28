#include "holberton.h"

/**
 * _strlen_recursion - returns length of a string recursively
 * @s: string who's length is to be determined
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
