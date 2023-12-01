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
	dlistint_t *new_node, *current_node = *h;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	while (current_node != NULL && i < idx)
	{
		if (i == idx - 1)
		{
			new_node->next = current_node->next;
			new_node->prev = current_node;
			if (current_node->next != NULL)
				current_node->next->prev = new_node;
			current_node->next = new_node;
			return (new_node);
		}
		i++;
		current_node = current_node->next;
	}

	free(new_node);
	return (NULL);
}
