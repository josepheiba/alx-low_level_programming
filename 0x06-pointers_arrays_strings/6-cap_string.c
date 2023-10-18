#include "main.h"

/**
 * cap_string - check code
 * @s: input
 * Return: check function declaration
 */

char *cap_string(char *s)
{
	int i;

	i = 0;
	if (s[i] < 123 && s[i] > 96)
		*(s + i) -= 32;
	while (s[i] != '\0')
	{
		if ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ','
				|| s[i] == ';' || s[i] == '.' || s[i] == '!'
				|| s[i] == '?' || s[i] == '"' || s[i] == '('
				|| s[i] == ')' || s[i] == '{' || s[i] == '}')
				&& (s[i + 1] < 123 && s[i + 1] > 96))
			*(s + i + 1) -= 32;
	i++;
	}
	return (s);
}
