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

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
		return (add_dnodeint(h, n));
	i = 0;
	for (i = 0; i <= idx - 1; i++)
	{
		if (!current_node)
		{
			add_dnodeint_end(h, n);
			return (new_node);
		}
		current_node = current_node->next;
	}

	new_node->prev = current_node;
	new_node->next = current_node->next;
	current_node = new_node;
	current_node->next->prev = new_node;

	return (new_node);
}
