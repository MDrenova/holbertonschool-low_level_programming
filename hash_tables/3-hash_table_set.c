#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 *create_node - function that creates a hash node
 *@key: key
 *@value: value
 *Return: pointer to the node
 */

hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *newNode = malloc(sizeof(hash_node_t));


	if (newNode == NULL)
		return (NULL);

	newNode->key = strdup(key);
	newNode->value = strdup(value);

	return (newNode);
}
/**
 * key_exists - function that searches ofr a key in a hashmap
 * @ht: table to search for
 * @index: index
 * @key: key
 * Return: 1 if there is a key with the same name or 0 if not
 */
int key_exists(hash_table_t *ht, unsigned long int index, const char *key)
{
	hash_node_t *it = NULL;

	if (strcmp(ht->array[index]->key, key) == 0)
	{
		return (1);
	}
	else
	{
		it = ht->array[index]->next;

		while (it != NULL)
		{
			if (strcmp(it->key, key) == 0)
				return (2);

			it = it->next;
		}
	}

	return (0);

}
/**
 *hash_table_set - function that adds an element to the hash table
 *@ht: hash table
 *@key: key value to the hash node
 *@value: value to the hash node
 *Return: 1 if it succeeded 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *temp = NULL;
	hash_node_t *it = NULL;
	hash_node_t *newNode = NULL;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		newNode = create_node(key, value);
		ht->array[index] = newNode;
	}
	else if (key_exists(ht, index, key) == 1)
	{
		free(ht->array[index]->value);
		ht->array[index]->value = strdup(value);
	}
	else if (key_exists(ht, index, key) == 2)
	{
		it = ht->array[index]->next;
		while (it != NULL)
		{
			if (strcmp(it->key, key) == 0)
			{
				free(it->value);
				it->value = strdup(value);
			}
			it = it->next;
		}
	}
	else
	{
		temp = ht->array[index];
		newNode = create_node(key, value);
		ht->array[index] = newNode;
		newNode->next = temp;
	}
	return (1);
}
