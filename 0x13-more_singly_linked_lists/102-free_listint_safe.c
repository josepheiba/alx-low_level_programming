#include "lists.h"

/**
 * free_listint_safe - check code.
 * @h : variable
 * Return: check declaration
 */

size_t free_listint_safe(listint_t **h)
{
	size_t sz;
	listint_t *ptr;

	sz = 0;
	if (h == NULL || *h == NULL)
		return (0);

	while (*h != NULL)
	{
		if (*h > (*h)->next)
		{
			ptr = (*h)->next;
			free(*h);
			*h = ptr;
			sz++;
		}
		else
		{
			free(*h);
			*h = NULL;
			sz++;
			return (sz);
		}
	}
	*h = NULL;
	return (sz);
}
