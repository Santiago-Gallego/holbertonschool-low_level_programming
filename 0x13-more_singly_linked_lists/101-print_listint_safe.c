#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - print
 * @head: pointer to list
 * Return: # nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i, j;
	const listint_t *tmp = head, *tmp_2;

	for (i = 0; tmp != NULL; i++)
	{
		tmp_2 = head;
		j = 0;
		while (i > j)
		{
			if (tmp == tmp_2)
				return (printf("-> [%p] %d\n", (void *)tmp, tmp->n), i);
			j++;
			tmp_2 = tmp_2->next;
		}
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		tmp = tmp->next;
	}
	return (i);
}
