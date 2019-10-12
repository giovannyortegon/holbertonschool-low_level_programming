#include "hash_tables.h"

/**
 * hash_table_delete - delete elements
 * @ht: store hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node = NULL, *tmp = NULL;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);

			while (node)
			{
				tmp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp;
			}
		}
	}
	free(ht->array);
	free(ht);
	ht = NULL;
}
