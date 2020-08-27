#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * binary_search - search for a value in an array of
 * using the Binary search algorithm
 * @array: array to search
 * @size: size of the array
 * @value: value to search
 * Return: the index found value or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);

	return (help_binary(array, value, 0, size - 1));
}

/**
 * help_binary - search a value in an array of
 * integers using recursion
 * @array: array to search the value in
 * @value: value to look for
 * @low: index of the low bound
 * @hig: index of the high bound
 * Return: the index found value or -1 if not found
 */
int help_binary(int *array, int value, size_t low, size_t hig)
{
	size_t mid;

	array_print(array, low, hig);
	if (hig == low && array[low] != value)
		return (-1);

	mid = ((hig - low) / 2) + low;
	if (array[mid] == value)
		return (mid);
	if (array[mid] < value)
		return (help_binary(array, value, mid + 1, hig));
	if (array[mid] > value)
		return (help_binary(array, value, low, mid - 1));
	return (-1);
}

/**
 * array_print - prints an array
 * @array: array to print
 * @low: index of the low bound
 * @hig: index of the high bound
 */
void array_print(int *array, size_t low, size_t hig)
{
	size_t i;

	printf("Searching in array: ");
	for (i = low; i <= hig; i++)
	{
		printf("%d", array[i]);
		if (i < hig)
			printf(", ");
	}
	printf("\n");
}
