#include "main.h"

/**
 * print_sign - description
 * @n: number
 * Return: 1 0
*/

int print_sign(int n)
{
	char pmz[] = "+-0";

	if (n > 0)
	{
		_putchar(pmz[0]);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(pmz[1]);
		return (-1);
	}
	else
	{
		_putchar(pmz[2]);
		return (0);
	}
}
