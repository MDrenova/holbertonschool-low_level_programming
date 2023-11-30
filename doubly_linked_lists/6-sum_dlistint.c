#include "lists.h"
/**
 * sum_dlistint - Return the sum.
 * @head: pointer to the head of the list.
 * Return: Address of the new element, or NULL if it failed.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
	{
		return (sum);
	}

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
