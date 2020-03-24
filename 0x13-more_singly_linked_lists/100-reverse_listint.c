#include "lists.h"
#include <stdio.h>

/**
 *reverse_listint - reverses a linked list
 *@head: head of the list
 *Return: the list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *stemp;

	temp = *head;
	if (temp == NULL)
		return (NULL);
	while (temp->next != NULL)
	{
		stemp = temp->next;
		temp->next = stemp->next;
		stemp->next = *head;
		*head = stemp;
	}
	return (*head);
}
