#include "lists.h"

/**
 * print_listint_safe - check code.
 * @head : variable
 * Return: check declaration
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t sz, i;
	const listint_t *h = NULL;
	const listint_t *ptr = NULL;

	if (head == NULL)
		exit(98);

	h = head;
	sz = 0;
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
