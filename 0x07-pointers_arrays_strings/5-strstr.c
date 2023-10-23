#include "main.h"

/**
 * _strstr - check code
 * @haystack: input
 * @needle: input
 * Return: check function declaration
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0')
		{
			if (needle[j] == haystack[i])
			{
				j++;
				if (needle[j] == '\0')
				{
					return (haystack + i - j + 1);
				}
				i++;
				continue;
			}
			break;
		}
	i++;
	}
	return ('\0');
}
