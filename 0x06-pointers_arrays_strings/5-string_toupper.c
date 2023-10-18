#include "main.h"

/**
 * string_toupper - check code
 * @s: input
 * Return: check function declaration
 */

char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] < 123 && s[i] > 96)
			*(s + i) -= 32;
	i++;
	}
	return (s);
}
