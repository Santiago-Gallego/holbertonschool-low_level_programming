#include "holberton.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a pointer to a string of 0 and 1
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int pot = 0, i = 0, val = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
		i++;
	i -= 1;
	while (i >= 0)
	{
		val = b[i];
		if (val == '0')
		{
			pot++;
			i--;
		}
		else if (val == '1')
		{
			num = num + (1 << pot);
			pot++;
			i--;
		}
		else
			return (0);
	}
	return (num);
}
