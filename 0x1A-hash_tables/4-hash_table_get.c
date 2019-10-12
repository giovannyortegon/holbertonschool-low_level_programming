#include "hash_tables.h"

/**
 * hash_table_get - get the value from hash_table according the key
 * @ht:	store hash table
 * @key:	key to get value
 * Return: NULL if it is not found or value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int idx;
	hash_node_t *node;

	if (ht == NULL || key == NULL)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	if (ht->array[idx] == NULL)
		return (NULL);

	if (strcmp(key, ht->array[idx]->key) == 0)
		return (ht->array[idx]->value);

	node = ht->array[idx]->next;

	while (node)
	{
		if (strcmp(key, node->key) == 0)
			return (node->value);
		node = node->next;
	}

	return (NULL);
}
