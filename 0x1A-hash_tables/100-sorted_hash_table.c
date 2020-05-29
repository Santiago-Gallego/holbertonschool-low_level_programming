#include "hash_tables.h"
/**
 * shash_table_create - check the code for Holberton School students.
 * @size: size table
 * Return: shash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *tmp;
	unsigned long int i;

	tmp = malloc(sizeof(shash_table_t));
	if (tmp == NULL)
		return (NULL);
	tmp->size = size;
	tmp->shead = NULL;
	tmp->stail = NULL;
	tmp->array = malloc(sizeof(shash_node_t) * size);
	if (tmp->array == NULL)
	{
		free(tmp);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		tmp->array[i] = NULL;
	}
	return (tmp);
}
/**
 * make_shash_node - make a node sorted hasta table
 * @key: key data
 * @value: value to stored
 * Return: pointer toe new node.
 */
shash_node_t *make_shash_node(const char *key, const char *value)
{
	shash_node_t *tmp;

	tmp = malloc(sizeof(shash_node_t));
	if (tmp == NULL)
		return (NULL);
	tmp->key = strdup(key);
	if (tmp->key == NULL)
	{
		free(tmp);
		return (NULL);
	}
	tmp->value = strdup(value);
	if (tmp->value == NULL)
	{
		free(tmp->key);
		free(tmp);
		return (NULL);
	}
	tmp->next = tmp->snext = tmp->sprev = NULL;
	return (tmp);
}
/**
 * sorted_list_add - add a node sorted ascci
 * @table: hash table sorted
 * @node: node add
 * Return: Always EXIT_SUCCESS.
 */
void sorted_list_add(shash_table_t *table, shash_node_t *node)
{
	shash_node_t *tmp;

	if (table->shead == NULL && table->stail == NULL)
	{
		table->shead = table->stail = node;
		return;
	}
	tmp = table->shead;
	while (tmp != NULL)
	{
		if (strcmp(node->key, tmp->key) < 0)
		{
			node->snext = tmp;
			node->sprev = tmp->sprev;
			tmp->sprev = node;
			if (node->sprev != NULL)
				node->sprev->snext = node;
			else
				table->shead = node;
			return;
		}
		tmp = tmp->snext;
	}
	node->sprev = table->stail;
	table->stail->snext = node;
	table->stail = node;
}
/**
 * shash_table_set - set value in hsah table
 * @ht: hash tabel
 * @key: key
 * @value: value add
 * Return: 1 if succes or 0 is failed.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *new_value;
	shash_node_t  *tmp, *tmp2;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
				return (0);
			free(tmp->value);
			tmp->value = new_value;
			return (1);
		}
		tmp = tmp->next;
	}
	tmp2 = make_shash_node(key, value);
	if (tmp2 == NULL)
		return (0);
	tmp2->next = ht->array[index];
	ht->array[index] = tmp2;
	sorted_list_add(ht, tmp2);
	return (1);
}
/**
 * shash_table_get - rettrive value from hash tabel
 * @ht: hash table
 * @key: key of the data
 * Return: value or NULL if failed
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *tmp;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
/**
 * shash_table_print - print hash tabel
 * @ht: hash table to print
 * Return: nothing.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp;
	char flag = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	tmp = ht->shead;
	while (tmp != NULL)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", tmp->key, tmp->value);
		flag = 1;
		tmp = tmp->snext;
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - print hash tabel rev
 * @ht: hash table to print
 * Return: nothing.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp;
	char flag = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	tmp = ht->stail;
	while (tmp != NULL)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", tmp->key, tmp->value);
		flag = 1;
		tmp = tmp->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - delete hash tabel
 * @ht: hash table to delete
 * Return: nothing.
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *next;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			next = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = next;
		}
	}
	free(ht->array);
	free(ht);
}
