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

	if (head == NULL || *head == NULL)
		return (NULL);

	i = 0;
	ptr = *head;
	while (i < idx)
	{
		if (i != idx - 1)
		{
			ptr = ptr->next;
		}
		i++;
		if (ptr == NULL && i != idx - 1)
			return (NULL);
	}

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = ptr->next;
	ptr->next = node;

	return (ptr);
}
