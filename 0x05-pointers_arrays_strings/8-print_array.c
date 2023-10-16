#include "main.h"
#include <stdio.h>

/**
 * print_array - check code
 * @a: input
 * @n: input
 * Return: check function declaration
 */

void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		printf("\n");
		return;
	}

	i = 0;
	while (i < n - 1)
	{
		printf("%i, ", a[i]);
	i++;
	}
	printf("%i", a[i]);
	printf("\n");
}
