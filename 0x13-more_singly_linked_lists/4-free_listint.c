#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a linked list
 * @head: head of the list
 * Return: none
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
