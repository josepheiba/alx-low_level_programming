#include "lists.h"

/**
 * free_listint - check code.
 * @head : variable
 * Return: check declaration
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	if (head->next != NULL)
		free_listint(head->next);
	free(head);
}
