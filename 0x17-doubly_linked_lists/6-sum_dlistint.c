#include "lists.h"
#include <stdlib.h>

/**
 * sum_dlistint - check the code
 * @head: input
 * Return: check code
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
		return (sum);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
