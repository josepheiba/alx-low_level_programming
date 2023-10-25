#include "main.h"

/**
 * _pow_recursion - check code
 * @x: input
 * @y: input
 * Return: check function declaration
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
