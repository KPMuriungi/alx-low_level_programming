#include "main.h"

/**
 * print_line - Function
 *
 * @n: Parameter
 *
 * Return: 0
 */

void print_line(int n)
{
	char c;

	for (c = 0 ; c < n ; c++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
			_putchar('\n');
		}
	}
}
