#include "search_algos.h"

/**
 * exponential_search - search value in an array with
 the exponential search algorithm
 * @array: array to search
 * @size: size of the array
 * @value: value to rearch
 * Return: the index found or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t start, end, x;

	if (!array || size == 0)
		return (-1);

	end = 1;
	start = 1;
	while (end < size)
	{
		if (value < array[end])
			break;
		printf("Value checked array[%lu] = [%d]\n", end, array[end]);
		start = end;
		end = end * 2;
	}
	x = end < size - 1 ? end : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", start, x);
	return (help_binary(array, value, end / 2, x));
}

/**
 * help_binary - searche a value in an array of
 integers using recursion
 * @array: array to search the value in
 * @value: value to look for
 * @low: index of the low bound
 * @hig: index of the high bound
 * Return: the index found or -1 if not found
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
	if (array[mid] > value)
		return (help_binary(array, value, low, mid - 1));
	if (array[mid] < value)
		return (help_binary(array, value, mid + 1, hig));
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
