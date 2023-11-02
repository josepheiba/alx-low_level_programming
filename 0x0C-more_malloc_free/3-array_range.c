#include "main.h"

/**
 * array_range - check the code.
 * @max : variable
 * @min : variable
 * Return: 0 1
 */

int *array_range(int min, int max)
{
	int i, l;
	int *ari;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	ari = malloc(l * sizeof(int));
	if (ari == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		ari[i] = min;
		min++;
	}
	return (ari);
}
