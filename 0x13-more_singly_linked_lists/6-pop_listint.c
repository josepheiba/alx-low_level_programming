#include "lists.h"

/**
 * pop_listint - check code.
 * @head : variable
 * Return: check declaration
 */

int pop_listint(listint_t **head)
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
