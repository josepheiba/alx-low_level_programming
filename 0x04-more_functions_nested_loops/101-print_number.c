#include "main.h"

/**
 * print_number - check the code.
 * @n : value
 * Return: 0 1
 */

void print_number(int n)
{
	unsigned int number = n;

	if (n < 0)
	{
		_putchar('-');
		number = -number;
	}
	if ((number / 10) > 0)
		print_number(number / 10);
	_putchar('0' + (number % 10));
}
