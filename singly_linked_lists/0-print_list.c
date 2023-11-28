#include "lists.h"
/**
 * print_list - function to print singly link list
 * @h: pointer to the list
 * Return: number of nodes
 */

size_t print_list(const list_h *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
