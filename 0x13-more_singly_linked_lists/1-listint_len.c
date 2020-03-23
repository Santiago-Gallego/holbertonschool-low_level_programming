#include "lists.h"
#include <stdio.h>

/**
 * listint_len - function reteurns the number of elements in linked list
 * @h: head of the linked list
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t c = 0;

	while (h)
	{
		c++;
		h = h->next;
	}
	return (c);
}
