#include "lists.h"

/**
 * print_listint_safe - check code.
 * @head : variable
 * Return: check declaration
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *h, *ptr;
	size_t sz, i;

	sz = 0;
	h = head;
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
