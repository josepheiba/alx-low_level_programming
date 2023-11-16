#include "lists.h"

/**
 * list_len - check code.
 * @h : variable
 * Return: check declaration
 */

size_t list_len(const list_t *h)
{
	unsigned long sz;

	sz = 0;
	while (h != NULL)
	{
		h = h->next;
		sz++;
	}
	return (sz);
}
