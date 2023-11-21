#include "lists.h"

/**
 * find_listint_loop - check code.
 * @head : variable
 * Return: check declaration
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr, *cnc;

	ptr = cnc = head;

	if (head == NULL)
		return (NULL);

	ptr = head;
	while (ptr != NULL && cnc != NULL && cnc->next != NULL)
	{
		ptr = ptr->next;
		cnc = cnc->next->next;

		if (ptr == cnc)
		{
			while (head != cnc)
			{
				head = head->next;
				cnc = cnc->next;
			}
			return (head);
		}
	}
	return (NULL);
}
