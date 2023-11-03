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
 * string_nconcat - check code
 * @s1: variable
 * @s2: variable
 * @n: variable
 * Return: check declaration
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int l1, l2, x, y;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	l1 = _strlen_recursion(s1);
	l2 = _strlen_recursion(s2);

	if (n > l2)
		n = l2;

	s = malloc(sizeof(char) * (l1 + n + 1));
	if (s == NULL)
		return (NULL);
	x = 0;
	while (*(s1 + x) != '\0')
	{
		*(s + x) = *(s1 + x);
		x++;
	}
	y = 0;
	while (*(s2 + y) != '\0' && y < n)
	{
		*(s + x + y) = *(s2 + y);
		y++;
	}
	*(s + x + y) = '\0';
	return (s);
}
