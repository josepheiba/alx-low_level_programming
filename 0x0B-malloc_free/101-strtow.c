#include "main.h"
#include <stdio.h>

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
	return w;
}

/**
 * argstostr - check the code.
 * @ac : variable
 * @av : variable
 * Return: 0 1
 */

char **strtow(char *str)
{
	int w, i, j, k, l;
	char **s;

	if (str == NULL || *str == '\0')
		return (NULL);
	
	w = wc(str);

	s = malloc((w + 1) * sizeof(char *));
	if (s == NULL)
		return (NULL);

	i = j = 0;
	while (i < w)
	{
		while(str[j] != '\0')
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
