#include "main.h"

/**
 * print_square - Function
 *
 * @size: Parameter
 *
 * Return: 0
 */

void print_square(int size)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
