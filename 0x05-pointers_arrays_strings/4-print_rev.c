#include "main.h"

/**
 *  print_rev - prints a string in reverse followed by a new line
 *
 * @s: String pointer
 *
 * Return: 0
 */

void _puts(char *str)
{
	int i;

	i = 0;

	while (str[i] != 0)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
