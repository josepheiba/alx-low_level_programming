#include "lists.h"

/**
 * listint_len - check code.
 * @h : variable
 * Return: check declaration
 */

size_t listint_len(const listint_t *h)
{
	int sz;

	sz = 0;
	while (h != NULL)
	{
		h = h->next;
		sz++;
	}
	return (sz);
}
