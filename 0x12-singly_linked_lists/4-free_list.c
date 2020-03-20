#include "lists.h"
/**
 * free_list - check the code for Holberton School students.
 * @head: nodos
 * Return: Always 0.
 */

void free_list(list_t *head)
{
	list_t *str_cpy;

	while (head != NULL)
	{
		str_cpy = head;
		head = head->next;
		free(str_cpy->str);
		free(str_cpy);
	}
}
