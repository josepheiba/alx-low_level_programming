#include "lists.h"

/**
 * print_listint - check code.
 * @h : variable
 * Return: check declaration
 */

size_t print_listint(const listint_t *h)
{
	unsigned long sz;

	sz = 0;
	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		sz++;
	}
	return (sz);
}
