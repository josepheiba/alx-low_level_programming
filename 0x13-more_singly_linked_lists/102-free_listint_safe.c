#include "lists.h"

/**
 * free_listint2 - check code.
 * @head : variable
 * Return: check declaration
 */

size_t free_listint_safe(listint_t **h)
{
	if (h == NULL || *h == NULL)
		return (0);
	if ((*h)->next != NULL && *h < (*h)->next)
		return (1 + free_listint_safe(&((*h)->next)));
	free(*h);
	*h = NULL;
	return (0);
}
