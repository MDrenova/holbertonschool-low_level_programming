#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Double pointer to the first node of the double linked list.
 * @idx: Index of the list where the new node should be added.
 * @n: Integer to be included in the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp = *h;
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
		return (add_dnodeint(h, n));

	while (i++ < idx)
	{
		if (temp == NULL)
		{
			free(new_node);
			return (NULL);
		}
		if (i == idx)
		{
			new_node->next = temp->next;
			new_node->prev = temp;
			if (temp->next != NULL)
				temp->next->prev = new_node;
			temp->next = new_node;
			return (new_node);
		}
		temp = temp->next;
	}
	free(new_node);
	return (NULL);
}
