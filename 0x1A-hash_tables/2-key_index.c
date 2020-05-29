#include "hash_tables.h"

/**
 * key_index - gives you the index of a key
 * @key: key given
 * @size: size of the array of the hash table
 * Return: the idnex at which the key/value paris should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	return (hash % size);
}
