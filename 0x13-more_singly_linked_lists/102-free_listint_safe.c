#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * _free - frees a linked list ptr
 * @head: head of linked list
 */
int _help(listint_t *h)
{
	listint_t *tmp = h, *tmp_2;
	int i, j, size = 0;

	for (i = 0; tmp; i++, tmp = tmp->next)
	{
		tmp_2 = h;
		j = 0;
		while (i > j)
		{
			if (tmp == tmp_2)
				break;
			j++;
			tmp_2 = tmp_2->next;
		}
		if (j > size)
			size = j;
	}
	return (size);
}
/**
 * free_listint_safe - function that free a linked list
 * @h: head of the list
 * Return: the size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t i, size;

	if (*h != NULL)
		return (0);
	size = _help(*h);
	for (i = 0; i < size; i++)
	{
		tmp = *h;
		*h = (*h)->next;
		free(tmp);
	}
	tmp = *h;
	*h = (*h)->next;
	free(tmp);
	*h = NULL;
	return (i);
}
