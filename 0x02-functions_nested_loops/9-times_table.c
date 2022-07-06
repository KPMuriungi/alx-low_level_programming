#include "main.h"

/**
 * times_table - Prints 9 times table
 *
 * Return: 0
 */

void times_table(void)
{
	int x, y, z;

	x = 0;

	while (x < 10)
	{
		y = 0;
		while (y < 10)
		{
			z = x * y;
			if (z == 0)
			{
				_putchar(z + '0');
			}
			else if (z < 10 && z != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(z + '0');
			}
			else if (z >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
			}
		y++;
		}
		_putchar('\n');
		x++;
	}
}
