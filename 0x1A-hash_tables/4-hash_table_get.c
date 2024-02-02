# include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - fun
 *
 * @ht: in
 * @key: in
 * Return: out
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *pointer;

	if (key == 0 || ht == 0 || ht->size == 0 || strlen(key) == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	pointer = ht->array[index];
	while (pointer != 0)
	{
		if (strcmp(key, pointer->key) == 0)
		{
			return (pointer->value);
		}
	}
	return (0);
}
