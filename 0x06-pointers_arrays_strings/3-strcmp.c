#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: String pointer
 *
 * @s2: String pointer
 *
 * Return: dest
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			return (0);
		}
		else
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return 0;
}
