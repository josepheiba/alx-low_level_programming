# include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_delete - fun
 *
 * @ht: in
 * Return: out
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *pointer, *pointer2;

	if (ht == NULL)
		return;

	i = 0;
	while (i < ht->size)
	{
		if (ht->array[i] != 0)
		{
			pointer = ht->array[i];
			while (pointer != 0)
			{
				pointer2 = pointer->next;
				free(pointer->key);
				free(pointer->value);
				free(pointer);
				pointer = pointer2;
			}
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
