#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a dlistin_t list.
 * @head: Double pointer to the head of the list.
 * @n: integer number to be included in the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *last_node = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (!*head)
		*head = new_node;

	while (last_node->next)
		last_node = last_node->next;

	last_node->next = new_node;
	new_mode->prev = last_node;

	return (new_node);
}
