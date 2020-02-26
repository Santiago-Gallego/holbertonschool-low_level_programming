#include "holberton.h"
/**
 * _strlen_recursion - Return the length of the string
 * @s: String
 * Return: Strlen
 */
int _strlen(char *s)
{
	if (!*s)
		return (0);
	else
		return (1 + _strlen(s + 1));
}
/**
 * palindrome_helper - Return the length of the string
 * @s: String
 * @len: size
 * @i: iterator
 * Return: Strlen
 */
int palindrome_helper(char *s, int len, int i)
{
	if (_strlen(s) == 0)
		return (0);
	if (*(s + i) != *(s + len - 1))
		return (0);
	else if (i > (len - 1))
		return (1);
	else
		return (palindrome_helper(s, len - 1, i + 1));
}
/**
 * is_palindrome - Return the length of the string
 * @s: String
 * Return: Strlen
 */
int is_palindrome(char *s)
{
	return (palindrome_helper(s, _strlen(s), 0));
}
