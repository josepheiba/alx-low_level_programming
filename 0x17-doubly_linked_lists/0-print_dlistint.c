#include "lists.h"

/**
 * print_dlistint - check the code
 * @h: input
 * Return: check code
 */

size_t print_dlistint(const dlistint_t *h)
{
	int n;
	dlistint_t *head;

	n = 0;
	head = (dlistint_t *)h;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		n++;
	}
	return (n);
}
