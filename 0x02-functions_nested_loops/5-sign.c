#include "main.h"

/**
 * print_sign - description
 * @c: character
 * Return: 1 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
	else
		return (0);
		_putchar('0');
}
