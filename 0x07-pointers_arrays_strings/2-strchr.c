#include "main.h"

/**
 * _strchr - check code
 * @s: input
 * @c: input
 * Return: check function declaration
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
