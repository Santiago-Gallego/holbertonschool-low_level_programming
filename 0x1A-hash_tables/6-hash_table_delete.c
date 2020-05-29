#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: table to delete
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *tmp2;
	unsigned long int i;

	i = 0;
	while (i < ht->size)
	{
		tmp2 = ht->array[i];
		while (tmp2 != NULL)
		{
			tmp = tmp2;
			tmp2 = tmp2->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
