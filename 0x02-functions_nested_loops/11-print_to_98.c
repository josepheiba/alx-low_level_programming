#include "main.h"

/**
 * print_to_98 - description
 * @n: number
 * Return: 1 0
*/

void print_to_98(int n)
{
	char x;

	if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%i, ", n);
		}
	}
	else if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%i, ", n);
		}
	}
	printf("%i\n", n);
}
