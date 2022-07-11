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
	int i, j;

	i = 0;

	while (*str != '\0')
	{
		str++;
		i++;
	}

	if (i % 2 == 0)
	{
		n = i / 2; 
	}
	else
	{
		n = (i + 1) / 2;
	}

	for ( ; n < i; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
