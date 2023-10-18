#include "main.h"

/**
 * reverse_array - check code
 * @a: input
 * @n: input
 * Return: check function declaration
 */

void reverse_array(int *a, int n)
{
	int i, cup;

	i = 0;
	while (i < n / 2)
	{
		cup = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = cup;
	i++;
	}
}
