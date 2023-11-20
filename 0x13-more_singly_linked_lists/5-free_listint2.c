#include "lists.h"

/**
 * free_listint2 - check code.
 * @head : variable
 * Return: check declaration
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if ((*head) == NULL)
		return;

	while (*head != NULL)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
	*head = NULL;
}
