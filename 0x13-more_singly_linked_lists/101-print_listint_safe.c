#include "lists.h"

/**
 * print_listint_safe - check code.
 * @head : variable
 * Return: check declaration
 */

size_t print_listint_safe(const listint_t *head)
{
	unsigned int sz;
	long int df;

	if (head == NULL)
		exit(98);

	sz = 0;
	while (head != NULL)
	{
		df = head - head->next;
		printf("[%p] %d\n", (void *)head, head->n);
		sz++;
		if (df > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
	}
	return (sz);
}
