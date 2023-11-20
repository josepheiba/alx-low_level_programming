#include "lists.h"

/**
 * print_listint - check code.
 * @h : variable
 * Return: check declaration
 */

size_t print_listint(const listint_t *h)
{
	size_t sz;

	if (h == NULL)
		return (0);

	sz = 1;
	while (h->next != NULL)
	{
		printf("%d\n", h->n);

		h = h->next;
		sz++;
	}

	printf("%d\n", h->n);

	return (sz);
}
