#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: is the size of the array
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h;

	h = malloc(sizeof(hash_table_t));

	if (h == NULL)
		return (NULL);
	h->size = size;
	h->array = malloc(sizeof(hash_table_t *) * size);

	if (h->array == NULL)
		return (NULL);
	return (h);
}
