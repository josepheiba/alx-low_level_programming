#include "main.h"

/**
 * leet - check code
 * @s: input
 * Return: check function declaration
 */

char *leet(char *s)
{
	int i, j;
	char de[] = "aAeEoOtTlL";
	char *code = "4433007711";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (de[j] != '\0')
		{
			if (s[i] == de[j])
			{
				s[i] = code[j];
				break;
			}
		j++;
		}
	i++;
	}
	return (s);
}
