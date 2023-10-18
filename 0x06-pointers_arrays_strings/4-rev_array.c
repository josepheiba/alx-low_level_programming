#include "main.h"

/**
 * reverse_array - check code
 * @a: input
 * @n: input
 * Return: check function declaration
 */

void reverse_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n / 2)
	{
		a[i] = a[n - i - 1];
	i++;
	}
}
