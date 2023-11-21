#include "lists.h"

/**
 * delete_nodeint_at_index - check code.
 * @head : variable
 * @index : variable
 * Return: check declaration
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *ptr;
	listint_t *ptr2;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
		return (1);
	}

	i = 0;
	ptr = *head;
	while (i < index && ptr != NULL && ptr->next != NULL)
	{
		if (i != index - 1)
			ptr = ptr->next;
		else
		{
			ptr2 = ptr->next;
			ptr->next = (ptr->next)->next;
			free(ptr2);
			return (1);

		}
		i++;
	}
	return (-1);
}
