#include "main.h"

/**
 * puts2 - check code
 * @str: input
 * Return: check function declaration
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0' && str[i + 1] != '\0')
	{
		_putchar(str[i]);
	i += 2;
	}
	_putchar('\n');
}
