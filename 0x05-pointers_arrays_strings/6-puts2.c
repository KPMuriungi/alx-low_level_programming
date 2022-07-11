#include "main.h"

/**
 * puts2 - prints every other character of a string
 *
 * @str: String pointer
 *
 * Return: 0
 */

void puts2(char *str)
{
	int i, j;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j <= i; j++)
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
