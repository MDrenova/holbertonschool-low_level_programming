#include "hash_tables.h"
#include <string.h>
#include <stddef.h>
#include <stdio.h>
/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: hash table pointer
 * @key: key to search for
 * Return: the value associated with the elemnt or NULL if key
 * couldn't be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t *it;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		return (NULL);

	if (strcmp(ht->array[index]->key, key) == 0)
	{
		return (ht->array[index]->value);
	}
	else
	{
		it = ht->array[index];
		while (it != NULL)
		{
			if (strcmp(it->key, key) == 0)
				return (it->value);
			it = it->next;
		}
	}

	return (NULL);

}
