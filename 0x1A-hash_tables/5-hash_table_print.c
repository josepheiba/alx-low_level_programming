# include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - fun
 *
 * @ht: in
 * Return: out
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, lastKey;
	hash_node_t *pointer;

	if (ht == NULL)
		return;

	lastKey = ht->size - 1;
	while (!ht->array[lastKey] && lastKey != 0)
		lastKey--;

	i = 0;
	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i] != 0)
		{
			pointer = ht->array[i];
			while (pointer != 0)
			{
				printf("'%s': ", pointer->key);
				printf("'%s'", pointer->value);
				if (i != lastKey)
				{
					printf(", ");
				}
				pointer = pointer->next;
			}
		}
		i++;
	}
	printf("}");
	printf("\n");
}
