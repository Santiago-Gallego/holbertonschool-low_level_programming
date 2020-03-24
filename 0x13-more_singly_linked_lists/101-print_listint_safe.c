#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeptr - functio that adds new node for ptr
 * @head: head of list
 * @pointer: pointer value to add
 * Return: pointr;
 */

listptr_t *add_nodeptr(listptr_t **head, const listint_t *pointer)
{
	listptr_t *new_node;

	new_node = malloc(sizeof(listptr_t));
	if (new_node == NULL)
	{
		free_listptr(*head);
		exit(98);
	}
	new_node->ptr = (void *)pointer;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

/**
 * free_listptr - frees a linked list ptr
 * @head: head of linked list
 */

void free_listptr(listptr_t *head)
{
	listptr_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

/**
 * print_listint_safe - prints a list taht can print with loops
 * @head: head of the list;
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count;
	listptr_t *ptr, *head2;

	count = 0;
	head2 = NULL;
	while (head != NULL)
	{
		ptr = head2;
		while (ptr != NULL)
		{
			if (ptr->ptr == head)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listptr(head2);
				return (count);
			}
			ptr = ptr->next;
		}
		printf("[%p] %d\n", (void *)head, head->n);
		add_nodeptr(&head2, head);
		head = head->next;
		count++;
	}
	free_listptr(head2);
	return (count);
}
