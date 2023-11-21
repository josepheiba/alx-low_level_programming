#include "lists.h"

/**
 * reverse_listint - check code.
 * @head : variable
 * Return: check declaration
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prv;
	listint_t *nxt;

	if (*head == NULL)
		return (NULL);

	prv = NULL;

	while (*head != NULL)
	{
		nxt = (*head)->next;
		(*head)->next = prv;
		prv = *head;
		*head = nxt;
	}
	*head = prv;
	return (*head);
}
