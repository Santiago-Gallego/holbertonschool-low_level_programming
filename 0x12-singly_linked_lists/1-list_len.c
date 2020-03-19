#include "lists.h"
/**
 * list_len - check the code for Holberton School students.
 * @h: ponter list
 * Return: counter list.
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
