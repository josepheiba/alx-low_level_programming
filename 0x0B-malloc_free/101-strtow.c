#include "main.h"
#include <stdio.h>

/**
 * wc - check the code.
 * @s : variable
 * Return: 0 1
 */

int wc(char *s)
{
	int w, i;

	w = i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == ' ')
			i++;
		else
		{
			while (s[i] != ' ' && s[i] != '\0')
				i++;
			w++;
		}
	}
	return (w);
}

/**
 * strtow - check the code.
 * @str : variable
 * Return: 0 1
 */

char **strtow(char *str)
{
	int w, i, j, k, l;
	char **s;

	w = wc(str);
	if (str == NULL || *str == '\0' || w == 0)
		return (NULL);

	s = malloc((w + 1) * sizeof(char *));
	if (s == NULL)
		return (NULL);

	i = j = 0;
	while (i < w)
	{
		while (str[j] != '\0')
		{
			if (str[j] == ' ')
				j++;
			else
			{
				k = 0;
				while (str[j + k] != '\0' && str[j + k] != ' ')
				{
					k++;
				}
				s[i] = malloc((k + 1) * sizeof(char));
				for (l = 0; l < k; l++, j++)
				{
				s[i][l] = str[j];
				}
				s[i][l] = '\0';
				i++;
			}
		}
	}
	return (s);
}
