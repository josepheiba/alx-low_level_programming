#include "main.h"

/**
 * _strpbrk - check code
 * @s: input
 * @accept: input
 * Return: check function declaration
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				return (s + i);
			}
		j++;
		}
	i++;
	}
	return ('\0');
}
