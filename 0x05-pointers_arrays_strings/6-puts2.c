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
	for (i = 0; str[i] != '\0'; ++i)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
