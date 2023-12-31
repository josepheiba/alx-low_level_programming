#include "main.h"
#include <stdio.h>

/**
 * _printnum - check the code.
 * @c : value
 * Return: 0 1
 */

void _printnum(int c)
{
	int nl, nm, k, l, m;
	int num[10];

	nl = nm = c;
	k = 0;
	do {
		k++;
		nl = (nl - (nl % 10)) / 10;
	} while (nl != 0);
	for (l = k - 1; l >= 0; l--)
	{
		num[l] = (nm % 10);
		nm = (nm - num[l]) / 10;
	}
	for (m = 0; m < k; m++)
	{
		_putchar('0' + num[m]);
	}
}

/**
 * more_numbers - check the code.
 *
 * Return: 0 1
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			_printnum(j);
		}
		putchar('\n');
	}
}
