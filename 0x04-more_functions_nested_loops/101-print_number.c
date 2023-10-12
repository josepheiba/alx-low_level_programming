#include "main.h"

/**
 * print_number - check the code.
 * @n : value
 * Return: 0 1
 */

void print_number(int n)
{
	int nl, nm, k, l, m;
	int num[100000];

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	nl = nm = n;
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
