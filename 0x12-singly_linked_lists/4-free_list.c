#include "lists.h"

/**
 * free_list - check code.
 * @head : variable
 * Return: check declaration
 */

void free_list(list_t *head)
{
	list_t *shead;

	shead = head;
	if (shead->next != NULL)
		free_list(shead->next);
	free(shead->str);
	free(shead);
}
