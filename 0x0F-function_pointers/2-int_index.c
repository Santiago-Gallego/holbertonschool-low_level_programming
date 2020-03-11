#include <stdlib.h>
/**
 * int_index - searches for an int
 * @array: array to search in
 * @size:size of array
 * @cmp: pointer to function use to compare values
 * Return: index of first element for which cmp func does not return 0
 * if no element matches return -1, size <= 0 return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int (*ptr)(int);
	int i, val;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	ptr = cmp;
	for (i = 0; i < size;)
	{
		val = ptr(array[i]);
		if (val != 0)
			return (i);
		i++;
	}
	return (-1);
}
