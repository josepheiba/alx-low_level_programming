#include "lists.h"

/**
 * dlistint_len - check the code
 * @h: input
 * Return: check code
 */

size_t dlistint_len(const dlistint_t *h)
{
	int n;
	dlistint_t *head;

	n = 0;
	head = (dlistint_t *)h;

	while (head != NULL)
	{
		head = head->next;
		n++;
	}
	return (n);
}
