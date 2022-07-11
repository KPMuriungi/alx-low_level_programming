#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: String pointer
 *
 * Return: 0
 */

void puts_half(char *str)
{
	int i, j, n;

	j = 0;

	while (*str != '\0')
	{
		str++;
		j++;
	}

	i = j;

	if (i % 2 == 0)
	{
		for (n = i / 2; n < i; n++)
		{
			_putchar(str[n]);
		}
	}
	else
	{
		for (n = (i + 1) / 2; n < i; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
