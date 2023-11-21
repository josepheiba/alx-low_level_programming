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

	if (head == NULL)
		exit(98);

	h = head;
	sz = ok = 0;
	while (h != NULL)
	{
		printf("[%p] %d\n", (void *)h, h->n);
		sz++;
		h = h->next;
		ptr = head;
		i = 0;
		while (i < sz)
		{
			if (ptr == h)
			{
				ok = 1;
				printf("-> [%p] %d\n", (void *)h, h->n);
				return (sz);
			}
			ptr = ptr->next;
			i++;
		}
		if (!head)
			exit(98);
	}
	return (sz);
}
