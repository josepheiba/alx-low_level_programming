#include "main.h"
#include <stdio.h>

int wc(char *s)
{
	int w, i;

	w = i = 0;
	while (w != '\0')
	{
		if (s[i] == ' ')
			i++;
		else
		{
			while (s[i] == ' ' && s[i] == '\0')
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

	w = wc(str);
	
	if (str == NULL || *str == '\0')
		return (NULL);

	s = malloc(w * sizeof(*s));
	if (s == NULL)
		return (NULL);

	j = 0;
	for (i = 0; i < w; i++)
	{
		while(str[j] != '\0')
		{
			if (str[j] == ' ')
				j++;
			else
			{
				k = 0;
				while (str[j] != '\0' || str[j] != ' ')
				{
					k++;
				}
				s[i] = malloc((k) * sizeof(char));
				for (l = 0; l < k; l++, j++)
				{
					s[i][l] = str[j];
				}
				continue;
			}
		}
	}
	return (s);
}
