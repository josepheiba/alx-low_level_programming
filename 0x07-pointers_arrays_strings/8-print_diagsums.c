#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - check code
 * @a: input
 * @size: input
 * Return: check function declaration
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;

	sum1 = sum2 = 0;
	for (i = 0, j = size - 1; i < size * size &&
			j < size * size; i += size + 1, j += size - 1)
	{
		sum1 = sum1 + *(a + i);
		sum2 = sum2 + *(a + j);
	}
	printf("%i, ", sum1);
	printf("%i\n", sum2);
}
