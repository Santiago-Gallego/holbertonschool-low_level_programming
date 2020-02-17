#include <stdio.h>

/**
 * swap_int - swaps the value stored in a & b
 * @a: point 1
 * @b: pointer 2
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int placeholder;

	placeholder = *a;
	*a = *b;
	*b = placeholder;
}
