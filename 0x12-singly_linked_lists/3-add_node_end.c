#include "lists.h"
/**
 * _strlen - check the code for Holberton School students.
 * @s: pointer string
 * Return: Always 0.
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
	}
	return (i);
}
/**
 * add_node_end - check the code for Holberton School students.
 * @head: nodos
 * @str: string
 * Return: list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));
	list_t *aux;

	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = _strlen(str);
	ptr->next = NULL;
	if (*head == NULL)
		*head = ptr;
	else
	{
		aux = *head;
		while (aux->next != NULL)
			aux = aux->next;
		aux->next = ptr;
	}
	return (ptr);
}
