#include "lists.h"

/**
 * print_list - check code.
 * @h : variable
 * Return: check declaration
 */

size_t print_list(const list_t *h)
{
	unsigned long sz;

	sz = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		sz++;
	}
	return (sz);
}
