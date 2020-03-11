#include <stddef.h>

/**
 * array_iterator - execute a function given each element of an array
 * @size: size of array
 * @array: array
 * @action: what you want to do to the numbers
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	void (*ptr)(int);
	size_t i;

	ptr = action;
	if (array != NULL || action != NULL)
	for (i = 0; i < size; i++)
		ptr(array[i]);
}
