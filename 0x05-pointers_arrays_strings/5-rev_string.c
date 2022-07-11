#include "main.h"

/**
 *  rev_string - prints a string in reverse followed by a new line
 *
 * @s: String pointer
 *
 * Return: 0
 */

void rev_string(char *s)
{
	int i, j;
	char tmp;

	i = 0;
	j = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j <= i; j++)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
		i--;
	}
}
