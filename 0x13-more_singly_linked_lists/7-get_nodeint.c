#include "lists.h"

/**
 * pop_listint - check code.
 * @head : variable
 * Return: check declaration
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int i;
	listint_t *ptr;

	if (*head == NULL)
		return (0);

	i = (*head)->n;
	ptr = (*head)->next;

	free(*head);
	*head = ptr;

	return (i);
}
