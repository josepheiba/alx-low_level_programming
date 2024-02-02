# include "hash_tables.h"

/**
 * hash_table_set - fun
 *
 * @ht: in
 * @key: in
 * @value: in
 * Return: out
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *pointer, *node;

	if (value == 0 || key == 0 || ht == 0 || ht->size == 0 || strlen(key) == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	pointer = ht->array[index];

	while(pointer != 0)
	{
		if (strcmp(pointer->key, key) == 0)
		{
			free(pointer->value);
			pointer->value = strdup(value);
			if (pointer->value == 0)
				return (0);
			return (1);
		}
		pointer = pointer->next;
	}

	node = malloc(sizeof(hash_node_t));
	if (node == 0)
		return (0);

	node->key = 0;
	node->value = 0;
	node->next = 0;

	node->key = strdup(key);
	if (node->key == 0)
	{
		free(node);
		return (0);
	}
	node->value = strdup(value);
	if (node->value == 0)
	{
		free(node->key);
		free(node);
		return (0);
	}

	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
