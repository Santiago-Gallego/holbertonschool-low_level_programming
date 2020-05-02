#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - inserts a new node
 * @head: head
 * @index: index
 * @n: value of node
 * Return: the address or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int index,
				     int n)
{
	dlistint_t *temp1, *temp2, *new_node;
	unsigned int count;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	if (*head == NULL)
	{
		if (index > 0)
		{
			free(new_node); return (NULL);
		}
		new_node->next = NULL; *head = new_node;
		return (new_node);
	}
	if (index == 0)
	{
		new_node->next = *head; (*head)->prev = new_node; *head = new_node;
		return (new_node);
	}
	for (count = 0, temp1 = *head; temp1 != NULL && count <= index;)
	{
		temp2 = temp1->next;
		if (count == index - 1)
		{
			temp1->next = new_node;
			new_node->prev = temp1;
			if (temp2 == NULL)
				new_node->next = NULL;
			else
			{
				new_node->next = temp2; temp2->prev = new_node;
			}
			return (new_node);
		}
		temp1 = temp1->next; count++;
	}
	return (NULL);
}
