#include "lists.h"
/**
 * _strlen - size str nodos.
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
 * add_node - adds a new node
 * @head: head of node
 * @str: string to add
 * Return: NULL or ptr
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = _strlen(str);
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
