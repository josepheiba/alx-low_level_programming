#include "lists.h"

/**
 * add_dnodeint_end - check the code
 * @head: input
 * @n: input
 * Return: check code
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node;
	dlistint_t *tail;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;

	if (*head == NULL)
	{
		node->prev = NULL;
		node->next = NULL;
		*head = node;
	}
	else
	{
		tail = find_tail(*head);
		tail->next = node;
		node->prev = tail;
		node->next = NULL;
	}
	return (node);
}

/**
 * find_tail - check the code
 * @head: input
 * Return: check code
 */

dlistint_t *find_tail(dlistint_t *head)
{
	dlistint_t *tail;

	tail = head;
	while(tail->next != NULL)
		tail = tail->next;
	return (tail);
}
