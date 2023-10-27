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

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	if (s[i] == c)
		return (s + i);
	return ('\0');
}
