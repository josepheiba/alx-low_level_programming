#include "main.h"

/**
 * puts_half - check code
 * @str: input
 * Return: check function declaration
 */

void puts_half(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	j = (i - (i % 2)) / 2;
	j--;
	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
