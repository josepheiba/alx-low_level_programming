#include "lists.h"

/**
 * insert_nodeint_at_index - check code.
 * @head : variable
 * @idx : variable
 * @n : variable
 * Return: check declaration
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *ptr;
	listint_t *node;

	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	i = 0;
	ptr = *head;
	while (i < idx && ptr != NULL)
	{
		if (i != idx - 1)
			ptr = ptr->next;
		else
		{
			node->next = ptr->next;
			ptr->next = node;
			return (node);

		}
		i++;
	}
	free(node);
	return (NULL);
}
