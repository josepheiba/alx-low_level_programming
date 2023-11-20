#include "lists.h"

/**
 * print_listint - check code.
 * @h : variable
 * Return: check declaration
 */

size_t print_listint(const listint_t *h)
{
	int sz;
	listint_t *ptr;

	if (h == NULL)
		return (0);

	printf("%i\n", h->n);
	ptr = h->next;

	sz = 1;
	while (ptr != NULL)
	{
		printf("%i\n", ptr->n);
		ptr = ptr->next;
		sz++;
	}
	return (sz);
}
