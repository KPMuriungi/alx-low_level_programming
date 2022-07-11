#include "main.h"

/**
 *  _puts - prints a string forllowed by a new line
 *
 * @str: String pointer
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
