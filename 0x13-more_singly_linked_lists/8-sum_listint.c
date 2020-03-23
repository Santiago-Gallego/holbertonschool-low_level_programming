#include "lists.h"

/**
 * sum_listint - returns the sum of all data (n) of a linked list
 * @head: head of linked list
 * Return: the sum of all data (n) of linked list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	if (head == NULL)
		return (0);
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
