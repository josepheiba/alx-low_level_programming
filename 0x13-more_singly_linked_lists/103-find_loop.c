#include "lists.h"

/**
 * find_listint_loop - check code.
 * @head : variable
 * Return: check declaration
 */

listint_t *find_listint_loop(listint_t *head)
{
	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (head > head->next)
		{
			head = head->next;
		}
		else
		{
			return (head);
		}
	}
	return (NULL);
}
