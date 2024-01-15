#include "main.h"

/**
 * _puts - check code
 * @str: input
 * Return: check function declaration
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
	i++;
	}
	_putchar('\n');
}
