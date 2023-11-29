#include "lists.h"
/**
 * print_dlistint - Prints all the elements of a list_t list.
 * @h: Pointer to the list.
 *
 * Return: The number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d", h->n);

		h = h->next;
		nodes++;
	}

	return (nodes);
}
