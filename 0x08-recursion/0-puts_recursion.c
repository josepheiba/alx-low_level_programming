#include "main.h"

/**
 * _puts_recursion - check code
 * @s: input
 * Return: check function declaration
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*(s + 0));
	_puts_recursion(s + 1);
}
