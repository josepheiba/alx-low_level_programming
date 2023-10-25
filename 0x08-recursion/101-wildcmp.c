#include "main.h"
#include <stdio.h>

/**
 * wildcmp - check code
 * @s1: input
 * @s2: input
 * Return: check function declaration
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*(s2 + 1) != '\0' && *s1 == '\0')
			return (0);
		else
			return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}
	else if (*s1 != *s2)
	{
		return (0);
	}
	else if (*s1 == '\0')
		return (1);
	else
		return (wildcmp(s1 + 1, s2 + 1));
}
