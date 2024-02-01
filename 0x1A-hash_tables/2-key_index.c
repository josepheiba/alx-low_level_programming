# include "hash_tables.h"

/**
 * key_index - fun
 *
 * @key: in
 * @size: in
 * Return: out
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int index;

	index = hash_djb2(key);
	return (index % size);
}
