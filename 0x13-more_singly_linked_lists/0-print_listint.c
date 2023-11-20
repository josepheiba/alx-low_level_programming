#include "lists.h"

/**
 * print_listint - check code.
 * @h : variable
 * Return: check declaration
 */

size_t print_listint(const listint_t *h)
{
	size_t sz;

	sz = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		sz++;
		if (h->next == NULL)
			break;
		h = h->next;
	}
	return (sz);
}
