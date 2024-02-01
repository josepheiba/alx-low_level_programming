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
	hash_node_t *node;

	if (key == 0 || ht == 0 || ht->size == 0 || strlen(key) == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	node = malloc(sizeof(hash_node_t));
	if (node == 0)
		return (0);

	node->value = malloc(sizeof(char) * strlen(value));
	if (node->value == 0)
		return (0);

	node->key = (char *)key;
	strcpy(node->value, (char *)value);

	if (ht->array[index] == 0)
	{
		node->next = 0;
		ht->array[index] = node;
		return (1);
	}

	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
