#include "main.h"

/**
 * print_binary - check code.
 * @n : variable
 * Return: check declaration
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else
		print_binary_no_zero(n);
}

/**
 * print_binary_no_zero - check code.
 * @n : variable
 * Return: check declaration
 */

void print_binary_no_zero(unsigned long int n)
{
	unsigned long int one, num;
	char c;

	one = 1;
	num = n & one;
	c = num + '0';
	n = n - num;
	n = n >> 1;
	if (n == 0 && num == 0)
		return;
	print_binary_no_zero(n);
	_putchar(c);
}
