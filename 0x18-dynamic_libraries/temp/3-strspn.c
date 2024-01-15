#include "main.h"

/**
 * _strspn - check code
 * @s: input
 * @accept: input
 * Return: check function declaration
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, ok;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		ok = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				ok = 1;
				break;
			}
			j++;
		}
		if (ok == 0)
			break;
		i++;
	}
	return (i);
}
