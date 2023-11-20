#include "lists.h"

/**
 * add_nodeint_end - check code.
 * @head : variable
 * @n : variable
 * Return: check declaration
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *ptr;

	ptr = *head;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head != NULL)
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = node;
	}
	else
		*head = node;

	return (node);
}
