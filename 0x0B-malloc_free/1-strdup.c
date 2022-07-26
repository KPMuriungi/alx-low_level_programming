#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function
 *
 * @str: Argument count
 *
 * Return: 0
 */

char *_strdup(char *str)
{
	char *str2;
	int i = 0;
	int j;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	str2 = malloc(sizeof(*str) * i);

	if (str2 == NULL)
	{
		return (NULL);
	}
	else
	{
		for (j = 0; j < i; j++)
		{
			str2[j] = str[j];
		}
	return (str2);
	}
}
