#include "main.h"

/**
 * more_numbers - Function
 *
 * Return: 0
 */

void more_numbers(void)
{
	int i, j;

	i = 0;

	while (i < 10)
	{
		for (j = 0 ; j < 15 ; j++)
		{
			if (j >= 10)
			{
				_putchar(j / 10 + '0')
			}
		_putchar(j % 10 + '0')
		}
		_putchar('\n');
		i++;
	}
}
