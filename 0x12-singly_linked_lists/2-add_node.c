#include "lists.h"

/**
 * add_node - check code.
 * @head : variable
 * @str : variable
 * Return: check declaration
 */

list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *node;

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

	if (*head != NULL)
		node->next = *head;

	*head = node;
	return (*head);
}
