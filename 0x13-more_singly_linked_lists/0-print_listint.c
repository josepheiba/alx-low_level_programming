#include "lists.h"

/**
 * print_listint - check code.
 * @h : variable
 * Return: check declaration
 */

size_t print_listint(const listint_t *h)
{
	size_t sz;
	listint_t *ptr;

	if (h == NULL)
		return (0);

	ptr = h->next;
	printf("%d\n", h->n);
	sz = 1;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		sz++;
	}
	return (sz);
}
