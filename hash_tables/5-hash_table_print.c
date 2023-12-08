#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - function that prints all hash table keys and pairs
 *@ht: hash table to be printed
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *helper = NULL;
	int otherpair = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (otherpair)
				printf(", ");

			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			otherpair = 1;
			if (ht->array[i]->next != NULL)
			{
				helper = ht->array[i]->next;
				while (helper != NULL)
				{
					printf(", ");
					printf("'%s': '%s'", helper->key, helper->value);
					helper = helper->next;
				}
			}
		}
	}
	printf("}\n");
}
