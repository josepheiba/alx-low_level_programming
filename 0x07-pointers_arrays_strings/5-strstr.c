#include "main.h"

/**
 * _strstr - check code
 * @haystack: input
 * @needle: input
 * Return: check function declaration
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, oki;

	i = oki = 0;
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
					oki = 1;
					break;
				}
				continue;
			}
			break;
		}
		if (oki == 1)
		break;
	i++;
	}
	return (haystack + i - j + 1);
}
