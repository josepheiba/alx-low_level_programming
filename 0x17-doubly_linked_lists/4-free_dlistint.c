#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - check the code
 * @head: input
 * Return: check code
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;
	
	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
