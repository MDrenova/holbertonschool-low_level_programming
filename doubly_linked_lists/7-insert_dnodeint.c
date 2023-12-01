#include "lists.h"
/**
 * insert_dnodeint_at_index - Return the sum.
 * @h: double pointer to the head of the list.
 * @idx: index where the node will be add
 * @n: number to fill new node
 * Return: Address of the new element, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current_node = *h;
	unsigned int i;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (i = 0; i < idx; i++)
	{
		if (!current_node)
			return (NULL);
		current_node = current_node->next;
	}

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = current_node;
	new_node->prev = current_node->prev;

	if (current_node->prev != NULL)
		current_node->prev->next = new_node;
	else
		*h = new_node;

	current_node->prev = new_node;

	return (new_node);
}
