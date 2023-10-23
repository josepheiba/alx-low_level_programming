#include "main.h"

/**
 * _strstr - check code
 * @haystack: input
 * @needle: input
 * Return: check function declaration
 */

char *_strstr(char *haystack, char *needle)
{
	char *HAY, *NEE;

	while (*haystack != '\0')
	{
		HAY = haystack;
		NEE = needle;
		while (*NEE != '\0' && *haystack == *NEE)
		{
			haystack++;
			NEE++;
		}
		if (*NEE == '\0')
			return (HAY);
		haystack++;
	}
	return ('\0');
}
