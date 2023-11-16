#include "lists.h"

/**
 * add_node_end - check code.
 * @head : variable
 * @str : variable
 * Return: check declaration
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	list_t *node;
	list_t *follow_ptr;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (*(str + i) != '\0')
		i++;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	node->len = i;
	node->next = NULL;

	if (*head == NULL)
		*head = node;
	else
	{
		follow_ptr = *head;
		while (follow_ptr->next != NULL)
			follow_ptr = follow_ptr->next;

		follow_ptr->next = node;
	}

	return (*head);
}
