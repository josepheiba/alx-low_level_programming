#include "lists.h"

/**
 * free_listint2 - check code.
 * @head : variable
 * Return: check declaration
 */

void free_listint2(listint_t **head)
{
	if (head == NULL || *head == NULL)
		return;
	if ((*head)->next != NULL)
		free_listint2(&((*head)->next));
	free(*head);
	*head = NULL;
}
