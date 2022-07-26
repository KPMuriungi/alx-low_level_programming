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
	int i = 0;
	int j = 0;
	int k;

	if (s1 == NULL)
		i = 0;
	else
	{
		while (s1[i] != '\0')
		{
			i++;
		}
	}

	if (s2 == NULL)
	{
		j = 0;
	}
	else
	{
		while (s2[j] != '\0')
		{
			j++;
		}
		j++;
	}

	str = malloc(sizeof(char) * (i + j));

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
