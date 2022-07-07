#include "main.h"

/**
 * print_diagonal - Function
 *
 * @n: Parameter
 *
 * Return: 0
 */

void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
