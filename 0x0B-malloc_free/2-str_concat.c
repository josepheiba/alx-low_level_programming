#include "main.h"
#include <stdio.h>

/**
 * str_concat - check the code.
 * @s1 : variable
 * @s2 : variable
 * Return: 0 1
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k;
	char *str;

	if (s1 == NULL && s2 == NULL)
		return (0);
	else if (s1 == NULL)
		return (s2);
	else if (s2 == NULL)
		return (s1);

	i = j = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}

	str = malloc(sizeof(char) * (i + j + 1));
	if (str == NULL)
		return (0);

	k = 0;
	while (k < i)
	{
		*(str + k) = s1[k];
	k++;
	}
	while (k - i <= j)
	{
		*(str + k) = s2[k - i];
	k++;
	}
	return (str);
}
