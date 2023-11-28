#include "lists.h"
/**
 * list_len - function to print list length
 * @h: pointer to the list
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;

		nodes++;
	}

	return (nodes);
}
