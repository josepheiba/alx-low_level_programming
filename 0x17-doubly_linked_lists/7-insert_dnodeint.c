#include "lists.h"

/**
 * insert_dnodeint_at_index - check the code
 * @h: input
 * @idx: input
 * @n: input
 * Return: check code
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node;
	dlistint_t *pos;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;

	if (*h == NULL && idx == 0)
	{
		node->prev = NULL;
		node->next = NULL;
		*h = node;
	}
	else
	{
		pos = find_pos(h, idx, n);
		if (pos == NULL)
			return (NULL);

		if (pos->prev == NULL)
		{
			node->prev = NULL;
			node->next = pos;
			pos->prev = node;
			*h = node;
		}
		else
		{
			node->prev = pos->prev;
			node->next = pos;
			pos->prev->next = node;
			pos->prev = node;
		}
	}
	return (node);
}

/**
 * find_pos - check the code
 * @head: input
 * @idx: input
 * @n: input
 * Return: check code
 */

dlistint_t *find_pos(dlistint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *pos;

	i = 0;
	pos = *head;

	if (i == idx)
		return (pos);

	while (pos->next != NULL)
	{
		pos = pos->next;
		i++;
		if (i == idx)
			return (pos);
	}
	i++;
	if (i == idx)
	{
		add_dnodeint_end(head, n);
		return (pos);
	}
	return (NULL);
}
