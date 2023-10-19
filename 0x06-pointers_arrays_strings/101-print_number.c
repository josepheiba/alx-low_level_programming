#include "main.h"

/**
 * print_number - check code
 * @n: input
 * Return: check function declaration
 */

void print_number(int n)
{
	unsigned int number;
	int num;

	if (n < 0)
	{
		_putchar('-');
		number = -n;
	}
	else
		number = n;

	num = number % 10;
	if ((number - num) / 10 != 0)
		print_number((number - num) / 10);
	_putchar('0' + num);
}
