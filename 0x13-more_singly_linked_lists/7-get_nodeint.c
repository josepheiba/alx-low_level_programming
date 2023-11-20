#include "lists.h"

/**
 * get_nodeint_at_index - check code.
 * @head : variable
 * @index : variable
 * Return: check declaration
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *ptr;

	if (head == NULL)
		return (NULL);

	i = 0;
	ptr = head;
	while (i < index)
	{
		ptr = ptr->next;
		i++;
		if (ptr == NULL)
			return (NULL);
	}

	return (ptr);
}
