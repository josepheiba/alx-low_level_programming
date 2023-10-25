#include "main.h"
#include <stdio.h>

int _strlen_recursion(char *s);
int bttr_plnd(char *s, char *t);

/**
 * is_palindrome - check code
 * @s: input
 * Return: check function declaration
 */

int is_palindrome(char *s)
{
	int l;

	l = _strlen_recursion(s);
	return (bttr_plnd(s, s + l - 1));
}

/**
 * bttr_plnd - check code
 * @s: input
 * @t: input
 * Return: check function declaration
 */

int bttr_plnd(char *s, char *t)
{
	if (*s != *t)
		return (0);
	else if (s >= t)
		return (1);
	else
		return (bttr_plnd(s + 1, t - 1));
}

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
