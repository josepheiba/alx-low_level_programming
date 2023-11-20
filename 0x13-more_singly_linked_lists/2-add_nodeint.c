#include "lists.h"

/**
 * add_nodeint - check code.
 * @head : variable
 * @n : variable
 * Return: check declaration
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	
	node->n = n;
	node->next = NULL;

	if (*head != NULL)
		node->next = *head;

	*head = node;

	return (node);
}
