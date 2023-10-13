#include "main.h"

/**
 * print_number - check the code.
 * @n : value
 * Return: 0 1
 */

int oss(int e, int x)
{
	int q, E;

	E = e;
	for (q = 1; q < x; q++)
	{
		E = E * e;
	}
	return E;
}

void print_number(int n)
{
	int nl, k, m;
	unsigned int nm;

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
	for (m = k; m > 1; m--)
	{
		nm = n / (oss(10, m - 1));
		nm = nm % 10;
		_putchar('0' + nm);
	}
	_putchar('0' + (n % 10));
}
