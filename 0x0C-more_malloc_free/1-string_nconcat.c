#include "main.h"

/**
 * _strlen_recursion - check code
 * @s: input
 * Return: check function declaration
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * malloc_checked - check code.
 * @b : variable
 * Return: check declaration
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int l1, l2, x;

	l1 = _strlen_recursion(s1);
	l2 = _strlen_recursion(s2);

	if n >= l2
		n = l2;

	char *s = malloc(sizeof(char) * (l1 + n));
	if (p == NULL)
		return(NULL);
	

	return (p);
}
