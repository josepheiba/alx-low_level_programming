#include "main.h"

/**
 * _strlen_recursion - check code
 * @s: input
 * Return: check function declaration
 */

int _strlen_recursion(char *s)
{
	if (*(s + 1) == '\0')
		return (1);
	return (1 + _strlen_recursion(s + 1));
}
