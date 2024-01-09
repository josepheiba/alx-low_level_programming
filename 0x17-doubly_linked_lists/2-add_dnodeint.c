#include "lists.h"

/**
 * add_dnodeint - check the code
 * @head: input
 * @n: input
 * Return: check code
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;

	if (*head == NULL)
	{
		node->prev = NULL;
		node->next = *head;
	}
	else
	{
		node->prev = NULL;
		node->next = (*head);
		(*head)->prev = node;
	}
	*head = node;
	return (node);
}
