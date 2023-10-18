#include "main.h"

/**
 * rot13 - check code
 * @s: input
 * Return: check function declaration
 */

char *rot13(char *s)
{
	int i, j;
	char de[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *code = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

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
