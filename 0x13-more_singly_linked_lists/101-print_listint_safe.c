#include "lists.h"

/**
 * print_listint_safe - check code.
 * @head : variable
 * Return: check declaration
 */

size_t print_listint_safe(const listint_t *head)
{
	unsigned long sz, ok, i;
	const listint_t *h;
	const listint_t *ptr;
	const listint_t *nully = NULL;

	if (head == NULL)
		exit(98);

	h = head;
	sz = ok = 0;
	while (h != NULL)
	{
		printf("[%p] %d\n", (void *)h, h->n);
		sz++;
		if (h == nully)
			break;
		h = h->next;
		ptr = h;
		i = 0;
		while (i < 100 && ok == 0 && ptr != NULL)
		{
			nully = ptr;
			ptr = ptr->next;
			if (ptr == h)
				ok = 1;
			i++;
		}
	}
	if (ok == 1)
	{
		printf("-> [%p] %d\n", (void *)nully->next, (nully->next)->n);
	}
	return (sz);
}
