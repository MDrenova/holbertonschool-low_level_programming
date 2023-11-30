#include "lists.h"
/**
 * get_dnodeint_at_index - Return the nth node.
 * @head: pointer to the head of the list.
 * @index: nth node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
	{
		return (NULL);
	}

	for (i = 0; i < index; i++)
	{
		if (!head)
			return (NULL);
		head = head->next;
	}

	return (head);
}
