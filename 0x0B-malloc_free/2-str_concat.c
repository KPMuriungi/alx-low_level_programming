#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function
 *
 * @s1: Parameter
 *
 * @s2: Parameter
 *
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j, k;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	i = j = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	j++;

	str = malloc(sizeof(char) * (i + j));

	if (str == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < i; i++)
	{
		str[k] = s1[k];
	}
	for (k = 0; k < j; k++)
	{
		str[k + i] = s2[k];
	}
	return (str);
}
