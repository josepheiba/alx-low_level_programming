#include "lists.h"

/**
 * add_dnodeint_end - check the code
 * @head: input
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
		pos = find_pos(*h, idx);
		if (pos == NULL)
			return (NULL);

		node->next = pos;
		node->prev = pos->prev;
		pos->prev->next = node;
		pos->prev = node;
	}
	return (node);
}

/**
 * find_tail - check the code
 * @head: input
 * Return: check code
 */

dlistint_t *find_pos(dlistint_t *head, unsigned int idx)
{
	unsigned int i;
	dlistint_t *pos;

	i = 0;
	pos = head;
	while (pos->next != NULL)
	{
		if (i == idx)
			return (pos);
		pos = pos->next;
		i++;
	}
	return (NULL);
}
