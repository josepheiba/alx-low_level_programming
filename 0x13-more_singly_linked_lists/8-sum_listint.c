#include "lists.h"

/**
 * sum_listint - check code.
 * @head : variable
 * Return: check declaration
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
