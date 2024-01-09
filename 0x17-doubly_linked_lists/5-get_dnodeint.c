#include "lists.h"

/**
 * get_dnodeint_at_index - check the code
 * @head: input
 * @index: input
 * Return: check code
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *dptr;
	unsigned int i;

	i = 0;
	if (head == NULL)
		return (NULL);
	dptr = head;

	while (dptr != NULL)
	{
		if (i == index)
			return (dptr);
		dptr = dptr->next;
		i++;
	}
	return (NULL);
}
