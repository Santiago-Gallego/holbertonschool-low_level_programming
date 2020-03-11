#include <stddef.h>

/**
 * array_iterator - execute a function given each element of an array
 * @size: size of array
 * @array: array
 * @action: what you want to do to the numbers
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (action == NULL || array == NULL)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
