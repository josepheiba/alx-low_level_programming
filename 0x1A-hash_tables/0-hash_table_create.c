# include "hash_tables.h"

/**
 * hash_table_create - fun
 *
 * @size: in
 * Return: out
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	hash_node_t **array;
	unsigned int i;

	if (size <= 0)
		return (0);

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == 0)
		return (0);

	array = malloc(sizeof(hash_node_t *) * size);
	if (array == 0)
	{
		free(new_table);
		return (0);
	}

	for (i = 0; i < size; i++)
		array[i] = NULL;

	new_table->size = size;
	new_table->array = array;

	return (new_table);
}
