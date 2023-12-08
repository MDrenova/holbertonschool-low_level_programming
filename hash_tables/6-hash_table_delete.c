#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete -deletes the hash table
 * @ht: -points to the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *helper;

	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			helper = ht->array[i];
			ht->array[i] = ht->array[i]->next;
			free(helper->key);
			free(helper->value);
			free(helper);
		}
	}
	free(ht->array);
	free(ht);
}
