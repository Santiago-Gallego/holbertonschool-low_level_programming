#include "holberton.h"
#include <stdio.h>

/**
 * infinite_add - adds two strings
 * @n1: string 1
 * @n2: string 2
 * @r: added string
 * @size_r: buffer of string
 * Return: r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int num, i, j, k, l, m, sum, carry, digit1, digit2;

	i = l = j = k = carry =  0;
	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	if (i + 2 > size_r || j + 2 > size_r)
		return (0);
	i = i - 1;
	j = j - 1;
	while (i >= 0 || j >= 0)
	{
		digit1 = digit2 = 0;
		if (i >= 0)
			digit1 = n1[i--] - '0';
		if (j >= 0)
			digit2 = n2[j--] - '0';
		sum = digit1 + digit2 + carry;
		if (sum > 9)
		{
			carry = 1;
			sum = sum - 10;
		}
		else
			carry = 0;
		r[k++] = (sum + '0');
	}
	if (carry == 1)
		r[k++] = (1 + '0');
	m = k;
	k = k - 1;
	for (l = 0; l < k; l++, k--)
	{
		num = r[k];
		r[k] = r[l];
		r[l] = num;
	}
	r[m] = '\0';
	return (r);
}
