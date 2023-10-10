#include "main.h"

/**
 * jack_bauer - description
 * Return: 1 0
*/

void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			k = i % 10;
			l = j % 10;
			_putchar('0' + (i - k) / 10);
			_putchar('0' + k);
			_putchar(':');
			_putchar('0' + (j - l) / 10);
			_putchar('0' + l);
			_putchar('\n');
		}
		j = 0;
	}
}
