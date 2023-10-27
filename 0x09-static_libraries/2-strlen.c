#include "main.h"

/**
 * _strlen - check code
 * @s: input
 * Return: check function declaration
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
