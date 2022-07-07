#include "main.h"

/**
 * print_numbers - Function
 *
 * Return: 0
 */

void print_numbers(void)
{
	char c;

	for (c = 48 ; c <= 57 ; c++)
	{
		while (c != 50 && c != 52)
		_putchar(c);
	}
	_putchar('\n');
}
