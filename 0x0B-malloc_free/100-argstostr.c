#include "main.h"
#include <stdio.h>

/**
 * argstostr - check the code.
 * @ac : variable
 * @av : variable
 * Return: 0 1
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, l;
	char *s;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	l = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			l++;
		}
		l++;
	}
	l++;

	s = malloc(l * sizeof(char));
	if (s == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		s[k] = '\n';
		k++;
	}
	s[k] = '\0';
	return (s);
}
