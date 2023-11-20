#include "lists.h"

/**
 * free_listint - check code.
 * @h : variable
 * Return: check declaration
 */

void free_listint2(listint_t **head)
{
	if ((*head)->next != NULL)
		free_listint2(&((*head)->next));
	free(*head);
	*head = NULL;
}
