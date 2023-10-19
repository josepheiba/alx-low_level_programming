#include "main.h"
#include <stdio.h>

/**
 * print_buffer - check code
 * @b: input
 * @size: input
 * Return: check function declaration
 */

void print_buffer(char *b, int size)
{
	int i, k, c, ten;

	i = 0x0;
	ten = 0xa;
	while (i < size)
	{
		printf("%08x: ", i);
		k = i;
		for (; i < k + ten; i++)
		{
			if (i < size)
				printf("%02x", b[i]);
			else
				printf("  ");
			if (i % 2)
				printf(" ");
		}
		i = k;
		for (; i < k + ten; i++)
		{
			c = b[i];
			if ((c < 32 || c > 132) && i < size)
				c = '.';
			printf("%c", c);
		}
		printf("\n");
	}
}
